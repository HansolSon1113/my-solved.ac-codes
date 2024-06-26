//1598
/*
#include <stdio.h>  //stdio.h 헤더 파일
#include <stdlib.h>

typedef struct{
    int big;
    int small;
} nums;

void printForDebug(void){
    for(int x = 0; x < 4; x++){
        for(int y = 0; y < 11; y++){
            printf("%d\t", x+1+4*y);
        }
        printf("\n");
    }
}

void calDist(nums num){
    int firstX = 0, firstY = 0, secondX = 0, secondY = 0, xDist, yDist;
    printf("__startOfmakeArray__\n");
    for(int x = 0; x < num.big/4 + 1; x++){
        for(int y = 0; y < 4; y++){
            int result = 4*x+y+1;
            if(result == num.big){
                printf("First Value Found %d %d from %d\n", x, y, result);
                firstX = x;
                firstY = y;
            }
            if(result == num.small){
                printf("Second Value Found %d %d from %d\n", x, y, result);
                secondX = x;
                secondY = y;
            }
            printf("%d, ", result);
        }
        printf("\n");
    }
    
    printf("%d | %d\n__endOfmakeArray__\n", num.big, num.small);
    
    printf("FV: %d & %d || SV: %d & %d\n", firstX, firstY, secondX, secondY);
    
    xDist = abs(firstX - secondX);
    yDist = abs(firstY - secondY);
    
    printf("Distance: %d\n", xDist + yDist);
    
}

nums getNum(void){
    int startNum, targetNum, bigNum, smallNum;
    scanf("%d %d", &startNum, &targetNum);

    if(startNum >= targetNum){
        bigNum = startNum;
        smallNum = targetNum;
    }
    else{
        bigNum = targetNum;
        smallNum = startNum;
    }
    
    nums num = {.big = bigNum, .small = smallNum};
    return num;
}

int main(void){ //main 함수
    printForDebug();
    
    nums num = getNum();
    
    calDist(num);
    
    return 0;
}
*/

//2457
/*
#include <stdio.h>

int main(void){
    int nums[5], result = 0;
    
    scanf("%d %d %d %d %d", &nums[0], &nums[1], &nums[2], &nums[3], &nums[4]);
    
    for(int i = 0; i < 5; i++){
        result += nums[i] * nums[i];
    }
    
    result %= 10;
    
    printf("%d", result);
    
    return 0;
}
*/

//2749
/*
#include <stdio.h>

int num;

int main(void){
    scanf("%d", &num);
    
    for(int i = 1; i <= 9; i++){
        printf("%d * %d = %d\n", num, i, num*i);
    }
    
    return 0;
}
*/

//2741
/*
#include <stdio.h>

int main(void){
    long int num;
    scanf("%ld", &num);
    
    for(long int i = 1; i <= num; i++){
        printf("%ld\n", i);
    }
    
    return 0;
}
*/

//2753
/*
#include <stdio.h>

int main(void){
    int year;
    scanf("%d", &year);
    
    printf("%d",((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)?1:0);
    
    return 0;
}
*/

//3003
/*
#include <stdio.h>

int main(void){
    int king, queen, rook, bishop, knight, pawn;
    const int orKing = 1, orQueen = 1, orRook = 2, orBishop = 2, orKnight = 2, orPawn = 8;
    
    scanf("%d %d %d %d %d %d", &king, &queen, &rook, &bishop, &knight, &pawn);
    
    printf("%d %d %d %d %d %d\n", orKing - king, orQueen - queen, orRook - rook, orBishop - bishop, orKnight - knight, orPawn - pawn);
    
    return 0;
}
*/

//3733
/*
#include <stdio.h>

int main(void){
    int N = 0, S = 0;
    
    while(scanf("%d %d", &N, &S) == 2){ //EOF returns error?
        printf("%d\n", S/(N+1));
    }
    return 0;
}
*/

//4101
/*
#include <stdio.h>

int main(void){
    long int num1 = -1, num2 = -1;
    
    while(num1 && num2){
        scanf("%ld %ld", &num1, &num2);
        if(num1!=0 && num2!=0){
            (num1>num2)?printf("Yes\n"):printf("No\n");
        }
    }
    
    return 0;
}
*/

