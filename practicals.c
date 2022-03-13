




Practical file Of
C  programming    LANGUAGE


Submitted To:	Submitted By:
Mrs. Minal Dhankar	Name: Himanshu

Asst. Professor	Roll No:00221202021

Deptt. Of Computer Application	SEM - I: BCA – 2nd Shift



 
INDEX


Sr. No	
Name of Program	
Page No	
Sign.


1	WAP TO CALCULATE SUM AND PERCENTAGE OF A STUDENT IN FIVE SUBJECTS.	

5-6	

2	WAP TO CONVERT AND PRINT DISTANCE IN METRES,
CENTIMETERS AND INCHES FROM KILOMETERS(INPUT).	

7	
3	WAP TO CONVERT FAHRENHEIT TO CELCIUS	
8	

4	WAP TO READ PRINCIPAL AMOUNT, TIME AND RATE OF INTEREST FROM USER AND
CALCULATE SIMPLE INTEREST.	
9	

5	
WAP TO DISPLAY MINIMUM AND MAXIMUM RANGE OF DATATYPES.	
10
	
6	WAP TO CONVERT DECIMAL NUMBER INTO OCTAL AND HEXADECIMAL	
11	
7	WAP TO SWAP THE TWO NUMBERS WITHOUT USING THE THIRD VARIABLE.	
12	
8	WAP TO SHOW SHIFT BITWISE OPERATOR.	
13	
9	WAP TO PRINT FIRST 10 SQUARE NUMBERS	
14	
10	WAP TO CALCULATE THE FACTOR OF A NUMBER.	
15	
11	WAP TO FIND THE GREATEST OF THREE
NUMBERS USING ‘NESTED IF’.	
16	
12	WAP TO FIND GREATEST OF THREE
NUMBERS USING ‘CONDITIONAL OPERATOR’.	
17	
13	WAP TO CALCULATE THE RECIPROCAL OF
ANY ‘N’ NUMBERS.	
18	
 
14	WAP TO GENERATE THE VARIOUS PYRAMIDS.	
19-20	
15	WAP TO REVERSE A DIGIT OF A GIVEN POSITIVE NUMBER USING DO-WHILE.	
21	
16	WAP TO CHECK WHETHER THE ENTERED CHARACTER IS LETTER, DIGIT OR NONE OF THESE.	

22	
17	WAP TO DEMONSTRATE HOW A FUNCTION SHOULD BE CALLED WITHIN ANOTHER FUNCTION.	
23	
18	WAP TO DETERMINE GREATEST OF THREE NUMBERS USING FUNCTIONS.	
24	
19	WAP TO CHECK WHETHER THE GIVEN
NUMBER IS PRIME OR NOT USING FUNCTIONS.	
25-26	
20	WAP TO DETERMINE PRIME NUMBERS BETWEEN 1 TO 100.	
27	
21	WAP TO CALCULATE THE HCF OF TWO NUMBERS USING FUNCTIONS.	
28	
22	WAP TO SHOW FUNCTIONS OF MATRIX
(i)	Sum of 2 matrices 
(ii)	Multiplication of 2 matrices 
(iii)	Transpose of a matrix	
29-32	
23	WAP TO SHOW THE FOLLOWING STRING FUNCTIONS
(i)	Strlen
(ii)	Strcp
(iii)	Strncpy
(iv)	Strcmp
(v)	Strncmp
(vi)	Strcat
(vii)	Strupr
(viii)	Srtlwr(ix)	strrev	




33-36	
24	WAP TO DEMONSTRATE THE STRUCTURE: -
1.	A BASIC PROGRAM OF STRUCTURE
2.	ASSIGNMENT IN OPERATOR
3.	STORAGE IN MEMORY	
37	
25	WAP TO SHOW HOW INITIALIZATION IS DONE IN AN ARRAY OF STRUCTURE.	
38	
26	WAP TO SHOW A NESTED STRUCTURE	
39	
27	WAP TO SHOW THE ADDRESS OF EACH VARIABLE IN UNION	
40	
28	WAP TO SHOW HOW TO INITIALIZE THE MEMBERS OF A UNION AND CHECK THEIR
ADDRESS.	
41	
29	WAP TO DEMONSTRATE STORAGE CLASSES: -
•	STATIC
•	REGISTER
•	AUTOMATIC	
42	
30	WAP TO OPEN AND CLOSE THE FILE.	
43	
31	WAP TO WRITE AND READ ANY TEXT INTO THE FILE BY USING THE FUNCTIONS fputc()
AND fgetc().	

