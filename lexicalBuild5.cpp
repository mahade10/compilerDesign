#include<bits/stdc++.h>
using namespace std;
char str[100];
int isOther()
{
    for(int i=0;str[i];i++){
        if(str[i]>='A'&& str[i]<='Z'||str[i]>='a'&& str[i]<='z'||
           str[i]>='0'&& str[i]<='9'||str[i]=='.'){
            continue;
           }
           else
            return 1;
    }
    return 0;
}
int isFloat()
{
    int cnt=0,i;
    for( i=0;str[i]!='.';i++){
            if(str[i]=='.') continue;
        if(str[i]<'0'|| str[i]>'9') return 0;
    }
    for(i++;str[i];i++){
        if(str[i]<'0'|| str[i]>'9') return 0;
        cnt++;
    }
    return cnt;
}
int main()
{
    cin>>str;
    if(isOther()){
        puts("invalid");
    }
    else if((str[0]>='A'&& str[0]<='H')||(str[0]>='a'&& str[0]<='h')||
            (str[0]>='o'&&str[0]<='z')||(str[0]>='O'&& str[0]<='Z')){
        puts("float variable");
    }
        else if(isFloat()<=2&&(str[0]>='0'&&str[0]<='9'||str[0]=='.')){
            puts("float number");
        }
        else if(isFloat()>2&&(str[0]>='0'&&str[0]<='9'||str[0]=='.')){
            puts("double number");
        }
        else
            puts("invalid");
        return 0;
}
