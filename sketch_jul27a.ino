#define LEDR 25
#define LEDG 26
#define LEDB 27

#define R_channel 0
#define G_channel 1
#define B_channel 2

#define pwm_Frequency 5000 //pwm is a frequency
#define pwm_resolution 8


void setup() {
  // put your setup code here, to run once:

  ledcAttachPin(LEDR, R_channel);
  ledcAttachPin(LEDG, G_channel);
  ledcAttachPin(LEDB, B_channel);

  ledcSetup(R_channel, pwm_Frequency, pwm_resolution);
  ledcSetup(G_channel, pwm_Frequency, pwm_resolution);
  ledcSetup(B_channel, pwm_Frequency, pwm_resolution);





}

void loop() {
  // put your main code here, to run repeatedly:

  RGB_Color(255,0,0);
  delay(500);

  RGB_Color(0,255,0);
  delay(500);

  RGB_Color(0,0,255);
  delay(500);

  RGB_Color(255,255,0);
  delay(500);

  RGB_Color(0,255,255);
  delay(500);

  RGB_Color(255,0,255);
  delay(500);

  RGB_Color(255,20,147);



}

void RGB_Color(int i, int j, int k){

  ledcWrite(R_channel, i);
  ledcWrite(G_channel, j);
  ledcWrite(B_channel, k);


}