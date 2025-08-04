#include <stdio.h>

int main(){
    int i=1,j=2,k;//เก็บค่าตัวแปร
    
    printf("i=%d j=%d k=%d\n", i, j, k);//แสดงค่าตัวแปรทั้งหมด
    printf("k=%d",k=(i+j));//คำนวณค่า k จาก i + j
    printf(" ค่าตัวแปร i=%d j=%d k=%d\n", i, j, k);//แสดงค่าตัวแปรหลังคำนวณ
    printf("i=%d",i=i+(k*j));//คำนวณค่า i จาก i + (k * j)
    printf(" ค่าตัวแปร i=%d j=%d k=%d\n", i, j, k);//แสดงค่าตัวแปรหลังคำนวณ
    printf("j=%d",j=(i/2));//คำนวณค่า j จาก i / 2
    printf(" ค่าตัวแปร i=%d j=%d k=%d\n", i, j, k);//แสดงค่าตัวแปรหลังคำนวณ
    printf("k=%d",k=i%2);//คำนวณค่า k จาก i % 2
    printf(" ค่าตัวแปร i=%d j=%d k=%d\n", i, j, k);//แสดงค่าตัวแปรหลังคำนวณ
    printf("i=%d",i=(j+k)*3);//คำนวณค่า i จาก (j + k) * 3
    printf(" ค่าตัวแปร i=%d j=%d k=%d\n", i, j, k);//แสดงค่าตัวแปรหลังคำนวณ
    
    return 0;
}