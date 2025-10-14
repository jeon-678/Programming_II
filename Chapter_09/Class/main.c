#include <stdio.h>
#include <string.h>
#include "contact.h"

// struct contact(
//     char name[20];
//     char phone[20];
//     int ringtone;
// );

// typedef struct contact
// {
//     char name[20];
//     char phone[20];
//     int ringtone;
// }Contact;

Contact kim = { 0 };

int main(){
    Contact lee = {"LEE", "010-1234-5678", 1};

    Contact lee2 = { 0 };

    lee2 = lee;

    //lee2 = {"LEE2", "010-1234-1234", 2}; // 처음 선언한 게 아니기 때문에 오류가 생김

    strcpy(lee2.name, "LEE2"); // 이런식으로는 가능
    strcpy(lee2.phone, "010-1234-1234");

    return 0;
}