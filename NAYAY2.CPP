#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<stdlib.h>

int x[15][3]={0};
int y[21][3]={0};
int shenasayi[10]={0};
int tedad_n;
void  graphdrawe();
void main(){
clrscr();
cout<<"Tedade Gereha ra vared konin:";
cin>>tedad_n;



for(int i=0;i<tedad_n;i++)
 for(int j=0;j<3;j++)
	  cin>>x[i][j];
//==========================================================
/*
int sh=0;
for(i=0;i<tedad_n;i++)
 for(j=1;j<3;j++)
	  if(x[i][j]==tedad_n){
		shenasayi[sh]=x[i][0];
		 sh++;
		  }
for(i=0;i<sh;i++)
cout<<"--"<<shenasayi[i];

//===============================Copy x array to y===========
for(i=0;i<tedad_n;i++)
 for(j=0;j<3;j++)
	  y[i][j]=x[i][j];
//====================================
for(i=tedad_n;i<tedad_n+sh-1;i++)
	  y[i][0]=tedad_n;

for(i=tedad_n;i<tedad_n+sh-1;i++)
    for(j=1;j<3;j++)
	  y[i][j]=0;

//==============================Chape matris avaliye=========

for(i=0;i<tedad_n+sh-1;i++){
 cout<<"\n";
 for(j=0;j<3;j++)
	  cout<<"---"<<y[i][j];
	}

//===========================================================
*/
getch();
int k1=0,k2=0,d=0;
y[0][0]=1;
y[0][1]=0;
y[0][2]=1;

int l=1;
do
{
 k1=x[d][1];
 k2=x[d][2];

// for(i=1;i<tedad_n+sh-1;i++){
	  if(k1!=0){
//	  if(x[i][0]==k1)
	    y[l][2]=k1;
	    y[l][1]=x[d][0];
	    y[l][0]=l+1;
	    l++;
	    }
// for(i=1;i<tedad_n+sh-1;i++){
	  if(k2!=0){
//	  if(x[i][0]==k2)
	    y[l][2]=k2;
	    y[l][1]=x[d][0];
	    y[l][0]=l+1;
	   l++;
	   }

d++;
}while(d<tedad_n);
//=============================================================
/////////////////shenasayi greh hayi ke be end khatm mishavand
//*****************************************************
// darje pedar vase gereh hayi ke be end khatm mishavand
/*
for(i=(tedad_n-1);i<tedad_n+sh-1;i++)
   y[i][1]=shenasayi[i-(tedad_n-1)];


//---------------------------------------------------
/// darge shomare tartib dar greha
for(i=0;i<tedad_n+sh-1;i++)
   y[i][2]=i+1;
//---------------------------------------------------
//////////////////////print array tabdil shode
*/
getch();
cout<<"\n\nafter converting:";
for(i=0;i<21;i++){
 cout<<"\n";
 for(j=0;j<3;j++)
	  cout<<"---"<<y[i][j];
 }
//=====================================================
 getch();
 graphdrawe();

//======================================================
getch();
}


void  graphdrawe(){

//int x[15][3]={0};
int x1[30][3]={0};
clrscr();
//---------------------------------------------------------
 int driver,mode;
 driver=DETECT;
 mode=0;
 initgraph(&driver,&mode,"c:\\tc\\bgi");
//----------------------------------------------------------

cout<<"Tedade Gereha ra vared konin:";

//for(int i=0;i<10;i++)
// for(int j=0;j<3;j++)
//	  cin>>x[i][j];
//getch();
//==============================Chape matris avaliye=========
//int xp=200,yp=50;

/////////////////////////////////////////////////////////////
//getch();
//for(i=0;i<10;i++){
// cout<<"\n";
// for(j=0;j<3;j++)
//	  cout<<"---"<<x[i][j];
//	}

int count=0;
int xp=350,yp=50;
int xpj=0,ypj=0;
int d1=0,d=1,fa=0;
 setfillstyle(1,RED);
 fillellipse(xp,yp,10,10);
x1[0][0]=1;
x1[0][1]=xp;
x1[0][2]=yp;

//x[0][0]=1;
//x[0][1]=0;
//x[0][2]=1;

do{
xp=x1[d1][1];
yp=x1[d1][2];
//fa=x1[d1][0];
d1=0;
do{
if(y[d][1]==x1[d1][0]){
//x   x1[]=yp+50;
//  d1=100;
  xp=x1[d1][1];
  yp=x1[d1][2];
//  ypj=yp+50;

  if(y[d][1]!=y[d-1][1]) {
    xpj=xp-(60+5*d);
    ypj=yp+50+2*d;
     }
     else{
	 xpj=xp+70+d*3;
//	 ypj=yp-50;
	 }

	 count=count+1;
	 x1[count][0]=y[d][2];
	 x1[count][1]=xpj;
	 x1[count][2]=ypj;
	  setfillstyle(1,RED);
	  fillellipse(xpj,ypj,10,10);
	  line(xp,yp,xpj,ypj);



		}
d1++;
}while(d1<count);
d++;
}while(d<21);


getch();
closegraph();
getch();
}