44	
32	WAP TO INPUT A LINE INTO THE FILE AND DISPLAY ITS CONTENTS	
45	
33	WAP TO SHOW THE USE OF fscanf() AND
fprintf().	
46	
34	WAP TO ILLUSTRATE ftell() AND fseek().	
47	
35	WAP TO ILLUSTRATE THE REWIND() FUNCTION.	
48	
36	WAP TO ILLUSTRATE fwrite() AND fread().	
49	
37	WAP TO DEMONSTRATE THE CONCEPT OF ENUMDATATYPE.	
50	
38	WAP TO DEMONSTRATE THE CONCEPT OF STRUCTURE WITHIN A FUNCTION: -
1.	SINGLE VARIABLE
2.	ENTIRE STRUCTURE	
51-52	
39	WAP TO DEMONSTRATE PASSING ARGUMENTS IN MAIN FUNCTIONS	53	
			
 











PRACTICAL-1
Wap to calculate sum and percentage of a student in five subjects.

Code: - 

#include<stdio.h> 
int main(){ 
 int SUM,sub1 , sub2, sub3, sub4 , sub5 ; 
 float P; 
 printf("Enter marks of subject 1 = "); 
 scanf("%d",&sub1); 
 printf("\nEnter marks of subject 2 = "); 
 scanf("%d",&sub2); 
 printf("\nEnter marks of subject 3 = "); 
 scanf("%d",&sub3); 
 printf("\nEnter marks of subject 4 = "); 
 scanf("%d",&sub4); 
 printf("\nEnter marks of subject 5 = "); 
 scanf("%d",&sub5); 
 SUM = sub1+sub2+sub3+sub4+sub5; 
 printf("\nTotal marks out of 500 are = %d",SUM); 
 P = SUM / 5.0; 
 printf("\nPERCENTAGE = %f %%",P); 
 return 0; 
}

Output: - 

 


















PRACTICAL-2
Wap to convert and print distance in meters, centimeters and inches from kilometer(input).

Code:- 

#include<stdio.h> 
int main(){ 
 float KM,m,cm,inch; 
 printf("Input distance in kilometer(KM) ="); 
 scanf( "%f",&KM); 
 m=KM*1000;
 cm=KM*1000;
 inch=KM*39370;
 printf("Distance in  METERS = %f\n",m); 
 printf("Distance in CENTIMETERS = %f\n",cm); 
 printf("Distance in INCHES = %f\n",inch); 
 return 0; 
}

Output: - 



 




PRACTICAL-3

WAP to convert Fahrenheit to Celsius.

Code: - 

#include <stdio.h> 
int main() 
{ 
 float celsius, fahrenheit; 
 printf("Enter the temperature in Fahrenheit = "); 
 scanf("%f", &fahrenheit); 
 celsius = (fahrenheit - 32) * 5 / 9; 
 printf("Tepmrature in Celsius = %.3f \n",celsius); 
 printf("\n %.3f F = %.3f C", fahrenheit, celsius); 
 return 0; 
}

Output: - 

 











PRACTICAL-4
Wap to read principal amount, time and rate of interest from user and calculate simple interest.

Code: - 

#include <stdio.h> 
int main() 
{ 
 float p,r,t,SI; 
 printf("\nEnter your principal amount = "); 
 scanf("%f",&p); 
 printf("\nEnter your rate of interest (ROI) = "); 
 scanf("%f",&r); 
 printf("\nEnter your time period[In months] = "); 
 scanf("%f",&t); 
 SI = (p*r*t)/100; 
 printf("\nSimple interest = %.2f",SI); 
 return 0; 
}


Output: - 

 



PRACTICAL-5
Wap to display minimum and maximum range of datatypes.

Code: -
#include <stdio.h>
#define SIZE(x) sizeof(x)*8

void signed_one(int);

int main()
{
printf("\nrange of int"); signed_one(SIZE(int)); printf("\nrange of char"); signed_one(SIZE(char)); return 0;
}
void signed_one(int count)
{
int min, max, pro; pro = 1;
while (count != 1)
{
pro = pro << 1;
count--;
}
min = ~pro; min = min + 1; max = pro - 1;
printf("\n%d to %d", min, max);
}

