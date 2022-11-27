#include <bits/stdc++.h>

using namespace std;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define FOR(i,n) for(int i=0;i<n;++i)
#define sz size

typedef pair<int,pair<int,int>> pipii;


bool compareFunction (std::string a, std::string b) {return a<b;}


int main ()
{
    int N;
    cin >> N;

    map<int,vector<string>> m;

    for(int i =0;i<N;i++){
        int val;
        string name;

        cin >> name >> val;

        m[val].PB(name);
    }

    map<int,vector<string>>::reverse_iterator itr;

    int counter = 1;

    for(itr = m.rbegin(); itr != m.rend(); itr++){
        vector<string> s;
        s = itr->second;
        int place = counter;
        std::sort(s.begin(),s.end(),compareFunction);
        for(auto name: s){
            cout << place << ". " << name << " " << itr->first <<endl;
            counter++;
        }
    }

  return 0;
}
