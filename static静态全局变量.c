1 静态全局变量只能在本个文件中使用
2 所有的全局变量不赋值都为0


3普通局部变量不赋初值是随机的
4  静态随机变量不付出之为0


  
5  静态随机变量的作用域与普通的一样都是定义的函数或者复合语句内
生命周期为函数开始并不会释放
普通的会释放
6全局变量和静态全局变量可以重名，因为作用范围不同，静态全局变量的作用范围是本个。c文件






总结： static的用法
1：修饰全局变量时 表示全局变量只能在本文件中使用
2：修饰局部变量时 改变其生命周期
3：修饰函数时 表示函数为内部函数 函数只能在本文件中使用
