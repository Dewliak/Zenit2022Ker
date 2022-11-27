#include <bits/stdc++.h>

using namespace std;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define FOR(i,n) for(int i=0;i<n;++i)
#define sz size

typedef pair<int,pair<int,int>> pipii;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    vector<int> arr{};
    vector<int> new_arr{};
    int first{-1};
    for(int i =0;i<N;i++){
        int a;
        cin >> a;
        if(i==0){
            first = a;
        }
        else{
            new_arr.PB(a);
        }
        arr.PB(a);
    }
    new_arr.PB(first);

    if(arr == new_arr){
        cout << "Janka bude frflat";
    }else{
        for(int i =0; i < new_arr.size();i++){
            if(i != new_arr.size() -1){
                cout << new_arr[i] << " ";
            }
            else{
                cout << new_arr[i];
            }
        }

    }

    return 0;
}
