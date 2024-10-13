#include <iostream>
using namespace std;
float calculateAverage(float marksEng, float marksMaths, float marksChem, float marksSoSci, float marksBio);
string calculateGrade(float average);
int main ()
{
    string name;
    float me,mm,mc,ms,mb,average;
    cout << "Enter student name:";
    cin >> name;
    cout << "Enter marks for English: ";
    cin >> me;
    cout << "Enter marks for Maths : ";
    cin >> mm;
    cout << "Enter marks for Chemistry : ";
    cin >> mc;
    cout << "Enter marks for Social Science: ";
    cin >> ms;
    cout << "Enter marks for Biology: ";
    cin >> mb;
    cout << "Student Name: "<<name<<endl;
    average = calculateAverage(me,mm,mc,ms,mb);
    cout << "Percentage: " << average << "%"<< endl;
    cout << "Grade: " << calculateGrade(average);
}
float calculateAverage(float me, float mm, float mc, float ms, float mb)
{
    float avg;
    avg = (me+mm+mc+ms+mb)/5; //average of all subjects
    return avg;
}
string calculateGrade(float average)
{
    string grade;
    grade ="F";
    if (average>90 && average<=100)
    { grade="A+";}
    else if (average>80 && average<=90)
    { grade="A";}
    else if (average>70 && average<=80)
    { grade="B+";}
    else if (average>60 && average<=70)
    { grade="B";}
    else if (average>50 && average<=60)
    { grade="C";}
    else if (average>40 && average<=50)
    { grade="D";}
    return grade;
}