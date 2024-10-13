#include <iostream>
using namespace std;
float phoneser(char c, char toc,int min );
int main()
{
    char c,toc;
    int min,service;
    cout << "Enter service code(R/r for regular, P/p for premium): ";
    cin >> c;
    cout << "Enter time of call(D/d for day, N/n for night): ";
    cin >> toc;
    cout << "Enter the number of minutes used: ";
    cin >> min;
    service= phoneser(c,toc,min);
    cout << "Amount Due: $" << service ;
}
float phoneser(char c,char toc,int min)
{
    float amount;
    if (c=='P' || c=='p') // premium service 
    {   
        cout << "Service Type: Premium"<<endl;
        cout << "Total Minutes used: "<< min<<endl;
     if (toc=='D'|| toc=='d') // during the day
     { 
        if (min>75)
        { amount= min*(0.10);}
        else 
        { amount= 0.0;}
     }
     if (toc=='N' || toc=='n') // at night 
     {
        if (min>100)
        { amount= min*(0.05);}
        else 
        { amount= 0.0;}
     }
    }
    if (c=='R' || c=='r') // regular service
    {
        cout << "Service Type: Regular"<<endl;
        cout << "Total Minutes used: "<< min<<endl;  
        if (min>50)
        { amount= min*(0.20);}
        else
        { amount= 0.0;}
    }
    return amount;

}