//5341
/*
#include <stdio.h>

int main(void){
    int num = -1, cnt;
    while(num){
        cnt = 0;
        scanf("%d", &num);
        if(num!=0){
            for(int i = num; i >= 0; i--){
                cnt+=i;
            }
            
            printf("%d\n", cnt);
        }
    }
    return 0;
}
*/

//5522

/*
#include <stdio.h>

int main(){
    int result=0;
    
    for(int i = 0; i < 4; i++){
        int score;
        scanf("%d", &score);
        
        result+=score;
    }
    
    printf("%d", result);
    return 0;
}
*/

//2530
/*
#include <stdio.h>

int main(void){
    int hour, min, sec;
    unsigned long int cookTime; //초 단위
    
    scanf("%d %d %d", &hour, &min, &sec);
    scanf("%ld", &cookTime);
    
    hour+=cookTime/60/60%24;
    min+=cookTime/60%60;
    sec+=cookTime%60;
  
    if(sec>=60){
        sec%=60;
        min+=1;
    }
    if(min>=60){
        min-=60;
        hour+=1;
    }
    if(hour>=24){
        hour-=24;
    }
    
    printf("%d %d %d\n", hour, min, sec);
    
    return 0;
}
*/

//2742
/*
#include <stdio.h>

int main(void){
    unsigned long int num;
    scanf("%ld", &num);
    
    for(unsigned long int i = num; i > 0; i--){
        printf("%ld\n", i);
    }
    
    return 0;
}
*/

//2752
/*
#include <stdio.h>

int main(void){
    unsigned long int num1, num2, num3, tmp;
    
    scanf("%ld %ld %ld", &num1, &num2, &num3);
    
    if(num3 < num1){
        tmp = num1;
        num1 = num3;
        num3 = tmp;
    }
    if(num2 < num1){
        tmp = num2;
        num2 = num1;
        num1 = tmp;
    }
    if(num3 < num2){
        tmp = num2;
        num2 = num3;
        num3 = tmp;
    }
    
    printf("%ld %ld %ld\n", num1, num2, num3);
    
    return 0;
}
*/

//2845
/*
#include <stdio.h>

int main(void){
    unsigned long int den1, den2, den3, den4, den5, den;
    int personPerMeter, area;
    
    scanf("%d %d", &personPerMeter, &area);
    scanf("%ld %ld %ld %ld %ld", &den1, &den2, &den3, &den4, &den5);
    
    den = personPerMeter * area;
    
    printf("%ld %ld %ld %ld %ld\n", den1-den, den2-den, den3-den, den4-den, den5-den);
    
    return 0;
}
*/

//3046
/*
#include <stdio.h>

int main(void){
    int R1, S;
    
    scanf("%d %d", &R1, &S);
    
    printf("%d\n", S*2-R1);
    
    return 0;
}
*/

//4299
/*
#include <stdio.h>

int main(void){
    int sum, dif, team1, team2;
    
    scanf("%d %d", &sum, &dif);
    if((((sum%2==1 && dif%2==0) || (sum%2==0 && dif%2 == 1)) && (sum!=1 && dif!=0)) || sum<dif){
        printf("-1");
    }
    else{
        if(sum>=dif){
            if(sum != 1 && dif != 0){
                team1 = (sum-dif)/2;
                team2 = (sum+dif)/2;
                if(team1>team2){
                    printf("%d %d", team1, team2);
                }
                else if(team1<team2){
                    printf("%d %d", team2, team1);
                }
            }
            else{
                printf("%d %d", sum, dif);
            }
        }
    }
    
    printf("\n");
    return 0;
}
*/

//4562
/*
#include <stdio.h>

int main(void){
    int n, X, Y;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        scanf("%d %d", &X, &Y);
        if(X<Y){
            printf("NO BRAINS\n");
        }
        else{
            printf("MMM BRAINS\n");
        }
    }
}
*/

