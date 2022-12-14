#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    char list[10][20];
    char name[20];
    int p = 0;

    for(int i=0;i<10;i++){
        for(int j=0;j<20;j++) {
            name[j] = ' ';
            list[i][j] = ' ';
        }
    }
    for(int i=0;i<10;i++){
        cin >> list[i];
    }

    cin >> name;
    if(comp(list,p,name)){
        cout << p;
    }else{
        cout << "non presente";
    }
    return 0;
}
