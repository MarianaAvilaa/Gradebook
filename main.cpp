#include <iostream>
#include <string>
using namespace std;
//practice with constructors
class GradeBook{
public:

    GradeBook(string name){
        setCourseName(name);
    }
    void setCourseName(string name){
         courseName=name;
    }
    string getCourseName(){
        return courseName;
    }
    void displayMessage(){
        cout<<"Welcome to the the grade book \n"
        <<getCourseName()<<"!"<<endl;
    }
private:
    string courseName;
};

int main() {
    GradeBook gradeBook1("CS101 Introduction to C++ Programming");
    GradeBook gradeBook2("CS102 Data Structures in C++");
    cout<<"gradebook1 created for course:"<<gradeBook1.getCourseName();

    cout<<endl;
    cout<<"gradebook2 created for course:"<<gradeBook2.getCourseName();

    return 0;
}
