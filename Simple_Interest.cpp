#include <iostream>
using namespace std;
double simpinter( double principle, double rate, int time){
    return (principle*rate*time)/100;
}
int main(){
    double principle,rate;
    int time;
    cout<<"Enter the principle"<<endl;
    cin>>principle;
    cout<<"Enter the rate"<<endl;
    cin>>rate;
    cout<<"Enter the time"<<endl;
    cin>>time;
    double final_interest = simpinter(principle,rate,time);
    cout<<"The Final interest is "<<final_interest<<endl;
    return 0;
    
}
