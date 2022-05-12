#include <iostream>
#include <string>

using namespace std;

// sizeof()计算字符串的结束符号"\0",strlen()不计算结束符号

int main()
{
    char str[] = "hello";
    int a[] = {3, 5, 7};
    printf("%d\n%d\n%d\n", sizeof(str), strlen(str), sizeof(a)); //输出6， 5， 12

    char x[] = "abcdefg";
    char y[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
    //等价于char x[] = { 'a','b','c','d','e','f','g','\0' }
    printf("%d\n%d\n", sizeof(x), sizeof(y)); //输出8，7

    return 0;
}
