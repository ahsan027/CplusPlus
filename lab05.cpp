#include <iostream>
#include <list>
using namespace std;
int main(){
    list<int> numbers = {1,2,3,4,5,6};
    list <int> newnumbers = {};
    for(const auto i:numbers){
        newnumbers.push_back(i*i);
    }
    list <int> :: iterator it;
    cout << "[";
    for (it= newnumbers.begin();it!= newnumbers.end();it++){
        cout<< *it<<" ";
    }
    cout << "]";
}