#include <iostream>
#include <vector>

using namespace std;
int main (){
 vector <int> vec={1,2,3,4,5} ;
vector<int>::reverse_iterator citi;
for (citi=vec.rbegin(); citi!=vec.rend();citi++){
  cout<<*(citi)<<" ";
}
cout<<endl;
  return 0; 


  
}   