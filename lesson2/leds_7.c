#define IN1 3
#define IN2 4
#define IN3 5
#define IN4 6

#define LT 8
#define BT 9
#define S 10

void setup()
{
  pinMode(IN1, OUTPUT);//输入1
  pinMode(IN2, OUTPUT);//输入2
  pinMode(IN3, OUTPUT);//输入3
  pinMode(IN4, OUTPUT);//输入4

  pinMode(LT,OUTPUT);//测试
  pinMode(BT,OUTPUT);//消隐
  pinMode(S, OUTPUT);
  
  digitalWrite(LT,HIGH);
  digitalWrite(BT,HIGH); 
  digitalWrite(S,HIGH);

  Serial.begin(9600);
}

byte income=0;

void loop()
{
    income=Serial.read();//读取数据
   
    income-='0';
   
    digitalWrite(S,LOW);
    digitalWrite(IN1,income&0x1);
    digitalWrite(IN2,(income>>1)&0x1);
    digitalWrite(IN3,(income>>2)&0x1);
    digitalWrite(IN4,(income>>3)&0x1);
    digitalWrite(S,HIGH);
    delay(1000);
    
}