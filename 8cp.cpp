#include <iostream>
using namespace std;
int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends);
int main()
{
    string yt;
    int h, htw;
    cout << "Enter year type: ";
    cin >> yt;
    cout << "Enter number of holidays: ";
    cin >> h;
    cout << "Enter number of weekends: ";
    cin >> htw;
    cout << calculateVolleyballGames(yt,h,htw);
}
int calculateVolleyballGames(string yt, int h, int htw)
{
    int weeksinyear=48;
    int sofia, playonh ,playins ,total;
 if (yt=="normal")
 {
    sofia = weeksinyear - htw; //weekends in sofia
    playonh = h*0.6667;
    playins = sofia*0.75;
    total = playonh + playins + htw;
 }
 else if(yt=="leap")
 {
    weeksinyear = weeksinyear + (weeksinyear*0.15);
    sofia = weeksinyear - htw; //weekends in sofia
    playonh = h*0.6667;
    playins = sofia*0.75;
    total = playonh + playins+htw;
 }
 return total;
}