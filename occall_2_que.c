#include <stdio.h>
int* occall(int *a,int n);

int main()
{

    int n, i, j, count;

   
    
    scanf("%d", &n);
    int a[n];

  
    
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
       
    
    }
    occall(a,n);
}

int* occall(int *a,int n)
{
    
     int i,j,*freq,count;   
      for(i=0; i<n; i++)
      freq[i]=-1;
    for(i=0; i<n; i++)
    {
        count = 1;
        for(j=i+1; j<n; j++)
        {
            
            if(a[i]==a[j])
            {
                count++;

               
                freq[j] = 0;
            }
        }

        
        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }


  
    for(i=0; i<n; i++)
    {
        if(freq[i] != 0)
        {
            printf("%d-%d,", a[i], freq[i]);
        }
    }

    return 0;
}
