//
//  main.c
//  CmdArgument
//
//  Created by Mewlan Musajan on 11/9/17.
//  Copyright (c) 2017 Mewlan Musajan. All rights reserved.
//

#include <stdio.h>

/* echo command-line arguments; 2nd version */
int main(int argc, char const *argv[])
{
	while (--argc > 0)
		printf("%s%s", *++argv, (argc > 1) ? " " : "");
	printf("\n");
	return 0;
}
