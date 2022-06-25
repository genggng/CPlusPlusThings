#include<iostream>
using namespace std;

//抽象类
class A{
    public:
        virtual void show() = 0 ; //纯虚函数
};

//继承抽象类
class B:public A{
    public:
        int a;
        //重写show函数
        void show(){
            printf("hello world!");
        }
};

int main(){
    // A a; //报错，不能使用抽象类的对象
    A *a1; //ok,可以定义抽象类的指针
    // A *a2 = new A(); //报错，不能指向抽象类的对象。
    A *a3 = new B(); //重写show函数，B不再是抽象类。
    // 总结：抽象类不能被实例化，只有纯虚函数被重写，才能实例化。
}