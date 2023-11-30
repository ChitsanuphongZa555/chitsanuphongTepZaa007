#include <Adafruit_MCP3008.h>


#define NUM_SENSORS 8  //จำนวนเซนเซอร์
int F[NUM_SENSORS];
int REF[NUM_SENSORS];
int LastError;
int x = 0;
int sensor = A0;
Adafruit_MCP3008 adc;

int MaxValue[NUM_SENSORS] = {39,37,35,34,37,37,39,39};
int MinValue[NUM_SENSORS] = {564,473,276,169,443,428,604,485};
void setup() {
  Serial.begin(9600);
  PHONG_begin();

  digitalWrite(8, HIGH);
  delay(100);
  digitalWrite(8, LOW);
  delay(100);
  digitalWrite(8, HIGH);
  delay(100);
  digitalWrite(8, LOW);
  delay(100);
  Serial.println("ready");
  OK();
  Serial.println("OK");
  AutoRef();
  delay(500);
  // SerialF();
  // SerialCalibrate();
  // ShowCalibrate();

  // Motor(100, 100);
  // delay(1000);
  // MotorStop();

  // TrackTime(baseSpeed, Kp(ปรับขึ้นทีละ 0.01), Kd(ปรับขึ้นทีละ 0.1), delay(milli second))
  // r = right
  // l = left
  // p = pass
  // s = stop

  // TrackCross(100, 0.05, 0.5, 'r');
  // TrackCross(100, 0.05, 0.5, 'l');
  // TrackCross(100, 0.05, 0.5, 'p');
  // TrackCross(100, 0.06, 0.6, 's');
  // TrackTime(250, 0.05, 0.5, 20000);

  // TrackTime(120, 0.15, 0.5, 1200);


  // eye(100, 0.030, 0.75);
  // TrackTime(120, 0.15, 0.5, 1200);



TrackCross(100, 0.03, 0.8,'l');
TrackCross(100, 0.03, 0.8,'l');
TrackCross(100, 0.03, 0.8,'l');

}


void loop() {
  MotorStop();
  // TrackTime(50, 0.05, 0.5 , 100000);
}
