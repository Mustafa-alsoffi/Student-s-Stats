
#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
using namespace std;


class StudentMarks {
    public:
    string name;
    double quiz;
    double assignment;
    double test;
    double project;
     double getMarks(double q, double a, double t, double p){
        quiz = q;
        assignment = a;
        test = t;
        project = p;
        return 0;
    }
     double studentMark() {
        return (quiz + assignment + test + project);
    }


};
StudentMarks stu1, stu2, stu3, stu4, stu5, stu6, stu7, stu8, stu9, stu10;

int main() 
{
    arrStu[0].name = "JAAFAR"; arrStu[0].getMarks(2.7, 8.5, 28.0, 15.6);
    arrStu[1].name = "IBARAHIM"; arrStu[1].getMarks(2.7, 8.6, 40.0, 15.6);
    arrStu[2].name = "FATIN FAZIRA"; arrStu[2].getMarks(3.3, 8.3, 29.5, 15.6);
    arrStu[3].name = "MUSTAPHA"; arrStu[3].getMarks(3.5, 8.3, 49.0, 15.6);
    arrStu[4].name = "MUHYUDDIN ARSHAD"; arrStu[4].getMarks(3.0, 8.5, 38.0, 15.0);
    arrStu[5].name = "NABILA"; arrStu[5].getMarks(3.5, 8.1, 39.5, 15.0);
    arrStu[6].name = "FARHAN"; arrStu[6].getMarks(2.3, 7.5, 58.0, 15.0);
    arrStu[7].name = "FAIZ FARHAN"; arrStu[7].getMarks(2.0, 8.4, 33.0, 15.0);
    arrStu[8].name = "RAZALI"; arrStu[8].getMarks(3.3, 7.5, 39.5, 17.5);
    arrStu[9].name = "ZAINUDDIN"; arrStu[9].getMarks(3.3, 8.1, 59.0, 17.5);


StudentMarks arrStu[10] = { stu1, stu2, stu3, stu4, stu5, stu6, stu7, stu8, stu9, stu10};

    cout << setw(10) << "Name" << setw(15) << "Total marks" << endl;
    
    return 0;
    };