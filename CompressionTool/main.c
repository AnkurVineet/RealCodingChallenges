#include<stdio.h>

int main(int argc, char *argv[])
{
	int charcount[256] = {0};
	if (argc < 2) {
		printf("Specify file name\n");
		exit(1);
	} else {
		printf("File name %s\n", argv[1]);
	}
	
	FILE *fp = fopen(argv[1], "r");
	if (fp == NULL) {
		printf("Unable to open file\n");
		exit(1);
	}
	char ch;
	while ((ch = fgetc(fp)) != EOF) {
		charcount[ch]++;
	}
	fclose(fp);
	printf("%d %d",charcount['X'],charcount['t']);
	return 0;
}