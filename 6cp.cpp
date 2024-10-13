#include <iostream>
using namespace std;
string calculateHotelPrices(string month, int numberOfStays);
int main()
{
    string month;
    int stays;
    cout << "Enter month (May, June, August, September, October ):";
    cin >> month;
    cout << "Enter number of stays: ";
    cin >> stays;
    string cal = calculateHotelPrices(month ,stays);
    cout << cal;
}
string calculateHotelPrices(string month, int stays)
{
    float studio,st;
    float apartment,ap;
    if( month=="May" || "October")
    {   if(stays<=7)
        {
            studio=stays*50;
            apartment=stays*65;
        }
        if(stays>7 && stays<=14)
        {
            st=stays*50;
            studio=st-(st*0.05); //5% discount 
            apartment=stays*65;
        }
        if (stays>14)
        {
            st=stays*50;
            ap=65*stays;
            studio=st-(st*0.3); //30% discount 
            apartment=ap-(ap*0.1); //10% discount 
        }
    }
    if (month=="June" || "September")
    {
        if(stays<=14)
        {
            studio=stays*75.20;
            apartment= stays*68.70;
        }
        if(stays>14)
        {
            st=stays*75.20;
            ap=stays*68.70;
            studio=st-(st*0.2); //20% discount 
            apartment=ap-(ap*0.1); // 10% discount
        }
    }
    if (month=="July" || "August")
    {
        studio=stays*76;
        if(stays>14)
        {
            ap=stays*77;
            apartment=ap-(ap*0.1); //10% discount
        }
        else
        {
            apartment= stays*77;
        }
    }
    string result;
    result += "Apartment: "+to_string(apartment)+"$"+"\n";
    result += "Studio: "+to_string(studio)+"$"+"\n";
    return result;
}
