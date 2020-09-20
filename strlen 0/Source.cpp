#include<iostream>
#include<string.h>
using namespace std;

char word1[50], word2[50];

int sameOrmore(void);

int main() {
	int keep;
	char* w;
	scanf("%s", word1, 49);
	scanf("%s", word2, 49);

	keep = sameOrmore();

	if (keep == 1)
	{
		cout << "same";
	}
	else if (keep == 2)
	{
		w = word1;
		while (*w != '\0')
		{
			printf("%c", *w);
			w += 1;
		}
	}
	else if (keep == 3)
	{
		w = word2;
		while (*w != '\0')
		{
			printf("%c", *w);
			w += 1;
		}
	}

}

int sameOrmore(void) {
	if (strlen(word1) > strlen(word2)) {
		return 2;
	}
	else if (strlen(word2) > strlen(word1)) {
		return 3;
	}
	else if (strlen(word1) == strlen(word2)) {
		return 1;
	}
	else if (strlen(word1) != strlen(word2)) {
		return 0;
	}
}

