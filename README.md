![](file:///home/arnob/.config/marktext/images/2022-09-01-21-37-15-image.png?msec=1662126601298)

[Facebook post link](https://www.facebook.com/phitron.io/posts/pfbid02wspsWHLvQq2CmuuvXKQJbrbbU1pucw7Ly8UBjMGnc9AvtSEs9XHdEPBwBrztSwfwl)

Task 01 : Reading blog on [প্রোগ্রামিং ও প্রোগ্রামিং ল্যাংগুয়েজ কি?](https://web.programming-hero.com/blog/post/basic-programming-hero-tech/how-to-start-programming)

Task 02 : Install and setup compiler

        i. vscode     ([youtube video](https://youtu.be/77v-Poud_io))

        ii. gcc install and add to environment path (optional) ([youtube video](https://youtu.be/E9WDkJ7i7mI))

        iii. code blocks ([youtube video](https://youtu.be/axANBRPWXAQ))

        iv. online compiler ( [programiz](https://www.programiz.com/c-programming/online-compiler/) , [repl.it](https://replit.com/) etc.)     ([Youtube video](https://youtu.be/VA3CusKRwUw))

Task 03 : variable

> (i)
> 
> > \> watch and code video no. [11](https://youtu.be/wEWHq8FzdMw),[12]([C programming Bangla Tutorial 5.11 : Comments and Escape sequence - YouTube](https://youtu.be/VPPQaMkRssM)),[14]([C programming Bangla Tutorial 5.13 : Keyword, Variable, data type (part-1) - YouTube](https://youtu.be/HWyEt9Q_2pE)) from this [playlist](https://www.youtube.com/watch?v=6nOavbvFvbY&list=PLgH5QX0i9K3pCMBZcul1fta6UivHDbXvz)

#### First program : Print your name

```c
#include <stdio.h>
int main()
{
    printf("Hello there , I am arnob\n");
    return 0;
}
```

#### Output :

![](file:///home/arnob/workss/3o_days_C_program_phitron/day_01/program_01.png?msec=1662126601268)

#### Second program : Single line comment

```c
// using single line comment
// comment won't compile
// using comment makes your code more readable to others !
#include <stdio.h>
int main()
{
    printf("Hello there , I am arn0b69\n"); 
    // you can add comment in any place
    printf("Hey man! what's going on ?\n"); 
    // \n is used to print a new line or linebreak

    return 0;
}
```

#### Output :

![](file:///home/arnob/workss/3o_days_C_program_phitron/day_01/program_02.png?msec=1662126601268)

#### Third Program : Multi line comments

```c
/*
This is an example of multiline comments !

important notice :
>> Nested commenting or putting a comment to inside another comment will give you error.


*/

#include <stdio.h>
int main()
{
   printf("Do you know?\n");
   printf("Single line comment was created by C++ . But we can also use in c !!!\n");

    return 0;
}
```

#### Output :

![](file:///home/arnob/workss/3o_days_C_program_phitron/day_01/program_03.png?msec=1662126601269)

#### Fourth Program : Escape Sequence

```c
/*
In this program i will use some commonly used Escape Sequence
*/
#include <stdio.h>
int main()
{
    printf("What is Escape Sewuences ?\n");
    printf("An escape sequence in C language is a sequence of characters that doesn't represent itself when used inside string literal or character.\nIt is composed of two or more characters starting with backslash \\ For example: \\n represents new line.\n");
    printf("\v");

    printf("Commonly used escape sequences are\n");
    printf("\\b for Backspace\n");
    printf("\\f for Form Feed\n");
    printf("\\n for New Line\n");
    printf("\\t for Tab (Horizontal) \n");
    printf("\\v for Vertical Tab \n");
    printf("\\\\ for Backslash\n");
    printf("\\\' for Single Qoute\n");
    printf("\\\" for Double Qoute\n");
    printf("\\? for Question Mark\n");
    printf("\v");

    printf("For more information do a google search \n");

    return 0;
}
```
