#include<iostream>
#include<string>
using namespace std;
class account{
    int acn;
    string name;
    int age;
    int balance;
    int active;
public:
    void setdata(int a,string n,int g,int b){
        acn=a;
        name=n;
        age=g;
        balance=b;
        active=1;
    }
    int getacn(){return acn;}
    int getactive(){return active;}
    int setactive(int x){active=x;}
    void deposit(int amt){balance+=amt;}
    int getbalance(){return balance;}
    void withdraw(int amt){balance-=amt;}
void show(){
    cout<<"acc no"<<acn<<endl;
    cout<<"name"<<name<<endl;
    cout<<"age"<<age<<endl;
    cout<<"balance"<<balance<<endl;
}
};
int menu(){
    int option;
    cout<<"**my account**"<<endl;
    cout<<"1.new account"<<endl;
    cout<<"2.delete account"<<endl;
    cout<<"3.deposit"<<endl;
    cout<<"4.withdrawal"<<endl;
    cout<<"5.show balance"<<endl;
    cout<<"6.exit"<<endl;
    cout<<"enter your option:";
    cin>>option;
    return option;
}
int main(){
    int op;
    int acn,amt;
    account ax[1000];
    int n=0;
    for(;;){
        op=menu();
        if(op==6) break;
        switch(op){
            case 1:{
                int acn,age,bal;
                string name;
                cout<<"enter acc no:";
                cin>>acn;
                cout<<"enter name";
                cin>>name;
                cout<<"enter age";
                cin>>age;
                cout<<"enter balance";
                cin>>bal;
                ax[n].setdata(acn,name,age,bal);
                n++;
                cout<<"account created";
                break;

            }
            case 2:int acn;
            cout<<"enter acc no:";
            cin>>acn;
            for(int i=0;i<n;i++){
                if(ax[i].getactive()==1 && ax[i].getacn()==acn){
                    ax[i].setactive(0);
                    cout<<"account deleted"<<endl;
                    break;
                }
                else cout<<"account not found";
            }
            case 3:cout<<"enter acc no:";
                    cin>>amt;
                    for(int i=0;i<n;i++){
                    if(ax[i].getactive()==1 && ax[i].getacn()==acn){
                        cout<<"enter ammount";
                        cin>>amt;
                        ax[i].deposit(amt);
                        cout<<"deposited"<<endl; 
                    break;}
                else cout<<"account not found"; }
                case 4:
}
