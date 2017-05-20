/* Kyle J Green
 * CSC 362
 * Program 3: Encryption with Pointers
 * 3/9/17
 *
 * Program reads in a file, converts the message in the file to a character array and then encrypts
 * the message with a pointer to the character array by adding values from an int array to each
 * alphabetical character */

#include <stdio.h>  // for file functions
#include <ctype.h>  // for character testing

/* Function Prototypes */
void fileToArray(char *, char *);   // converts message from file to a character array
void encrypt(char *,int *, int);    // encrypts the message
void decrypt(char *,int *, int);    // decrypts the message
void outputToMonitor(char *, int);   // prints the message to the monitor

/* main method */
void main()
{
    int intArray[] = {5, 2, -1, 2, -3, 2, -4, -2, 6, 4};    // int array for encrypting char array
    char inFile[80], charArray[5000];   // name of input file and char array to encrypt

    /* Prompt user for the name of the input file and save this*/
    printf("%s", "Specify the name of the input file: ");   //prompt user for name of file
    scanf("%s", inFile);    // save name of file
    putchar('\n');  //print new line

    /* Encrypt and decrypt each message, outputting each to the monitor*/
    fileToArray(inFile, charArray);    // insert characters from file into array
    encrypt(charArray, intArray, 9);    // encrypt the message
    outputToMonitor(charArray, 0); // print encrypted message
    decrypt(charArray, intArray, 9);    // decrypt the message
    outputToMonitor(charArray, 1); // print the decrypted message
}

/* Input the file character by character into a char array, adding \0 at the end of the  */
void fileToArray(char *inFile, char *cp)
{
    char current;   // current character being read in from file
    FILE *fp;   // pointer to input file

    fp = fopen(inFile, "r");    // open input file, read-only

    /* loop through file and transfer characters to char array */
    while((current=getc(fp))!=-1)   // get next char from input file, store in charArray until we reach EOF
    {
        *cp = current;   // set value pointed to by cp to current
        cp++;   // increment pointer
    }

    *cp = '\0'; // add \0 to the end ot the char array
}

/* Encrypt message via a pointer to the character array and a pointer to an int array. Values from the int array are
 * to the values from the char array as the latter are incremented within a loop. In cases where the original value was
 * uppercase and is now less than 'A' or greater than 'Z' or where the original value was lowercase and is now greater
 * than 'z' or less than 'a', a wraparound must occur where 26 is either added or subtracted to the character being
 * pointed to.
 * */
void encrypt(char *cp,int *ip, int size)
{
    int *integerArray = ip;    // local pointer

    /* loop through original array and encrypt */
    while(*cp != '\0') {

        /* Check to see if the current character pointed to by cp is alphanumeric. If so, apply encryption */
        if(isalpha(*cp))
        {
            /* Check if the character is upper or lower case to determine if wraparound needs to be performed */
            if(isupper(*cp))
            {
                *cp = (char)(toupper(*cp + *ip));    //assign new value to character array

                /* WRAPAROUND */
                if(*cp < 'A')
                    *cp = (char)(toupper(*cp + 26));    // if char being pointed to is less than 'A', add 26
                if(*cp > 'Z')
                    *cp = (char)(toupper(*cp - 26));    // if char being pointed to is greater than 'Z', subtract 26
            }
                /* Lower case condition */
            else
            {
                *cp = (char)(tolower(*cp + *ip));    //assign new value to character array

                /* WRAPAROUND */
                if(*cp > 'z')
                    *cp = (char)(tolower(*cp - 26));    // if char being pointed to is greater than 'z', subtract 26
                if(*cp < 'a')
                    *cp = (char)(tolower(*cp + 26));    // if char being pointed to is less than 'a', add 26
            }

            /* Check to see if we are at the end of the encryption array. If so, reset pointer to the beginning.
             * If not, increment pointer by one */
            if (ip == integerArray + size)
                ip = integerArray; // reset ip to the beginning of the encryption array
            else
                ip++;   // increment ip by one
        }
        cp++;   // increment pointer to char array
    }
}

/* Decrypt the message in the same manner as it is encrypted, except +'s become -'s when the characters are encrypted.
 * The wraparound logic remains the same. */
void decrypt(char *cp,int *ip, int size)
{
    int *integerArray = ip;    // local pointer

    /* loop through original array and encrypt */
    while(*cp != '\0') {

        /* Check to see if the current character pointed to by cp is alphanumeric. If so, apply encryption */
        if(isalpha(*cp))
        {
            /* Check if the character is upper or lower case to determine if wraparound needs to be performed */
            if(isupper(*cp))
            {
                *cp = (char)(toupper(*cp - *ip));    //assign new value to character array

                /* WRAPAROUND */
                if(*cp < 'A')
                    *cp = (char)(toupper(*cp + 26));    // if char being pointed to is less than 'A', add 26
                if(*cp > 'Z')
                    *cp = (char)(toupper(*cp - 26));    // if char being pointed to is greater than 'Z', subtract 26
            }
                /* Lower case condition */
            else
            {
                *cp = (char)(tolower(*cp - *ip));    //assign new value to character array

                /* WRAPAROUND */
                if(*cp > 'z')
                    *cp = (char)(tolower(*cp - 26));    // if char being pointed to is greater than 'z', subtract 26
                if(*cp < 'a')
                    *cp = (char)(tolower(*cp + 26));    // if char being pointed to is less than 'a', add 26
            }

            /* Check to see if we are at the end of the encryption array. If so, reset pointer to the beginning.
             * If not, increment pointer by one */
            if (ip == integerArray + size)
                ip = integerArray; // reset ip to the beginning of the encryption array
            else
                ip++;   // increment ip by one
        }
        cp++;   // increment pointer to char array
    }
}

/* Prints message character by character to the monitor, using a pointer to a character array*/
void outputToMonitor(char *cp, int direction)
{
    int i = 0;  // for counting output characters in order to specify how many new lines need to be added to the output

    // establish whether or not we are encrypting or decrypting using int variable
    if(direction == 0)
        printf("%s", "Encrypted message:\n");   //print that we are encrypting
    else
        printf("%s", "Decrypted message:\n");   //print that we are decrypting

    /*Loop through message until end, printing the character to the monitor*/
    while(*cp != '\0')
    {
        putchar(*cp);   // print character
        cp++;   // increment pointer
        i++;    // increment counter
    }

    putchar('\n');  // print new line
    /* If message size exceeds 162 characters, print another new line*/
    if(i > 162) {
        putchar('\n');  // print new line
    }
}