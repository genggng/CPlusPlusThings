#include<iostream>
using namespace std;

double power(double x, int n) //求x的n次方
{
    printf("power test\n");
    double ans = 1.0;
    while(n>1){
        if(n&1){
            ans = ans*x;
        }
        x = x*x;
        n = n/2;
    }
    return x*ans;
}

void printwek() //打印周一到周五，练习枚举类型
{
    printf("print_wek test\n");
    enum weeks{sun,mon,tue,wed,thu,fri,sar};
    weeks s = mon;
    cout<<s+sar<<endl;
}

void print_struct() //测试结构体元素大小
{
    printf("print_struce test\n");
    struct  student
    {
        int num;
        char name[20];
        char gender;
    };
    student s = {10,"geng",'M'};
    student * p = &s;
    cout<<sizeof(s)<<endl;
    cout<<s.name<<endl;
    cout<<sizeof(s.gender)<<endl;
    cout<<p->num<<endl;
}

int fibo(int n){
    if(n<2){return n;}
    else{return fibo(n-1)+fibo(n-2);}
}

void count_call(){
    static int num = 0;
    num += 1;
    cout<<"call:"<<num<<endl;
    
}





int main(){
    cout<<"############################"<<endl;
    print_struct();
    cout<<"############################"<<endl;
    cout<<fibo(9)<<endl;
    cout<<"############################"<<endl;
    printwek();
    cout<<"############################"<<endl;
    cout<<power(2.5,10)<<endl;
    cout<<"############################"<<endl;
    for(int i=0;i<5;i++){
        count_call();
    }
    return 0;
}