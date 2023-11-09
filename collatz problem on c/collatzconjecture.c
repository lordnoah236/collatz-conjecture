int sayac ;
int x , y ,c;
again :
sayac =1;
x=2;

//printf ("başlangıc degeri : \n");
//scanf("%d",&x);
printf("bitis degeri :   \n ");
scanf("%d",&y);
y = x-(x-1);
if(y==0){ goto rast ; }
printf("********SAYİLAR : %d \n",x);
// çift sayilar
while(x>1){
if(x%2==0){
printf("x in degeri (Çift): %d \n",x);
x=x/2;
printf ("x / 2 : %d \n",x);
printf("x in degeri: %d \n",x);
if(x==1&&sayac <=y){ sayac++; x=sayac+x;
printf("********SAYİLAR : %d \n",x);
}
}

else if (x%2!=0){
printf("x in degeri (Tek): %d \n",x);
x=x*3+1;
printf (" 3*x + 1 : %d \n",x);
printf("x in degeri : %d \n",x);
}
if(x==1&&sayac <=y){ sayac++; x=sayac+x;
printf ("*******SAYİLAR : %d \n",x);
}

/*
///^^^^^//////$^^^^////$
// tek sayilar
while(x>1){
if(x%2!=0){
printf("x in degeri (Tek): %d \n",x);
x=x*3+1;
printf (" 3*x + 1 : %d \n",x);
printf("x in degeri : %d \n",x);
}
if(x==1&&sayac <=y){ sayac++; x=sayac+x;
printf ("*******SAYİLAR : %d \n",x);
}

*/
rast :


/////////////////////////////////////////
printf ("bir sayı girin : \n");
scanf ("%d",&c);
if (c==0){  goto again ; }

printf("********SAYİLAR : %d \n",c);
// çift sayilar
while(c>1){
if(c%2==0){
printf("c in degeri (Çift): %d \n",c);
c=c/2;
printf ("c / 2 : %d \n",c);
printf("c in degeri: %d \n",c);
}
// tek sayilar
else if (c%2!=0){
printf("c in degeri (Tek): %d \n",c);
c=c*3+1;
printf (" 3*c + 1 : %d \n",c);
printf("c in degeri : %d \n",c);
}
// tek sayilar
/*
while(c>1){
if(c%2!=0){
printf("c in degeri (Tek): %d \n",c);
c=c*3+1;
printf (" 3*c + 1 : %d \n",c);
printf("c in degeri : %d \n",c);
}

else{
break;
} */
}
}}