//4598
/*
#include <stdio.h>

int main(void){
    int N, X, Y, Z;
    scanf("%d", &N);
    printf("Gnomes:\n");
    
    for(int i = 0; i < N; i++){
        scanf("%d %d %d", &X, &Y, &Z);
        if((X < Y && Y < Z) || (X > Y && Y > Z)){
            printf("Ordered\n");
        }
        else{
            printf("Unordered\n");
        }
    }
    return 0;
}
*/

//4714
/*
 #include <stdio.h>
 
 int main(void){
 double weight;
 while(1){
 scanf("%lf", &weight);
 if(weight < 0){
 break;
 }
 printf("Objects weighing %.2lf on Earth will weigh %.2lf on the moon.\n", weight, weight*0.167);
 }
 
 return 0;
 }
 */

//5300
/*
#include <stdio.h>

int main(void){
    int cnt;
    scanf("%d", &cnt);
    
    for(int i = 1; i <= cnt; i++){
        printf("%d ", i);
        if(i % 6 == 0 && i != cnt){
            printf("Go! ");
        }
    }
    
    printf("Go!\n");
    
    return 0;
}
*/

//1085
/*
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int x, y, w, h, xdif, ydif, dif;
    scanf("%d %d %d %d", &x, &y, &w, &h);
    
    w = (x<=w-x)?0:w;
    h = (y<=h-y)?0:h;
    
    xdif = abs(w - x);
    ydif = abs(h - y);
    
    dif = (xdif<ydif)?xdif:ydif;
    
    printf("%d\n", dif);
    
    return 0;
}
*/

//1267
/*
#include <stdio.h>
#include <stdlib.h>
#define YS_TIME 30
#define YS_F 10
#define MS_TIME 60
#define MS_F 15

int main(void){
    int N, t, YS_Fee = 0, MS_Fee = 0, fee;
    scanf("%d", &N);
    
    for(int i = 0; i < N; i++){
        scanf("%d", &t);
        YS_Fee += (t/YS_TIME + 1) * YS_F;
        MS_Fee += (t/MS_TIME + 1) * MS_F;
    }
    
    if(YS_Fee <= MS_Fee){
        printf("Y ");
        fee = YS_Fee;
    }
    if(MS_Fee <= YS_Fee){
        printf("M ");
        fee = MS_Fee;
    }
    
    printf("%d\n", fee);
    return 0;
}
*/
//1547
/*
#include <stdio.h>

int main(void){
    int ballCup = 1, cnt, ch1, ch2;
    
    scanf("%d", &cnt);
    
    for(int i = 0; i < cnt; i++){
        scanf("%d %d", &ch1, &ch2);
        if(ch1 == ballCup){
            ballCup = ch2;
        }
        else if(ch2 == ballCup){
            ballCup = ch1;
        }
    }
    printf("%d\n", ballCup);
    
    return 0;
}
*/

