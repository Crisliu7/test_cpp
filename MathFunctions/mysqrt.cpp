#include "MathFunctions.h"

double mysqrt(int x)
{
	if(x == 0){
		return 0;
	}
	int prev = 1;
	int cur = 1;
	
	while(cur < x/cur){
		prev = cur;
		cur *= 2;
	}
	
	while(prev + 1 < cur){
		int mid = prev + (cur-prev)/2;
		if(mid < x/mid){
			prev = mid;
		}
		else{
			cur = mid;
		}
	}
	
	if(cur == x/cur){
		return cur;
	}
	
	return prev;   
}