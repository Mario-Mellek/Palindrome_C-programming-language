#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPalindrome(char *str,int len);

void main()
{
	char *str;
	int length, palindrome;

	printf("\t==========================================\n");
	printf("\t------------Palindrome-Checker------------\n");
	printf("\t==========================================\n");
	putchar('\n');
	printf("\tEnter the length of the word: ");
	scanf("%d", &length);
	str = (char *) malloc(sizeof(char) * length);
	printf("\tEnter a word to check (max %d chars): ", length);
	scanf("%s", str);
	palindrome = isPalindrome(str, strlen(str) - 1);

	if (palindrome)
        {
                printf("\n\tThe word %s is a palindrome \u2705\n\n", str);
        }
        else
        {
                printf("\n\tThe word %s is not a palindrome \u274C\n\n", str);
        }
	printf("\t==========================================\n");
	free(str);
}

int isPalindrome(char *str,int len)
{
	int i;

	for(i = 0; i <= len; i++)
	{
		if (str[i] == str[len])
		{
			len--;
		}
		else
		{
			break;
		}
		return (1);
	}
	return (0);
}
