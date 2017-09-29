#include <iostream> //allows input and output data to screen
using namespace std;
#include<math.h>
#include <cmath>

double a, b, c;
double h, k;

int fdv(){//Focus Directrix Vertex
  int optfdv;
  double fdvy;
  cout<<"Focus or Directrix Input. 1 Focus, 0 Directrix";
  cin>>optfdv;
  
  cout<<"Input the Vertex X";
  cin>>h;
  
  cout<<"Input the Vertex Y";
  cin>>k;
  
  cout<<"Input the Focus/Directrix Y";
  cin>>fdvy;
  
  if(optfdv == 1){
    a = 0.25/(fdvy-k);
  }
  if(optfdv == 0){
    a = -1*(0.25/(fdvy-k));
  }
  if(optfdv != 1 && optfdv != 0){
    cout<<"ERROR"<<endl;
  }
  
  b = a*-2*h;
  c= (a*h*h)+k;
}

int vertex(){
  cout<<"a(x - h)² + k"<<endl;
  cout<<"\nInput a";
  cin>>a;
  
  cout<<"\nInput h";
  cin>>h;
  
  cout<<"\nInput k";
  cin>>k;
  
  b = a*-2*h;
  c= (a*h*h)+k;
  
}

int quadratic(){
  
    double answer1, answer2, dis, discriminant, axis, y, focusy, directrix, latus, latus1, latus2, latuslength;
   discriminant = (b*b) -(4*a*c);
   
   cout<<"\nThe equation is "<<a<<"x² + "<<b<<"x + "<<c<<endl;
    
    if(discriminant < 0){
    double input, output, mid;
  
    input = discriminant * -1;
    
    answer1 =sqrt(input) / (2*a);
    cout << "\nYour X-Intercepts are "<< (-1 * b) /  (2 * a)<<" ± " << answer1 <<"i"<< endl;
    }
  else{
    answer1 = ((b * -1) + sqrt(discriminant)) / (2*a);
    answer2 = ((b * -1) - sqrt(discriminant)) / (2*a);
    cout << "\nYour X-Intercepts are " << answer1 << " and " << answer2 << endl;
    
    cout<<"\nThe factor is (x + "<<answer1<<")(x + "<<answer2<<")"<<endl;
  }
  
  
    axis = (-1*(b/(2*a)));
    y = (c - (b*b)/(4*a));
    
    h = axis;
    k = y;
    
    cout << "Your Y-Intercept is " << c << endl;
    
    cout<<"The discriminant is "<<discriminant<<endl;
    
    cout << "\nThe axis of symmetry is " << axis  <<  endl;
    
    if (a>0){
      cout<<"The minimum is "<<y<<endl;
    }
    else{
      cout<<"The maximum is "<<y<<endl;
    }
    
    cout<<"The vertex is ("<<axis<<","<<y<<")"<<endl;
    
    focusy =  k+(1/(4*a));
    directrix =  k-(1/(4*a));
    latus = (1/a)/2;
    latus1 = h - latus;
    latus2 = h + latus;
    latuslength = abs(latus1 - latus2);
    
    cout<<"\nThe focus is ("<<h<<","<<focusy<<")"<<endl;
    cout<<"The directrix is "<< directrix <<endl;
    cout<<"The latus rectum's endpoints are "<<"("<<latus1<<","<<focusy<<") and "<<latus2<<","<<focusy<<")"<<endl;
    cout<<"The length of the latus rectum is "<<latuslength<<endl;
    
    cout<< "\nAnother way to find the X-Intercepts is to do "<< (-1*b) / (2*a) << " ± √("<<discriminant<<") ÷ "<<2*a<<endl;
    cout<<"In vertex form it is "<<a<<"(x + "<<-1*axis<<")² + "<<y<<endl;
}
    
int input(){
      cout << "\n Enter a";
      cin >> a;
    
      cout << "\n Enter b";
      cin >> b;
    
      cout << "\n Enter c";
      cin >> c;
}

int foil()
{
	double af, bf, cf, df;
	double ac, ad, bc, bd, allx, ia, ib;

	cout << "(ax + b)(cx + d)" << endl;
	cout << "What is a:" << endl;
	cin >> af;
	cout << "What is b:" << endl;
	cin >> bf;
	cout << "What is c:" << endl;
	cin >> cf;
	cout << "What is d:" << endl;
	cin >> df;

	ac = af*cf;
	ad = af*df;
	bc = bf*cf;
	bd = bf*df;

	allx = ad + bc;

	cout << "Your answer is " << ac << "x^2 + " << allx << "x + " << bd << endl;
	cout << "\nFor quadratics: \na=" << ac << "\nb=" << allx << "\nc=" << bd << endl;
    
    a = ac;
    
    b = allx;
    
    c = bd;
}

int main()
{
  
int etcui = 0;
    cout << "Type a zero for an ETC UI." << endl;
    
    cout << "\n Enter a";
    cin >> a;
    
    if(a == 0){
      cout<<"\nWelcome to the ETC UI. Type the number to run a different version of this code.\n"<<endl;
      
      cout<<"0. Exit (Normal Quadratic Formula)"<<endl;
      cout<<"1. FOIL"<<endl;
      cout<<"2. Repeat"<<endl;
      cout<<"3. Both Side Equation"<<endl;
      cout<<"4. Vertex Form"<<endl;
      cout<<"5. Focus/Directrix and Vertex Input"<<endl;
      cin>>etcui;
      if(etcui == 0){
      input();
      }
      if(etcui == 1){
        foil();
      }
      
      if(etcui == 2){
      }
      
      if(etcui == 3){
        cout<<"ax^2 + bx + c = dx^2 + ex + f"<<endl;
        
        double botha,bothb,bothc,bothd,bothe,bothf;
        cout << "\n Enter a";
        cin >> botha;
        cout << "\n Enter b";
        cin >> bothb;
        cout << "\n Enter c";
        cin >> bothc;
        cout << "\n Enter d";
        cin >> bothd;
        cout << "\n Enter e";
        cin >> bothe;
        cout << "\n Enter f";
        cin >> bothf;
        
        a = botha-bothd;
        b = bothd-bothe;
        c = bothc-bothf;
        }
      
      if(etcui == 4){
        vertex();
      }
      
      if(etcui == 5){
        fdv();
      }
      
      
    }
    else{
    cout << "\n Enter b";
    cin >> b;
    
    cout << "\n Enter c";
    cin >> c;
    }
    
    do{
      
    if (etcui == 2){
      cout << "\n Enter a";
      cin >> a;
    
    if(a == 0){
      break;
    }
    
      cout << "\n Enter b";
      cin >> b;
    
      cout << "\n Enter c";
      cin >> c;
    }
    
    quadratic();
   
}while(etcui == 2 && a != 0);
}
