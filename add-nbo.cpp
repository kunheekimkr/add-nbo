// add-nbo.cpp

#include "add-nbo.h"

uint32_t addnbo(uint32_t a, uint32_t b){
	return ntohl(a) + ntohl(b);
}
