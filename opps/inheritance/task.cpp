#include<iostream>
#include<fstream>
#include<string>
#include<map>
using namespace std;

map<string,int> m;

class Addition{
    public :
    int sum (int a , int b){
        m["Addition"]++;
        return a + b;
    }
};

class Subtraction{
    public :
    int diff (int a , int b){
        m["Subtraction"]++;
        return a - b;
    }
};

class Multiplication{
    public :
    int pro (int a , int b){
        m["Multiplication"]++;
        return a * b;
    }
};

class Division{
    public :
    int div (int a , int b){
        m["Division"]++;
        return a / b;
    }
};


class Calculator : public Addition, public Subtraction, public Multiplication, public Division{
    public :
    int a,b;
};

int main(){

    fstream file;
    file.open("solution.txt");

    if(file.is_open()){
        Calculator c;
        
        file << "Addition : " << c.sum(7,5) << endl;
        file << "Addition 2 : " << c.sum(7,5) << endl;
        file << "Multiplication : " << c.pro(7,5) << endl;
        file << "Division : " << c.div(70,7) << endl;

        cout << "Data written successfully!" << endl;
    }

    file.close();

    cout << "Addition Count = " << m["Addition"] << endl;

    return 0;
}