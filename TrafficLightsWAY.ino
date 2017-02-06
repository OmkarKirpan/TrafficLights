//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// Traffic Lights 4 WAY 
// 
// Made by Er Omkar Kirpan
// License: CC-BY-SA 3.0
// Downloaded from: https://circuits.io/circuits/3915273-traffic-lights-4-way


int A[4][3] = 	{
					{1, 2, 3},
					{4, 5, 6},
					{7, 8, 9},
					{10, 11, 12}
				};
int read = 13;
int dr=0;

void setup() {
      initi();
  	pinMode(read, INPUT);
}

void loop() {
  d1();
  
}

void initi(){
	for(int i=0; i<4; i++)
	{
			for (int j = 0; j < 3; j++ ) {
				pinMode( A[i][j], OUTPUT );
			}	
	}
}

void z(){
	for(int i=0; i<4; i++)
	{
			for (int j = 0; j < 3; j++ ) {
					digitalWrite(A[i][j],0);
			}	
	}
}
/*
void d1(){
	int p=1;
	one();
	delay(9000);
  y1();
  delay(3000);
  	two();
	delay(9000);
  y2();  delay(3000);
  	three();
	delay(9000);
  y3();  delay(3000);
  	four();
	delay(9000);
  y4();  delay(3000);
	//check(p);
}
*/

void d1(){
	int p=1;
	one();
	delay(9000);
	check(p);
}

void d2(){
	int p=2;
	two();
	delay(9000);
	check(p);
}

void d3(){
	int p=3;
	three();
	delay(9000);
	check(p);
}

void d4(){
	int p=4;
	four();
	delay(9000);
	check(p);
}

void one(){
	int p=3;
	z();
	for(int i=0; i<4; i++)
	{
		if(i==p){
			digitalWrite(A[p][1],1);
		}
		else{
			//for ( j = 0; j < 3; j++ ) {}
			digitalWrite(A[i][0],1);
		}
	}
}


void two(){
	int p=2;
	z();
	for(int i=0; i<4; i++)
	{
		if(i==p){
			digitalWrite(A[p][1],1);
		}
		else{
			//for ( j = 0; j < 3; j++ ) {}
			digitalWrite(A[i][0],1);
		}
	}
}

void three(){
	int p=1;
	z();
	for(int i=0; i<4; i++)
	{
		if(i==p){
			digitalWrite(A[p][1],1);
		}
		else{
			//for ( j = 0; j < 3; j++ ) {}
			digitalWrite(A[i][0],1);
		}
	}
}

void four(){
	int p=0;
	z();
	for(int i=0; i<4; i++)
	{
		if(i==p){
			digitalWrite(A[p][1],1);
		}
		else{
			//for ( j = 0; j < 3; j++ ) {}
			digitalWrite(A[i][0],1);
		}
	}
}

void y1(){
	z();	
	int j;
		for(int i=0; i<4; i++)
		{
				//for ( j = 0; j < 3; j++ ) {
				if(i==0||i==1){
					j=0;	
					digitalWrite(A[i][j],1);
				}
				else if(i==2||i==3){
					j=2;	
					digitalWrite(A[i][j],1);
				}
		}
}

void y2(){
	z();	
	int j;
		for(int i=0; i<4; i++)
		{
				//for ( j = 0; j < 3; j++ ) {
				if(i==0||i==3){
					j=0;	
					digitalWrite(A[i][j],1);
				}
				else if(i==1||i==2){
					j=2;	
					digitalWrite(A[i][j],1);
				}
		}
}

void y3(){
	z();	
	int j;
		for(int i=0; i<4; i++)
		{
				//for ( j = 0; j < 3; j++ ) {
				if(i==2||i==3){
					j=0;	
					digitalWrite(A[i][j],1);
				}
				else if(i==0||i==1){
					j=2;	
					digitalWrite(A[i][j],1);
				}
		}
}

void y4(){
	z();	
	int j;
		for(int i=0; i<4; i++)
		{
				//for ( j = 0; j < 3; j++ ) {
				if(i==1||i==2){
					j=0;	
					digitalWrite(A[i][j],1);
				}
				else if(i==0||i==3){
					j=2;	
					digitalWrite(A[i][j],1);
				}
		}
}

void e(){
	z();	
	int j;
		for(int i=0; i<4; i++)
		{
				//for ( j = 0; j < 3; j++ ) {
				if(i==0||i==2){
					j=0;	
					digitalWrite(A[i][j],1);
				}
				else if(i==1||i==3){
					j=2;	
					digitalWrite(A[i][j],1);
				}
		}
}

void check(int p){
	dr= digitalRead(read);
	if(dr){
  			switch(p){
			case 1:
				e();
				delay(3000);
				d3();
				break;
			case 2:
				y2();
				delay(3000);
				d3();
				break;
			case 3:
				y3();
				delay(3000);
				d4();
				break;
			case 4:
				y3();
				delay(3000);
				d3();
				break;
			}
  		}
  	else{
  			switch(p){
			case 1:
				y1();
				delay(3000);
				d2();
				break;
			case 2:
				y2();
				delay(3000);
				d3();
				break;
			case 3:
				y3();
				delay(3000);
				d4();
				break;
			case 4:
				y4();
				delay(3000);
				d1();
				break;
			}
  	}
}
