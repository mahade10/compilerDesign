#include<bits/stdc++.h>
using namespace std;
char str[100];
int isOther()
{
    for(int i=0;str[i];i++){
        if(str[i]>='A'&& str[i]<='Z'||str[i]>='a'&& str[i]<='z'
            ||str[i]>='0'&& str[i]<='9'){
            continue;
        }
        else{
            return 1;
        }
    }
    return 0;
}
/*int isDigit()
{
    for(int i=0;str[i];i++){
        if(str[i]<'0' || str[i]>'9') return 0;

    }
    return 1;
}*/
int main()
{
    cin>>str;
    int len =strlen(str);
        if(isOther()){
            puts("undefined");
        }
        else if(str[0]>='i'&& str[0]<='n'|| str[0]>='I'&& str[0]<='N'){
            puts("Integer variable");
        }
        else if((str[0]>='1'&& str[0]<='9')&& len<=4){
            puts("short number");
        }
        else if((str[0]>='1'&& str[0]<='9')){
            puts("long number");
        }
        else{
            puts("undefined");
        }
    return 0;
}
