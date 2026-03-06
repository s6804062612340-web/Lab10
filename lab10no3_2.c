#include <stdio.h> 
#include <stdlib.h> 

struct Books{ 
    int BookID; 
    char BookTitle[50]; 
} ComputerBook;

void DisplayData(struct Books CBook); 
void DisplayData2(struct Books *CBook);


int main() { 
    printf("Enter Book ID :");      
    scanf("%d",&ComputerBook.BookID); 
    printf("Enter Book Title :");   
    scanf("%s",ComputerBook.BookTitle); 
    DisplayData(ComputerBook); // ส่งข้อมูลไปยังฟังก์ชัน DisplayData 
    DisplayData2(&ComputerBook);

return 0; 
} 

void DisplayData(struct Books CBook){ 
    printf("Book ID : %d \n",CBook.BookID); 
    printf("Book Title : %s \n",CBook.BookTitle); 
} 

void DisplayData2(struct Books *CBook){ 
printf("Book ID : %d \n",(*CBook).BookID); 
printf("Book Title : %s \n",CBook->BookTitle); 
} 



/*

ทดสอบรันโปรแกรมและเขียนผลลัพท์พร้อมอธิบายโปรแกรม 
void DisplayData(struct Books CBook) คือ ฟังก์ชันที่ชื่อ DisplayData โดยรับข้อมูลชนิด Struct  โดยไม่มี Return และฟังก์ชันนี้ทำหน้าที่แสดงข้อมูลของ struct ที่รับเข้ามา
พารามิเตอร์ที่รับเข้ามาคือ Struct Books CBook โดยชื่อ Local ในฟังก์ชั้นนี้คือ CBook  โดยเป็นการ Passing by value 
โดย Struck มีข้อมูล คือ int(BooKID) และ Char array(BookTitle)

ทดสอบรันโปรแกรมและเขียนผลลัพท์พร้อมอธิบายโปรแกรม
(*CBook).BookID คือ เอาค่า Address ที่ Pointer ชี้อยู่ของ Struct Book และใช้ . เพื้่อบอกว่าเอาค่าของข้อมูลตัวไหนใน Struct ComputerBook โดยในที่นี้คือเอา BookID
CBook->BookTitle คือ  เป็นการใช้ -> Pointer รูปแบบหนึ่ง ซึ่งจะไปหาที่อยู่ของข้อมูลใน Struct ที่รับเข้ามาและไปเอาที่อยู่ข้อมูลคือ BookTitle ที่อยู้ใน Struct อีกที
*/  
