#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    srand(time(0));
    int num,a;
        num=rand()%100;
   // cout<<num<<endl;
   cout<<"Enter a value in b/t(0 to 100) :";
   cin>>a;
   while(num!=a){
    if(a<num){
        cout<<"min number "<<endl;
    }
    else{
        cout<<"max number "<<endl;
    }
    cout<<"try another chance :";
    cin>>a;
   }
   if(num==a){
    cout<<""<<endl;
    cout<<"matched"<<endl;
   }

    return 0;
}

