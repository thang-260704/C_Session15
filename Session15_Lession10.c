#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int ascii[260];
char s[10005];
int main(){
    fgets(s,10000,stdin);
    s[strcspn(s,"\n")]=0;
    for(int i=0;i<strlen(s);i++){
	ascii[s[i]]++;
    }
    for(int i=33;i<=126;i++){
	if(ascii[i]!=0){
	    printf("%c : %d\n",i,ascii[i]);
        }
    }
    return 0;
}
