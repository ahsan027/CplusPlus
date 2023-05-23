#include<iostream>

using namespace std;

string encoder(string name){
    string cipher;
    int x;
    char c;
    for (const auto i:name ){
        x = i;
        if ((x>64 && x<91)||(x>97 && x<123)){
            if (x>64 && x<91){
                if (x >83){
                    x = i-26+7;
                    c = x;
                    cipher +=c;
                }else{
                    x = i+7;
                    c = x;
                    cipher +=c;
                }
            }
            else if (x>96 && x<123){
                if (x >108){
                    x = i-26+14;
                    c = x;
                    cipher +=c;
                }else{
                    x = i+14;
                    c = x;
                    cipher +=c;
                } 
            }

        }else cipher += i;
    }
    return cipher;
}


int main(){
    string name;
    cout<<"Write a message to encode:";
    getline(cin,name);
    cout << "Original Message:: "<<name<<endl;

    cout<<"Encoded Message:: "<<encoder(name);
    return 0;
}
