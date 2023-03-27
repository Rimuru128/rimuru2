#include<stdio.h>
int main()
{
    int choice,ch_1,ch_2,ch_3,ch_4,ch_5,ch_6,ch_7,ch_8,ch_9,ch_10,ch_11;
    printf("1.ch_1\n2.ch_2\n3.ch_3\n4.ch_4\n5.ch_5\n6.ch_6\n7.ch_7\n8.ch_8\n9.ch_9\n10.ch_10\n11.ch_11\n");
    printf("Enter your choice:>>");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("p_1 hello world\np_2 addition\np_3 out from usar\np_4 lenth and breath\np_5 circle radious and volume\np_6 celsius to feranite\np_7 loan\n");
        printf("Enter your choice:>>");
        scanf("%d",&ch_1);
        switch (ch_1)
        {
        case 1:
            printf("#include<stdio.h>\n#include<conio.h>\nint main()\n{\n\t printf('hellow');\n \t getch();\n \t return 0;\n}\n");
            break;
        case 2:
            printf("#include<stdio.h>\nint main()\n{\n \tint a = 10;\n \tint b = 20;\n \tprintf('adition of %d',a + b);\n \treturn 0;\n}\n");
            break;
        case 3:
            printf("#include<stdio.h>\nint main()\n{\n\t int a,b;\n \t printf('Enter the value of A:>>',a);\n \t scanf('%d',&a);\n \t printf('Enter the value of b:>>',b);\n \t scanf('%d',&b);\n \t printf('adition of %d',a + b);\n \t return 0;\n}\n");
            break;
        case 4:
            printf("#include<stdio.h>\n#include<conio.h>\nint main()\n{\n\t int a,b;\n\t  printf('Enter the lenth :>>');\n\tscanf('%d',&a);\n\t printf('Enter the breath:>>');\n\tscanf('%d',&b);\n\t printf('ans is =%d',a*b);\n\t return 0;\n}\n");
            break;
        case 5:
            printf("#include<stdio.h>\n#include<conio.h>\nint main()\n{\n\t int r=3;\n\t float pi=3.14;\n\t printf('tne radious of circle =%f',pi*r*r);\n\t int h=3;\n\t printf('the volume of circle=%f',pi*r*r*h);\n\t return 0;\n}\n");
            break;
        case 6:
            printf("#include<stdio.h>\n#include<conio.h>\nint main()\n{\n\tfloat c,f;\n\t printf('enter the temprechar:>>');\n\t scanf('%f',&c);\n\t printf('ans is:>>%f',f=(c*9/5)+32); \n\t return 0;\n}\n");
            break;
        case 7:
            printf("#include<stdio.h>\n#include<conio.h>\nint main()\n{\n\tint p,r,t,i;\n\t printf('enter the price:>>');\n\t scanf('%d',&p);\n\t printf('enter the rate:>>');\n\t scanf('%d',&r);\n\t printf('enter the time:>>');\n\t scanf('%d',&t);\n\t printf('ans is=%d',i=(p*r*t)/100);\n\t return 0;\n}\n");
            break;
        default:
            printf("invalid choice");
            break;
        }
        break;
    case 2:
        printf("p_1 (+-*/)\np_2 %97 rmabing\np_3 3*x/y-z+k\n");
        printf("Enter your choice:>>");
        scanf("%d",&ch_2);
        switch (ch_2)
        {
        case 1:
            printf("#include<stdio.h>\n#include<conio.h>\nint main()\n{\n\tint a,b;\n\tprintf('Enter the numbar of A:>>');\n\tscanf('%d',&a);\n\tprintf('Enter the numbar of B:>>');\n\tscanf('%d',&b);\n\tprintf('the value of a+b is=%d',a+b);\n\tprintf('the value of a-b is=%d',a-b);\n\tprintf('the value of a*b is=%d',a*b);\n\tprintf('the value of a/b is=%d',a/b);\n\treturn 0;\n}\n");
            break;
        case 2:
            printf("#include<stdio.h>\n#include<conio.h>\nint main()\n{\n\tint num;\n\tprintf('enter the numbar:>>');\n\tscanf('%d',&num);\n\tprintf('97 divetion to rmabing=%d',num%97);\n\treturn 0;\n}\n");
            break;
        case 3:
            printf("#include<stdio.h>\n#include<conio.h>\nint main()\n{\n\tint x=2,y=3,z=3,k=1;\n\tint resalt=3*x/y-z+k;\n\tprintf('the ans is =%d',resalt);\n\treturn 0;\n}\n");
            break;
        default:
            printf("invalid choice");
            break;
        }
    case 3:
        printf("p_1 even odd\np_2 drive not drive\np_3 && vippass\np_4 marothon\np_5 (a<5)?p():p();\np_6 reting (1-5)\np_7 marks");
        printf("Enter your choice:>>");
        scanf("%d",&ch_3);
        switch (ch_3)
        {
        case 1:
            printf("#include<stdio.h>\n#include<conio.h>\nint main()\n{\n \tint a,b;\n \tprintf('Enter the numbar:>>');\n \tscanf('%d',&a);\n \tif(a%2==0)\n \t{\n \t\tprintf('%d is even',a);\n \t}\n \telse\n \t{\n \t\tprintf('%d is odd',a);\n \t}\n return 0;\n}\n");
            break;
        case 2:
            printf("#include<stdio.h>\n#include<conio.h>\nint main()\n{\n\tint age;\n\tprintf('Enter your age:>>');\n\tscanf('%d',&age);\n\tif(age<18)\n\t{\n\t\tprintf('you can not drive hahaha',age);\n\t}\n\telse\n\t{\n\t\tprintf('you can dive',age);\n\t}\n\tif(age==50)\n\t{\n\t\tprintf('half century oho');\n\t}\n\treturn 0;\n}\n");
            break;
        case 3:
            printf("#include<stdio.h>\n#include<conio.h>\nint main()\n{\n\tint age,vippass=0;\n\t//vippass=1;\n\tprintf('Enter your age:>>');\n\tscanf('%d',&age);\n\tif((age<=70 && age>=18)||vippass==1)\n\t{\n\t\tprintf('you can drive',age);\n\t}\n\telse\n\t{\n\t\tprintf('you can not dive hahaha',age);\n\t}\n\treturn 0;\n}\n");
            break;
        case 4:
            printf("#include<stdio.h>\n#include<conio.h>\nint main()\n{\n\tint num;\n\tprintf('enter your marothon pales:>>');\n\tscanf('%d',&num);\n\tif (num==1)\n\t{\n\t\tprintf('congresh you are in first pleas');\n\t}\n\telse if (num==2)\n\t{\n\t\tprintf('good you are in secand pleas');\n\t}\n\telse if (num==3)\n\t{\n\t\tprintf('not bad you are in thred pleas');\n\t}\n\telse\n\t{\n\t\tprintf('you are in not right plase go to home noobe');\n\t}\n\treturn 0;\n}\n");
            break;
        case 5:
            printf("#include<stdio.h>\n#include<conio.h>\nint main()\n{\n\tint a;\n\tprintf('Enter your numbar:>>');\n\tscanf('%d',&a);\n\t(a<5)?printf('your numbar is less then 5'):printf('your numbar is mor than 5');\n\treturn 0;\n}\n");
            break;
        case 6:
            printf("#include<stdio.h>\n#include<conio.h>\nint main()\n{\n\tint rating;\n\tprintf('enter the reting (1-5):>>');\n\tscanf('%d',&rating);\n\tswitch(rating)\n\t{\n\t\tcase 1:\n\t\t\tprintf('your rating is 1 so bad :(');\n\t\t\tbreak;\n\t\tcase 2:\n\t\t\tprintf('your rating is 2 not good at all:(');\n\t\t\tbreak;\n\t\tcase 3:\n\t\t\tprintf('your rating is 3 not so bad but kind a bad:|');\n\t\t\tbreak;\n\t\tcase 4:\n\t\t\tprintf('your rating is 4 goog :)');\n\t\t\tbreak;\n\t\tcase 5:\n\t\t\tprintf('your rating is 5 it's asom :)');\n\t\t\tbreak;\n\t\tdefault:\n\t\t\tprintf('you even don't konw how rating wark go to home you noobe');\n\t\t\tbreak;\n\t}\n\treturn 0;\n}\n");
            break;
        case 7:
            printf("#include<stdio.h>\n#include<conio.h>\nint main()\n{\n\tint g,choice;\n\tprintf('1. 100-902. 90-803. 80-704. 70-605. 60-0Enter your 10th marks:>>');\n\tscanf('%d',&choice);\n\tswitch (choice)\n\t{\n\tcase 1:\n\t\tprintf('you have A grade');\n\t\tbreak;\n\tcase 2:\n\t\tprintf('you have B geade');\n\t\tbreak;\n\tcase 3:\n\t\tprintf('you have C grade');\n\t\tbreak;\n\tcase 4:\n\t\tprintf('you have D gread');\n\t\tbreak;\n\tcase 5:\n\t\tprintf('you fail in exam');\n\t\tbreak;\n\tdefault:\n\t\tprintf('choice 1-2-3-4-5');\n\t\tbreak;\n\t}\n\treturn 0;\n}\n");
            break;
        default:
            printf("invalid choice");
            break;
        }
    
    default:
        break;
    }
    printf("have fun");
    return 0;
}
