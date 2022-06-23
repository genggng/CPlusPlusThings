#include<iostream>
using namespace std;

// union 对所有数据共享同一块内存，最终整体的内存取决于最大的数据对象。
union my_union{
    struct
    {
        int x; int y; int z;
    }u;
    int k;
}a;
int main(){
    a.u.x = 1;
    a.u.y = 2;
    a.u.z = 3;
    a.k = 0;  //将第一个int内存空间修改，因此a.u.x的值会变为a.k的值
    printf("%d %d %d",a.u.x,a.u.y,a.u.z);
    return 0;
}