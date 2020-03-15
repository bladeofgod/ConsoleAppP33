// ConsoleAppP33.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

using namespace std;

double power(double x ,int n);//声明函数

int fun2(int m) {
    return m * m;
}

int fun1(int x,int y) {
    return fun2(x) + fun2(y);
}

int calculateRecusive(int n) {
    if (n <= 1) return n;
    int index = n;
    int sum = 1;
    while (index<=1)
    {
        sum *= index;
        index--;
    }
    sum *= calculateRecusive(n-1);
    return sum;
}

int funC(int n) {
    unsigned f;
    if (n == 0) {
        return 1;
    }
    else {
        f = funC(n - 1) * n;
    }
    return f;
}

int fib(int n) {

    if (n < 3) {
        return 1;
    }
    else {
        return (fib(n-2) + fib(n-1));
    
    }

}

int main()
{   
    /// p 52

    int n, anwser; 

    cout << "plz enter a number" << "\n";
    cin >> n;
    anwser = fib(n);

    cout << "anwser is :" << anwser << "\n";




    ///practice 3 recusive

    //int aa;
    //cout << "pls enter a integer" << endl;
    //cin >> aa;

    //cout << "value is " << funC(aa)<<endl;


    /////practice 2 求两个数的平方和
    //int a, b;

    //int value;

    //cout << "请输入两个整数" << endl;
    //cin >> a >> b;

    //value = fun1(a,b);

    //cout << "结果是" << value << endl;


    ///practice 1  二进制转换

    //int value = 0;
    //
    //string ch;
    //cout << "请输入8位二进制位" << endl;
    //cin >> ch;
    ////01101001
    //reverse(ch.begin(),ch.end());
    //for (int i = 7; i >= 0; i--) 
    //{
  
    //    if (ch[i] == '1') {
    //        cout <<"index :" <<  i <<"   "<< ch[i] << endl;
    //        value += static_cast<int>(power(2, i));
    //        cout << value<<endl;
    //    }

    //}
    //cout << "数值是 ： " << value << endl;

}


double power(double x, int n) {
    double val = 1.0;
    while (n--) {
        val *= x;
    }
    return val;

}
