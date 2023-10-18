#include<iostream>
using namespace std;

int main(){

    int num, max_num = -2e9, seq[3];
    cin >> num;

    int a[num];
    for(int i=0; i<num; i++){
        cin >> a[i];

        if(i > 1 && a[i] + a[i-1] + a[i-2] > max_num){
            seq[0] = a[i-2];
            seq[1] = a[i-1];
            seq[2] = a[i];
            max_num = a[i] + a[i-1] + a[i-2];
        }
    }

    if(max_num > 0) cout << seq[0] << " " << seq[1] << " " << seq[2] << endl << max_num;
    else cout << "Empty sequence";

    return 0;
}
/*
8
4 -6 3 -2 6 -4 -6 6
12
4 -6 3 -2 6 -4 -6 6 -6 4 -2 9
3
-2 -3 -1
*/