//2441
/*
#include <stdio.h>

int main(void){
    int cnt;
    scanf("%d", &cnt);
    
    for(int x = 0; x < cnt; x++){
        for(int z = 1; z <= x; z++){
            printf(" ");
        }
        for(int y = cnt; y > x; y--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/

//2442
/*
#include <stdio.h>

int main(void){
    int cnt;
    scanf("%d", &cnt);
    
    for(int x = 0; x < cnt; x++){
        for(int z = 1; z < cnt - x; z++){
            printf(" ");
        }
        for(int y = 0; y <= x; y++){
            printf("*");
        }
        for(int a = 0; a < x; a++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/

//2443
/*
#include <stdio.h>

int main(void){
    int cnt;
    scanf("%d", &cnt);
    
    for(int x = 0; x < cnt; x++){
        for(int z = 0; z < x; z++){
            printf(" ");
        }
        for(int y = cnt; y > x; y--){
            printf("*");
        }
        for(int a = cnt; a > x + 1; a--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/

//2444
/*
#include <stdio.h>

int main(void){
    int cnt;
    scanf("%d", &cnt);
    
    for(int x = 0; x < cnt; x++){
        for(int z = 1; z < cnt - x; z++){
            printf(" ");
        }
        for(int y = 0; y <= x; y++){
            printf("*");
        }
        for(int a = 0; a < x; a++){
            printf("*");
        }
        printf("\n");
    }
    for(int x = 1; x < cnt; x++){
        for(int z = 0; z < x; z++){
            printf(" ");
        }
        for(int y = cnt; y > x; y--){
            printf("*");
        }
        for(int a = cnt; a > x + 1; a--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/

//2445
/*
#include <stdio.h>

int main(void){
    int cnt;
    scanf("%d", &cnt);
    
    for(int x = 0; x < cnt - 1; x++){
        for(int y = 0; y <= x; y++){
            printf("*");
        }
        for(int z = x*2; z < (cnt-1)*2; z++){
            printf(" ");
        }
        for(int a = 0; a <= x; a++){
            printf("*");
        }
        printf("\n");
    }
    for(int x = 0; x < cnt; x++){
        for(int y = cnt; y > x; y--){
            printf("*");
        }
        for(int z = 0; z < x*2; z++){
            printf(" ");
        }
        for(int a = cnt; a > x; a--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/

//1075
/*
#include <stdio.h>

int main(void){
    long N, F;
    scanf("%ld %ld", &N, &F);
    
    N -= N % 100;
    
    while(1){
        if(N % F == 0){
            break;
        }
        else{
            N += 1;
        }
    }
    
    printf("%ld%ld\n", N % 100 / 10, N % 10);
    
    return 0;
}
*/

//1009
/*
#include <stdio.h>

int main(void){
    long T, a, b, sum;
    
    scanf("%ld", &T);
   
    for(int i = 0; i < T; i++){
        sum = 1;
        scanf("%ld %ld", &a, &b);
        for(int x = 0; x < b; x++){
            sum = (sum * a) % 10;
        }
        
        if(sum == 0){
            sum = 10;
        }
        
        printf("%ld\n", sum);
    }
    
    return 0;
}
*/

//1100
/*
#include <stdio.h>

int main(void){
    int sum = 0;
    char str[8];
    
    for(int x = 0; x < 8; x++){
        scanf("%s", str);
        
        for(int y = 0; y < 8; y++){
            if((str[y] == 'F') && ((x % 2 == 0 && y % 2 == 0) || (x % 2 == 1 && y % 2 == 1))){
                sum+=1;
            }
        }
    }
    printf("%d", sum);
    
    return 0;
}
*/

//1159
/*
#include <stdio.h>
#include <math.h>

int main(void){
    double diag, wratio, hratio, cal, ratio;
    int height, width;
    
    scanf("%lf %lf %lf", &diag, &wratio, &hratio);
    
    cal = wratio * wratio + hratio * hratio;
    ratio = diag * diag / cal;
    
    width = wratio * sqrt(ratio);
    height = hratio * sqrt(ratio);
    
    printf("%d %d\n", width, height);
    
    return 0;
}
*/

//1032
/*
#include <stdio.h>

int main(void){
    long cnt, num_, numMax = 0, numMin;
    scanf("%ld", &cnt);
    
    for(int i = 0; i < cnt; i++){
        scanf("%ld", &num_);
        if(i == 0){
            numMin = num_;
        }
        if(num_ > numMax){
            numMax = num_;
        }
        if(num_ < numMin){
            numMin = num_;
        }
    }
    
    printf("%ld\n", numMax * numMin);
    
    return 0;
}
*/

//1094
/*
#include <stdio.h>

int main(void){
    int len = 64, X, num = 0;
    scanf("%d", &X);
    
    int i = 0;
    
    num = len;
    while(1){
        if(len <= X){
            break;
        }
        len /= 2;
    }
    
    while(len){
        if(X / len > 0){
            X -= len;
            i += 1;
        }
        len /= 2;
    }
    
    printf("%d\n", i);
    
    return 0;
}
*/

