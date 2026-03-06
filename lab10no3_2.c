#include <stdio.h> 
#include <stdlib.h> 

struct Books{ 
    int BookID; 
    char BookTitle[50]; 
} ComputerBook;

void DisplayData2(struct Books *CBook);

int main() { 
    printf("Enter Book ID :");      
    scanf("%d",&ComputerBook.BookID); 
    printf("Enter Book Title :");   
    scanf("%s",ComputerBook.BookTitle);
    DisplayData2(&ComputerBook);
    return 0; 
} 

void DisplayData2(struct Books *CBook){ 
    printf("Book ID : %d \n",(*CBook).BookID); 
    printf("Book Title : %s \n",CBook->BookTitle); 
} 

/*
ทดสอบรันโปรแกรมและเขียนผลลัพท์พร้อมอธิบายโปรแกรม
(*CBook).BookID คือ เอาค่า Address ที่ Pointer ชี้อยู่ของ Struct Book และใช้ . เพื้่อบอกว่าเอาค่าของข้อมูลตัวไหนใน Struct ComputerBook โดยในที่นี้คือเอา BookID
CBook->BookTitle คือ  เป็นการใช้ -> Pointer รูปแบบหนึ่ง ซึ่งจะไปหาที่อยู่ของข้อมูลใน Struct ที่รับเข้ามาและไปเอาที่อยู่ข้อมูลคือ BookTitle ที่อยู้ใน Struct อีกที
*/  