Output: -
 




PRACTICAL-6
Wap to convert decimal number into octal and hexadecimal.

Code: - 

#include<stdio.h>
void convert (int n, int b) 
{ 
 int r = n % b; 
    if(n == 0) 
        return; 
    convert(n/b, b); 
    if(r < 10) 
        printf("%d", r); 
    else 
        printf("%c", ('A'+(r-10)) ); 
} 
int main() 
{ 
 int num; 
    printf("\nEnter a Decimal number = "); 
    scanf("%d", &num); 
    printf("\nOctal number = "); 
 convert(num, 8); 
    printf("\n"); 
    printf("\nHexadecimal number = "); 
 convert(num, 16); 
    printf("\n"); 
 return 0; 
}


Output: - 
 
PRACTICAL-7
Wap to swap the two variables without using the third variable.

Code: - 

#include<stdio.h> 
 int main() 
{ 
int a, b; 
printf("input 2 numbers ="); 
scanf("%d %d",&a,&b); 
printf("Original no. a=%d b=%d",a,b); 
a=a+b; 
b=a-b; 
a=a-b; 
printf("\nAfter swap => a=%d b=%d",a,b); 
return 0; 
}

Output: - 
 










PRACTICAL-8
Wap to show shift bitwise operator.

Code: - 
#include <stdio.h> 
int main() 
{ 
 int num; 
 printf("Input a num ="); 
 scanf("%d",&num); 
 printf("num << 1 = %d\n", num << 1); 
 printf("num >> 1 = %d\n", num >> 1); 
 return 0; 
}


Output: - 
 












PRACTICAL-9
Wap to print first 10 square numbers

Code: - 

#include <stdio.h> 
int main() 
{ 
int i; 
for(i= 1; i < 11; i++) 
 printf("%d \n", i*i); 
return 0; 
}

Output: - 


 














PRACTICAL-10

Wap to calculate the factor of a number.

Code: - 
#include <stdio.h> 
int main() { 
 int num, i; 
 printf("Enter a number = "); 
 scanf("%d", &num); 
 printf("Factors of %d are => \n", num); 
 for (i = 1; i <= num; i++) { 
 if (num % i == 0) { 
 printf("%d \n", i); 
 } 
 } 
 return 0; 
}


Output: - 
 









PRACTICAL-11
Wap to find the greatest of three number using ‘nested if’.

Code: - 
#include<stdio.h>
#include<conio.h>
int main(){ 
    int a,b,c;
    printf("Enter three numbers : ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        printf("A = %d is greater among these ",a);

    }
    else if (b>a && b>c){
        printf("B = %d is greater among them ",b);

    }
    else{
        printf("C = %d is greater amomg them ",c);
    }
    return 0;
}


Output: - 
 





PRACTICAL-12
Wap to find greatest of three number using ‘conditional operator’.

Code: - 
#include <stdio.h>

int main(){
  int a,b,c;
  int big;
   
  printf("Enter any there numbers: "); 
  scanf("%d%d%d",&a,&b,&c);

  if(a>b && a>c)
    big = a;
   else if(b>c)
    big = b;
   else
    big = c;
   
   printf("Largest number is: %d",big); 

  return 0;
}

Output: - 
 



PRACTICAL-13
Wap to calculate the reciprocal of any number ‘N’ number.

Code: - 
#include <stdio.h> 
int main() 
{ 
 int num , i; 
 printf("\nEnter N = "); 
 scanf("%d", &num); 
 for(i=1; i<=num; i++) 
 { 
 float a,b; 
 printf("\nEnter your number ="); 
 scanf("%f",&a); 
 b = 1/a; 
 printf("reciprocal = %f",b); 
 } 
 return 0; 
}

Output: - 
 










PRACTICAL-14
Wap to generate various pyraminds.
(i)	* 
** 
*** 
**** 
***** 
******
*******
(ii)	* 
           * * * 
        * * * * *
     * * * * * * *
  * * * * * * * * *

