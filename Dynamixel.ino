#define Dxl_AAC 512 // Center

#define Dxl_LLR 612 // Left Leg Ready
#define Dxl_RLR 412 // Right Leg Ready

#define Dxl_LLU 712 // Left Leg Up
#define Dxl_RLU 312 // Right Leg Up

#define Dxl_LLD 312 // Left Leg Down
#define Dxl_RLD 712 // Right Leg Down

#define Dxl_LFU 112 // Left Foot Up
#define Dxl_RFU 912 // Right Foot Up

#define Dxl_LFD 912 // Left Foot Down
#define Dxl_RFD 112 // Right Foot Down

#define Dxl_LPF 612 // Left Pelvis Front
#define Dxl_RPF 412 // Right Pelvis Fornt

#define Dxl_LPB 412 // Left Pelvis Back
#define Dxl_RPB 612 // Right Pelvis Back


int Dxl_positionArray[][18]={
  /* Center Reset */
  {Dxl_AAC, Dxl_AAC, Dxl_AAC,
   Dxl_AAC, Dxl_AAC, Dxl_AAC,
   Dxl_AAC, Dxl_AAC, Dxl_AAC,
   Dxl_AAC, Dxl_AAC, Dxl_AAC,
   Dxl_AAC, Dxl_AAC, Dxl_AAC,
   Dxl_AAC, Dxl_AAC, Dxl_AAC},
  
  /* Ready */ 
  {Dxl_LFD, Dxl_LLR, Dxl_AAC,
   Dxl_LFD, Dxl_LLR, Dxl_AAC,
   Dxl_LFD, Dxl_LLR, Dxl_AAC,
   Dxl_RFD, Dxl_RLR, Dxl_AAC,
   Dxl_RFD, Dxl_RLR, Dxl_AAC,
   Dxl_RFD, Dxl_RLR, Dxl_AAC},
   
  /* Front */ 
  {Dxl_LFD, Dxl_LLU, Dxl_LPF,
   Dxl_LFD, Dxl_LLR, Dxl_AAC,
   Dxl_LFD, Dxl_LLU, Dxl_LPF,
   Dxl_RFD, Dxl_RLR, Dxl_AAC,
   Dxl_RFD, Dxl_RLU, Dxl_RPF,
   Dxl_RFD, Dxl_RLR, Dxl_AAC},
   
  {Dxl_LFD, Dxl_LLR, Dxl_LPF,
   Dxl_LFD, Dxl_LLR, Dxl_AAC,
   Dxl_LFD, Dxl_LLR, Dxl_LPF,
   Dxl_RFD, Dxl_RLR, Dxl_AAC,
   Dxl_RFD, Dxl_RLR, Dxl_RPF,
   Dxl_RFD, Dxl_RLR, Dxl_AAC},
   
  {Dxl_LFD, Dxl_LLR, Dxl_AAC,
   Dxl_LFD, Dxl_LLU, Dxl_LPF,
   Dxl_LFD, Dxl_LLR, Dxl_AAC,
   Dxl_RFD, Dxl_RLU, Dxl_RPF,
   Dxl_RFD, Dxl_RLR, Dxl_AAC,
   Dxl_RFD, Dxl_RLU, Dxl_RPF},
   
  {Dxl_LFD, Dxl_LLR, Dxl_AAC,
   Dxl_LFD, Dxl_LLR, Dxl_LPF,
   Dxl_LFD, Dxl_LLR, Dxl_AAC,
   Dxl_RFD, Dxl_RLR, Dxl_RPF,
   Dxl_RFD, Dxl_RLR, Dxl_AAC,
   Dxl_RFD, Dxl_RLR, Dxl_RPF},
   
  /* Back */
  {Dxl_LFD, Dxl_LLR, Dxl_AAC,
   Dxl_LFD, Dxl_LLU, Dxl_LPB,
   Dxl_LFD, Dxl_LLR, Dxl_AAC,
   Dxl_RFD, Dxl_RLU, Dxl_RPB,
   Dxl_RFD, Dxl_RLR, Dxl_AAC,
   Dxl_RFD, Dxl_RLU, Dxl_RPB},
   
  {Dxl_LFD, Dxl_LLR, Dxl_AAC,
   Dxl_LFD, Dxl_LLR, Dxl_LPB,
   Dxl_LFD, Dxl_LLR, Dxl_AAC,
   Dxl_RFD, Dxl_RLR, Dxl_RPB,
   Dxl_RFD, Dxl_RLR, Dxl_AAC,
   Dxl_RFD, Dxl_RLR, Dxl_RPB},
  
  {Dxl_LFD, Dxl_LLU, Dxl_LPB,
   Dxl_LFD, Dxl_LLR, Dxl_AAC,
   Dxl_LFD, Dxl_LLU, Dxl_LPB,
   Dxl_RFD, Dxl_RLR, Dxl_AAC,
   Dxl_RFD, Dxl_RLU, Dxl_RPB,
   Dxl_RFD, Dxl_RLR, Dxl_AAC},
   
  {Dxl_LFD, Dxl_LLR, Dxl_LPB,
   Dxl_LFD, Dxl_LLR, Dxl_AAC,
   Dxl_LFD, Dxl_LLR, Dxl_LPB,
   Dxl_RFD, Dxl_RLR, Dxl_AAC,
   Dxl_RFD, Dxl_RLR, Dxl_RPB,
   Dxl_RFD, Dxl_RLR, Dxl_AAC},
   
  /* Left */
  {Dxl_LFD, Dxl_LLU, Dxl_LPB,
   Dxl_LFD, Dxl_LLR, Dxl_AAC,
   Dxl_LFD, Dxl_LLU, Dxl_LPB,
   Dxl_RFD, Dxl_RLR, Dxl_AAC,
   Dxl_RFD, Dxl_RLU, Dxl_RPF,
   Dxl_RFD, Dxl_RLR, Dxl_AAC},
   
  {Dxl_LFD, Dxl_LLR, Dxl_LPB,
   Dxl_LFD, Dxl_LLR, Dxl_AAC,
   Dxl_LFD, Dxl_LLR, Dxl_LPB,
   Dxl_RFD, Dxl_RLR, Dxl_AAC,
   Dxl_RFD, Dxl_RLR, Dxl_RPF,
   Dxl_RFD, Dxl_RLR, Dxl_AAC},
   
  {Dxl_LFD, Dxl_LLR, Dxl_AAC,
   Dxl_LFD, Dxl_LLU, Dxl_LPB,
   Dxl_LFD, Dxl_LLR, Dxl_AAC,
   Dxl_RFD, Dxl_RLU, Dxl_RPF,
   Dxl_RFD, Dxl_RLR, Dxl_AAC,
   Dxl_RFD, Dxl_RLU, Dxl_RPF},
   
  {Dxl_LFD, Dxl_LLR, Dxl_AAC,
   Dxl_LFD, Dxl_LLR, Dxl_LPB,
   Dxl_LFD, Dxl_LLR, Dxl_AAC,
   Dxl_RFD, Dxl_RLR, Dxl_RPF,
   Dxl_RFD, Dxl_RLR, Dxl_AAC,
   Dxl_RFD, Dxl_RLR, Dxl_RPF},
   
  /* Right */
  {Dxl_LFD, Dxl_LLR, Dxl_AAC,
   Dxl_LFD, Dxl_LLU, Dxl_LPF,
   Dxl_LFD, Dxl_LLR, Dxl_AAC,
   Dxl_RFD, Dxl_RLU, Dxl_RPB,
   Dxl_RFD, Dxl_RLR, Dxl_AAC,
   Dxl_RFD, Dxl_RLU, Dxl_RPB},
   
  {Dxl_LFD, Dxl_LLR, Dxl_AAC,
   Dxl_LFD, Dxl_LLR, Dxl_LPF,
   Dxl_LFD, Dxl_LLR, Dxl_AAC,
   Dxl_RFD, Dxl_RLR, Dxl_RPB,
   Dxl_RFD, Dxl_RLR, Dxl_AAC,
   Dxl_RFD, Dxl_RLR, Dxl_RPB},
  
  {Dxl_LFD, Dxl_LLU, Dxl_LPF,
   Dxl_LFD, Dxl_LLR, Dxl_AAC,
   Dxl_LFD, Dxl_LLU, Dxl_LPF,
   Dxl_RFD, Dxl_RLR, Dxl_AAC,
   Dxl_RFD, Dxl_RLU, Dxl_RPB,
   Dxl_RFD, Dxl_RLR, Dxl_AAC},
   
  {Dxl_LFD, Dxl_LLR, Dxl_LPF,
   Dxl_LFD, Dxl_LLR, Dxl_AAC,
   Dxl_LFD, Dxl_LLR, Dxl_LPF,
   Dxl_RFD, Dxl_RLR, Dxl_AAC,
   Dxl_RFD, Dxl_RLR, Dxl_RPB,
   Dxl_RFD, Dxl_RLR, Dxl_AAC},
};

