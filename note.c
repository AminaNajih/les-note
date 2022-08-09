#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int i,j,a,b,k;
	float max, min,tt,tc1[13],tc2[15];
	//note du classe 1
	printf("veuiller saisir les note du classe 1\n");
	for(i=0;i<13;i++){
		printf("note %d:\n",i+1);
		scanf("%f",&tc1[i]);
	}
	for(i=0;i<13;i++){
		printf("les notes du classe 1 :\n");
		printf("note %d:%.2f\n",i+1,tc1[i]);
	}
	//note du classe 2
	printf ("veuiller saisir les note du classe 2\n");
	for(i=0;i<15;i++){
		printf("note %d \n",i+1);
		scanf("%f",&tc2[i]);
		
	}
	for(i=0;i<15;i++){
		printf("les notes du classe 2:\n");
		print("note %d:%.2f\n",i+1,tc2[i]);
	}
	//majorant de classe 1
	max=0;
	max=tc1[0];
	for(i=0;i<13;i++){
		if(max<tc1[i])
		max=tc1[i];
	}
	printf("le majorant de classe 1 est %.2f\n",max);
	//majorant de classe 2 
	max=0;
	max=tc2[0];
	for(i=0;i<15;i++){
		if(max<tc2[i])
		max=tc2[i];
	}
	printf("le majorant de classe 2 est %.2f\n",max);
	//dernier note classe 1
	min=0;
	min=tc1[0];
	for(i=0;i<13;i++){
		if(min>tc1[i])
		min=tc1[i];
	}
	printf("la dernier note de classe 1est %f\n",min);
	//dernier note classe 2
	min=0;
	min=tc2[0];
	for(i=0;i<15;i++){
		if(min>tc2[i])
		min=tc2[i];
	}
	printf("la dernier note de classe 2 est %f\n",min);
	//les eleves superieur a 10
	a=0;
	for(i=0;i<13;i++){
		if(tc1[i]>=28)
		a++;
	}
	
	printf("le nombre d eleve de classe 1 ayant une moyenne superieur a 10 est : %d\n",a);
	
	b=0;
	for(i=0;i<15;i++){
		if(tc2[i]>=28)
		b++;
	}
	printf("le nombree d eleve de la classe 2 ayant une moyenne superieur a 10 est :%d\n",b);
	return 0;
}