Code: - 
#include <stdio.h> 
int main() { 
 int i, j, k; 
 printf("Input a num = "); 
 scanf("%d",&k); 
 for (i = 1; i <= k; ++i) 
 { 
        for (j = 1; j <= i; ++j) 
        { 
            printf("* "); 
 } 
printf("\n"); 
    } 
 return 0; 
}


Output: - 
 

#include<stdio.h> 
int main() { 
 int i, j, z, k = 0; 
 printf("Input a num = "); 
 scanf("%d",&z); 
 for (i = 1; i <= z; ++i, k = 0) 
 { 
    for (j = 1; j <= z - i; ++j) 
    { 
 printf(" "); 
 } 
 while (k != 2 * i - 1) 
 { 
 printf("* "); 
 ++k; 
 } 
 printf("\n"); 
 } 
 return 0; 
}


Output: - 




 








PRACTICAL-15
Wap to reverse a digit of a given positive number using do-while.
Code: - 
#include<stdio.h> 
void main() 
{ 
 int number,subnumber,z,lastnum=0; 
 printf("\nEnter The Number="); 
 scanf("%d",&number); 
subnumber=number; 
do  { 
z=number%10; 
lastnum=lastnum*10+z; 
number=number/10; 
}while(number>0); 
 
 printf("The Reverse Number of %d is %d",subnumber,lastnum); 
}


Output: - 



 











PRACTICAL-16
Wap to check whether the entered character is letter, digit or none of these.

Code: - 
#include <stdio.h> 
int main() 
{ 
 
 char ch; 
 printf("\nEnter any character: "); 
 scanf("%c", &ch); 
 if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) 
 printf("'%c' is alphabet.", ch); 
 else if(ch >= '0' && ch <= '9') 
 printf("'%c' is digit.", ch); 
 else 
 printf("'%c' is special character.", ch); 
 return 0; 
}

Output: - 


 

 









PRACTICAL-17
Wap to demonstrate how a function should be called within another function.

Code: - 
#include <stdio.h> 
int func_add(int num_1,int num_2) 
{ 
 return (num_1 + num_2); 
} 
int main() 
{ 
 int number1 , number2 , sum; 
 printf("Program to add 2 number "); 
 printf("\ninput number 1 ="); 
 scanf("%d",&number1); 
 printf("input number 2 ="); 
 scanf("%d",&number2); 
 sum = func_add(number1,number2); 
 printf("Sum = %d",sum); 
 return 0; 
}

Output: - 
 







PRACTICAL-18
Wap to determine greatest of three numbers using functions.

Code: - 
#include<stdio.h>
#include<conio.h>
int greatest (int a, int b, int c){
    if(a>b && a>c){
        return a;
    }
    else if(b>a && b>c){
        return b;
    }
    else {
        return c;
    }
}
int main(){ 
    int a,b,c;
    printf("Enter three numbers : ");
    scanf("%d %d %d",&a,&b,&c);
    int great = greatest(a,b,c);
    char greate = greatest(a,b,c);
    printf("The greatest value among these three is : %d",great);
    return 0;
}

Output: - 
 






PRACTICAL-19
Wap to check whether the given number is prime or not using functions.

Code: - 
#include<stdio.h>
#include<conio.h>
int isPrime(int num){
    if(num==1){
        printf("Its a Composite number not a Prime number");

    }
    else{
        int init=num/2; 
        int master=0;
        for(int i =2;i<init;i++){
            if(num%i==0){
                printf("Not a prime number");
                master=1;
                break;
            }
        }
        if(master==0){
            printf("Its a prime number");
        }
    }
}
int main(){ 
    int a ;
    printf("Enter a number to check its prime or not :----------- \n");
    scanf("%d",&a);
    isPrime(a);
    return 0;
}

Output: - 

 


 



































PRACTICAL-20
Wap to determine prime number between 1 to 100.

Code: - 
#include <stdio.h> 
 
int main() 
{ 
 int Number=1,i, ct; 
 
 printf(" Prime Number from 1 to 100 are = \n"); 
 while(Number <= 100) 
 { 
 ct = 0; 
 i = 2; 
 while(i <= Number/2) 
 { 
 if(Number%i == 0) 
 { 
 ct++; 
 break; 
 } 
 i++; 
 } 
 if(ct == 0 && Number != 1 ) 
 { 
 printf(" %d \n", Number); 
 } 
 Number++; 
 } 
 return 0; 
}