void Dxl_Joint(void)
{
  char Dxl_Min=Dxl_ID_Min;
  
  for(Dxl_Min; Dxl_Min <= Dxl_ID_Max; Dxl_Min++)
  {
    Dxl.jointMode(Dxl_Min);
  }
}

/*
void Dxl_setMove(int Dxl_ID, int Dxl_position, int Speed)
{
  char Dxl_Spos=0;
  
  for(Dxl_Spos; Dxl_Spos==Dxl_position;)
  {
    Dxl.setPosition(Dxl_ID, Dxl_Spos, Speed);
    delay(10);
    
    
  }
}
*/

void Dxl_poseMove(int Dxl_position, int Speed)
{
  char Dxl_Min=Dxl_ID_Min;
  
  for(Dxl_Min; Dxl_Min<=Dxl_ID_Max; Dxl_Min++)
  {
    //Dxl_setMove(Dxl_Min, Dxl_positionArray[Dxl_position][Dxl_Min-1], Speed);
    Dxl.setPosition(Dxl_Min, Dxl_positionArray[Dxl_position][Dxl_Min-1], Speed);
    delay(10);
  }
}

void Dxl_motionMove(int Smotion, int Emotion, int Speed, int Delay)
{
  for(Smotion; Smotion<=Emotion; Smotion++)
  {
    Dxl_poseMove(Smotion, Speed);
    delay(Delay);
  }
}

void Dxl_IRmotionMove(int Smotion, int Emotion, int Speed, int Delay, int IR)
{
  int Dxl_IRread = Dxl.readByte(100, 0x1B);
  
  for(Smotion; Smotion<=Emotion; Smotion++)
  {
    if(Dxl_IRread < Dxl_IRset)
    {
      Dxl_poseMove(Smotion, Speed);
      delay(Delay);
    }
    else break;
  }
}