//8959
/*
#include <stdio.h>

int main(void){
    int cnt, sum, stk;
    
    scanf("%d", &cnt);
    
    for(int i = 0; i < cnt; i++){
        char str[80];
        for(int i = 0; i < 80; i++){
            str[i] = 0;
        }
        sum = 0;
        stk = 1;
        scanf("%s", &str);
        
        for(int a = 0; a < 80; a++){
            if(str[a] == 'O'){
                sum += stk;
                stk += 1;
            }
            else{
                stk = 1;
            }
        }
        printf("%d\n", sum);
    }
    
    return 0;
}
*/

//1157
/*
#include <stdio.h>

int main(void){
    char str[1000000], result = '\0';
    int sum = 0, found[26] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    
    for(int i = 0; i < 1000000; i++){
        str[i] = 0;
    }
    
    scanf("%s", &str);
    
    for(int x = 0; x < 1000000; x++){
        if(str[x] == 0){
            break;
        }
        
        if(str[x] >= 'a' && str[x] <= 'z'){
            str[x] = str[x] - 32;
        }
        
        found[str[x] - 65] += 1;
    }
    
    for(int i = 0; i < 26; i++){
        if(found[i] > sum){
            sum = found[i];
            result = i + 65;
        }
        else if(found[i] == sum){
            result = '?';
        }
    }
    
    printf("%c\n", result);
    
    return 0;
}
*/

//1259 팰린드롬수
/*
#include <stdio.h>

int main(void){
    int num, len = 0, boolean = 1, mul1 = 1, mul2 = 1, res1, res2;
    
    while(1){
        scanf("%d", &num);
        
        if(num == 0){
            break;
        }
        
        len = 0;
        boolean = 1;
        mul1 = 1;
        
        while(num/mul1){
            len += 1;
            mul1 *= 10;
        }
        
        for(int x = 0; x < len/2; x++){
            mul1 = mul2 = 1;
            for(int y = 0; y < (len - 1) - x; y++){
                mul1 *= 10;
            }
            res1 = (num/mul1)%10;
            
            
            for(int y = 0; y < x + 1; y++){
                mul2 *= 10;
            }
            res2 = num/(mul2/10)%10;
                
            if(res1 != res2){
                boolean = 0;
            }
        }
        
        switch(boolean){
            case 1:
                printf("yes\n");
                break;
            default:
                printf("no\n");
                break;
        }
    }
    
    return 0;
}
*/

//1357
/*
#include <stdio.h>

int reverse(int num){
    int revNum = 0, mul = 1;
    
    revNum = num;
    
    while(num >= 10){
        mul *= 10;
        num /= 10;
    }
        
    num = revNum;
    revNum = 0;
    
    for(int i = 0; i < 4; i ++){
        revNum += num%10 * mul;
        num /= 10;
        mul /= 10;
    }

    return revNum;
}

int main(void){
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    
    num1 = reverse(num1);
    num2 = reverse(num2);
    
    printf("%d\n", reverse(num1 + num2));
}
*/

//1546
/*
#include <stdio.h>
#include <math.h>

int main(void) {
    unsigned int N;
    scanf("%u", &N);
    
    double score[N], M = 0.0, sum = 0.0;
    
    for(int i = 0; i < N; i++) {
        scanf("%lf", &score[i]);
        if(score[i] > M)
            M = score[i];
    }
    
    for(int i = 0; i < N; i++) {
        score[i] = score[i] / M * 100;
        sum += score[i];
    }
    
    double average = sum / N;
    printf("%.2f\n", round(average * 100) / 100);
    
    return 0;
}
*/

//1551
/*
#include <stdio.h>

int main(void) {
    int len, cnt;
    scanf("%d %d", &len, &cnt);
    int nums[len], newNum[len];
    
    for(int i = 0; i < len; i++){
        scanf("%d,", &nums[i]);
    }
    
    if(cnt >= 1){
        for(int i = 0; i < cnt; i++){
            for(int j = 0; j < len; j++){
                newNum[j] = nums[j+1] - nums[j];
            }
            
            for(int j = 0; j < len - i; j++){
                nums[j] = newNum[j];
            }
        }
        
        for(int i = 0; i < len - cnt; i++){
            if(i == len - cnt - 1){
                printf("%d\n", newNum[i]);
                break;
            }
            printf("%d,", newNum[i]);
        }
    }
    
    else{
        for(int i = 0; i < len; i++){
            if(i == len - 1){
                printf("%d\n", nums[i]);
                break;
            }
            printf("%d,", nums[i]);
        }
    }
    
    return 0;
}
*/

