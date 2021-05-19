//INCLUDE HEADER FILES like <ctype.h>,<string.h>
//THIS HASH FUNCTION RETURNS THE SUM OF ASCII VALUE AS OUTPUT
//INPUT IS A STRING
//OUTPUT IS UNSIGNED INTEGER
//ITS CASE INSENSITIVE i.e Capital letter words and small letter words are treated equally

unsigned int hash(const char *word)
{
    
    const char *c = NULL;
    c = word;
    int length = strlen(c);
    
    char myletter;
    unsigned int value = 0;
    for (int z = 0; z < length; z++)
    {
        myletter = *(c + z);
        
        myletter = toupper(myletter);
        
        value += (int)myletter;

    }
    
    return value;

}
