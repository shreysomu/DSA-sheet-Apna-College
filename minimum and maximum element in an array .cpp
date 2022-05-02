//GFG problem //Easy Problem
struct pair getMinMax(long long int a[], long long int n) {
  struct pair s;
     s.max=a[0];
     s.min=a[0];
     for(int i=0;i<n;i++)
     {
         if(a[i]>s.max)
         s.max=a[i];
         if(a[i]<s.min)
         s.min=a[i];
         
     }
     return s;

   
}
    
