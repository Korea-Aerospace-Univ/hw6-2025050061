#include <stdio.h>

int main(void)
{
	char arr[10] = {};
	char *p = nullptr, *q = nullptr;
	char x, word;
	int xNum, wordNum=0;

	for(p=arr; p<arr+10; p++) {
		scanf(" %c", p);
	}

	for(p=arr; p<arr+10; p++) {
		x = *p;
		xNum = 0;
		for(q=arr; q<arr+10; q++) {
			if(x == *q) xNum++;
		}
		if(xNum>wordNum) {
			word = x;
			wordNum = xNum;
		}
	}
	printf("%c %d", word, wordNum);

	return 0;
}
