#include <iostream>
#include <string>
using namespace std;
string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute);
int main()
{
    int eh,em,sh,sm;
    cout << "Enter Exam starting time(hour): ";
    cin >> eh;
    cout << "Enter Exam starting time(minutes): ";
    cin >> em;
    cout << "Enter student hour of arrival: ";
    cin >> sh;
    cout << "Enter student minutes of arrival: ";
    cin >> sm;
    cout << checkStudentStatus(eh,em,sh,sm);
}
string checkStudentStatus(int eh, int em, int sh, int sm)
{
    string time;
    int extotal= eh*60+em; //total exam time
    int sttotal= sh*60+sm; //time at which student arrived 
    int diff= sttotal-extotal;
    if (diff>0)
    {
        time = "Late\n";
        if (diff<60)  //how many minutes late
        {
            time += to_string(diff) + " minutes after the start";
        }
        else if (diff>=60) // how many hours late
        {
            time += to_string(diff / 60) + ":" + to_string(diff % 60) + " hours after the start";
        }
    }
    else if (diff>= -30)
    {
        time = "On time\n";
        if (diff< 0) 
        {
            time += to_string(-diff) + " minutes before the start";
        }
    }
    else 
    {
        time = "Early\n";
        int early;
        early = -1*diff; //removing the -ve sign
        if (early >= 60) //how many hours early
        {
            time += to_string(early / 60) + ":" + to_string(early % 60) + " hours before the start";
        } 
        else  // how many minutes early
        {
            time += to_string(early) + " minutes before the start";
        }
    }
    return time;
}