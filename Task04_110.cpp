#include <iostream>
#include <map>
#include <typeinfo> 
using namespace std;
int main(){
    //Task-01
    // std::string name;
    // std::getline(std::cin,name);
    // for (auto i=name.end();i!= name.begin()-1;i--){
    //     std::cout<<*i;
    // }

    // Task 02-
    // string name,stro;
    // int numbers;
    // getline(cin,name);
    // cin >> numbers;
    // for (int i =numbers;i>-1;i-- ){
    //     stro += name[i];
    // }
    // for(auto i=numbers+1;i<name.length();i++){
    //     stro+= name[i];

    // }
    // cout << stro;

    // Task -03-
    // string name;
    // int y,E=0;
    // char x;
    // getline(cin,name);
    // for (int i=0;i<name.length();i++){
    //     x = (char) name[i];
    //     if (( y = (int) x)>64 && (y = (int) x)<123){
    //         E++;
    //     }
    // }
    // if (E>0) cout<<"Not a binary";
    // else cout<<"Binary";

    // Task-04
    // string name,eer,eest,newstr;
    // getline(cin,name);
    // int size_s = name.length();
    // for (int i=size_s-2;i<size_s;i++){
    //     eer += name[i];
    // }
    // for (int i=size_s-3;i<size_s;i++){
    //     eest += name[i];
    // }
    // if (size_s <4 && eer == "er") cout<<name[0]<<"est";
    // else if (size_s <4) cout<<name;
    // else if (size_s>4 && eer=="er") {
    //     for (int i=0;i<size_s-2;i++){
    //     newstr += name[i];
    // }cout << newstr<<"est";
    // }else cout<<name;

    // Task -06-
//     string name;
//     char x;
//     int y;
//     getline(cin,name);
//     for (int i = 0;i<name.length();i++){
//         x = name[i];
//         y = x;
//         cout << x <<":"<<y<<endl;
       
//     }

//task -08
cout <<"Write a string: ";
string name;
getline(cin,name);
int x;
char c;
string newname;
for (int i = 0;i<name.length();i++){
    if (i%2!=0){
        x = name[i] -32;
        char c = x;
        newname += c;
    }
}
cout <<newname;
    
    
    return 0;
}