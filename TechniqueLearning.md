#准备工作
1.补充安装utools插件
2.完善vscode环境配置与相关设置
3.复习cmake和mingw的功能：
cmake根据编写的cmakelists.txt文件生成复杂的makefile文件，极大地提高了编程效率。
mingw是一套集成编译器，能增强c代码的可移植性，为在linux系统上的开发提供了便利。

##复习c程序执行的生命周期
1.用编辑器编辑.c的源程序
2.用编辑器编辑cmakelists.txt文件
3.编译过程：
-cmake根据cmakelists.txt文件生成makefile文件
-编译器 汇编器 链接器通过make命令和makefile文件将.c文件翻译成机器语言
的同时将库中文件与其链接在一起生成.exe文件

###复习和学习新的概念
1.复习了指针的用法

2.认识了栈内存与作用域的关系：
在一个作用域作用的变量占用栈内存
出这个作用域后会自动释放占用的栈内存，有利于CPU的高效通信

3.认识了堆内存和学习了new   delete的用法：
堆内存需要用new申请分配，一旦分配就一直被占用，一般不会
自动释放，因此需要用delete释放申请的堆内存

4.认识了头文件是如何发挥作用

5.学习了类的创建：
public private protected
认识了类的继承与派生以及基类与子类的关系
认识了构造函数 析构函数
前者在创建时从基类向子类运行
后者在释放内存时从子类向基类运行

6.学习了如何用virtual和override解决二义性的问题
认识了宏的用法

7.认识了类是看出身（**定义**）的