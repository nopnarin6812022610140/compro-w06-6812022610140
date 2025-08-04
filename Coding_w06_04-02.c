#include <stdio.h>
#include <math.h>//เรียกใช้คำสั่งคณิตศาสตร์

int main(){
    double x=20.0;//เก็บค่าตัวแปร
    double a=10.0;//เก็บค่าตัวแปร
    int y=2,z=3;//เก็บค่าตัวแปร
    double total=100.0;//เก็บค่าตัวแปร
    double price=15.0,quantity=3.0,discount=5.0;//เก็บค่าตัวแปร
    double rate=10.0;//เก็บค่าตัวแปร
    double score=50.0;//เก็บค่าตัวแปร
    int mistake=2;//เก็บค่าตัวแปร
    double penalty=2.5;//เก็บค่าตัวแปร

    x-=4.0;// x = x - 4.0
    x*=6.5;// x = 6.5 * x
    x=fmod(x,(y+z*a));// x = x % (y + z * a)
    x/=(2.0*x);// x = x / (2.0 * x)
    total+=(price*quantity-discount);// total = total + (price * quantity - discount)
    x*=(1+rate/100.0);// x = x * (1 + rate / 100.0)
    score-=(mistake*penalty);// score = score - (mistake * penalty)

    printf("x=%.4f\n",x);// แสดงผลลัพธ์ x โดยใช้ทศนิยม 4 ตำแหน่ง
    printf("total=%.2f\n", total);// แสดงผลลัพธ์ total โดยใช้ทศนิยม 2 ตำแหน่ง
    printf("score=%.2f\n", score);// แสดงผลลัพธ์ score โดยใช้ทศนิยม 2 ตำแหน่ง

    return 0;
}