#include <iostream>
using namespace std;

string splitter(const string& name){
    string finalname;
    int j,h;
    for(int i=0;i<name.length();i++){
        if (name[i] == ',' || name[i] == ' ') j =i;
    }
    h = j+1;
    for (int i = 0;i<name.length();i++){
        if (i<j) finalname += name[i];
        if (h<name.length()) finalname+=name[h++];
    }
    return finalname;
}
int main(){
    string name;
    cout <<"Write a string seperted by (,/' '): ";
    getline(cin,name);
    cout<< "Modified String: "<<splitter(name);
    return 0;

}