#include<bits/stdc++.h>
using namespace std;
char str[100];
int i,c=0,l=0,d=0,o=0,vow=0,inl=0,ind=0,ino=0;
int iswords(){
    for(i=0;str[i];i++){
        if(str[i]==' ') c++;
    }
    return c;
}
int isLetters(){
    for(i=0;str[i];i++){
        if(isalpha(str[i])) l++;
    }
    return l;

}
int isDigits()
{
    for(i=0;str[i];i++){
        if(isdigit(str[i])) d++;
    }
    return d;
}
int isOthers()
{
    for(i=0;str[i];i++){
        if(!isalnum(str[i])&& str[i]!=' ') o++;
    }
    return o;
}
int isVowel()
{
    for(i=0;str[i];i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'
           ||str[i]=='u'||str[i]=='A'||str[i]=='E'||
           str[i]=='I'||str[i]=='O'||str[i]=='U') vow++;
    }
    return vow;
}
int markl[300],markd[300],marko[300];
char letter[100],digit[100],other[100];
void separate()
{
    int x;


    for(i=0;str[i];i++){
        x=int(str[i]);

        if(isalpha(str[i]) && !markl[x]){

                letter[inl++] = str[i];
                letter[inl++] = ' ';
                markl[x] = 1;
        }
         if(isdigit(str[i]) && !markd[x]){

                digit[ind++] = str[i];
                digit[ind++] = ' ';
                markd[x] = 1;
        }
        if(!isalnum(str[i]) && !marko[x]){
            other[ino++]= str[i];
            other[ino++]=' ';
            marko[x] =1;
        }
    }
    letter[inl]='\0';
    digit[ind]='\0';
    other[ino]='\0';
     printf("\n\nSeparated letters : %s\n",letter);
     printf("\n\nSeparated digits : %s\n",digit);
     printf("\n\nSeparated others : %s\n",other);

}
int main()
{
    scanf("%[^\n]",str);
    int w=iswords();
    cout<<"words :"<<w+1<<endl;
    int L=isLetters();
    cout<<"letters :"<<L<<endl;
    int v=isVowel();
    cout<<"vowels :"<<v<<endl;
    int cons=L-v;
     cout<<"consonants :"<<cons<<endl;
    int D=isDigits();
    cout<<"digits :"<<D<<endl;
    int O =isOthers();
    cout<<"others :"<<O<<endl;
    separate();
    return 0;
}