Output: - 


 







	















PRACTICAL-21
Wap to calculate the HCF of two number suing functions.

Code: - 
#include <stdio.h> 
int func_hcf(int a,int b) 
{ 
 int t; 
 while (b != 0) { 
 t = b; 
 b = a % b; 
 a = t; 
 } 
 return a; 
} 
int main() { 
 int x, y; 
 printf("Enter two number=\n"); 
 scanf("%d%d", &x, &y); 
 printf("HCF of %d and %d = %d\n", x, y, func_hcf(x,y)); 
 return 0; 
}

Output: - 

 












PRACTICAL-22
Wap to show the following functions in matrix.
(i)	Sum of 2 matrices 
(ii)	Multiplication of 2 matrices 
(iii)	Transpose of a matrix
1.
Code: - 
1. #include <stdio.h>
int main() {
int row, coll, A[100][100], B[100][100], sum[100][100], i,j;
printf("Enter the number of rows =  "); scanf("%d", &row);
printf("Enter the number of columns = "); scanf("%d", &coll);

printf("\nEnter elements of 1st matrix:\n"); for (i = 0; i < row; ++i)
for (j = 0; j < coll; ++j) {
printf("Enter element a[%d][%d] = ", i + 1, j + 1);
scanf("%d", &A[i][j]);
}
printf("Enter elements of 2nd matrix:\n"); for (i = 0; i < row; ++i)
for (j = 0; j < coll; ++j) {
printf("Enter element a[%d][%d] = ", i + 1, j + 1);
scanf("%d", &B[i][j]);
}
for (i = 0; i < row; ++i)
for (j = 0; j < coll; ++j) { sum[i][j] = A[i][j] + B[i][j];
}
printf("\nSum of two matrices => \n"); for (i = 0; i < row; ++i)
for (j = 0; j < coll; ++j) { printf("%d\t", sum[i][j]); if (j == coll - 1) {
printf("\n\n");
}
}
return 0;
}
 


2.
#include<stdio.h>    
#include<stdlib.h>  
int main(){  
int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;    
system("cls");  
printf("enter the number of row=");    
scanf("%d",&r);    
printf("enter the number of column=");    
scanf("%d",&c);    
printf("enter the first matrix element=\n");    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
scanf("%d",&a[i][j]);    
}    
}    
printf("enter the second matrix element=\n");    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
scanf("%d",&b[i][j]);    
}    
}    
    
printf("multiply of the matrix=\n");    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
mul[i][j]=0;    
for(k=0;k<c;k++)    
{    
mul[i][j]+=a[i][k]*b[k][j];    
}    
}    
}    
//for printing result    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
printf("%d\t",mul[i][j]);    
}    
printf("\n");    
}    
return 0;  
}  

3.
#include <stdio.h>
int main() {
  int a[10][10], transpose[10][10], r, c;
  printf("Enter rows and columns: ");
  scanf("%d %d", &r, &c);

  // asssigning elements to the matrix
  printf("\nEnter matrix elements:\n");
  for (int i = 0; i < r; ++i)
  

for (int j = 0; j < c; ++j) {
    printf("Enter element a%d%d: ", i + 1, j + 1);
    scanf("%d", &a[i][j]);
  }

  // printing the matrix a[][]
  printf("\nEntered matrix: \n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    printf("%d  ", a[i][j]);
    if (j == c - 1)
    printf("\n");
  }

  // computing the transpose
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    transpose[j][i] = a[i][j];
  }

  // printing the transpose
  printf("\nTranspose of the matrix:\n");
  for (int i = 0; i < c; ++i)
  for (int j = 0; j < r; ++j) {
    printf("%d  ", transpose[i][j]);
    if (j == r - 1)
    printf("\n");
  }
  return 0;
}

Output: - 1.
 
2.
 
3.
 

















PRACTICAL-23
Wap to show the following string functions.
(i)	Strlen
(ii)	Strcpy
(iii)	Strcmp
(iv)	strncmp
(v)	Strcat
(vi)	Strupr
(vii)	Strlwr
(viii)	Strrev

Code: - 
1.
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){ 
    char A[20]="Himanshu";
    printf("the entered string is %s \n",A);
    printf("The length of the sting A is %d",strlen(A));
    return 0;
}

