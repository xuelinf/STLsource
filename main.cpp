//
// Created by xuelinf on 2015/12/3.
//

#include <iostream>
#include <vector>
#include "self_alloc.h"

using namespace std;

int main(){
    vector<int> ia= {0,1,2,3,4};

    // cout << ia <<endl;
    unsigned int i;

    vector<int, XLF::allocater<int> > iv{1,2,3,4,5};


    for (i = 0; i < iv.size(); i++){
        cout << iv[i] << " ";
    }
    cout <<endl;
    return 0;
}