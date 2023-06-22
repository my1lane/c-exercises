int func(char*x, char b){
    int len = 0, count = 0;
    char y = *x;

    while(y != '\0'){
        len += 1;
        x += 1;
        y = *x;
    }

    x = x - len;

    int i;
    for(i = 0; i < len; i+=1){
        if(b == *x){
            count +=1;        
        }

        x += 1;
        
    }

    return count;
}

int main() {
    char str[] = "Hello, my name is Mylane!";
    char target = 'l';
    
    int result = func(str, target);
    printf("Count: %d", result);

    return 0;
}
