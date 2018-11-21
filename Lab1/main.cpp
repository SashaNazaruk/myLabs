#include <iostream>
#include <string>

using namespace std;

class student
{
    string name;
    int IDcard;
public:
    student(){
        name="Sasha";
        IDcard = 123;
    }
    student(string _name, int _IDcard){
        name = _name;
        IDcard = _IDcard;
    }
    string getName(){
        return name;
    }
    string get

};

int main()
{
    student me;

    cout << me.getName() << "   " << me.IDcard << endl;
    student A("Ivan" , 737);
    cout << A.getName() << "   " << A.IDcard << endl;
    return 0;
}
