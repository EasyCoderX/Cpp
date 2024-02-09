#include<stdio.h>

//void helloWorld(int i){
//	
//	if(i == 5) return;
//	
//	printf("%d\n",i);
//	helloWorld(i+1);
//}

//void helloWorld(int i){
//	
//	if(i == 5) return;
//	
//	helloWorld(i+1);
//	printf("%d\n",i);
//}

void helloWorld(int i){
	
	if(i == 5) return;
	
	printf("Hello");
	helloWorld(i+1);
}

int main(){
	helloWorld(0);
	
	return 0;
}