2
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){ 
    char A[20]="Himanshu";
    char B[20];
    printf("The entered string in A is %s \n",A);
    strcpy(B,A);
    printf("The string B after Copy Operation is : %s \n",B);
    printf("String A get copied in string B ");
    
    return 0;
}
 
3
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){ 
    char A[20]="Himanshu";
    char B[20]="Hello";
    printf("The entered string in A is %s \n",A);
    printf("The entered string in B is %s \n",B);
    int result = strcmp(A,B);
    printf("The result after compairing both these strings is : %d",result);
    
    return 0;
}
                          4
#include <stdio.h>
#include <string.h>
int main () {
char str1[15]; char str2[15]; int ret;
strcpy(str1, "abcdef");
 strcpy(str2, "ABCDEF");
ret = strncmp(str1, str2, 4); 
printf("strncmp(str1, str2, 4) = > %d", ret);
return 0;
} 


                           5
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){ 
    char A[20]="Himanshu ";
    char B[20]= "Bca cetRank 456";
    printf("The final is : %s",strcat(A,B));
    return 0;
}
				               6

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){ 
    char A[20]="Himanshu ";
    printf("The string in Uppercase using string Function is :--- \n%s ",strupr(A));

    return 0; 
7.
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){ 
    char A[20]="HIMANSHU";
    printf("The string in Lowercase using string Function is :--- \n%s ",strlwr(A));

    return 0;
}
       8. 
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){ 
    char A[20]="himanshu";
    printf("The reverse of a string using string rev Func is \n %s ",strrev(A));

    return 0;
}

Output: -
 1
 
2
 

3
 

4
 

5
 



6.


 

7
 


8
 
























PRACTICAl-24
Wap to demonstrate the structure:
(i)	A basic program of structure.
(ii)	Assignment in operator.
(iii)	Storage In memory.

Code: - 
#include<stdio.h> 
#include<string.h> 
int main( )
{
// 1
struct  book
{
char name   ; 
float price ;
int pages ;
};

struct book b1, b2, b3  ;
printf ( "\nEnter names, prices & no. of pages of book \n"  ) ;
scanf ( "%c %f  %d", &b1.name, &b1.price, &b1.pages ) ;
printf ( "\nThe values entered by the USER " ) ;
printf ( "\n%c\t%.2f\t%d", b1.name, b1.price,   b1.pages ) ;

//  3
printf ( "\nAddress(memory) of name => %d", &b1.name) ;
printf ( "\nAddress(memory) of price => %d", &b1.price) ; 
printf ( "\nAddress(memory) of page => %d", &b1.pages) ;
//  2
struct Point {
int x;
int y;
};
struct Point p1 = {10, 20};
struct Point p2 = p1;
printf("\n p2.x = %d, p2.y = %d", p2.x, p2.y); getchar();
return 0;
}

Output: -
 

















PRACTICAL-25
Wap to show how initialization is done in an array of structure

Code: - 
#include <stdio.h> 
#define MAX_DATA 3
struct DATABASE 
{ 
 char name[100]; 
int roll; 
}; 
int main() 
{ 
 struct DATABASE data[MAX_DATA]; 
int i; 
 printf("Enter %d Student details\n", MAX_DATA); 
 for ( i = 0; i < MAX_DATA; i++ ) 
 { 
 printf("Student %d name = ", (i + 1)); 
 gets(data[i].name); 
 printf("Student %d roll no: ", (i + 1)); 
 scanf("%d", &data[i].roll); 
 getchar(); 
 printf("\n"); 
 } 
 printf("Student details\n");\ 
 for ( i = 0; i < MAX_DATA; i++ ) 
 { 
 printf("Name => %s\n", data[i].name); 
 printf("Roll => %d\n", data[i].roll);} 
 return 0; 
}








Output: - 
 




















PRACTICAL-26
Wap to show nested structure.

Code: - 
#include<stdio.h> 
struct address 
{ 
 char city[20]; 
int pin; 
char phone[14]; 
}; 
struct student 
{ 
 char name[20]; 
struct address add; 
}; 
int main () 
{ 
 struct student stud; 
 printf("Enter student information (name , city , pin code , phone no.)\n"); 
 scanf("%s %s %d %s",stud.name,stud.add.city, &stud.add.pin, stud.add.phone); 
 printf("Student information =>\n"); 
 printf("name: %s\nCity: %s\nPincode: %d\nPhone: %s",stud.name,stud.add.city,stud.add.pin,stud.add.phone); 
 return 0; 
}

