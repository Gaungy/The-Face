
#include <stdio.h>
#include <string.h>

void encryptDecrypt(char inpString[])
{
 

    char xorKey = ''; //to find the key, turn that frown upside down and count


    int len = strlen(inpString);

 
    for (int i = 0; i < len; i++)
    {
        inpString[i] = inpString[i] ^ xorKey;
        printf("%c", inpString[i]);
    }
}

int main()
{
    char sampleString[] = "P[APGjA]PjELGTX\Q";


    printf("Encrypted String: ");
    encryptDecrypt(sampleString);
    printf("\n");

  
    printf("Decrypted String: ");
    encryptDecrypt(sampleString);

    return 0;
}