//11866
/*
 #include <stdio.h>
 #include <stdlib.h>

 int* queue(int *nums, int N, int rem){
     for(int i = 0; i < N; i++){
         if(nums[i] == rem){
             for(int a = i; a < N-1; a++){
                 int tmp = nums[a];
                 nums[a] = nums[a+1];
                 nums[a+1] = tmp;
             }
             break;
         }
     }
     
     return nums;
 }

 int main(void){
     int N, K, i = -1;
     scanf("%d %d", &N, &K);
     
     int nums[N], check[N], arr[N];
     for(int x = 0; x < N; x++){
         arr[x] = nums[x] = check[x] = x+1;
     }
     
     for(int a = 0; a < N; a++){
         int cnt = 0;
         while(cnt < K){
             i = (i+1) % N;
             if(check[i]){
                 cnt++;
             }
         }
         check[i] = 0;
         *arr = *queue(arr, N, nums[i]);
     }
     
     printf("<");
     for(int i = 0; i < N-1; i++){
         printf("%d, ", arr[i]);
     }
     printf("%d>\n", arr[N-1]);
         
     return 0;
 }
 */

//2675
/*
#include <stdio.h>

void run(void){
    int loopCnt;
    char str[21];
    for(int i = 0; i < 21; i++){
        str[i] = '\0';
    }
    scanf("%d %20s", &loopCnt, str);
    for(int y = 0; str[y] != '\0'; y++){
        for(int z = 0; z < loopCnt; z++){
            printf("%c", str[y]);
        }
    }
    printf("\n");
}

int main(void){
    int cnt;
    scanf("%d", &cnt);
    
    for(int x = 0; x < cnt; x++){
        run();
    }
    
    return 0;
}
*/

//팩토리얼 계산 코드
/*
 #include <stdio.h>

 long long fac(long long sum, long long num){
     sum *= num;
     num--;
     if(num >= 1){
         sum = fac(sum, num);
     }
     return sum;
 }

 long long comb(long long num, long long r){
     long long comb = fac(1, num) / (fac(1, num - r)*fac(1, r));
     return comb;
 }

 int main(void){
     long long num1, num2;
     scanf("%lld %lld", &num1, &num2);
     
     printf("%lld", comb(num1, num2));
     printf("\n");
     return 0;
 }

 */

//10818
/*
 #include <stdio.h>

 int main(void){
     int cnt, min, max;
     scanf("%d", &cnt);
     int num[cnt];
     
     for(int i = 0; i < cnt; i++){
         scanf("%d", &num[i]);
     }
     
     max = min = num[0];
     
     for(int i = 0; i < cnt; i++){
         if(num[i] > max){
             max = num[i];
         }
         else if(num[i] < min){
             min = num[i];
         }
     }
     
     printf("%d %d\n", min, max);
     
 }
 */

//10950
/*
 #include <stdio.h>

 int main(void){
     int cnt, num1, num2;
     scanf("%d", &cnt);
     
     for(int i = 0; i < cnt; i++){
         scanf("%d %d", &num1, &num2);
         printf("%d\n", num1+num2);
     }
     
 }

 */

//10951
/*
 #include <stdio.h>

 int main(void){
     int num1, num2;
     
     while(scanf("%d %d", &num1, &num2) == 2){
         printf("%d\n", num1+num2);
     }
     return 0;
 }

 */

//10952
/*
#include <stdio.h>

int main(void){
    int num1, num2;
    
    while(1){
        scanf("%d %d", &num1, &num2);
        if(num1 == 0 && num2 == 0){
            break;
        }
        printf("%d\n", num1+num2);
    }
    return 0;
}

*/

