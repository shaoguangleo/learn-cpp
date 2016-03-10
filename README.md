# 我们编程吧 之 cpp 学习手册
** Version 0.1 **

## 转义字符的使用
参考程序escape_char.cpp

## typedef与#define 的区别
**typedef的用法**
typedef常用来定义一个标识符及关键字的别名，它是语言编译过程的一部分，但它并不实际分配内存空间，实例像：
```c
typedef    int       INT;
typedef    int       ARRAY[10];
typedef   (int*)   pINT;
```

typedef可以增强程序的可读性，以及标识符的灵活性，但它也有“非直观性”等缺点。

**#define的用法**
**#define**为一宏定义语句，通常用它来定义常量(包括无参量与带参量)，以及用来实现那些“表面似和善、背后一长串”的宏，它本身并不在编译过程中进行，而是在这之前(预处理过程)就已经完成了，但也因此难以发现潜在的错误及其它代码维护问题，它的实例像：


```c
#define   INT             int
#define   TRUE         1
#define   Add(a,b)     ((a)+(b));
#define   Loop_10    for (int i=0; i<10; i++)
```

**typedef与#define的区别**
    从以上的概念便也能基本清楚，typedef只是为了增加可读性而为标识符另起的新名称(仅仅只是个别名)，而#define原本在C中是为了定义常量，到了C++，const、enum、inline的出现使它也渐渐成为了起别名的工具。有时很容易搞不清楚与typedef两者到底该用哪个好，如#define INT int这样的语句，用typedef一样可以完成，用哪个好呢？我主张用typedef，因为在早期的许多C编译器中这条语句是非法的，只是现今的编译器又做了扩充。为了尽可能地兼容，一般都遵循#define定义“可读”的常量以及一些宏语句的任务，而typedef则常用来定义关键字、冗长的类型的别名。
    宏定义只是简单的字符串代换(原地扩展)，而typedef则不是原地扩展，它的新名字具有一定的封装性，以致于新命名的标识符具有更易定义变量的功能。请看上面第一大点代码的第三行：
typedef    (int*)      pINT;
以及下面这行:


```c
#define    pINT2    int*
   
```

效果相同？实则不同！实践中见差别：pINT a,b;的效果同int *a; int *b;表示定义了两个整型指针变量。而pINT2 a,b;的效果同int *a, b;表示定义了一个整型指针变量a和整型变量b。
**注意**：两者还有一个行尾;号的区别，还有，就是它们书写的位置相反，



#更多信息
Hi，XDJM们，更多信息欢迎移步[我的github](https://github.com/shaoguangleo)或微信公众号letsProgramming.

![letsProgramming](http://img.blog.csdn.net/20160128231400788)