Output: - 
 


PRACTICAL-27
Wap to show address of each variable in union.

Code: - 
#include <stdio.h> 
union A 
{ 
 int i; 
int j; 
}; 
 
int main() 
{ 
 union A rec; 
 rec.i = 10; 
 rec.j = 20; 
 printf("Union values \n");\ 
 printf("number 1\t:\t%d\n", rec.i); 
 printf("number 2\t:\t%d\n", rec.j); 
 printf("address of\t'i'\t=\t%p\n", (void *)&rec.i); 
 printf("address of\t'j'\t=\t%p\n", (void *)&rec.j); 
 return 0; 
}

Output: - 
 


	PRACTICAL-28
Wap to show how to initialize their member of a union and check their address.

Code: - 

#include <stdio.h> 
union A 
{ 
 int i; 
}; 
 
int main() 
{ 
 union A rec = {100}; 
 printf("Union values \n"); 
 printf("number 1\t:\t%d\n", rec.i); 
 printf("address of\t'i'\t=\t%p\n", (void *)&rec.i); 
 return 0; 
}



Output: - 


 





PRACTICAL-29
Wap to demonstrate storage classes- 
(i)	Static 
(ii)	Register 
(iii)	Automatic 


Code: - 
#include <stdio.h> 
void func() 
{ 
 auto i = 1; 
 static int j = 1; 
 i = i + 1; 
 j = j + 1; 
 printf("i\t=\t%d\n",i); 
 printf("j\t=\t%d\n",j); 
} 
int main() 
{ 
register int k ; 
func(); 
 func(); 
 func(); 
 for(k = 1;k<=5;k++) 
 { 
 printf("%d\t",k); 
 } 
 return 0; 
}

Output: - 
     
PRACTICAL- 30
Wap to open and close the file.

