#include<iostream>
using namespace std;
void main()
{
char c1,c2,c3;
int a1;
cout<<"������ĸ:"<<endl;
cout<<"����ͼ�Σ�������Ϊ1��������Ϊ2��������Ϊ3,����Ϊ4����"<<endl;
cin>>c1;
cin>>c2;
cin>>c3;
cin>>a1;
if(c2=='0')
{c2=c1;}
if(c3=='0')
{c3=c1;}
if(a1==1)
{int i,j,k;
cout<<"����߳�:"<<endl;
cin>>k;
char a[9]={c1,c2,c3,c1,c2,c3,c1,c2,c3};
for(j=0;j<k;j++)
{for(i=0;i<k;i++)
{cout<<a[i]<<" ";
}cout<<endl;
}
}
if(a1==2)
{int i,j,k;
cout<<"�����:"<<endl;
cin>>k;
char a[9]={c1,c2,c3,c1,c2,c3,c1,c2,c3};
for(j=0;j<k;j++)
{for(i=0;i<j+1;i++)
{cout<<" "<<a[i]<<" ";
}cout<<endl;
}
}
if(a1==3)
{int i,j,k,r;
cout<<"���볤�Ϳ�:"<<endl;
cin>>k;
cin>>r;
char a[9]={c1,c2,c3,c1,c2,c3,c1,c2,c3};
for(j=0;j<r;j++)
{for(i=0;i<k;i++)
{cout<<a[i];
}cout<<endl;
}
}

if(a1==4)
{int i,j,z,k;
cout<<"������:";
cin>>k;
char a[18]={c1,c2,c3,c1,c2,c3,c1,c2,c3,c1,c2,c3,c1,c2,c3,c1,c2,c3};
for(j=0;j<k;j++)
{for(i=0;i<2*k+1;i++)
{if(i<k-j||i>k+j)
cout<<" ";
else
cout<<a[i];}
cout<<endl;
}
for(j=k-2;j>=0;j--)
{for(i=0;i<2*k+1;i++)
{if(i<k-j||i>k+j)
cout<<" ";
else
cout<<a[i];}
cout<<endl;
}
}
else
{cout<<"�����������������"<<endl;
cout<<"����ͼ��:"<<endl;
cin>>a1;
if(a1==1)
{int i,j,k;
cout<<"����߳�:"<<endl;
cin>>k;
char a[9]={c1,c2,c3,c1,c2,c3,c1,c2,c3};
for(j=0;j<k;j++)
{for(i=0;i<k;i++)
{cout<<a[i]<<" ";
}cout<<endl;
}
}
if(a1==2)
{int i,j,k;
cout<<"�����:"<<endl;
cin>>k;
char a[9]={c1,c2,c3,c1,c2,c3,c1,c2,c3};
for(j=0;j<k;j++)
{for(i=0;i<j+1;i++)
{cout<<" "<<a[i]<<" ";
}cout<<endl;
}
}
if(a1==3)
{int i,j,k,r;
cout<<"���볤�Ϳ�:"<<endl;
cin>>k;
cin>>r;
char a[9]={c1,c2,c3,c1,c2,c3,c1,c2,c3};
for(j=0;j<r;j++)
{for(i=0;i<k;i++)
{cout<<a[i];
}cout<<endl;
}
}

if(a1==4)
{int i,j,z,k;
cout<<"������:";
cin>>k;
char a[18]={c1,c2,c3,c1,c2,c3,c1,c2,c3,c1,c2,c3,c1,c2,c3,c1,c2,c3};
for(j=0;j<k;j++)
{for(i=0;i<2*k+1;i++)
{if(i<k-j||i>k+j)
cout<<" ";
else
cout<<a[i];}
cout<<endl;
}
for(j=k-2;j>=0;j--)
{for(i=0;i<2*k+1;i++)
{if(i<k-j||i>k+j)
cout<<" ";
else
cout<<a[i];}
cout<<endl;
}
}}
}