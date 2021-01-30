//
//  bubble.h
//  First arg
//
//  Created by Mingmanas Sivaraksa on 2/1/2564 BE.
//

#ifndef selection_h
#define selection_h


void selection(int a[], int N){
    int i;
    int j;
    int min,mi;// น้อยที่สุด
    int temp;
    
   for(i=0;i<N-1;i++){
    mi=i;
    for(j=i+1;j<N;j++){
       if(a[mi]> a[j] ){
         mi=j;
       }
    }
   swap(&a[i],&a[mi]);
   display(a,N);
   }
}


#endif /* bubble_h */
