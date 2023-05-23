#include<iostream>

using namespace std;

string decoder(string name){
    string cipher;
    int x;
    char c;
    for (const auto i:name ){
        x = i;
        if ((x>64 && x<91)||(x>97 && x<123)){
            if (x>64 && x<91){
                if (x <73){
                    x = i+26-7;
                    c = x;
                    cipher +=c;
                }else{
                    x = i-7;
                    c = x;
                    cipher +=c;
                }
            }
            else if (x>96 && x<123){
                if (x <111){
                    x = i+26-14;
                    c = x;
                    cipher +=c;
                }else{
                    x = i-14;
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
    cout<<"Write a cipher to Decode:";
    getline(cin,name);
    cout << "Cipher Message:: "<<name<<endl;

    cout<<"Decoded Message:: "<<decoder(name);
    return 0;
}
