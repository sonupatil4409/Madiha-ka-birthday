
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

// Simple Calculator
void calculator() {
    double num1, num2;
    char operator;

    printf("Enter operator (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator) {
        case '+': printf("%.2lf + %.2lf = %.2lf
", num1, num2, num1 + num2); break;
        case '-': printf("%.2lf - %.2lf = %.2lf
", num1, num2, num1 - num2); break;
        case '*': printf("%.2lf * %.2lf = %.2lf
", num1, num2, num1 * num2); break;
        case '/': 
            if (num2 != 0) 
                printf("%.2lf / %.2lf = %.2lf
", num1, num2, num1 / num2);
            else
                printf("Error! Division by zero.
");
            break;
        default: printf("Invalid operator!
");
    }
}

// Quadratic Equation Solver
void quadraticEquation() {
    double a, b, c, discriminant, root1, root2;

    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different: %.2lf, %.2lf
", root1, root2);
    } else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and the same: %.2lf
", root1);
    } else {
        printf("Roots are complex and different.
");
    }
}

// Electricity Bill Calculator
void electricityBill() {
    double units, bill;

    printf("Enter units consumed: ");
    scanf("%lf", &units);

    if (units <= 50) {
        bill = units * 0.50;
    } else if (units <= 150) {
        bill = 50 * 0.50 + (units - 50) * 0.75;
    } else if (units <= 250) {
        bill = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;
    } else {
        bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
    }
    printf("Electricity Bill: %.2lf
", bill);
}

// Matrix Multiplication
void matrixMultiplication() {
    int m, n, p, q;
    printf("Enter dimensions of first matrix (rows columns): ");
    scanf("%d %d", &m, &n);
    printf("Enter dimensions of second matrix (rows columns): ");
    scanf("%d %d", &p, &q);

    if (n != p) {
        printf("Matrix multiplication not possible.
");
        return;
    }

    int mat1[m][n], mat2[p][q], result[m][q];

    printf("Enter elements of first matrix:
");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements of second matrix:
");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("Resultant Matrix:
");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d ", result[i][j]);
        }
        printf("
");
    }
}

// Binary Search
void binarySearch() {
    int n, key, low, high, mid;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements (sorted): ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter key to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;
    mid = (low + high) / 2;

    while (low <= high) {
        if (arr[mid] == key) {
            printf("Element found at index %d
", mid);
            return;
        }
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
        mid = (low + high) / 2;
    }
    printf("Element not found.
");
}

// Student Average Marks using Structures
struct Student {
    char name[50];
    int marks[5];
    float average;
};

void studentAverage() {
    struct Student s;
    int sum = 0;

    printf("Enter student name: ");
    scanf("%s", s.name);
    printf("Enter marks for 5 subjects: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &s.marks[i]);
        sum += s.marks[i];
    }

    s.average = sum / 5.0;
    printf("Student: %s
Average Marks: %.2f
", s.name, s.average);
}

// String Operation Functions
void stringOperations() {
    char str1[100], str2[100];

    printf("Enter string 1: ");
    scanf("%s", str1);
    printf("Enter string 2: ");
    scanf("%s", str2);

    printf("Concatenated String: %s
", strcat(str1, str2));
    printf("Length of String 1: %zu
", strlen(str1));
    printf("Length of String 2: %zu
", strlen(str2));
    printf("Comparison of Strings: %d
", strcmp(str1, str2));
}

int main() {
    int choice;
    printf("Choose program to run:
1. Simple Calculator
2. Quadratic Equation Solver
3. Electricity Bill Calculator
4. Matrix Multiplication
5. Binary Search
6. Student Average Marks
7. String Operations
");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1: calculator(); break;
        case 2: quadraticEquation(); break;
        case 3: electricityBill(); break;
        case 4: matrixMultiplication(); break;
        case 5: binarySearch(); break;
        case 6: studentAverage(); break;
        case 7: stringOperations(); break;
        default: printf("Invalid choice!
"); break;
    }
    return 0;
}
