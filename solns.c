/* Enter your solutions in this file */
#include <stdio.h>
int max(int x[], int c){
  int max=x[0];
  int i=1;
  while(i<c)
    {
    if(x[i]>max)
      max=x[i];
    i++;	
    }
  return max;	
}

int min(int x[], int c){
  int min=x[0];
  int i=1;
  while(i<c)
    {
    if(x[i]<min)
      min=x[i];
    i++;	
    }
  return min;	
}

float average(int x[], int c){
	float sum = 0;
	int i = 0;
		while(i<c){
			sum += x[i];
			i++; 
		}
	float avg = sum/(float)c;
	return avg;
}
