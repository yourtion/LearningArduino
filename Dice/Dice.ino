// 物理连接
int a = 7;
int b = 6;
int c = 5;
int d = 11;
int e = 10;
int f = 8;
int g = 9;
int dp = 4;

int btn = 0;

// 清除显示
void clean(void) {
  int j;
  for (j = 4; j <= 11; j++) {
    digitalWrite(j, HIGH);
  }
}

//显示数字 1
void digital_1(void) {
  clean();

  digitalWrite(c, LOW); //给数字 5 引脚低电平,点亮 c 段
  digitalWrite(b, LOW); //点亮 b 段
}

//显示数字 2
void digital_2(void) {
  clean();

  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(g, LOW);
}

//显示数字 3
void digital_3(void) {
  clean();

  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(g, LOW);
}

//显示数字 4
void digital_4(void) {
  clean();

  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
}

//显示数字 5
void digital_5(void) {
  clean();

  digitalWrite(a, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
}

//显示数字 6
void digital_6(void) {
  clean();

  digitalWrite(a, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
}

void setup() {
  // initialize the digital pin as an output.
  int i;
  for (i = 4; i <= 11; i++) {
    pinMode(i, OUTPUT);
  }
}

// the loop routine runs over and over again forever:
void loop() {
  while (1) {
    digital_1();//显示数字 1
    while (analogRead(btn) > 512); //如果读到模拟 0 口癿值为 0 则说明有按键按下
    delay(200);
    digital_2();
    while (analogRead(btn) > 512);
    delay(200);
    digital_3();
    while (analogRead(btn) > 512);
    delay(200);
    digital_4();
    while (analogRead(btn) > 512);
    delay(200);
    digital_5();
    while (analogRead(btn) > 512);
    delay(200);
    digital_6();
    while (analogRead(btn) > 512);
    delay(200);
  }
}
