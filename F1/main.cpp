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



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    cin >> r >> s;

    vector<int> sol(s,0);

    for(int i =0;i<r;i++){
        vector<char> row{};
        string s;
        cin >> s;
        int cnt{0};
        int index{0};
        int ender{s.size()-1};
        //cout << s.size()-1 << endl;
        for(char p:s){
            if(p == '#'){
                cnt++;

                if(index == ender){
                    //cout << "LAST #####" << endl;
                    for(int e =0; e < cnt; e++){
                        sol[index-e] += cnt;
                    }
                }

            }
            else{
                //cout << "VEIN SIZE:" << cnt << endl;
                if(index != 0){
                    for(int e =1; e <= cnt; e++){
                        sol[index-e] += cnt;
                    }
                }
                cnt = 0;
            }
            row.PB(p);
            index++;
        }
        grid.PB(row);
    }

    for(int i =0;i<s;i++){
        cout << sol[i];
        if(i != s-1){
            cout << " ";
        }

    }
    cout << endl;


    return 0;
}
