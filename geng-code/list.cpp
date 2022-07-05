#include<iostream>
#include <list> 
using namespace std;

int main(){
    list<uint64_t> ls;
    ls.push_back(1);
    ls.push_back(2);

    list<uint64_t>* p = &ls;
    // for(auto it = ls.begin();it != ls.end();it++){
    //     cout<<*it<<endl;
    // }
    for(auto it = p->begin();it != p->end();it++){
        cout<<*it<<endl;
    }


    return 0;
}