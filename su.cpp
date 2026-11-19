#include<iostream>
using namespace std;
class A{
    public:
    A(int x){
        cout<<"empty constructure of A"<<endl;
    }
    class B:virtual public A{
        public:
        B(){
            cout<<"empty constructure of B"<<endl;

        }

    }
    class C:public A{
        public:
        C(intx):A(x);
        cout<<"empty constructure of C"<<endl;
        ax=2;
    }
    void show(){
        cout<<"inside show() of C"<<endl;
    }
    class D:public C,public B{
        public:
        D(){
            cout<<"empty constructure of D"
        }
        void Display()
    }
};
int main(){
    D cx(10);
    cx.Display();
    return 0:
}