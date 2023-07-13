#include <MIDI.h>
//This code is used for the 1008 KOSMO midi to trigger module however it can be used for anything really with the same premise
//it receives midi note commands and outputs them to the designated output jacks on the module
//each seperate output you can change below the midi channel and the midi note
//each output can have asort seperate midi channel if need be

MIDI_CREATE_DEFAULT_INSTANCE();

int Trigger1Channel = 10; //change this for the outputs midi channel
int Trigger1Note = 36; //change this for the outputs midi note

int Trigger2Channel = 10;
int Trigger2Note = 37;

int Trigger3Channel = 10;
int Trigger3Note = 38;

int Trigger4Channel = 10;
int Trigger4Note = 39;

int Trigger5Channel = 10;
int Trigger5Note = 40;

int Trigger6Channel = 10;
int Trigger6Note = 41;

int Trigger7Channel = 10;
int Trigger7Note = 42;

int Trigger8Channel = 10;
int Trigger8Note = 43;

int Trigger9Channel = 10;
int Trigger9Note = 44;

int Trigger10Channel =10;
int Trigger10Note = 45;

int Trigger11Channel = 10;
int Trigger11Note = 46;

int Trigger12Channel = 10;
int Trigger12Note = 47;

int Trigger13Channel = 10;
int Trigger13Note = 48;

int Trigger14Channel = 10;
int Trigger14Note = 49;

int Trigger15Channel = 10;
int Trigger15Note = 50;

int Trigger16Channel = 10;
int Trigger16Note = 51;

int Trigger17Channel = 10;
int Trigger17Note = 52;

int Trigger18Channel = 10;
int Trigger18Note = 53;


// Declare an array of the trigger arduino pins.
int Trigger[18] = {2,8,14,3,9,15,4,10,16,5,11,17,6,12,18,7,13,19};

void OnNoteOn(byte channel, byte note, byte velocity) {
  if((channel == Trigger1Channel) &&(note == Trigger1Note))  digitalWrite(Trigger[0], HIGH); 
  if((channel == Trigger2Channel) &&(note == Trigger2Note))  digitalWrite(Trigger[1], HIGH); //Serial.println("2 ON");
  if((channel == Trigger3Channel) &&(note == Trigger3Note))  digitalWrite(Trigger[2], HIGH); //Serial.println("3 ON");
  if((channel == Trigger4Channel) &&(note == Trigger4Note))  digitalWrite(Trigger[3], HIGH); //Serial.println("4 ON");
  if((channel == Trigger5Channel) &&(note == Trigger5Note))  digitalWrite(Trigger[4], HIGH); //Serial.println("5 ON");
  if((channel == Trigger6Channel) &&(note == Trigger6Note))  digitalWrite(Trigger[5], HIGH); //Serial.println("6 ON");
  if((channel == Trigger7Channel) &&(note == Trigger7Note))  digitalWrite(Trigger[6], HIGH); //Serial.println("7 ON");
  if((channel == Trigger8Channel) &&(note == Trigger8Note))  digitalWrite(Trigger[7], HIGH); //Serial.println("8 ON");
  if((channel == Trigger9Channel) &&(note == Trigger9Note))  digitalWrite(Trigger[8], HIGH); //Serial.println("9 ON");
  if((channel == Trigger10Channel)&&(note == Trigger10Note)) digitalWrite(Trigger[9], HIGH); //Serial.println("10 ON");
  if((channel == Trigger11Channel)&&(note == Trigger11Note)) digitalWrite(Trigger[10], HIGH); //Serial.println("11 ON");
  if((channel == Trigger12Channel)&&(note == Trigger12Note)) digitalWrite(Trigger[11], HIGH); //Serial.println("12 ON");
  if((channel == Trigger13Channel)&&(note == Trigger13Note)) digitalWrite(Trigger[12], HIGH); //Serial.println("13 ON");
  if((channel == Trigger14Channel)&&(note == Trigger14Note)) digitalWrite(Trigger[13], HIGH); //Serial.println("14 ON");
  if((channel == Trigger15Channel)&&(note == Trigger15Note)) digitalWrite(Trigger[14], HIGH); //Serial.println("15 ON");
  if((channel == Trigger16Channel)&&(note == Trigger16Note)) digitalWrite(Trigger[15], HIGH); //Serial.println("16 ON");
  if((channel == Trigger17Channel)&&(note == Trigger17Note)) digitalWrite(Trigger[16], HIGH); //Serial.println("17 ON");
  if((channel == Trigger18Channel)&&(note == Trigger18Note)) digitalWrite(Trigger[17], HIGH); //Serial.println("18 ON");
  
  }

