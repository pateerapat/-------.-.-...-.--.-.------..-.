char stringToMorseCode[] = "";

int audio8 = D8;      // output audio on pin 8
int note = 2020;      // music note/pitch
int dotLen = 100;     // length of the morse code 'dot'
int dashLen = dotLen * 3;    // length of the morse code 'dash'

void setup() {
  Serial.begin(9600);              
}

void loop()
{ 
  char inChar = 0;          
  char inData[100] = "";        // data length of 6 characters
  String variable = "";
  String variable1 = "";
  int index1 = 0;
 
  if ( Serial.available() > 0 ) {                      // Read from Rx from atmega16
    while (Serial.available() > 0 && index1 < 100)     // read till 6th character
    {
      delay(100);
      inChar = Serial.read();      // start reading serilly and save to variable
      inData[index1] = inChar;
      index1++;
      inData[index1] = '\0';         // Add a null at the end
    }
    variable.toUpperCase();       // convert to uppercase
    for (byte  i = 0 ; i < 100 ; i++) {
      variable.concat(String(inData[i]));    // concat strings
    }
    delay(20);
  }
  String  stringToMorseCode = String(variable);                          

  for (int i = 0; i < sizeof(stringToMorseCode) - 1; i++)
  {
  char tmpChar = stringToMorseCode[i];
  tmpChar = toLowerCase(tmpChar);
  GetChar(tmpChar);
  }
}

void MorseDot()
{
  tone(audio8, note, dotLen); // start playing a tone
  delay(dotLen);              // hold in this position
}

void MorseDash()
{
  tone(audio8, note, dashLen);  // start playing a tone
  delay(dashLen);               // hold in this position
}

