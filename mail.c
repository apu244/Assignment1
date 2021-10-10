#include <stdio.h>
#include <string.h>

int main()
{
    char email[1000];
    int c = 0;
    ;
    printf("Enter the email address: ");
    scanf("%s", email);
    int check = 0;
    int count = 0;
    int at = 0, dot = 0;

    while (email[c] != '\0')
    {
        if ((email[c] >= 'a' && email[c] <= 'z') || (email[c] >= 'A' && email[c] <= 'Z') || (email[c] >= '0' && email[c] <= '9'))
            check = 1;
        else if ((email[c] == '.' || email[c] == '-' || email[c] == '_' || email[c] == '@') && (c != 0 && email[c + 1] != '\0'))
            check = 1;
        else
        {
            check = -1;
            break;
        }
        if (email[c] == '@')
        {
            count++;
            at = c;
        }
        if (count > 1)
        {
            check = -1;
            break;
        }
        if (email[c] == '.')
        {
            dot = c;
        }
        c++;
    }

    if (dot - at < 2)
        check = -1;

    if (check == 1)
    {
        printf("Valid email address");
    }
    else
    {
        printf("Invalid email address");
    }

    return 0;
}
