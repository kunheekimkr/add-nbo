// main.cpp

#include<stdio.h>
#include "add-nbo.h"

int main(int argc, char* argv[]){
	uint32_t a,b;
	FILE* f1 = fopen(argv[1], "rb");
	fread(&a, sizeof(uint32_t), 1, f1);
	FILE* f2 = fopen(argv[2], "rb");
	fread(&b, sizeof(uint32_t), 1, f2);
	
	uint32_t result = addnbo(a,b);
	
	printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n",ntohl(a),ntohl(a),ntohl(b),ntohl(b),result,result);
	return 0;
}

