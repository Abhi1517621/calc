#include<iostream>
using namespace std;

int main()
{
  int s;
  cout<<"You are ready to use the calculator"<<endl;
  cout<<"1. Basic arthimatic operations(+,-,*,/)"<<endl<<"2. Square roots: "<<endl<<"3. Trignometric operations"<<endl<<"4. Logarithms"<<endl<<"5. Quadratic equation roots"<<endl;
  cout<<"Enter a random digit from (1-5): "<<endl;
  cin>>s;
  switch(s)
    {
        case 1:
        {
        int k;
        cout<<"Choose the operation you need:"<<endl<<"1.Addition 2.Subraction 3.Multiplication 4.Division "<<endl;
        cin>>k;
               switch(k)
               {
                   double r,v;
                   case 1: cout<<"Enter the numbers for addition:"<<endl;
                           cin>>r>>v;
                           cout<<"The sum is "<<r+v;
                           break;
                   case 2: cout<<"Enter r,v respectively :"<<endl;
                           cin>>r>>v;
                           cout<<"The difference is "<<r-v;
                           break;
                   case 3: cout<<"Enter the numbers for product:"<<endl;
                           cin>>r>>v;
                           cout<<"The product is "<<r*v;
                           break;
                   case 4: cout<<"Enter r,v for r/v:"<<endl;
                           cin>>r>>v;
                           cout<<"The quotient is "<<r/v;
                           break;
                   default: cout<<"Please use the options given only!!";       
               }
            }   
        break;
        case 2:
        {
        double a=0,b=0;   
        cout<<"Enter the number for square root :";
        cin>>a;    
        if(a<0)
        {
            cout<<"Not defined for negative numbers";
        }
        else if(a==0)
        {
          cout<<"It is always 0.";  
        }
        else 
        {
     
        for(double i=0.00000001 ; (i*i)<=a ; i+=0.00000001)
        {
          b+=0.00000001;  
        }
        cout<<"The square root of number given : "<<b;
        }
        }
    break;
     case 3:
        {
        int n,l; long double val;
        cout<<"Choose the trigono operation :"<<endl<<"1.Sine 2.Cosine 3.Tangent 4.Cotagent 5.Cosecant 6.Secant"<<endl;
        cin>>n;
        cout<<"Enter the unit in which you want to give input of the angle :"<<endl<<"1.Degree 2.Radian"<<endl;
        cin>>l;
        if(l!=1 && l!=2)
        { cout<<"Please press 1 for degree and 2 for radian."; break; }
        cout<<"Enter the angle in the selected unit :";
        cin>>val;
        if(l==1)
        {
           val= (3.141592653/180)*val;
        }
               if(val>0)
               {    while(val>=6.2831) {  val-=6.283185306; }    }
               if(val<0)
               {    while(val<0)         {  val+=6.283185306; }    } 
               double p=0.00,d=0.00; 
               for(int i=1 ; i<=10 ; i++)
               {
                   long long int repeatm=1; double theta=1.00 , x;
                   for(int j=1 ; j<=(2*i-1) ; j++)
                   {
                      repeatm=repeatm*j;
                      theta=theta*val;
                   } 
                   x=theta/repeatm;
                   if((i%2) == 1)  { p=p+x; }
                   else            { p=p-x; }
                }
                for(int i=1 ; i<10 ; i++)    
                {
                    long int facto=1; double powerOfAngle=1.00 , x;
                    for(int j=1 ; j<=(2*i) ; j++)
                   {
                      facto=facto*j;
                      powerOfAngle=powerOfAngle*val;
                      x=powerOfAngle/facto;
                   } 
                   if((i%2) == 1)  { d=d-x; }
                   else            { d=d+x; }
                    
                }  d=1.00+d;
                switch(n)
               {
                   case 1: cout<<"The value of sintheta : "<<p; break;
                   case 2: cout<<"The value of costheta :  "<<d; break;
                   case 3: cout<<"The value of tantheta : "<<p/d; break;
                   case 4: cout<<"The value of cottheta : "<<d/p; break;
                   case 5: cout<<"The value of cosecanttheta : "<<1.0/p; break;
                   case 6: cout<<"The value of secanttheta : "<<1.0/d; break;
                   default: cout<<"Please enter from the options given!!!";  
               } 
            }   
        break;
        case 4:
        {
        double z ;
        cout<<"Enter the no required to apply log :";
        cin>>z;
        if(z<=0)
        { cout<<"Log of a non-positive no is undefined."; }
        else if(z==1)
        {
        cout<<"Log value is 0.";
        }
        else if(z>1)
        { 
        for(double y=.0001 ;  ; y+=0.0001)
        { 
        long int fact=1 ; double exp=1.000 , o=1.000;;
        for(int i=1 ; i<=20; i++ )  
        {
        fact=fact*i;
        exp=exp*y;
        o+=(exp/fact);
        }
        if(o>=z) { cout<<"Required logarithm value is "<<y; break; }
        }
        }
         else
         {
        for(double y=-0.0001 ;  ; y-=0.0001)
        { 
          long int fact=1 ; double exp=1.000 , o=1.000;;
          for(int i=1 ; i<20; i++ )  
          {
           fact=fact*i;
           exp=exp*y;
           o+=(exp/fact);
          }
         if(o<=z) { cout<<"Log required is "<<y; break; }
        } 
        }
        }
    break;
    case 5:
    {
    float e,f,g;
    cout<<"Quadratic equation= 'ex^2 + fx +g = 0'."<<endl<<"Enter e,f,g respectively"<<endl;
    cin>>e>>f>>g;
    if(e==0)
    {
        cout<<"Given equation is invalid"<<endl;
    }
    else
    {
        double delta=(f*f)-(4*e*g);
        if(delta<0)
        {
            cout<<"the roots are complex."<<endl;
        }
        else if(delta==0)
        {
            cout<<"There exists only a single root : x= "<<(-(f/(2*e)));
        }
        else
        {
            double q,w,x;
            for(double i=0.000001 ; (i*i)<=delta ; i+=0.000001)
            {
             x+=0.000001;
            }
            q= (-f + x)/(2*e);
            w= (-f - x)/(2*e);
            cout<<"The two real roots are : x= "<<q<<"&"<<w;
        }    
      }
    }
    break; 
    default: cout<<"Please use the options given only!!!";  
    return 0;
   }
} 