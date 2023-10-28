#include <iostream>
using namespace std;

int m, n, k, result[100][2]={0}, z;
char arr[200][200];

void findword1(string text, int sizetext, int x, int y, int sx, int sy, int counttext=1){

    //cout << x << " " << y << " " << text[counttext] << endl;

    if(counttext == sizetext){
        result[z][0] = sx;
        result[z][1] = sy;

        return;
    }
    else if(arr[x][y+1] == text[counttext]){
        findword1(text, sizetext, x, ++y, sx, sy, ++counttext);
    }
    else return;

}

void findword2(string text, int sizetext, int x, int y, int sx, int sy, int counttext=1){

    //cout << x << " " << y << " " << text[counttext] << endl;

    if(counttext == sizetext){
        result[z][0] = sx;
        result[z][1] = sy;

        return;
    }
    else if(arr[x+1][y+1] == text[counttext]){
        findword2(text, sizetext, ++x, ++y, sx, sy, ++counttext);
    }
    else return;

}

void findword3(string text, int sizetext, int x, int y, int sx, int sy, int counttext=1){

    //cout << x << " " << y << " " << text[counttext] << endl;

    if(counttext == sizetext){
        result[z][0] = sx;
        result[z][1] = sy;

        return;
    }
    else if(arr[x+1][y] == text[counttext]){
        findword3(text, sizetext, ++x, y, sx, sy, ++counttext);
    }
    else return;

}

void findword4(string text, int sizetext, int x, int y, int sx, int sy, int counttext=1){

    //cout << x << " " << y << " " << text[counttext-1] << endl;

    if(counttext == sizetext){
        result[z][0] = sx;
        result[z][1] = sy;

        return;
    }
    else if(arr[x][y-1] == text[counttext]){
        findword4(text, sizetext, x, --y, sx, sy, ++counttext);
    }
    else return;

}

void findword5(string text, int sizetext, int x, int y, int sx, int sy, int counttext=1){

    //cout << x << " " << y << " " << text[counttext-1] << endl;

    if(counttext == sizetext){
        result[z][0] = sx;
        result[z][1] = sy;

        return;
    }
    else if(arr[x-1][y-1] == text[counttext]){
        findword5(text, sizetext, --x, --y, sx, sy, ++counttext);
    }
    else return;

}

void findword6(string text, int sizetext, int x, int y, int sx, int sy, int counttext=1){

    //cout << x << " " << y << " " << text[counttext-1] << endl;

    if(counttext == sizetext){
        result[z][0] = sx;
        result[z][1] = sy;

        return;
    }
    else if(arr[x-1][y] == text[counttext]){
        findword6(text, sizetext, --x, y, sx, sy, ++counttext);
    }
    else return;

}

void findtext(string text){

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j] == text[0]+32 || arr[i][j] == text[0]){

                findword1(text, text.size(), i, j, i, j);
                findword2(text, text.size(), i, j, i, j);
                findword3(text, text.size(), i, j, i, j);
                findword4(text, text.size(), i, j, i, j);
                findword5(text, text.size(), i, j, i, j);
                findword6(text, text.size(), i, j, i, j);

            }
        }
    }
}

int main(){

    cin >> m >> n;

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
            if(arr[i][j] <= 'Z') arr[i][j] += 32;
        }
    }

//    for(int i=0; i<m; i++){
//        for(int j=0; j<n; j++){
//            cout << arr[i][j];
//        }cout << endl;
//    }

    cin >> k;

    for(z=0; z<k; z++){
        string text;
        cin >> text;

        findtext(text);
    }

    for(int i=0; i<k; i++){
        cout << result[i][0] << " " << result[i][1] << endl;
    }

}
/*
8 11
ascDEFGhigg
hTqkComPutk
FayUcompuTm
FcsierMqsrc
bkoArUePeyv
Klcbqwekumk
sreTNIophtb
yUiqlxcnBje
4
Compute
Queue
stack
Pointer
*/
