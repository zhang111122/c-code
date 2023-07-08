#ifndef aaa
#define aaa
extern int fun (int x, int y);
#endif



//可以避免重复调用头文件的问题，当第一次调用时代码执行 编译aaa 声明外部函数，第二次用的时候因为定义过了aaa所以不编译


#ifdef aaa
代码段1
#else
代码段2
#endif


#if 1/0

#else
  
#endif  
  //用法 相当于一个开关
开始定义aaa为0
  则代码被注释
定义aaa为1
  则代码启动
  
  
