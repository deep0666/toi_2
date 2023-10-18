#include<iostream>
#include<string>
using namespace std;

int main(){

    int dice, result[6];
    cin >> dice;

    for(int i=0; i<dice; i++){
        string text;
        cin >> text;

        int t=1, f=2, l=3, r=4, b=5, d=6;

        for(int j=0; j<text.size(); j++){
            int tt=t, ff=f, ll=l, bb=b, rr=r, dd=d;

            if(text[j] == 'F'){
                t=bb, f=tt, l=ll, b=dd, r=rr, d=ff;
            }
            else if(text[j] == 'B'){
                t=ff, f=dd, l=ll, b=tt, r=rr, d=bb;
            }
            else if(text[j] == 'L'){
                t=rr, f=ff, l=tt, b=bb, r=dd, d=ll;
            }
            else if(text[j] == 'R'){
                t=ll, f=ff, l=dd, b=bb, r=tt, d=rr;
            }
            else if(text[j] == 'C'){
                t=tt, f=rr, l=ff, b=ll, r=bb, d=dd;
            }
            else if(text[j] == 'D'){
                t=tt, f=ll, l=bb, b=rr, r=ff, d=dd;
            }
        }
        result[i] = f;
    }

    for(int i=0; i<dice-1; i++) cout << result[i] << " ";
    cout << result[dice-1];

    return 0;
}
/*
3
D
FFBB
BBFFR
*/
