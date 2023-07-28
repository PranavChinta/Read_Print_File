#include <stdio.h>
#include <stdlib.h>
void ReadPrintFile(char file_name[]){
	FILE *fp;
	char contents;
	fp = fopen(file_name, "r");
	if(fp == NULL){
		printf("File path doesn't exist");
	}
	//contents = fgetc(fp);
	else{
		while(!feof(fp))
		{
			contents = fgetc(fp);
			printf("%c", contents);
		}
	}
	fclose(fp);	
}

int main()
{
	printf("Enter file path of desired file: ");
	char name[100];
	scanf("%s", name);
	ReadPrintFile(name);	
}
