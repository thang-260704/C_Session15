#include<stdio.h>
#include<string.h>
#include<ctype.h>

 int main(){
 	char text[]="xin chao sinh vien K24 class eng_b";
 	int size=strlen(text);
 	char word;
	printf("\nMoi ban nhap ki tu ban muon xoa : ");
	scanf("%c", &word);
	for(int i=0;i<size;i++){
		if(text[i] == word){
			text[i]=' ';
		}
	}
	printf("%s", text);
 	 for(int i=0;i<size;i++){
 	 	if(i==0 || text[i-1]==' '){
 	 		if(text[i] >= 'a' && text[i] <='z'){
 	 			text[i]=toupper(text[i]);
			  }
		  }
	  }
	  printf("%s",text);
	return 0;
 }
