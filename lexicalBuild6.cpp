#include<bits/stdc++.h>
using namespace std;
char str[100];
int i,cnt=0;
int isOther()
{
    for(i=0;str[i];i++){
        if(str[i]>='A'&& str[i]<='Z'|| str[i]>='a'&& str[i]<='z'||
           str[i]>='0'&& str[i]<='9'|| str[i]=='_'){
            continue;
           }
           else return 1;
    }
    return 0;
}
int isChar()
{
    if(str[0]=='c'&&str[1]=='h'&& str[2]=='_'){

        for(i=3;str[i];i++){
           if(!isalnum(str[i])){
            return 0;
           }
           else
            return 1;
        }
        return 1;
    }
    return 0;
}
int isBinaryVar()
{
    if(str[0]!='b'|| str[1]!='n'||str[2]!='_') return 0;
    for(i=3;str[i];i++){
        if(!isalnum(str[i])) return 0;
        else
            return 1;
    }
    return 0;
}
int isBinaryNum()
{
    if(str[0]!='0') return 0;
    for(i=1;str[i];i++){
        if(str[i]!='0'&& str[i]!='1') return 0;
        else
            return 1;
    }
    return 1;
}
int main()
{
    cin>>str;
    if(isOther()){
        puts("Undefined");
    }
    else if(isChar()){
        puts("Character variable");
    }
    else if(isBinaryVar()){
        puts("Binary Variable");
    }
    else if(isBinaryNum()){
        puts("Binary Number");
    }
    else{
        puts("Undefined");
    }
    return 0;
}
