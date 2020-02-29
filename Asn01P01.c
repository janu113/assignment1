#include<stdio.h>
void sort(char str[]);
int main()
{
char str1[100],str2[100],str3[100],str4[100],str5[100],str6[100];
char a[100],b[100],c[100],d[100],e[100],f[100];

    printf("enter the string\n");
    scanf("%s",&a);
    printf("enter the string\n");
    scanf("%s",&b);
    printf("enter the string\n");
    scanf("%s",&c);
     printf("enter the string\n");
    scanf("%s",&d);
     printf("enter the string\n");
    scanf("%s",&e);
     printf("enter the string\n");
    scanf("%s",&f);
    strcpy(str1,a);
    strcpy(str2,b);
    strcpy(str3,c);
    strcpy(str4,d);
    strcpy(str5,e);
    strcpy(str6,f);
    sort(str1);
    sort(str2);
    sort(str3);
    sort(str4);
    sort(str5);
    sort(str6);

if(strcmp(str1,str2)==0)
    printf("%s\t",b);
    if(strcmp(str1,str3)==0)
    printf("%s\t",c);
    if(strcmp(str1,str4)==0)
    printf("%s\t",d);
    if(strcmp(str1,str5)==0)
    printf("%s\t",e);
    if(strcmp(str1,str6)==0)
    printf("%s\t",f);
     printf("%s\n",a);

if(strcmp(str1,str2)!=0)
{
    if(strcmp(str2,str3)==0)
    printf("%s\t",c);
    if(strcmp(str2,str4)==0)
    printf("%s\t",d);
    if(strcmp(str2,str5)==0)
    printf("%s\t",e);
    if(strcmp(str2,str6)==0)
    printf("%s\t",f);
    printf("%s\n",b);
    }
if((strcmp(str3,str1)!=0)&&(strcmp(str3,str2)!=0))
{
    if(strcmp(str3,str4)==0)
    printf("%s\t",d);
    if(strcmp(str3,str5)==0)
    printf("%s\t",e);
    if(strcmp(str3,str6)==0)
    printf("%s\t",f);
    printf("%s\n",c);
    }
    if((strcmp(str4,str2)!=0)&&(strcmp(str4,str3)!=0)&&(strcmp(str4,str1)!=0))
{
    if(strcmp(str4,str5)==0)
    printf("%s\t",e);
    if(strcmp(str4,str6)==0)
    printf("%s\t",f);
        printf("%s\n",d);
}
if((strcmp(str5,str2)!=0)&&(strcmp(str5,str3)!=0)&&(strcmp(str5,str1)!=0)&&(strcmp(str5,str4)!=0))
{
        if(strcmp(str5,str6)==0)
    printf("%s\t",e);
        printf("%s\n",f);
}
}


void sort(char str[])
{
    int i,j,temp;
    int len = strlen(str);
    for(i=0;i<len;i++)
        for(j=0;j<len;j++)
        if(str[i]<str[j])

    {
        temp =str[i];
        str[i]=str[j];
        str[j]=temp;
    }

}