//11654
/*
#include <stdio.h>

int main(void){
    char str;
    scanf("%c", &str);
    printf("%d", str);
    
    return 0;
}
*/

//11720
/*
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int cnt, sum = 0;
    scanf("%d", &cnt);
    char num[cnt];
    
    scanf("%s", num);
    
    for(int i = 0; i < cnt; i++){
        sum += num[i] - '0';
    }

    printf("%d\n", sum);
    
    return 0;
}

*/

//2577
/*
 #include <stdio.h>
 #include <stdlib.h>

 int main(void){
     int num1, num2, num3, num, cnt[10] = {0,0,0,0,0,0,0,0,0,0};
     scanf("%d %d %d", &num1, &num2, &num3);
     
     num = num1 * num2 * num3;
     
     while(num){
         int n = num%10;
         cnt[n]++;
         num/=10;
     }
     
     for(int i = 0; i < 10; i++){
         printf("%d\n", cnt[i]);
     }
     
     return 0;
 }

 */

//2884
/*
 #include <stdio.h>
 #include <stdlib.h>

 int main(void){
     int hour, min;
     scanf("%d %d", &hour, &min);
     
     min -= 45;
     if(min < 0){
         min += 60;
         hour -= 1;
     }
     if(hour < 0){
         hour = 23;
     }
     
     printf("%d %d\n", hour, min);
     
     return 0;
 }

 */

//2920
/*
 #include <stdio.h>
 #include <stdlib.h>

 int main(void){
     int num[8], res, a;
     
     for(int i = 0; i < 8; i++){
         scanf("%d", &num[i]);
         if(i >= 1){
             res = num[i] - num[i-1];
             if(res == 1){
                 a = 1;
             }
             else if(res == -1){
                 a = -1;
             }
             else{
                 a = 0;
                 break;
             }
         }
     }
     
     switch(a){
         case 1:
             printf("ascending\n");
             break;
         case -1:
             printf("descending\n");
             break;
         default:
             printf("mixed\n");
             break;
     }
     
     return 0;
 }
 */

//3052
/*
 #include <stdio.h>

 int notIn(int *num, int target){
     for(int i = 0; i < 10; i++){
         if(num[i] == target){
             return 0;
         }
     }
     return 1;
 }

 int main(void){
     int num[10], res = 0, in[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
     for(int i = 0; i < 10; i++){
         scanf("%d", &num[i]);
         num[i] %= 42;
     }
     
     for(int i = 0; i < 10; i++){
         if(notIn(in, num[i])){
             res++;
             in[i] = num[i];
         }
     }
     
     printf("%d\n", res);
     return 0;
 }
 */

//10250
/*
 #include <stdio.h>

 int main(void){
     int floors, rooms, cnt, resv = 101, ccnt;
     
     scanf("%d", &ccnt);
     for(int i = 0; i < ccnt; i++){
         
         scanf("%d %d %d", &floors, &rooms, &cnt);
         
         for(int x = 0; x <= rooms; x++){
             for(int y = 0; y <= floors; y++){
                 if(floors*x+y == cnt){
                     resv = y*100 + x+1;
                     goto RES;
                 }
             }
         }
         
     RES:
         printf("%d\n", resv);
     }
     
     return 0;
 }
 */

//1978
/*
 #include <stdio.h>

 int calc(int* nums, int N){
     int boolean, sum = 0;
     
     for(int i = 0; i < N; i++){
         boolean = 1;
         for(int j = 2; j < nums[i]; j++){
             if(nums[i] % j == 0){
                 boolean = 0;
                 break;
             }
         }
         if(boolean && nums[i] > 1){
             sum++;
         }
     }
     
     return sum;
 }

 int main(void){
     int N;
     scanf("%d", &N);
     int nums[N];
     
     for(int i = 0; i < N; i++){
         scanf("%d", &nums[i]);
     }
     
     printf("%d", calc(nums, N));
     
     
     printf("\n");
     return 0;
 }

 */

