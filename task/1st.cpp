#include <iostream>
#include <vector>


using namespace std;
int main(){
    vector<int> v;
    int val;
    
    for(int i = 0 ; i < 5 ; i++){
        cout<<"Enter a value :";
        cin>>val;
        v.push_back(val);
    }
    int idx;
    cout<<"enter index:"<<endl;
    cin>>idx;
    cout << "The actuall element in the given indicies is :  " << v.at(idx) << endl;
    
    idx = 0;
    
    cout<<"removing index:";
    cin>>idx;
    
    v.erase(v.begin()+idx);
    
    for(int i : v){
        cout<<i<<endl;
    }
    
    return 0;
}