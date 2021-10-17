#include<stdio.h>
#include<string.h>
//function to convert a decimal number into roman
void dectoroman(int a){
  int i,str,nofdigits=0;
 int arr[10];
 char ch[10][10];
 for(i=0;(i<=3)&&(a!=0);i++){
    str=a%10;a=a/10;nofdigits++;
    switch(i){
        case 0:   switch(str){
                    case 0: ch[3][0]='\0';
                    break;
                    case 1: ch[3][0]='I';ch[3][1]='\0';
                    break;
                    case 2: ch[3][0]='I';ch[3][1]='I';ch[3][2]='\0';
                    break;
                    case 3: ch[3][0]='I';ch[3][1]='I';ch[3][2]='I';ch[3][3]='\0';
                    break;
                    case 4: ch[3][0]='I';ch[3][1]='V';ch[3][2]='\0';
                    break;
                    case 5: ch[3][0]='V';ch[3][1]='\0';
                    break;
                    case 6: ch[3][0]='V';ch[3][1]='I';ch[3][2]='\0';
                    break;
                    case 7: ch[3][0]='V';ch[3][1]='I';ch[3][2]='I';ch[3][3]='\0';
                    break;
                    case 8: ch[3][0]='V';ch[3][1]='I';ch[3][2]='I';ch[3][3]='I';ch[3][4]='\0';
                    break;
                    case 9: ch[3][0]='I';ch[3][1]='X';ch[3][2]='\0';
                    break;
                   }
         break;          

         case 1:  switch(str){
                   case 0: ch[2][0]='\0';
                    break;
                    case 1: ch[2][0]='X';ch[2][1]='\0';
                    break;
                    case 2: ch[2][0]='X';ch[2][1]='X';ch[2][2]='\0';
                    break;
                    case 3: ch[2][0]='X';ch[2][1]='X';ch[2][2]='X';ch[2][3]='\0';
                    break;
                    case 4: ch[2][0]='X';ch[2][1]='L';ch[2][2]='\0';
                    break;
                    case 5: ch[2][0]='L';ch[2][1]='\0';
                    break;
                    case 6: ch[2][0]='L';ch[2][1]='X';ch[2][2]='\0';
                    break;
                    case 7: ch[2][0]='L';ch[2][1]='X';ch[2][2]='X';ch[2][3]='\0';
                    break;
                    case 8: ch[2][0]='L';ch[2][1]='X';ch[2][2]='X';ch[2][3]='X';ch[2][4]='\0';
                    break;
                    case 9: ch[2][0]='X';ch[2][1]='C';ch[2][2]='\0';
                    break;
                   }
         break;
         case 2:    switch(str){
                    case 0: ch[1][0]='\0';
                    break;
                    case 1: ch[1][0]='C';ch[1][1]='\0';
                    break;
                    case 2: ch[1][0]='C';ch[1][1]='C';ch[1][2]='\0';
                    break;
                    case 3: ch[1][0]='C';ch[1][1]='C';ch[1][2]='C';ch[1][3]='\0';
                    break;
                    case 4: ch[1][0]='C';ch[1][1]='D';ch[1][2]='\0';
                    break;
                    case 5: ch[1][0]='D';ch[1][1]='\0';
                    break;
                    case 6: ch[1][0]='D';ch[1][1]='C';ch[1][2]='\0';
                    break;
                    case 7: ch[1][0]='D';ch[1][1]='C';ch[1][2]='C';ch[1][3]='\0';
                    break;
                    case 8: ch[1][0]='D';ch[1][1]='C';ch[1][2]='C';ch[1][3]='C';ch[0][4]='\0';
                    break;
                    case 9: ch[1][0]='C';ch[1][1]='M';ch[1][2]='\0';
                    break;
                   }
         break;                       
         case 3:  switch(str){
                    case 0: ch[0][0]='\0';
                    break;
                    case 1: ch[0][0]='M';ch[0][1]='\0';
                    break;
                    case 2: ch[0][0]='M';ch[0][1]='M';ch[0][2]='\0';
                    break;
                    case 3: ch[0][0]='M';ch[0][1]='M';ch[0][2]='M';ch[0][3]='\0';
                    break;}
         break;          
    }

 }
 for(i=4-nofdigits;i<=3;i++){
    printf("%s",ch[i]);
 }
}

