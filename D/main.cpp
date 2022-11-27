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

    int SUM_AVG{0};



    int N,AVG;
    cin >> N >> AVG;

    priority_queue<int> pq;

    for(int i=0;i<N;i++){
        int bez,so;
        string like;

        cin >> bez >> so >> like;

        if(like == "nie"){

            SUM_AVG += max(bez,so);
        }
        else{
            if(bez > so){
                SUM_AVG += bez;
            }
            else{
                SUM_AVG += bez;
                pq.push(so-bez);
            }
        }
    }
    int counter{0};
    while(!pq.empty()){
        if((SUM_AVG / N) >= AVG ){
            break;
        }
        SUM_AVG += pq.top();
        pq.pop();
        counter++;
    }

    if((SUM_AVG / N) < AVG ){
        cout << "neda sa" << endl;
    }
    else{
        cout << counter << endl;
    }



    return 0;
}
