#include <stdio.h>
#include <locale.h>

bool x = false;
bool primo(int n){
	for (int k = 1; k < n; k++){
		if(n % k == 0){
			if(k != n && k != 1){
				x = false;
			}else{
				x = true;
			}
		}
	}
	if(x == true){
		printf("Primo: ");
		printf("%d\n", n);
		return x;
	}
	x = false;
	
	return x;
}

int main(int argc, char argv){
	
	int p_num = 100;
	int num_p = 3;
	
	int increment = 0;
	
	int count =0;
	bool loop = true;
	
	while(loop){
	bool fun_primo;
	fun_primo = primo(p_num + increment);
	increment ++;
	
	if(fun_primo){
		count ++;
		
	}if(count == num_p){
		break;
	}
 }
	
	return 0;
}
