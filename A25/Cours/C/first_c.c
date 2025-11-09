#include <stdio.h>
#include <stdio.h>

// LEVEL 1
void evenOrOdd() {
    // TODO: Ask user for a number and print if it's even or odd
    int Number;
    printf("Enter the number : ");
    scanf("%d", &Number);
    if(Number%2==0){
        printf("ur Number is even");
    }else{
        printf("your number is odd");
    }
}

void sumToN() {
    // TODO: Ask for N and print the sum from 1 to N
    int N,sumN=0;
    printf("Give one Number : ");
    scanf("%d", &N);
    for(int i=1;i<=N;i++){
        sumN+=i;
    }
    printf("La somme des nombre est : %d", sumN);
}

void multiplicationTable() {
    // TODO: Ask for a number and print its multiplication table up to 10
    int Nombre;
    printf("Donner un nombre entre 1-10 : ");
    scanf("%d", &Nombre);
    if(Nombre>=1 && Nombre<=10){
        for(int i =1;i<=10;i++){
            printf("%d x %d = %d\n", Nombre,i,Nombre*i);
        }
    }else{
        printf("!!! Le nombre nest pas compries entre 1-10 !!!");
    }
}

void largestOfThree() {
    // TODO: Ask for 3 numbers and print the largest
    int Num1,Num2,Num3;
    printf("Donner 3 nombre ");
    scanf("%d %d %d",&Num1,&Num2,&Num3);
    if(Num1>=Num2&&Num1>=Num3){
        printf("%d , est le plus grand Nombre ", Num1);
    }else if(Num2>=Num3 && Num2>=Num1){
        printf("%d , Est le plus grand Nombre", Num2);
    }else{
        printf("%d , Est le plus grand Nombres", Num3);
    }
}

void factorial() {
    // TODO: Compute factorial using a loop
    int n, result=1;
    printf("Enter le numbre pour factoriser ");
    scanf("%d", &n);
    for (int i=1; i<=n;i++){
        result=result*i;
    }
    printf("%d Est la factorial de %d", result,n);
}

// LEVEL 2
void findMaxInArray() {
    // TODO: Read array elements and print the maximum
    int Dim;
    printf("Donner la dimention du tableau:");
    scanf("%d", &Dim);
    int n[Dim];
    printf("Entrer les element du tableau: ");
    for(int i=0; i<=Dim;i++){
        printf("n[%d] = ", i);
        scanf("%d", &n[i]);
    }
    int max=n[0];
    for(int i=0;i<Dim;i++){
        if(n[i]>max){
            max=n[i];
        }
    }
    printf("Le max est %d\n",max);
}

void countPosNegZero() {
    // TODO: Count how many numbers are positive, negative, or zero
    int pos=0,neg=0,zero=0;
    int dim;
    printf("Donner la taille du tableau : ");
    scanf("%d", &dim);
    int t[dim];
    for(int i=0;i<dim;i++){
        printf("t[%d]= ",i);
        scanf("%d", &t[i]);
    }
    for(int i=0;i<dim;i++){
        if(t[i]>0){
            pos++;
        }else if (t[i]<0){
            neg++;            
        }else{
            zero++;
        }
    }
    printf("Positif: %d\n", pos);
    printf("Negatifs: %d\n", neg);
    printf("Zeros: %d\n", zero);
}

void reverseString() {
    // TODO: Reverse a string manually (without strrev)
    
}

void palindromeCheck() {
    // TODO: Check if a word is a palindrome
}

// LEVEL 3
int isPrime(int n) {
    // TODO: Return 1 if prime, else 0
    return 0;
}

int power(int base, int exp) {
    // TODO: Return base^exp without using pow()
    return 0;
}

void swapNumbers() {
    // TODO: Swap two numbers (with a temp variable)
}

// LEVEL 4
void printAddress() {
    // TODO: Print value and address of a variable
}

void swapPointers() {
    // TODO: Swap two integers using pointers
}

void sumArrayPointer() {
    // TODO: Compute sum of array using pointer arithmetic
}

int main() {
    printf("=== C Practice Menu ===\n");
    printf("1 Even or Odd\n");
    printf("2 Sum 1 to N\n");
    printf("3 Multiplication Table\n");
    printf("4 Largest of Three\n");
    printf("5 Factorial\n");
    printf("6 ArrayMax\n");
    printf("7 count PNZ\n");
    printf("Select option: ");
    

    int choice;
    scanf("%d", &choice);

    switch(choice) {
        case 1: evenOrOdd(); break;
        case 2: sumToN(); break;
        case 3: multiplicationTable(); break;
        case 4: largestOfThree(); break;
        case 5: factorial(); break;
        case 6: findMaxInArray(); break;
        case 7: countPosNegZero(); break;
        default: printf("Invalid option.\n"); break;
    }

    return 0;
}