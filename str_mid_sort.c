#include <stdio.h>
#include <string.h>

void string_mid_sort(char *str, int max_str_len)
{
	int space = 0;

	if (strlen(str) != max_str_len)
	{
		space = (strlen(str)/2) + 1;
	}

	printf("%*s\n", (max_str_len/2)+space, str);
}

int main()
{
	char* s1 = "*************************";
	char* s2 = "Report";
	char* s3 = "Department:";
	char* s4 = "StudentID:";
	char* s5 = "Name:";

	string_mid_sort(s1, strlen(s1));
	string_mid_sort(s2, strlen(s1));
	string_mid_sort(s1, strlen(s1));
	string_mid_sort(s3, strlen(s1));
	string_mid_sort(s4, strlen(s1));
	string_mid_sort(s5, strlen(s1));
	string_mid_sort(s1, strlen(s1));

	return 0;
}