//
// Created by jupiter on 3/3/17.
//

#include <stdio.h>

void main()
{
    int x[] = {1, 3, 6, 10, 15, 30};
    int n = 6;
    int i, *ip;

    ip = x;
    for(i=0;i<n;i++)		// controlling the for-loop
        printf("%d\n", *(ip+i));	// with a loop index

    for(ip=x;ip<x+n;ip++)	// controlling the for-loop
        printf("%d\n", *ip);	// with the pointer

    ip = x+3;				//	ip points at 10
    printf("%d\n", *ip++);  // prints x[3], moves ip to x[4]
    printf("%d\n", *ip);

    ip = x+3;
    printf("%d\n", *++ip);  // increments ip first to point at x[4], prints x[4]
    printf("%d\n", *ip);	// prints x[4] again

    ip = x+3;
    printf("%d\n", (*ip)++); // prints *ip (x[3]), then increments *ip to be 11
    printf("%d\n", *ip);	// prints *ip (x[3]) which is now 11

    ip= x+3;
    printf("%d\n", *(ip++)); // prints *ip (now 11) then increments ip to x[4]
    printf("%d\n", *ip);     // prints x[4]

    ip= x+1;				// ip points at x[1] = 3
    printf("%d\n", *ip);	// prints x[1]
    printf("%d\n", ++*ip);	// increments *ip (x[1]) to 4 then prints *ip (x[1], now 4)
    printf("%d\n", *ip);	// prints x[1] (now 4)
    scanf("%d", &i);
}

