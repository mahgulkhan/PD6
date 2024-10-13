#include <iostream>
using namespace std;
float calculateFruitPrice(string fruit, string dayofWeek, double quantity);
int main()
{
    string fruit, dayofweek;
    double quantity;
    cout << "Enter fruit name: ";
    cin >> fruit;
    cout << "Enter day of the week: ";
    cin >> dayofweek;
    cout << "Enter quantity: ";
    cin >> quantity;
    float cal = calculateFruitPrice(fruit,dayofweek,quantity);
    cout << cal;
}
float calculateFruitPrice(string fruit, string dayofweek, double quantity)
{
    float price;
    if (dayofweek=="Sunday" || "Saturday") // on weekends the prices are high
    {
        if (fruit=="banana")
        { price=quantity*2.70;}
        if (fruit=="apple")
        { price=quantity*1.25;}
        if (fruit=="orange")
        { price=quantity*0.90;}
        if (fruit=="grapefruit")
        { price=quantity*1.60;}
        if (fruit=="kiwi")
        { price=quantity*3.00;}
        if (fruit=="pineapple")
        { price=quantity*5.60;}
        if (fruit=="grapes")
        { price=quantity*4.20;}
    }
    else // during weekdays the prices are low
    { 
        if (fruit=="banana")
        { price=quantity*2.50;}
        if (fruit=="apple")
        { price=quantity*1.20;}
        if (fruit=="orange")
        { price=quantity*0.85;}
        if (fruit=="grapefruit")
        { price=quantity*1.45;}
        if (fruit=="kiwi")
        { price=quantity*2.70;}
        if (fruit=="pineapple")
        { price=quantity*5.50;}
        if (fruit=="grapes")
        { price=quantity*4.20;}
    }
    return price;
}