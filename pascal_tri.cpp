#include<iostream>

 int fact( int&a)
   { 
      int p,i;
      p=1;
      i=1;
   
      while(i<=a)
      {
          p=p*i;
          i=i+1;
      }
          return p;
   }

   int ncr (int&n,int&r)
  { 
      int a,b,c,x,g;   
      g= (n-r); 
      a=fact(n);
      b=fact(r);
      c=fact((g));
  //   x=fact(n)/(fact(r)*fact(n-r));
      x=a/(b*c);
      return (x);
     
  }
 
int main()
 {
      int  i,j,n,a,p;
     std::cout<<"enter the number of rows";
     std::cin>>n;
     i=0;
    
     while (i<=(n-1))
        {
          j=0;
          p=0;
            while(p<(n-i))
             {
                std::cout<<" ";
                p=p+1;}
            while (j<=i)
             {
             
               a=ncr(i,j);
               std::cout<<a<<" ";
               j=j+1;
             }
        
          i=i+1;
          std::cout<<"\n";
        }

     return 0;
 }
