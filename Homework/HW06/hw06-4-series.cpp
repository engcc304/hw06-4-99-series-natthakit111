/*
    จงเขียนโปรแกรมภาษาซีเพื่อรับข้อมูลจากผู้ใช้เป็นตัวเลข และให้แสดงชุดอนุกรมตามจำนวนตัวเลขที่กรอก พร้อมกับแสดงผลรวมของชุดอนุกรมนี้ 9 + 99 + 999 + 9999 + 9999 + .... เช่น ผู้ใช้กรอกเลข 5 ให้แสดงชุดอนุกรมคือ 9 + 99 + 999 + 9999 + 99999 และแสดงผลรวมคือ 111105
    (โจทย์ข้อนี้ให้ใช้ For Loop เท่านั้น)
    
    Test case:
        Enter number :
            5
    Output:
        Series = 9 + 99 + 999 + 9999 + 99999
        Sum = 111105

    Test case:
        Enter number :
            7
    Output:
        Series = 9 + 99 + 999 + 9999 + 99999 + 999999 + 9999999
        Sum = 11111103
*/
#include <stdio.h>

int main() {
    int num;
    
    printf("Enter number:\n");
    scanf("%d", &num);
    
    long long int sum = 0;
    long long int currentTerm = 0;
    
    printf("Series = ");
    for (int i = 1; i <= num; i++) {
        currentTerm = currentTerm * 10 + 9;
        
        if (i != 1) {
            printf(" + ");
        }
        printf("%lld", currentTerm);
        
        sum += currentTerm;
    }
    
    printf("\nSum = %lld\n", sum);
    
    return 0;
}


