#include <stdio.h>
#include <stdlib.h>
#include <simple.h>
#include "display.h"

void display_greeting(void)
{
	size_t len = greeting_len();
	char *buf = malloc(len * sizeof(char));
	obtain_greeting(buf, len);
	printf("%s\n", buf);
	free(buf);
}