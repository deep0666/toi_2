#include<iostream>
using namespace std;

int main(){

    bool exit = false;
    int year[20000], year_count = 0;

    while(exit == false){
        int num;
        cin >> num;

        if(num == -1) exit = true;
        else{
            year[year_count] = num;
            year_count++;
        }
    }

    for(int i=0; i<year_count; i++){
        int q, w, s, next_q = 1, next_w = 1, next_s = 0;

        for(int j=0; j<year[i]; j++){

            q = next_q, w = next_w, s = next_s;

            //q
            next_w += 1;

            //w
            next_w += w;
            next_s += w;
            next_w -= w;

            //s
            next_w += s;
            next_s -= s;
        }
        cout << next_w << " " << next_q + next_w + next_s << endl;
    }

    return 0;
}
/*
1 3 -1
*/
