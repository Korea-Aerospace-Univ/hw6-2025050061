#include <stdio.h>

int main(void)
{
	char arr[10] = {};
	char *p = nullptr, *q = nullptr;
	char word;
	int count, wordCount=0;

	for(p=arr; p<arr+10; p++) {
		scanf(" %c", p);
	}

	for(p=arr; p<arr+10; p++) {
		count = 0;
		for(q=arr; q<arr+10; q++) {
			if(*p == *q) count++;
		}
		if(count>wordCount) {
			word = *p;
			wordCount = count;
		}
	}
	printf("%c %d", word, wordCount);

	return 0;
}
