#include <iostream>
#include <list>
#include <vector>
using namespace std;
int main (){
 list <int> li ;

li.push_back(1);
li.push_back(2);
li.push_front(0);
li.push_front(-1);

for (int val : li){
  cout<< val <<" ";
}
cout <<endl;

  return 0;


  
}   