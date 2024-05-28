## 头文件
* 宏定义为了避免重复头文件复制
```c++
#ifndef MY_HEADER_H_
#define MY_HEADER_H_  
// 代码
#endif
```

* 前置声明

* include顺序
```c++
#include "header.h" // 关联头文件

#include <stdio.h> // c库文件
#include <iostream> // c++库文件
#include "glog.h" //其他项目的头文件
#include "same_proj_header.h" //本项目中的其他头文件
```

## 命名规则
* 命名要有描述性，不要使用缩写
* 文件命名：my_first_class.h 下划线连接描述名字
* 类命名：采用驼峰，MyFirstClass
* 变量名
    * 普通变量，table_name
    * 类数据成员,table_name_, 结构体成员和普通变量一致
    * 常量，const int kTableName
    * 函数，采用驼峰，ValidateFuncName()
    * 枚举命名，
    enum UrlTableErrors {
        kErrorOutOfMemory = 0,
        kErrorFormatInput,
    };
    * 宏命名：MY_SMALL_CHILDREN
    * 命名空间：保持不冲突，没有特别约束

## 命名空间
将函数包裹在命名空间，不要使用无意义的类和类静态成员；

## 类

## 函数
* 函数参数顺序，输入尽量使用const, 放在在前，输出在后；引用参数最好加上const, 如有修改可能，使用指针，直白表示修改的意思。
* 函数内容太长，要考虑拆分，降低耦合度
* 类型可以后置 auto foo(int x) -> int;
* 函数默认参数和重载需要清洗，最后可以通过调用就知道是哪个函数
## 注释
* 文件开头要有版权注释（为了开源和负责）
* 类注释：让读者知道这个类大致干了什么
* 不要的注释：代码体现的不用注释重读
* TODO(someone): someone will do it
* 启用注释： // DEPRECATED

## 格式
* 一行80字符，最长不超过120字符
* 缩进使用2个空格
* 函数返回类型和函数名在同一行，实在长，形参可以换行。参数直接换行用4个空格缩进。如果首个参数没换行，后续参数换了，和首个参数对齐

## Tips
  