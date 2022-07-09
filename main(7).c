/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/


#include<stdio.h>//header file
#include<math.h>//header file for math function
int main(void) 
{
 int a[2];//vector a
 int b[2]; //vector b
 double c[2]; //result vector
 int n, i;//initialized with data type int for the variable n and i
 printf("Enter vector size: ");//prompt message
 scanf("%d", &n);//to get the vector size
 printf("Enter elements of vector a:\n");//prompt message with new line
 for (i = 0; i < n; i++)//looping
   scanf("%d", &a[i]);//to get input for the vector a
 printf("Enter elements of vector b:\n");//prompt message with new line
 for (i = 0; i < n; i++)//looping
    scanf("%d", &b[i]);//to get the input  for the vector b
/* to perform the vector addition*/
 for (i = 0; i < n; i++)//looping
    c[i] = a[i] + b[i];//additon of the two vectors a and b which is assigned to the variable c
/* print addition vector C */
    printf("Addition vector:\n");//prompt message with new line
 for (i = 0; i < n; i++)//nested looping
    printf("%.0f ", c[i]);//to print the addition of two vectors
 int dot_product=(a[0]*b[0])+(a[1]*b[1]);//to find the dot product of the two vectors
 printf("\ndot product of the vectors:%d",dot_product);//display the dot product
 double mag1=sqrt(pow(c[0],2));//magnitude for vector a
 double mag2=sqrt(pow(c[1],2));//magnitude for vector break
 double res=mag1+mag2;//resultant magnitude
 double prod=mag1*mag2;//product of the two magnitude
 double d=(dot_product)/(prod);//in order to find the angle
 double result=cos(d);//angle of the two vectors is assigned to the result
 printf("\nMagnitude of the vector1:%.1f",round(mag1));//display the magnitude of the vector a
 printf("\nMagnitude of the vector2:%.1f",round(mag2));//display the magnitude of the vector b
 printf("\nMagnitude of the  product vector:%.1f",round(prod));//product of the magnitude of the two vectors a and b
 printf("\n%.1f",round(d));//display the value for d
 printf("\nMagnitude of the  resultant vector:%.1f",round(res));//displays the resultant magnitude of the vector
 printf("\nAngle of the resultant vector:%.2f",round(result));//displays the angle of the resultant vector
 return 0;//it will return with some number
      
}
/*Report: Idea of the program is to print the additon of two vectors ,
magnitude of the two vectors and the angle of the resultant vector.*/