void OnNoteOff(byte channel, byte note, byte velocity) {
  if((channel == Trigger1Channel) &&(note == Trigger1Note))  digitalWrite(Trigger[0], LOW); //Serial.println("1 OFF");
  if((channel == Trigger2Channel) &&(note == Trigger2Note))  digitalWrite(Trigger[1], LOW); //Serial.println("2 OFF");
  if((channel == Trigger3Channel) &&(note == Trigger3Note))  digitalWrite(Trigger[2], LOW); //Serial.println("3 OFF");
  if((channel == Trigger4Channel) &&(note == Trigger4Note))  digitalWrite(Trigger[3], LOW); //Serial.println("4 OFF");
  if((channel == Trigger5Channel) &&(note == Trigger5Note))  digitalWrite(Trigger[4], LOW); //Serial.println("5 OFF");
  if((channel == Trigger6Channel) &&(note == Trigger6Note))  digitalWrite(Trigger[5], LOW); //Serial.println("6 OFF");
  if((channel == Trigger7Channel) &&(note == Trigger7Note))  digitalWrite(Trigger[6], LOW); //Serial.println("7 OFF");
  if((channel == Trigger8Channel) &&(note == Trigger8Note))  digitalWrite(Trigger[7], LOW); //Serial.println("8 OFF");
  if((channel == Trigger9Channel) &&(note == Trigger9Note))  digitalWrite(Trigger[8], LOW); //Serial.println("9 OFF");
  if((channel == Trigger10Channel)&&(note == Trigger10Note)) digitalWrite(Trigger[9], LOW); //Serial.println("10 OFF");
  if((channel == Trigger11Channel)&&(note == Trigger11Note)) digitalWrite(Trigger[10], LOW); //Serial.println("11 OFF");
  if((channel == Trigger12Channel)&&(note == Trigger12Note)) digitalWrite(Trigger[11], LOW); //Serial.println("12 OFF");
  if((channel == Trigger13Channel)&&(note == Trigger13Note)) digitalWrite(Trigger[12], LOW); //Serial.println("13 OFF");
  if((channel == Trigger14Channel)&&(note == Trigger14Note)) digitalWrite(Trigger[13], LOW); //Serial.println("14 OFF");
  if((channel == Trigger15Channel)&&(note == Trigger15Note)) digitalWrite(Trigger[14], LOW); //Serial.println("15 OFF");
  if((channel == Trigger16Channel)&&(note == Trigger16Note)) digitalWrite(Trigger[15], LOW); //Serial.println("16 OFF");
  if((channel == Trigger17Channel)&&(note == Trigger17Note)) digitalWrite(Trigger[16], LOW); //Serial.println("17 OFF");
  if((channel == Trigger18Channel)&&(note == Trigger18Note)) digitalWrite(Trigger[17], LOW); //Serial.println("18 OFF");
 
  }

void setup() {
  //Turn of pin 13 ( Built in LED ) 
  pinMode(Trigger[16], OUTPUT);
  digitalWrite(Trigger[16], HIGH);
  // put your setup code here, to run once:

  //loop throught the trigger[] array to set all the output pins 
  int x = 0;
  while ( x < 18) {
    pinMode(Trigger[x], OUTPUT);
    digitalWrite(Trigger[x], HIGH);
    delay(20);
    digitalWrite(Trigger[x], LOW);
    delay(10);
   x++;
  //
  
  }
  // Run tthe bootup routine to test the output hardware
  bootup();
  
  //Initialise the midi
  MIDI.setHandleNoteOff(OnNoteOff);
  MIDI.setHandleNoteOn(OnNoteOn) ;
  MIDI.begin(MIDI_CHANNEL_OMNI);
  //
}

void loop() {
  MIDI.read();
}