//function to convert roman number to decimal
int romantodec(char rom[]){
  int i,sum=0;
  for(i=0;rom[i]!='\0';i++){
    switch(rom[i]){
      case 'M': sum=sum+1000;
      break;
      case 'm': sum=sum+1000;
      break;
      case 'd':
      case 'D': sum+=500;
      break;
      case 'c':if(rom[i+1]=='d'||rom[i+1]=='m'){
                  sum-=100;
               }else{
                 sum+=100;
               }
      break;
      case 'C': if(rom[i+1]=='D'||rom[i+1]=='M'){
                  sum-=100;
               }else{
                 sum+=100;
               }
      break; 
      case 'l':  
      case 'L': sum+=50;
      break;
      case 'x': if(rom[i+1]=='l'||rom[i+1]=='c'){
                  sum-=10;
               }else{
                 sum+=10;
               } 
      break;
      case 'X': if(rom[i+1]=='L'||rom[i+1]=='C'){
                  sum-=10;
               }else{
                 sum+=10;
               } 
      break;
      case 'v':
      case 'V': sum+=5;
      break;
      case 'i':  if(rom[i+1]=='v'||rom[i+1]=='x'){
                  sum-=1;
               }else{
                 sum+=1;
               } 
      break;        
      case 'I':  if(rom[i+1]=='V'||rom[i+1]=='X'){
                  sum-=1;
               }else{
                 sum+=1;
               } 
      break;                      
    }
  }
  return sum;
}

//function to do operations on roman
void roma(){
  char a[1000],b[1000];
  int deca,decb,sum,mul;
  printf("enter two roman numbers\n");
  scanf("%s",a);scanf("%s",b);
  deca=romantodec(a);decb=romantodec(b);
  sum=deca+decb;
  mul=deca*decb;
  printf("after addition\n");
  dectoroman(sum);
  printf("\n after multiplying\n");
  dectoroman(mul);
}
// function to convert decimal to binary
void dectobin(int a){
  int arr[1000];
  int i=0,len=1;
  if(a==0){
    printf("0");
    return;
  }
  for(i=0;;i++){
   if(a==0){
     len=i;
     break;
   }
   arr[i]= a%2;
   a= a/2;
  }
  for(i=len-1;i>=0;i--)
  { printf("%d",arr[i]);}
}
//function to do operations on unary
void unary(){
  char ar1[1000],ar2[1000];
  printf("enter two unary numbers\n");
    scanf("%s",ar1);scanf("%s",ar2);
     int add,mul,l1,l2;
     l1=strlen(ar1);
     l2=strlen(ar2);
     add=l1+l2;mul=l1*l2;
     printf("after adding\n");
     while(add--){
         printf("1");
     }
     printf("\n");
     printf("after multiplication\n");
     while(mul--){
         printf("1");
     }
     
}
// function to do operations on decimal
void decimal(){
int a,b;
printf("enter two decimal numbers\n");
scanf("%d %d",&a,&b);
  int c=a+b;
   int d=a*b;
   printf("after adding :%d\nafter multiplication:%d",c,d);
}
//function to do operations on binary 
void binary(){
  int i=0,k=0,j=1,sum1=0,sum2=0;
  char ar1[1000],ar2[1000];
  int j1[1000],j2[1000];
  printf("enter two binary numbers\n");
  scanf("%s",ar1);scanf("%s",ar2);
  int l1=strlen(ar1);
  int l2=strlen(ar2);
 for(k=0;k<l1;k++){
   j1[k]=ar1[k]-'0';
 }
 for(k=0;k<l2;k++){
   j2[k]=ar2[k]-'0';
 }

 for(i=l1-1;i>=0;i--){
   sum1 = sum1 + j1[i]*j;
    j=j*2;

  }
  j=1;
  for(i=l2-1;i>=0;i--){
    
    sum2 = sum2 + j2[i]*j;
    j=j*2;

  }
  int add=sum1+sum2;
  int mul=sum1*sum2;
  printf("after addition:\n");
  dectobin(add);
  printf("\n");
  printf("after multiplication:\n");
  dectobin(mul);

}

int main(){
  int x;char roman[10];
   printf("On which format do you want operations of addtion and multiplication to be done?");
    printf("press\n1-unary\n2-binary\n3-decimal\n4-roman\n");
    scanf("%d",&x);
    switch(x){
       case 1: unary();
       break;
       case 2: binary();
       break;
       case 3: decimal();
       break;
       case 4: roma();
       break;
       default: printf("invalid option");
    }
    return 0;}
