#include <bits/stdc++.h>

using namespace std;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define FOR(i,n) for(int i=0;i<n;++i)
#define sz size

typedef pair<int,pair<int,int>> pipii;

void display(vector<int> &arr){
    cout << "   " << (arr[0] == 1 ? ("X") : ("O")) << "   " << endl;
    cout << "  " << (arr[1] == 1 ? ("X") : ("O")) << " " << (arr[2] == 1 ? ("X") : ("O")) << "  " << endl;
    cout << " " << (arr[3] == 1 ? ("X") : ("O")) << " " << (arr[4] == 1 ? ("X") : ("O")) << " " << (arr[5] == 1 ? ("X") : ("O")) << " " << endl;
    cout << (arr[6] == 1 ? ("X") : ("O")) << " " << (arr[7] == 1 ? ("X") : ("O")) << " " << (arr[8] == 1 ? ("X") : ("O")) << " " << (arr[9] == 1 ? ("X") : ("O")) << endl;
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    vector<int> arr(10-N,0);
    for(int i =0;i <N;i++){
        arr.PB(1);
    }
    do {
    display(arr);
  } while (next_permutation(arr.begin(), arr.end()));

    return 0;
}
