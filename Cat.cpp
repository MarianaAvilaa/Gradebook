#include <iostream>
#include <string>
using namespace std;

class Cat{
public:
    Cat(int initialAge){
        setItsAge(initialAge);
    }
    void setItsAge(int age){
        itsAge=age;
    }
    int getItsAge(){
        return itsAge;
    }
    void Meow(){
        cout<<"Meow.\n";
    }
private:
    int itsAge;
};

int main(){
    Cat Frisky(5);

    Frisky.Meow();

    cout<<"Frisky is a cat who is ";
    cout<<Frisky.getItsAge()<<"years old .\n";
    Frisky.Meow();
    Frisky.setItsAge(10);

    cout<<"Now Frisky is";
    cout<<Frisky.getItsAge()<<" years old.\n";
    return 0;

}


