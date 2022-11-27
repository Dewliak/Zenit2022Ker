#include <bits/stdc++.h>

using namespace std;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define FOR(i,n) for(int i=0;i<n;++i)
#define sz size

typedef pair<int,pair<int,int>> pipii;

pair<double,double> find_two_roots(double N)
{
    double D= N * N - 4.0 * N;

    // Not possible
    if (D < 0) {

        return MP(-1,-1);
    }

    // find a and b
    double a = (N + sqrt(D)) / 2.0;
    double b = (N - sqrt(D)) / 2.0;

    return MP(a,b);
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double L,R;
    cin >> L >> R;
    L = L/100;
    R = R/100;
    cout << L << " " << R << endl;
    for(double i  = L; i <= R; i += 0.01){
        pair<double,double> roots;
        roots  =find_two_roots(i);
        cout << "1. ROOTS: " << roots.first << "  " << roots.second << endl;
        if(min(roots.first,roots.second) > 0){
            pair<double,double> r1 = find_two_roots(roots.first);
            cout << "2--1. ROOTS: " << r1.first << "  " << r1.second << endl;
            pair<double,double> r2 = find_two_roots(roots.second);
            cout << "2--2. ROOTS: " << r2.first << "  " << r2.second << endl;


            pair<double,double> r3 = find_two_roots(r1.first);
            cout << "2--3. ROOTS: " << r3.first << "  " << r3.second << endl;



            if(min(r1.first,r1.second) > 0 && min(r2.first,r2.second) > 0){
                cout << r1.first << " " << r1.second << " " << r2.first << " " << r2.second << endl;
            }
        }

    }

    return 0;
}
