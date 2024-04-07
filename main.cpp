#include <iostream>
#include<time.h>

using namespace std;

    void aleatoire(int T[],int n){
        int j=n/2;
        for (int i = 0; i < n; i++) {
             T[i]=j;
                j--;
            }
			for (int i = 0; i < n; i++) {
             cout<<" "<<T[i];}}

 void remplir_tableau(int T[],int n){
    	
 	for(int i=0;i<n;i++){
	 cout<<"Entrer element "<<i+1<<": ";cin>>T[i];	}
	  cout<<endl;
	 cout<<"Tableau: "<<endl;
 	for(int i=0;i<n;i++){
 	 cout<<" "<<T[i]<<" ";	}
 	 cout<<endl;
 }
 
 
 void tri_selection(int T[], int n){
 	int t;
     	
 	for (int i=0; i<n-1; i++) { 
      int min = i; 
      for (int j=n-1; j>i; j--){
 
           if ( T[j] < T[min]){
             min = j; }}
 
   t=T[i];
   T[i]=T[min];
   T[min]=t; }

 	cout<<endl<<"tri par Selection"<<endl;
 			
 	for(int i=0;i<n;i++){
	 cout<<" "<<T[i]<<" ";	}
 	
 }
 
 
 void tri_insertion(int T[],int n){
 	int t,p;

 	for(int j=0;j<n;j++){
 		 t=T[j];
 		p=j;
 		
 		while((p>0)&&(T[p-1]>t)){
 			T[p]=T[p-1];
 			p--; }
 			T[p]=t; }
 			
 			
 	cout<<endl<<"tri par Insertion "<<endl;
 			
 	for(int i=0;i<n;i++){
	
	 cout<<" "<<T[i]<<" ";	}
 }
 
  

int main(int argc, char** argv) {
	int x;
	int T[x];
	char s;
	float temps;
    clock_t start;
	
	
	cout<<"entrer la taille: ";cin>>x; cout<<endl;
	if(x>0){
	
	//remplir_tableau(T,x);
	aleatoire(T,x);
	
	cout<<endl<<"Choisir un Algorithme  s / i : "<<endl;cin>>s;
	
	switch(s){
		
	case 'i':
     start = clock();
     
	 tri_insertion(T,x); 
 
     temps = 1000.0*(clock()-start)/CLOCKS_PER_SEC;
     cout<<endl<<"temps execution (Insertion): "<<fixed<<temps<<"ms";
      
      break;
	
	case 's':
	start = clock();
     
	tri_selection(T,x); 
 
     temps = 1000.0*(clock()-start)/CLOCKS_PER_SEC;
     cout<<endl<<"temps execution (Selection): "<<fixed<<temps<<"ms";
	  } }
	
	return 0;
}
