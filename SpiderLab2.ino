// Dyanmixel Settings
Dynamixel Dxl(1);

int Dxl_ID_Min=1,
    Dxl_ID_Max=18,
    Dxl_Speed=0,
    Dxl_Delay=0,
    Dxl_IRset=0;

// Remote Settings
char RcvData=0;

int DxlData=0;

void setup() {
  // put your setup code here, to run once:
  Serial2.begin(9600);
  Dxl.begin(3);
  Dxl_Joint();
  
  Dxl_Speed=200;
  Dxl_Delay=500;
  Dxl_IRset=50;
  
  Dxl_motionMove(0, 1, Dxl_Speed, 3000);
}

void loop() {
  // put your main code here, to run repeatedly: 
  RcvRead();
  RcvMove();
}

void RcvRead(void)
{
  if(Serial2.available()){
    RcvData = Serial2.read();
    SerialUSB.println(RcvData);
  }
}

void RcvMove(void)
{
  if(RcvData == 'f') {
    Dxl_motionMove(2, 5, Dxl_Speed, Dxl_Delay);
    RcvData = 0;
  }
  else if(RcvData == 'b'){
    Dxl_motionMove(6, 9, Dxl_Speed, Dxl_Delay);
    RcvData = 0;
  }
  else if(RcvData == 'l'){
    Dxl_motionMove(10, 13, Dxl_Speed, Dxl_Delay);
    RcvData = 0;
  }
  else if(RcvData == 'r'){
    Dxl_motionMove(14, 17, Dxl_Speed, Dxl_Delay);
    RcvData = 0;
  }
  else if(RcvData == 's'){
    Dxl_motionMove(1, 1, Dxl_Speed, Dxl_Delay);
    RcvData = 0;
  }
}
