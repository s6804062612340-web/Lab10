#include <stdio.h> 
#include <stdlib.h> 

struct Books{ 
    int BookID; 
    char BookTitle[50]; 
} ComputerBook;

void DisplayData(struct Books CBook); 



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




/*

ทดสอบรันโปรแกรมและเขียนผลลัพท์พร้อมอธิบายโปรแกรม 
void DisplayData(struct Books CBook) คือ ฟังก์ชันที่ชื่อ DisplayData โดยรับข้อมูลชนิด Struct  โดยไม่มี Return และฟังก์ชันนี้ทำหน้าที่แสดงข้อมูลของ struct ที่รับเข้ามา
พารามิเตอร์ที่รับเข้ามาคือ Struct Books CBook โดยชื่อ Local ในฟังก์ชั้นนี้คือ CBook  โดยเป็นการ Passing by value 
โดย Struck มีข้อมูล คือ int(BooKID) และ Char array(BookTitle)

*/
