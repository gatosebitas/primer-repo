
#include <stdio.h>

int main(){
	printf("%d \n",2 ^ 10);
	printf("%d \n",1<<31);
	printf("%d \n",2<<2);
	printf("%d \n",3<<2);
	
	
	printf("%d \n",4<<3>>2);
	
	printf("%d \n",0x12345678>>(1<<3) );
	return 0;
}

int tmin(void) {
  /* 
   * Suppose we are talking about the 32-bit integer, TMIN
   * is 1 followed by 31 0s.
   */
  return 1 << 31;
}
