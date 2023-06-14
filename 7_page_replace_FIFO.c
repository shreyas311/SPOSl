#include <stdio.h>
int main()
{
        int i, j, n, ref_str[50], frame[10], no, k, avail, fcount = 0; 
        printf("\n ENTER THE NUMBER OF PAGES:\n");
        scanf("%d", &n); 
        printf("\n ENTER THE PAGE NUMBER :\n");
        for (i = 1; i <= n; i++) 
                scanf("%d", &ref_str[i]);
        printf("\n ENTER THE NUMBER OF FRAMES :");
        scanf("%d", &no);
        for (i = 0; i < no; i++)
                frame[i] = -1; 
        j = 0;                 
        printf("\n ref string  \t page frames     \tHit/Fault\n");
        for (i = 1; i <= n; i++)
        {
                printf("%d\t\t", ref_str[i]);
                avail = 0; 
                for (k = 0; k < no; k++)
                        if (frame[k] == ref_str[i]) 
                        {
                                avail = 1; 
                                for (k = 0; k < no; k++)
                                        printf("%d\t", frame[k]); 
                                printf("H");                      
                        }
                if (avail == 0) 
                {
                        frame[j] = ref_str[i];
                        j = (j + 1) % no;      
                        fcount++;              
                        for (k = 0; k < no; k++)
                                printf("%d\t", frame[k]); 
                        printf("F");                      
                }
                printf("\n");
        }
        printf("Page Fault Is %d", fcount);
}