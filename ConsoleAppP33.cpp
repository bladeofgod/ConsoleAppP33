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


///p60
class Clock {
public:
    Clock();
    Clock(int newH,int newM,int newS);
    void setTime(int newH,int newM,int newS);
    void showTime();

private:
    int hour, minute, second;
};

Clock::Clock(int newH,int newM,int newS) 
    :hour(newH), minute(newM), second(newS) {
    
}

Clock::Clock() : hour(0), minute(0), second(0) {}

inline void Clock::showTime() {
    cout << hour << ":" << minute << ":" << second << endl;
}

void Clock::setTime(int h,int m,int s) {
    hour = h;
    minute = m;
    second = s;
}


///p73
enum CPU_Rank {P1=1,P2,P3,P4,P5,P6,P7};


class Cpu {
private:
    CPU_Rank rank;
    int frequency;
    float voltage;
public:
    Cpu(CPU_Rank r, int f, float v) {
        rank = r;
        frequency = f;
        voltage = v;
        cout << "init constructor function" << endl;
    }
    ~Cpu() { cout << "restore a cpu" << endl; }

    CPU_Rank getRank()const { return rank; }
    int getFrequency()const { return frequency; }
    float getVoltage()const { return voltage; }

    void setRank(CPU_Rank r) { rank = r; }
    void setFrequency(int f) { frequency = f; }
    void setVoltage(float v) { voltage = v; }

    void run() { cout << "run cpu"<<endl; }
    void stop() { cout << "stop cpu" << endl; }

};

enum RAMP_TYPE {DDR2=2,DDR3,DDR4};

class Ram {
private:
    enum RAMP_TYPE type;
    unsigned int frequency;
    unsigned int size;

public:
    Ram(RAMP_TYPE t, unsigned int f, unsigned int s) {
        type = t;
        frequency = f;
        size = s;
    }

    ~Ram() { cout << "restore object" << endl; }

    RAMP_TYPE getType()const { return type; }
    unsigned int getFrequency()const { return frequency; }
    unsigned int getSize()const { return size; }

    void setType(RAMP_TYPE t) { type = t; }
    void setFrequency(unsigned int f) { frequency = f; }
    void setSize(unsigned int s) { size = s; }

    void run() { cout << "run ram" << endl; }
    void stop() { cout << "stop ram" << endl; }

};

enum CDROM_Interface {SATA,USB};
enum CDROM_Install_Tywpe {external,built_in};


class CD_ROM {
private:
    CDROM_Interface interface_type;
    unsigned int cache_size;
    CDROM_Install_Tywpe install_type;

public:
    CD_ROM(CDROM_Interface i, unsigned int c, CDROM_Install_Tywpe it) {
        interface_type = i;
        cache_size = c;
        install_type = it;
    }
    ~CD_ROM() { cout << "restore cd_rom" << endl; }

    CDROM_Interface getInterfaceType() { return interface_type; }
    int getCacheSize() { return cache_size; }
    CDROM_Install_Tywpe getType() { return install_type; }

    void setInterfaceType(CDROM_Interface type) { interface_type = type; }
    void setCacheSize(unsigned int size) { cache_size = size; }
    void setInstallType(CDROM_Install_Tywpe it) { install_type = it; }

    void run() { cout << "cdrom run" << endl; }
    void stop() { cout << "cdrom stop " << endl; }
};


class Computer {
private:
    Cpu mCpu;
    Ram mRam;
    CD_ROM mCd;
    unsigned int storage_size;
    unsigned int bandWidth;

public:
    Computer(Cpu c, Ram r,CD_ROM cd,unsigned int ss,unsigned int bw);
    ~Computer() {};

    void run() {
        mCpu.run();
        mRam.run();
        mCd.run();
    }

    void stop() {
        mCpu.stop();
        mRam.stop();
        mCd.stop();
    }

    
};


///声明
Computer::Computer(Cpu c, Ram r, CD_ROM cd, unsigned int s, unsigned int wb)
    :mCpu(c), mRam(r), mCd(cd) {
    storage_size = s;
    bandWidth = wb;
}











int main()
{   

    ///p73
    Cpu a(P6,300,2.8);
    a.run;
    a.stop;


    ///p60

    Clock c(0,0,0);
    c.setTime(12,23,32);
    c.showTime();
    return 0;


    /// p 52

    //int n, anwser; 

    //cout << "plz enter a number" << "\n";
    //cin >> n;
    //anwser = fib(n);

    //cout << "anwser is :" << anwser << "\n";




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
