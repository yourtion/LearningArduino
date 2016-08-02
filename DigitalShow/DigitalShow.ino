int a = 7;
int b = 6;
int c = 5;
int d = 11;
int e = 10;
int f = 8;
int g = 9;
int dp = 4;

//显示数字 1
void digital_1(void) {
  unsigned char j;
  digitalWrite(c, LOW); //给数字 5 引脚低电平,点亮 c 段
  digitalWrite(b, LOW); //点亮 b 段
  for ( j = 7; j <= 11; j++) //熄灭其余段
    digitalWrite( j, HIGH); digitalWrite(dp, HIGH); //熄灭小数点 DP 段
}
//显示数字 2
void digital_2(void) {
  unsigned char j;
  digitalWrite(b, LOW);
  digitalWrite(a, LOW);
  for ( j = 9; j <= 11; j++) {
    digitalWrite( j, LOW);
  }
  digitalWrite(dp, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(f, HIGH);
}

//显示数字 3
void digital_3(void) {
  unsigned char j;
  digitalWrite(g, LOW);
  digitalWrite(d, LOW);
  for ( j = 5; j <= 7; j++) {
    digitalWrite( j, LOW);
  }
  digitalWrite(dp, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(e, HIGH);
}

//显示数字 4
void digital_4(void) {
  digitalWrite(c, LOW);
  digitalWrite(b, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(dp, HIGH);
  digitalWrite(a, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(d, HIGH);
}
//显示数字 5
void digital_5(void) {
  unsigned char j;
  for ( j = 7; j <= 9; j++) {
    digitalWrite( j, LOW);
  } digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(dp, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(e, HIGH);
}
//显示数字 6
void digital_6(void) {
  unsigned char j;
  for ( j = 7; j <= 11; j++) {
    digitalWrite( j, LOW);
  }
  digitalWrite(c, LOW);
  digitalWrite(dp, HIGH);
  digitalWrite(b, HIGH);
}
//显示数字 7
void digital_7(void) {
  unsigned char j;
  for ( j = 5; j <= 7; j++) {

    digitalWrite( j, LOW);
  }
  digitalWrite(dp, HIGH);
  for ( j = 8; j <= 11; j++) {
    digitalWrite( j, HIGH);
  }
}
//显示数字 8
void digital_8(void) {
  unsigned char j;
  for ( j = 5; j <= 11; j++) {
    digitalWrite( j, LOW);
  }
  digitalWrite(dp, HIGH);
}

//显示数字 9
void digital_9(void) {
  unsigned char j;
  for ( j = 5; j < 11; j++) {
    digitalWrite( j, LOW);
  }
  digitalWrite(e, HIGH);
  digitalWrite(dp, HIGH);
}

//显示数字 0
void digital_0(void) {
  unsigned char j;
  for ( j = 5; j <= 11; j++) {
    digitalWrite( j, LOW);
  }
  digitalWrite(g, HIGH);
  digitalWrite(dp, HIGH);
}

//显示小数点
void digital_dp(void) {
  unsigned char j;
  for ( j = 4; j <= 11; j++) {
    digitalWrite( j, HIGH);
  }
  digitalWrite(dp, LOW);
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
    digital_9();//数字 1
    delay(500);//延时 2s
    digital_8();
    delay(500);
    digital_7();
    delay(500);
    digital_6();
    delay(500);
    digital_5();
    delay(500);
    digital_4();
    delay(500);
    digital_3();
    delay(500);
    digital_2();
    delay(500);
    digital_1();
    delay(500);
    digital_0();
    delay(500);
    digital_dp();
    delay(500);
  }

}
