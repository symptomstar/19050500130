# 《开源硬件实战》课程笔记（第一节课）
## git基础命令
[github使用教程]（https://guides.github.com/activities/hello-world/）
- [复制到本地]  git clone +地址
- [添加修改]    git add *（*代表任意多个修改）
- [添加描述]    git commit -m "描述" （描述包括：谁、什么时间、做了什么）
- [上传]        git push 
- [下载]        git pull
## 操作系统
#### 管理硬件的一套软件的集合
**计算机：** 输入、存储、运算、输出、控制器
> 运算与控制器组成**中央处理器**        
> 电脑为CPU，手机为MCU    

**管理：** 进程管理、储存管理、设备管理、文件管理、作业管理
### 符号型与无符号型
#### 无符号型（unsigned）
**bit：** 位，0或1    
**byte：** 字节，1 byte = 8 bit，可表示0-255 **共256个字符**     
#### 符号型
第1位用0表示+，1表示-     
剩下7位可以表示0-127     
即 -127 ~ +127 共255个字符    
加上规定用补码表示的 -128 **共256个字符**    
## Arduino开发板
[Arduino开发板使用]（https://www.arduino.cc/）
##### 数字引脚
0-13    有或无，0或1    前面有~可以当做模拟引脚使用
##### 模拟引脚
A0-A5    对应一个状态，有多种对应关系

### 主要代码
类似于C的代码，可参见官网查询API使用
1.main函数
```
int main()
{
  setup(); //需要执行一次的内容
  while(1)
  {
    loop();//需要多次循环执行的代码
  }
  return 0;
}
```
2.控制led的亮暗
```
void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(13, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  // turn the LED off by making the voltage LOW
  digitalWrite(13, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
```