void GetChar(char tmpChar)
{
  switch (tmpChar) {
    case '0':
    MorseDash();
    delay(100);
    MorseDash();
    delay(100);
    MorseDash();
    delay(100);
    MorseDash();
    delay(100);
    MorseDash();
    delay(500);
    break;
    case '1':
    MorseDot();
    delay(100);
    MorseDash();
    delay(100);
    MorseDash();
    delay(100);
    MorseDash();
    delay(100);
    MorseDash();
    delay(500);
    break;
    case '2':
    MorseDot();
    delay(100);
    MorseDot();
    delay(100);
    MorseDash();
    delay(100);
    MorseDash();
    delay(100);
    MorseDash();
    delay(500);
    break;
    case '3':
    MorseDot();
    delay(100);
    MorseDot();
    delay(100);
    MorseDot();
    delay(100);
    MorseDash();
    delay(100);
    MorseDash();
    delay(500);
    break;
    case '4':
    MorseDot();
    delay(100);
    MorseDot();
    delay(100);
    MorseDot();
    delay(100);
    MorseDot();
    delay(100);
    MorseDash();
    delay(500);
    break;
    case '5':
    MorseDot();
    delay(100);
    MorseDot();
    delay(100);
    MorseDot();
    delay(100);
    MorseDot();
    delay(100);
    MorseDot();
    delay(500);
    break;
    case '6':
    MorseDash();
    delay(100);
    MorseDot();
    delay(100);
    MorseDot();
    delay(100);
    MorseDot();
    delay(100);
    MorseDot();
    delay(500);
    break;
    case '7':
    MorseDash();
    delay(100);
    MorseDash();
    delay(100);
    MorseDot();
    delay(100);
    MorseDot();
    delay(100);
    MorseDot();
    delay(500);
    break;
    case '8':
    MorseDash();
    delay(100);
    MorseDash();
    delay(100);
    MorseDash();
    delay(100);
    MorseDot();
    delay(100);
    MorseDot();
    delay(500);
    break;
    case '9':
    MorseDash();
    delay(100);
    MorseDash();
    delay(100);
    MorseDash();
    delay(100);
    MorseDash();
    delay(100);
    MorseDot();
    delay(500);
    break;
    case '?':
    MorseDot();
    delay(100);
    MorseDot();
    delay(100);
    MorseDash();
    delay(100);
    MorseDash();
    delay(100);
    MorseDot();
    delay(100);
    MorseDot();
    delay(500);
    break;
    case ' ':
    delay(1000);
    break;
    case '.':
    MorseDot();
    delay(100);
    MorseDash();
    delay(100);
    MorseDot();
    delay(100);
    MorseDash();
    delay(100);
    MorseDot();
    delay(100);
    MorseDash();
    delay(500);
    break;
    case 'a': 
    MorseDot();
    delay(100);
    MorseDash();
    delay(500);
    break;
    case 'b':
    MorseDash();
    delay(100);
    MorseDot();
    delay(100);
    MorseDot();
    delay(100);
    MorseDot();
    delay(500);
    break;
    case 'c':
    MorseDash();
    delay(100);
    MorseDot();
    delay(100);
    MorseDash();
    delay(100);
    MorseDot();
    delay(500);
    break;
    case 'd':
    MorseDash();
    delay(100);
    MorseDot();
    delay(100);
    MorseDot();
    delay(500);
    break;
    case 'e':
    MorseDot();
    delay(500);
    break;
    case 'f':
    MorseDot();
    delay(100);
    MorseDot();
    delay(100);
    MorseDash();
    delay(100);
    MorseDot();
    delay(500);
    break;
    case 'g':
    MorseDash();
    delay(100);
    MorseDash();
    delay(100);
    MorseDot();
    delay(500);
    break;
    case 'h':
    MorseDot();
    delay(100);
    MorseDot();
    delay(100);
    MorseDot();
    delay(100);
    MorseDot();
    delay(500);
    break;
    case 'i':
    MorseDot();
    delay(100);
    MorseDot();
    delay(500);
    break;
    case 'j':
    MorseDot();
    delay(100);
    MorseDash();
    delay(100);
    MorseDash();
    delay(100);
    MorseDash();
    delay(500);
    break;
    case 'k':
    MorseDash();
    delay(100);
    MorseDot();
    delay(100);
    MorseDash();
    delay(500);
    break;
    case 'l':
    MorseDot();
    delay(100);
    MorseDash();
    delay(100);
    MorseDot();
    delay(100);
    MorseDot();
    delay(500);
    break;
    case 'm':
    MorseDash();
    delay(100);
    MorseDash();
    delay(500);
    break;
    case 'n':
    MorseDash();
    delay(100);
    MorseDot();
    delay(500);
    break;
    case 'o':
    MorseDash();
    delay(100);
    MorseDash();
    delay(100);
    MorseDash();
    delay(500);
    break;
    case 'p':
    MorseDot();
    delay(100);
    MorseDash();
    delay(100);
    MorseDash();
    delay(100);
    MorseDot();
    delay(500);
    break;
    case 'q':
    MorseDash();
    delay(100);
    MorseDash();
    delay(100);
    MorseDot();
    delay(100);
    MorseDash();
    delay(500);
    break;
    case 'r':
    MorseDot();
    delay(100);
    MorseDash();
    delay(100);
    MorseDot();
    delay(500);
    break;
    case 's':
    MorseDot();
    delay(100);
    MorseDot();
    delay(100);
    MorseDot();
    delay(500);
    break;
    case 't':
    MorseDash();
    delay(500);
    break;
    case 'u':
    MorseDot();
    delay(100);
    MorseDot();
    delay(100);
    MorseDash();
    delay(500);
    break;
    case 'v':
    MorseDot();
    delay(100);
    MorseDot();
    delay(100);
    MorseDot();
    delay(100);
    MorseDash();
    delay(500);
    break;
    case 'w':
    MorseDot();
    delay(100);
    MorseDash();
    delay(100);
    MorseDash();
    delay(500);
    break;
    case 'x':
    MorseDash();
    delay(100);
    MorseDot();
    delay(100);
    MorseDot();
    delay(100);
    MorseDash();
    delay(500);
    break;
    case 'y':
    MorseDash();
    delay(100);
    MorseDot();
    delay(100);
    MorseDash();
    delay(100);
    MorseDash();
    delay(500);
    break;
    case 'z':
    MorseDash();
    delay(100);
    MorseDash();
    delay(100);   
    MorseDot();
    delay(100);
    MorseDot();
    delay(500);
    break;
    default:
       break;
  }
}