//2747(피보나치)
/*
 #include <stdio.h>

 int main(void){
     int num, oldFiv = 1, fiv = 0, tmp;
     scanf("%d", &num);
     for(int i = 0; i < num; i++){

         tmp = fiv;
         fiv += oldFiv;
         oldFiv = tmp;
     }
     
     printf("%d\n", fiv);
     return 0;
 }
 */

//2748
/*
 #include <stdio.h>

 int main(void){
     long long num, oldFiv = 1, fiv = 0, tmp;
     scanf("%lld", &num);
     for(int i = 0; i < num; i++){
         tmp = fiv;
         fiv += oldFiv;
         oldFiv = tmp;
     }
     
     printf("%lld\n", fiv);
     return 0;
 }
 */

//1193
/*
 #include <stdio.h>

 int main(void){
     long long n, cnt = 0, sum = 0, a;
     scanf("%lld", &n);

     while(1){
         cnt++;
         if(sum + cnt < n){
             sum += cnt;
         }
         else{
             break;
         }
     }
     a = n - sum;
     
     for(long long i = 1; i <= cnt; i++){
         if(a <= 1){
             if(cnt % 2 == 0){
                 printf("%lld/%lld\n", i, cnt-i+1);
             }
             else{
                 printf("%lld/%lld\n", cnt-i+1, i);
             }
             break;
         }
         a--;
     }
 }

 */

//9009
/*
 #include <stdio.h>

 long long fib(int index);
 long long findFib(long long target);

 int main(void){
     int n;
     long long target, res[92], cnt;
     scanf("%d", &n);
     for(int i = 0; i < n; i++){
         cnt = 0;
         for(int i = 0; i < 92; i++){
             res[i] = NULL;
         }
         scanf("%lld", &target);
         while(target > 0){
             res[cnt] = findFib(target);
             target -= res[cnt];
             cnt++;
         }
         for(int i = 91; i >= 0; i--){
             if(res[i] != NULL){
                 printf("%lld ", res[i]);
             }
         }
         printf("\n");
     }
 }

 long long fib(int index){
     long long fib = 0, oldFib = 1, tmp;
     for(int i = 0; i < index; i++){
         tmp = fib;
         fib += oldFib;
         oldFib = tmp;
     }
     return fib;
 }

 long long findFib(long long target){
     long long result = 0;
     for(int i = 1; i <= 92; i++){
         if(fib(i) <= target && fib(i+1) > target){
             result = fib(i);
             break;
         }
     }
     return result;
 }

 */

//1316
/*
 #include <stdio.h>

 int group(int n);

 int main(void){
     int n, cnt = 0;
     scanf("%d", &n);
     for(int i = 0; i < n; i++){
         if(group(n)){
             cnt++;
         }
     }
     
     printf("%d\n", cnt);
     return 0;
 }

 int group(int n){
     char str[101], fnd[26], last = NULL;
     scanf("%s", &str);
     
     for(int i = 0; i < 26; i++){
         fnd[i] = NULL;
     }
     
     for(int i = 0; i < 100; i++){
         if(str[i] == NULL){
             break;
         }
         
         for(int j = 0; j < 26; j++){
             if(str[i] == fnd[j] && str[i] != last){
                 return 0;
             }
         }
         
         fnd[str[i] - 'a'] = str[i];
         last = str[i];
     }
     
     return 1;
 }

 */

//1436
/*
 #include <stdio.h>

 long long find(int N);

 int isIn(long long num);

 int main(void){
     int N;
     scanf("%d", &N);
     
     printf("%lld\n", find(N));
     return 0;
 }

 long long find(int N){
     static int n, cnt;
     n++;
     if(isIn(n)){
         cnt++;
     }
     if(cnt < N){
         find(N);
     }
     return n;
 }

 int isIn(long long num){
     int cnt = 0;
     while(num > 0){
         int cal = num % 10;
         if(cnt <= 2 && cal != 6){
             cnt = 0;
         }
         if(cal == 6){
             cnt++;
         }
         num /= 10;
     }
     if(cnt >= 3){
         return 1;
     }
     return 0;
 }
 */
