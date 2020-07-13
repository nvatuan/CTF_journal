/* This is a translation of codechallenge2019_CTF3.b, generated by bftoc.py (by Paul Kaefer)
 * It was generated on Sunday, May 26, 2019 at 11:19PM
 */

#include <stdio.h>

#define size 1024
char tape[size];

const int DUMPMAX = 50;

void dump() {
    printf("DUMPING TAPE:\n");
    for (int i = 0; i < DUMPMAX; i++) {
        printf("%x%x ", (tape[i] & 0xF0) >> 4, tape[i] & 0x0F);
    }
    printf("\n");
    for (int i = 0; i < DUMPMAX; i++) {
        printf("%c  ", tape[i]);
    }
    printf("\n");
}

void main(void)
{
    int i = 0;

    /* Clearing the tape (array) */
    for (i=0; i<size; i++)
        tape[i] = 0;

    int ptr = 3;

    char s[] = "Enter key :$";
    int ps = 0;
    while(s[ps] != '$'){
        tape[ptr] = s[ps];
        ps++;
        ptr+=2;
    }
    s[ps] = '\0';

    char s2[] = "Wrong!$";

    ptr = 28;
    ps = 0;
    while(s2[ps] != '$'){
        tape[ptr] = s2[ps];
        ptr+=2;
        ps++;
    }
    s2[ps] = '\0';

    printf("%s\n", s);

    dump();
    

    tape[ptr] = getchar();
    ptr += 1;
    tape[ptr] = getchar();
    ptr += 1;
    tape[ptr] = getchar();
    ptr -= 2;

    dump();

    while (tape[ptr] != 0)
    {
        ptr += 3;
        tape[ptr] += 1;
        ptr += 1;
        tape[ptr] += 1;
        ptr -= 4;
        tape[ptr] -= 1;
    }
    ptr += 4;
    while (tape[ptr] != 0)
    {
        ptr -= 4;
        tape[ptr] += 1;
        ptr += 4;
        tape[ptr] -= 1;
    }
    ptr += 1;
    tape[ptr] += 9;
    while (tape[ptr] != 0)
    {
        ptr -= 1;
        tape[ptr] += 10;
        ptr += 1;
        tape[ptr] -= 1;
    }
    ptr -= 1;
    tape[ptr] += 8;
    ptr -= 1;
    while (tape[ptr] != 0)
    {
        tape[ptr] -= 1;
        ptr += 1;
        tape[ptr] -= 1;
        ptr -= 1;
    }
    tape[ptr] += 1;
    ptr += 1;
    while (tape[ptr] != 0)
    {
        ptr -= 1;
        tape[ptr] -= 1;
        ptr += 1;
        while (tape[ptr] != 0)
        {
            tape[ptr] -= 1;
        }
    }
    ptr -= 3;
    while (tape[ptr] != 0)
    {
        ptr += 3;
        tape[ptr] += 1;
        ptr += 1;
        tape[ptr] += 1;
        ptr -= 4;
        tape[ptr] -= 1;
    }
    ptr += 4;
    while (tape[ptr] != 0)
    {
        ptr -= 4;
        tape[ptr] += 1;
        ptr += 4;
        tape[ptr] -= 1;
    }
    ptr += 1;
    tape[ptr] += 10;
    while (tape[ptr] != 0)
    {
        ptr -= 1;
        tape[ptr] += 10;
        ptr += 1;
        tape[ptr] -= 1;
    }
    ptr -= 1;
    tape[ptr] += 2;
    ptr -= 1;
    while (tape[ptr] != 0)
    {
        tape[ptr] -= 1;
        ptr += 1;
        tape[ptr] -= 1;
        ptr -= 1;
    }
    tape[ptr] += 1;
    ptr += 1;
    while (tape[ptr] != 0)
    {
        ptr -= 1;
        tape[ptr] -= 1;
        ptr += 1;
        while (tape[ptr] != 0)
        {
            tape[ptr] -= 1;
        }
    }
    ptr -= 2;
    while (tape[ptr] != 0)
    {
        ptr += 3;
        tape[ptr] += 1;
        ptr -= 3;
        tape[ptr] -= 1;
    }
    ptr += 3;
    while (tape[ptr] != 0)
    {
        while (tape[ptr] != 0)
        {
            tape[ptr] -= 1;
        }
        ptr -= 2;
        while (tape[ptr] != 0)
        {
            ptr += 2;
            tape[ptr] += 1;
            ptr -= 1;
            tape[ptr] += 1;
            ptr -= 1;
            tape[ptr] -= 1;
        }
        ptr += 1;
        while (tape[ptr] != 0)
        {
            ptr -= 1;
            tape[ptr] += 1;
            ptr += 1;
            tape[ptr] -= 1;
        }
        ptr += 1;
        while (tape[ptr] != 0)
        {
            ptr -= 3;
            tape[ptr] += 1;
            ptr += 3;
            while (tape[ptr] != 0)
            {
                tape[ptr] -= 1;
            }
        }
    }
    ptr -= 2;
    while (tape[ptr] != 0)
    {
        tape[ptr] -= 1;
    }
    ptr -= 2;
    while (tape[ptr] != 0)
    {
        ptr += 2;
        tape[ptr] += 1;
        ptr += 1;
        tape[ptr] += 1;
        ptr -= 3;
        tape[ptr] -= 1;
    }
    ptr += 3;
    while (tape[ptr] != 0)
    {
        ptr -= 3;
        tape[ptr] += 1;
        ptr += 3;
        tape[ptr] -= 1;
    }
    ptr += 1;
    tape[ptr] += 9;
    while (tape[ptr] != 0)
    {
        ptr -= 1;
        tape[ptr] += 10;
        ptr += 1;
        tape[ptr] -= 1;
    }
    ptr -= 1;
    tape[ptr] += 9;
    ptr -= 1;
    while (tape[ptr] != 0)
    {
        tape[ptr] -= 1;
        ptr += 1;
        tape[ptr] -= 1;
        ptr -= 1;
    }
    tape[ptr] += 1;
    ptr += 1;
    while (tape[ptr] != 0)
    {
        ptr -= 1;
        tape[ptr] -= 1;
        ptr += 1;
        while (tape[ptr] != 0)
        {
            tape[ptr] -= 1;
        }
    }
    ptr -= 2;
    while (tape[ptr] != 0)
    {
        ptr += 3;
        tape[ptr] += 1;
        ptr -= 3;
        tape[ptr] -= 1;
    }
    ptr += 3;
    while (tape[ptr] != 0)
    {
        while (tape[ptr] != 0)
        {
            tape[ptr] -= 1;
        }
        ptr -= 2;
        while (tape[ptr] != 0)
        {
            ptr += 2;
            tape[ptr] += 1;
            ptr -= 1;
            tape[ptr] += 1;
            ptr -= 1;
            tape[ptr] -= 1;
        }
        ptr += 1;
        while (tape[ptr] != 0)
        {
            ptr -= 1;
            tape[ptr] += 1;
            ptr += 1;
            tape[ptr] -= 1;
        }
        ptr += 1;
        while (tape[ptr] != 0)
        {
            ptr -= 3;
            tape[ptr] += 1;
            ptr += 3;
            while (tape[ptr] != 0)
            {
                tape[ptr] -= 1;
            }
        }
    }
    ptr -= 2;
    while (tape[ptr] != 0)
    {
        tape[ptr] -= 1;
    }
    tape[ptr] += 1;
    ptr -= 1;
    while (tape[ptr] != 0)
    {
        ptr += 3;
        tape[ptr] += 6;
        while (tape[ptr] != 0)
        {
            ptr -= 1;
            tape[ptr] += 10;
            ptr += 1;
            tape[ptr] -= 1;
        }
        ptr -= 1;
        tape[ptr] += 7;
        printf("%c",tape[ptr]);
        while (tape[ptr] != 0)
        {
            tape[ptr] -= 1;
        }
        ptr += 1;
        tape[ptr] += 11;
        while (tape[ptr] != 0)
        {
            ptr -= 1;
            tape[ptr] += 10;
            ptr += 1;
            tape[ptr] -= 1;
        }
        ptr -= 1;
        tape[ptr] += 1;
        printf("%c",tape[ptr]);
        while (tape[ptr] != 0)
        {
            tape[ptr] -= 1;
        }
        ptr += 1;
        tape[ptr] += 10;
        while (tape[ptr] != 0)
        {
            ptr -= 1;
            tape[ptr] += 10;
            ptr += 1;
            tape[ptr] -= 1;
        }
        ptr -= 1;
        printf("%c",tape[ptr]);
        while (tape[ptr] != 0)
        {
            tape[ptr] -= 1;
        }
        ptr += 1;
        tape[ptr] += 10;
        while (tape[ptr] != 0)
        {
            ptr -= 1;
            tape[ptr] += 10;
            ptr += 1;
            tape[ptr] -= 1;
        }
        ptr -= 1;
        tape[ptr] += 1;
        printf("%c",tape[ptr]);
        while (tape[ptr] != 0)
        {
            tape[ptr] -= 1;
        }
        ptr += 1;
        tape[ptr] += 12;
        while (tape[ptr] != 0)
        {
            ptr -= 1;
            tape[ptr] += 10;
            ptr += 1;
            tape[ptr] -= 1;
        }
        ptr -= 1;
        tape[ptr] += 3;
        printf("%c",tape[ptr]);
        while (tape[ptr] != 0)
        {
            tape[ptr] -= 1;
        }
        ptr += 1;
        tape[ptr] += 9;
        while (tape[ptr] != 0)
        {
            ptr -= 1;
            tape[ptr] += 10;
            ptr += 1;
            tape[ptr] -= 1;
        }
        ptr -= 1;
        tape[ptr] += 8;
        printf("%c",tape[ptr]);
        while (tape[ptr] != 0)
        {
            tape[ptr] -= 1;
        }
        ptr += 1;
        tape[ptr] += 11;
        while (tape[ptr] != 0)
        {
            ptr -= 1;
            tape[ptr] += 10;
            ptr += 1;
            tape[ptr] -= 1;
        }
        ptr -= 1;
        tape[ptr] += 4;
        printf("%c",tape[ptr]);
        while (tape[ptr] != 0)
        {
            tape[ptr] -= 1;
        }
        ptr += 1;
        tape[ptr] += 6;
        while (tape[ptr] != 0)
        {
            ptr -= 1;
            tape[ptr] += 10;
            ptr += 1;
            tape[ptr] -= 1;
        }
        ptr -= 1;
        tape[ptr] += 5;
        printf("%c",tape[ptr]);
        while (tape[ptr] != 0)
        {
            tape[ptr] -= 1;
        }
        ptr += 1;
        tape[ptr] += 11;
        while (tape[ptr] != 0)
        {
            ptr -= 1;
            tape[ptr] += 10;
            ptr += 1;
            tape[ptr] -= 1;
        }
        ptr -= 1;
        printf("%c",tape[ptr]);
        while (tape[ptr] != 0)
        {
            tape[ptr] -= 1;
        }
        ptr += 1;
        tape[ptr] += 10;
        while (tape[ptr] != 0)
        {
            ptr -= 1;
            tape[ptr] += 10;
            ptr += 1;
            tape[ptr] -= 1;
        }
        ptr -= 1;
        tape[ptr] += 2;
        printf("%c",tape[ptr]);
        while (tape[ptr] != 0)
        {
            tape[ptr] -= 1;
        }
        ptr += 1;
        tape[ptr] += 4;
        while (tape[ptr] != 0)
        {
            ptr -= 1;
            tape[ptr] += 10;
            ptr += 1;
            tape[ptr] -= 1;
        }
        ptr -= 1;
        tape[ptr] += 2;
        printf("%c",tape[ptr]);
        while (tape[ptr] != 0)
        {
            tape[ptr] -= 1;
        }
        ptr += 1;
        tape[ptr] += 9;
        while (tape[ptr] != 0)
        {
            ptr -= 1;
            tape[ptr] += 10;
            ptr += 1;
            tape[ptr] -= 1;
        }
        ptr -= 1;
        tape[ptr] += 9;
        printf("%c",tape[ptr]);
        while (tape[ptr] != 0)
        {
            tape[ptr] -= 1;
        }
        ptr += 1;
        tape[ptr] += 10;
        while (tape[ptr] != 0)
        {
            ptr -= 1;
            tape[ptr] += 10;
            ptr += 1;
            tape[ptr] -= 1;
        }
        ptr -= 1;
        tape[ptr] += 7;
        printf("%c",tape[ptr]);
        while (tape[ptr] != 0)
        {
            tape[ptr] -= 1;
        }
        ptr += 1;
        tape[ptr] += 12;
        while (tape[ptr] != 0)
        {
            ptr -= 1;
            tape[ptr] += 10;
            ptr += 1;
            tape[ptr] -= 1;
        }
        ptr -= 1;
        tape[ptr] += 5;
        printf("%c",tape[ptr]);
        while (tape[ptr] != 0)
        {
            tape[ptr] -= 1;
        }
        ptr -= 1;
        tape[ptr] -= 1;
        ptr -= 1;
        while (tape[ptr] != 0)
        {
            tape[ptr] -= 1;
        }
    }
    ptr += 1;
    while (tape[ptr] != 0)
    {
        ptr += 2;
        tape[ptr] += 1;
        while (tape[ptr] != 0)
        {
            ptr -= 1;
            while (tape[ptr] != 0)
            {
                ptr += 3;
                tape[ptr] += 1;
                ptr += 1;
                tape[ptr] += 1;
                ptr -= 4;
                tape[ptr] -= 1;
            }
            ptr += 4;
            while (tape[ptr] != 0)
            {
                ptr -= 4;
                tape[ptr] += 1;
                ptr += 4;
                tape[ptr] -= 1;
            }
            ptr -= 1;
            while (tape[ptr] != 0)
            {
                ptr -= 23;
                tape[ptr] += 1;
                ptr += 23;
                tape[ptr] -= 1;
            }
            ptr -= 25;
            ptr += 2;
            while (tape[ptr] != 0)
            {
                while (tape[ptr] != 0)
                {
                    ptr += 2;
                }
                tape[ptr] += 1;
                while (tape[ptr] != 0)
                {
                    ptr -= 2;
                }
                ptr += 2;
                tape[ptr] -= 1;
            }
            tape[ptr] += 1;
            while (tape[ptr] != 0)
            {
                ptr += 2;
            }
            ptr -= 1;
            while (tape[ptr] != 0)
            {
                ptr -= 1;
                while (tape[ptr] != 0)
                {
                    ptr -= 2;
                }
                ptr += 1;
                tape[ptr] += 1;
                ptr -= 1;
                ptr += 24;
                tape[ptr] += 1;
                ptr -= 24;
                ptr += 2;
                while (tape[ptr] != 0)
                {
                    ptr += 2;
                }
                ptr -= 1;
                tape[ptr] -= 1;
            }
            ptr -= 1;
            while (tape[ptr] != 0)
            {
                ptr -= 2;
            }
            ptr += 1;
            while (tape[ptr] != 0)
            {
                ptr += 1;
                while (tape[ptr] != 0)
                {
                    ptr += 2;
                }
                ptr -= 1;
                tape[ptr] += 1;
                ptr -= 1;
                while (tape[ptr] != 0)
                {
                    ptr -= 2;
                }
                ptr += 1;
                tape[ptr] -= 1;
            }
            ptr += 1;
            while (tape[ptr] != 0)
            {
                ptr += 2;
            }
            ptr -= 2;
            while (tape[ptr] != 0)
            {
                tape[ptr] -= 1;
                ptr -= 2;
            }
            ptr += 25;
            ptr -= 1;
            while (tape[ptr] != 0)
            {
                tape[ptr] -= 1;
                ptr += 1;
                tape[ptr] -= 1;
                ptr -= 1;
            }
            tape[ptr] += 1;
            ptr += 1;
            while (tape[ptr] != 0)
            {
                ptr -= 1;
                tape[ptr] -= 1;
                ptr += 1;
                while (tape[ptr] != 0)
                {
                    tape[ptr] -= 1;
                }
            }
            ptr -= 1;
            while (tape[ptr] != 0)
            {
                ptr += 1;
                tape[ptr] += 1;
                ptr -= 1;
                while (tape[ptr] != 0)
                {
                    tape[ptr] -= 1;
                }
            }
            tape[ptr] += 1;
            ptr += 1;
            while (tape[ptr] != 0)
            {
                ptr -= 1;
                tape[ptr] -= 1;
                ptr += 1;
                tape[ptr] -= 1;
            }
            ptr -= 1;
            while (tape[ptr] != 0)
            {
                ptr -= 2;
                while (tape[ptr] != 0)
                {
                    ptr += 4;
                    tape[ptr] += 1;
                    ptr += 1;
                    tape[ptr] += 1;
                    ptr -= 5;
                    tape[ptr] -= 1;
                }
                ptr += 5;
                while (tape[ptr] != 0)
                {
                    ptr -= 5;
                    tape[ptr] += 1;
                    ptr += 5;
                    tape[ptr] -= 1;
                }
                ptr -= 1;
                while (tape[ptr] != 0)
                {
                    ptr -= 24;
                    tape[ptr] += 1;
                    ptr += 24;
                    tape[ptr] -= 1;
                }
                ptr -= 26;
                ptr += 2;
                while (tape[ptr] != 0)
                {
                    while (tape[ptr] != 0)
                    {
                        ptr += 2;
                    }
                    tape[ptr] += 1;
                    while (tape[ptr] != 0)
                    {
                        ptr -= 2;
                    }
                    ptr += 2;
                    tape[ptr] -= 1;
                }
                tape[ptr] += 1;
                while (tape[ptr] != 0)
                {
                    ptr += 2;
                }
                ptr -= 1;
                while (tape[ptr] != 0)
                {
                    ptr -= 1;
                    while (tape[ptr] != 0)
                    {
                        ptr -= 2;
                    }
                    ptr += 1;
                    tape[ptr] += 1;
                    ptr -= 1;
                    ptr += 25;
                    tape[ptr] += 1;
                    ptr -= 25;
                    ptr += 2;
                    while (tape[ptr] != 0)
                    {
                        ptr += 2;
                    }
                    ptr -= 1;
                    tape[ptr] -= 1;
                }
                ptr -= 1;
                while (tape[ptr] != 0)
                {
                    ptr -= 2;
                }
                ptr += 1;
                while (tape[ptr] != 0)
                {
                    ptr += 1;
                    while (tape[ptr] != 0)
                    {
                        ptr += 2;
                    }
                    ptr -= 1;
                    tape[ptr] += 1;
                    ptr -= 1;
                    while (tape[ptr] != 0)
                    {
                        ptr -= 2;
                    }
                    ptr += 1;
                    tape[ptr] -= 1;
                }
                ptr += 1;
                while (tape[ptr] != 0)
                {
                    ptr += 2;
                }
                ptr -= 2;
                while (tape[ptr] != 0)
                {
                    tape[ptr] -= 1;
                    ptr -= 2;
                }
                ptr += 25;
                printf("%c",tape[ptr]);
                while (tape[ptr] != 0)
                {
                    tape[ptr] -= 1;
                }
                ptr -= 3;
                while (tape[ptr] != 0)
                {
                    ptr += 3;
                    tape[ptr] += 1;
                    ptr += 1;
                    tape[ptr] += 1;
                    ptr -= 4;
                    tape[ptr] -= 1;
                }
                ptr += 4;
                while (tape[ptr] != 0)
                {
                    ptr -= 4;
                    tape[ptr] += 1;
                    ptr += 4;
                    tape[ptr] -= 1;
                }
                tape[ptr] += 1;
                while (tape[ptr] != 0)
                {
                    ptr -= 1;
                    tape[ptr] += 1;
                    ptr += 1;
                    tape[ptr] -= 1;
                }
                ptr -= 4;
                while (tape[ptr] != 0)
                {
                    tape[ptr] -= 1;
                }
                ptr += 3;
                while (tape[ptr] != 0)
                {
                    ptr -= 3;
                    tape[ptr] += 1;
                    ptr += 3;
                    tape[ptr] -= 1;
                }
                ptr -= 1;
                while (tape[ptr] != 0)
                {
                    tape[ptr] -= 1;
                }
                ptr -= 1;
                tape[ptr] += 1;
                ptr += 1;
            }
            ptr -= 1;
            tape[ptr] -= 1;
        }
        ptr -= 1;
        while (tape[ptr] != 0)
        {
            tape[ptr] -= 1;
        }
        ptr -= 1;
        tape[ptr] -= 1;
    }

}
