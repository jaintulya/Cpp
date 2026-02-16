#include <iostream>
#include <list>
#include <vector>
#include <deque>
using namespace std;
int main (){
 deque <int> de ;

de.push_back(1);
de.push_back(2);
de.push_front(0);
de.push_front(-1);

for (int val : de){
  cout<< val <<" ";
}
cout <<endl;

  return 0;


  
}   