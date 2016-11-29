## 6.2
运算符概览

* typeid(type)      类型识别
* typeid(expr)      运行时类型识别
* dynamic_cast <type> (expr)     运行时检查的转换
* static_cast <type> (expr)      编译时检查的转换
* reinterpret_cast <type> (expr) 不检查的转换
* const_cast <type> (expr)       const转换

* sizeof expr       对象的大小型的大小

建立与销毁：
* new type                              建立（分配）
* new type (expr-list)                  建立（分配并初始化）
* new (expr-list) type                  建立（放置）
* new (expr-list) type (expr-list)      建立（放置并初始化）
* delete pointer                        销毁（释放）
* delete []pointer                      销毁数组

* (type) expr       强制类型转换
* expr? expr:expr   条件表达式

短路求值：

用&& 或　|| 连接的表达式只有在左边表达式结果不能确定整个表达式结果时才会对右边表达式进行计算；

一种复制以０结尾的字符串的方法：

`void cpy(char* p, const char* q)
{
    while(*p++ = * q++);
}`
1. \*p++ = \*q++ 的结果是 \*q++;
2. 只要能用，应尽量用标准库，strcpy;

## 6.2.6 自由储存
* 建立起生存时间不依赖于它的作用域的对象；
* 用new建立，用delete销毁；
* 在“自由储存里的”，“堆对象”，“在动态存储中分配的”；
* 所有new的，都需要手动delete掉；且delete仅能作用于new获得的指针或者０；

用new建立对象：

`Enode* p = new Enode;`

`delete p;`

用new建立对象的数组:

`char* p = new char[len + 1];`

`delete[] p;`

## 显示类型转换
* static_cast, 完成相关类型之间的转换，如在同一个类层次结构中的一个指针类型到另一个指针类型，整形到枚举类型，浮点到整形等等；
* reinterpret_cast: 处理互不相关的类型之间的转换。更危险的；
* const_cast: 清除const和volatile限定符的转换形式;
* (T)e 记法：由于其没有表达清楚意图，所以可能非常危险;

## 练习拾遗：
### 6_10
1. 字符串：要么用string，要么用char[]。char[]与其他数组并没啥差别...别想太多；
2. 注意，有的时候必须new，new了必须delete。

### 6_15
Duff Device:

[http://www.cnblogs.com/xkfz007/archive/2012/03/27/2420163.html](http://www.cnblogs.com/xkfz007/archive/2012/03/27/2420163.html)

[http://blog.csdn.net/kingmax26/article/details/5252657](http://blog.csdn.net/kingmax26/article/details/5252657)
