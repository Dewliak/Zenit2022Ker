#include <bits/stdc++.h>

using namespace std;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define FOR(i,n) for(int i=0;i<n;++i)
#define sz size

typedef pair<int,pair<int,int>> pipii;

int r,s;
vector<vector<char>> grid{};

int dig_down(int start){
    int counter = 0;
    //cout << "################### DIG DOWN  ----- " << start << " ################" << endl;
    for(int i =0; i < r;i++){
        //cout << "STANDING ON:" << i << " " << start << endl;
        if(grid[i][start] == '#'){
            counter++;
            //cout << "FOUND VERTICALLY ON: " << i << " " << start << " -: " << endl;
            for(int q = 1; q <= start;q++){
                //cout << "ON: " << i << " " << start-q << " -: " << endl;
                if(start - q < 0){
                    break;
                }
                if(grid[i][start-q] == '#'){
                    counter++;
                    //cout << "found on: " <<  i << " " << start-q << endl;
                }
                else{
                    break;
                }

            }
            for(int q = 1; q < s;q++){
                //cout << "ON: " << i << " " << start+q << " -: " << endl;
                if(start + q >= s){
                    break;
                }
                if(grid[i][start+q] == '#'){
                    counter++;
                    //cout << "found on: " << i << " " << start+q << endl;
                }
                else{
                    break;
                }
            }
        }
    }

    //cout << "COLLECTED: " << counter << endl;
    return counter;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    cin >> r >> s;



    for(int i =0;i<r;i++){
        vector<char> row{};
        string s;
        cin >> s;
        for(char p:s){
            row.PB(p);
        }
        grid.PB(row);
    }

    for(int i =0;i<s;i++){

        cout << dig_down(i);
        if(i != s-1){
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
