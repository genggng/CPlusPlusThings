#include<iostream>
#include<vector>

using namespace std;

void useatodo(vector<int> &a)
{
        a[0] = 9;
}
int main(){

    vector<int> a;
    a.push_back(1);  //a[0] =1

    useatodo(a);

    cout<<a[0];   // a[0] = 9

    return 0;

}