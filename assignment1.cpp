#include<iostream>
using namespace std;
class Calculator{
    public:
    void add(int a,int b)
    {
        cout<<a+b<<endl;

    }
    void add(double a,double b)
    {
        cout<<a+b<<endl;
        
    }
    void add(int a,int b,int c)
    {
        cout<<a+b+c<<endl;

    }
    
};
int main(){
    Calculator c1;
    c1.add(5,5);
    c1.add(5.5,5.5);
    c1.add(5,5,5);
    return 0;
}
