#include <stdio.h>
int pancheck(char s[]){
    int a[26];
    int j;
    int i;
    for(i=0;i<strlen(s);i++){
        if(s[i]>=65&& s[i]<=90){
                j=s[i]-65;
                a[j]=1;

        }
        else if(s[i]>=97&&s[i]<=122){
            j=s[i]-97;
            a[j]=1;
        }
    }
    int flag=1;
    for(i=0;i<26;i++){
        if(a[i]==0){
           flag=0;
        }
    }
    return flag;
}

int main(){
    char input[100];
    fgets(input,100,stdin);
    int ans=pancheck(input);
    if(ans==0){
        printf(" Given input is not a pangram");

    }
    else{
        printf("Given input is a pangram");
    }
    return 0;

}
