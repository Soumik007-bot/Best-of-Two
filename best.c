int main() {
	// your code goes here
	int tc, a1, a2, a3, b1, b2, b3;
	scanf("%d", &tc);
	while(tc--){
	    scanf("%d %d %d %d %d %d", &a1, &a2, &a3, &b1, &b2, &b3);
	    
	    int a11, a22, a33;
	    
	    if(a1 >= a2 && a1 >= a3){
	        a11 = a1;
	    }
	    else if(a2 >= a1 && a2 >= a3){
	        a11 = a2;
	    }
	    else{
	        a11 = a3;
	    }
	    
	    if(a1 <= a2 && a1 <= a3){
	        a33 = a1;
	    }
	    else if(a2 <= a1 && a2 <= a3){
	        a33 = a2;
	    }
	    else{
	        a33 = a3;
	    }
	    
	    
	    a22 = a1 + a2 + a3 - a11 - a33;
	    
	    int hr1;
	    
	    hr1 = a11 + a22;
	    
	    int b11, b22, b33;
	    
	    if(b1 >= b2 && b1 >= b3){
	        b11 = b1;
	    }
	    else if(b2 >= b1 && b2 >= b3){
	        b11 = b2;
	    }
	    else{
	        b11 = b3;
	    }
	    
	    if(b1 <= b2 && b1 <= b3){
	        b33 = b1;
	    }
	    else if(b2 <= b1 && b2 <= b3){
	        b33 = b2;
	    }
	    else{
	        b33 = b3;
	    }
	    
	    
	    b22 = b1 + b2 + b3 - b11 - b33;
	    
	    int hr2;
	    
	    hr2 = b11 + b22;
	    
	    if(hr1 == hr2){
	        printf("TIE\n");
	    }
	    else if(hr1 > hr2){
	        printf("ALICE\n");
	    }
	    else{
	        printf("BOB\n");
	    }
	}
	
	return 0;

}