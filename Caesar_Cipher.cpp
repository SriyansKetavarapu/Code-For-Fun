\#include<iostream>
#include<string.h>
using namespace std;

char cipher[100];

void encode(char* arr, int key){

    int i=0;
    for (i = 0; i < strlen(arr); i++)
    {
        cipher[i] = arr[i] + (key%26);
    }
    cipher[i] = '\0';
    cout<<cipher<<endl;

}
void decode(int key){

    char res[100];
    int i;
    for (i = 0; i < strlen(cipher); i++)
    {
        res[i] = cipher[i] - (key%26);
    }
    res[i] = '\0';
    cout<<res<<endl;

}

int main(){

char arr[100];
cout<<"Enter the string to be encoded ";
cin>>arr;
int key;
cout<<"Enter the key ";
cin>>key;
cout<<"The encoded cipher is - ";
encode(arr, key);
cout<<"The decoded message is - ";
decode(key);
cout<<endl;
return 0;
}
