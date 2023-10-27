#include <iostream>
using namespace std;

int main(){

    int n, arr[301]={0};
    cin >> n;

    int l, h, r, maxr = -2e9;
    for(int i=0; i<n; i++){
        cin >> l >> h >> r;

        for(int j=l; j<r; j++){
            if(arr[j] < h) arr[j] = h;
        }

        if(maxr < r) maxr = r;
    }

    for(int i=1; i<=maxr; i++){
        cout << arr[i] << " " ;
    }cout << endl;

    int high = 0;
    for(int i=1; i<=maxr; i++){
        if(high != arr[i]){
            cout << i << " " << arr[i] << " " ;
            high = arr[i];
        }
    }

    return 0;
}
/*
9
1 11 5
1 11 5
2 6 7
12 7 16
14 3 25
19 18 22
3 13 9
23 13 29
24 4 28

2
1 11 5
2 6 7
*/
