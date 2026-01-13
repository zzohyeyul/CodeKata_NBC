#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2)
{
    int answer = num1 - num2;

    return answer;
} // 12.22 두 수의 차



#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    int answer = num1 * num2;
    return answer;
} // 12.23 두 수의 곱



#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    int answer = num1 / num2;
    return answer;
} // 12.24 몫 구하기



#include <string>
#include <vector>

using namespace std;

int solution(int age) {
    return 2022 - age + 1;
} // 12.24 나이 출력



#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    if (num1 == num2) {
        return 1;
    }
    else {
        return -1;
    }
} // 12.26 숫자 비교하기



#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    return num1 + num2;
} // 12.29 두 수의 합



#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    return num1 * 1000 / num2;
} // 12.30 두 수의 나눗셈


#include <string>
#include <vector>

int solution(int angle) {
    if (angle < 90) {
        return 1;
    }
    else if (angle == 90) {
        return 2;
    }
    else if (angle < 180) {
        return 3;
    }
    else {
        return 4;
    }
} // 12.31 각도기


#include <iostream>

using namespace std;

int solution(int n) {
    int sum = 0;

    for (int i = 2; i <= n; i += 2) {
        sum += i;
    }

    return sum;
} // 1.2 짝수의 합



#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    int sum = 0;

    for (int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
    }

    return static_cast<double>(sum) / numbers.size();
} // 1.2 배열의 평균 값



#include <string>
#include <vector>

using namespace std;

string solution(int num) {
    if (num % 2 == 0) {
        return "Even";
    }
    else {
        return "Odd";
    }
} // 1.5 짝수와 홀수



#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    int sum = 0;

    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
    }

    return static_cast<double>(sum) / arr.size();
} // 1.5 평균 구하기



#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int sum = 0;

    while (n > 0) {
        sum += n % 10;
        n /= 10;       
    }

    return sum;
} // 1.6 자릿수 더하기



#include <iostream>
using namespace std;

int solution(int n) {
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    return sum;
} // 1.7 약수의 합



#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    for (int x = 2; x < n; x++) {
        if (n % x == 1) return x;
    }
    return 0;
} // 1.8 나머지가 1이 되는 숫자



#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    for (int x = 2; x < n; x++) {
        if (n % x == 1) return x;
    }
    return -1;
} // 1.12 나머지가 1이 되는 수 찾기



#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> ans;
    ans.reserve(n);

    long long step = x;
    for (int i = 1; i <= n; i++) {
        ans.push_back(step * i);
    }
    return ans;
} // 1.12 x만큼 간격이 있는 n개의 숫자



#include <vector>
using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;

    while (n > 0) {
        answer.push_back(n % 10);
        n /= 10;
    }

    return answer;
} // 1.13 자연수 뒤집어 배열로 만들기