Code: - 
#include <stdio.h> 
 main() { 
 FILE *fp; 
 fp = fopen("recurrsio.c", "w+"); 
 fprintf(fp, "hello world\n"); 
 fputs("hello world\n", fp); 
 fclose(fp);
output: - 

 


 





















PRACTICAL-31
Wap to write and read any text into the file by using the functions fputc() and fgetc().

Code: - 
#include <stdio.h>
int main() { FILE *f;
char s;
f = fopen("new.txt", "w"); fputc('A',f);
fclose(f); f=fopen("new.txt","r");
while((s=fgetc(f))!=EOF) {
printf("%c",s);
}
fclose(f); return 0;
}


Output: -



 















	PRACTICAL-32
Wap to input a line into the file and display its contents.

Code: - 
#include <stdio.h> 
#include <stdlib.h> 
int main() {
char sentence[100];
char c[1000]; FILE *fp;
fp = fopen("file.txt", "w"); 
if (fp == NULL) {
printf("Error!"); 
exit(1);
}
printf("Enter a sentence =\n"); 
fgets(sentence, sizeof(sentence), stdin); 
fprintf(fp, "%s", sentence);
fclose(fp);
if((fp = fopen("file.txt", "r")) == NULL)
 { printf("Error! opening file");
exit(1);
}
fscanf(fp, "%[^\n]", c); printf("Display content ...:\n%s", c); fclose(fp);
return 0;
}
Output: -

 


PRACTICAL-33
Wap to show the use of fscanf() and fprintf().

Code: - 
#include <stdio.h>
int main(){
FILE *fp; char A[255];
fp = fopen("file.txt", "w"); 
fprintf(fp, "hello"); 
fclose(fp);
fp = fopen("file.txt", "r");
while(fscanf(fp, "%s", A)!=EOF){ printf("%s ", A);
}
fclose(fp);
}

Output: -
 




















PRACTICAL-34
Wap to illustrate ftell() and fseek().

Code: - 
#include<stdio.h>
int main()
{
FILE *fp;
fp = fopen("test.txt", "r"); 
fseek(fp, 0, SEEK_END); 
printf("%ld", ftell(fp)); 
return 0;
}



Output: -

 



















PRACTICAL-35
Wap to illustrate the rewind() function.

Code: - 
#include<stdio.h>
int main(){ FILE *fp; char A;
fp=fopen("file.txt","r");
while((A=fgetc(fp))!=EOF){
printf("%c",A);
}
rewind(fp); 
while((A=fgetc(fp))!=EOF){
printf("%c",A);
}
fclose(fp); 
return 0;
}


Output: -



 

















PRACTICAL-36
Wap to illustrate fwrite and fread().

Code:- 
#include<stdio.h> 
#include<string.h> 
int main () {
FILE *fp;
char c[] = "hi this is a c program";
char A[100];
fp = fopen("file.txt", "w+"); 
fwrite(c, strlen(c) + 1, 1, fp);
fseek(fp, 0, SEEK_SET); 
fread(A, strlen(c)+1, 1, fp);
printf("%s\n", A); 
fclose(fp); 
return(0);
}



Output: -

 	











                   PRACTICAL-37
Wap to demonstrate the concept of enum datatype.

Code:-


#include <stdio.h>

enum week {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

int main()
{
enum week today; today =Thursday;
printf("Day %d",today+1); return 0;
}

Output: - 

 





















PRACTICAL-38
Wap to demonstrate the concept of structure within a function.
(i)	Single variable 
(ii)	Entire structure.

Code: - 

1.
include <stdio.h>
struct student { char name[50]; int age;
};
void display(struct student s);
int main() 
{
    struct student s1; 
        printf("Enter name: ");
        scanf("%[^\n]%*c", s1.name);
        printf("Enter age: "); 
        scanf("%d", &s1.age); display(s1);
    return 0;
}
void display(struct student s) 
{ 
    printf("\nDisplaying information\n");
    printf("Name: %s", s.name);
    printf("\nAge: %d", s.age);
}


 

2) #include <stdio.h>
typedef struct Complex
{
float real;
float imag;
} complex;

void addNumbers(complex c1, complex c2, complex *result);

int main()
{
complex c1, c2, result;

    printf("For first number,\n");
    printf("Enter real part: "); 
    scanf("%f", &c1.real);
    printf("Enter imaginary part: ");
    scanf("%f", &c1.imag);

    printf("For second number, \n");
    printf("Enter real part: "); 
    scanf("%f", &c2.real);
    printf("Enter imaginary part: ");
    scanf("%f", &c2.imag);

addNumbers(c1, c2, &result); 
    printf("\nresult.real = %.1f\n", result.real);
    printf("result.imag = %.1f", result.imag);

    return 0;
}
void addNumbers(complex c1, complex c2, complex *result)
{
result->real = c1.real + c2.real; result->imag = c1.imag + c2.imag;
}







 

PRACTICAL-39
Wap to demonstrate passing arguments in main functions.

Code:- 


#include <stdio.h>
int main(int argc, char *argv[])
{
argc = 3; if(argc>1)
printf("Hi , %s",argv[6] = "Himanshu"); 
return 0;
}

Output: -
 




















                             Practical 40

Ques . Wap using call by value method


#include<stdio.h>
#include<conio.h>
void swap(int *, int *);
int main()
{
    int a,b;
    
    printf("\nEnter value of a and b:");
    scanf("%d%d",&a,&b);
    printf("\nBefore Swapping a=%d and b=%d",a,b);
    swap(&a,&b);
    printf("\n\nAfter swapping a=%d and b=%d",a,b);
    
    return 0;
}
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

Output:
 












                           Practical 41
Ques. WAP using call by reference method
Code:
#include<stdio.h>
#include<conio.h>
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int a,b;
    
    printf("\nEnter first number: ");
    scanf("%d",&a);
    printf("\nEnter second number: ");
    scanf("%d",&b);
    printf("\nBefore swapping, value of a: %d and value of b: %d",a,b);
    swap(&a,&b);
    printf("\nAfter swapping, value of a: %d and value of b: %d",a,b);
    
    return 0;
}


Output:
 




		Practical 42
Ques . Wap to find the factorial of a number   using   recursion method 

Code:
#include<stdio.h>
#include<conio.h>
int fact(int num){
    if(num==0 || num==1){
        return 1;
    }
    else{
        return num*fact(num-1);
    }
}
int main(){ 
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    printf("the factorial of %d is %d",a,fact(a));
    return 0;
}


Output:
  





