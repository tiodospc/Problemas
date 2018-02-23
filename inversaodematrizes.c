//errado 

#include <stdio.h>
 
int main()
{
    int T,a[20][20],N,count;
    scanf("%d",&T);
    for(int z =0 ;z<T;z++)
    {   
        count=0; 
        scanf("%d",&N);
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                
              scanf("%d",&a[i][j]);
                
            }
        }
 
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                for(int p=0;p<N;p++)
                {
                        for(int q=0;q<N;q++)
                        {
                            if(i<=p&&j<=q)
                            {
                                if(a[i][j]>a[p][q])
                                {
                                    count++;
                                }
                            }
                        }
                }
 
            }
        }
        printf("%d\n",count);
    }
    
    return 0;
}
