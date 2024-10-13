#include <iostream>
using namespace std;
string activity(string temp, string humid);
int main()
{
    string t,h;
    cout << "Enter temperature (warm,cold):";
    cin >> t;
    cout << "Enter humidity (dry or humid):";
    cin >> h;
    string act = activity(t,h);
    cout << "Recommended activity: "<< activity(t,h); //according to temperature and humidity
}
string activity(string t, string h)
{
    string recact;
    if (t=="warm") //when temperature is warm
    {
        if (h=="dry")
        { recact=" Play tennis";}
        else if (h=="humid")
        { recact="Swim";}
    }
    if (t=="cold") // when temperature is cold
    {
        if (h=="dry")
        { recact=" Play basketball";}
        else if (h=="humid")
        { recact=" Watch tv";}
    }
    return recact;
}