
#include <LiquidCrystal.h>


const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int thumb;
int first_finger;
int second_finger;
int third_finger;
int fourth_finger;
void setup() {
  // put your setup code here, to run once:
  // THUMB REPRESENTATION TOTALLY 3
  // FIRST FINGER REPRESENTATION TOTALLY 2
  // SECOND FINGER REPRESENTATION TOTALLY 2
  // THIRD FINGER REPRESENTATION TOTALLY 2
  // FOURTH FINGER REPRESENTATION TOTALLY 2
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);
  Serial.begin(9600);
  lcd.begin(16, 2);
  
}

void loop() {
 
int thumb = analogRead(A0);
int first_finger = analogRead(A1);
int second_finger = analogRead(A2);
int third_finger = analogRead(A3);
int fourth_finger = analogRead(A4);
Serial.print(thumb);
Serial.print("\t");



Serial.print(first_finger);
Serial.print("\t");
            

Serial.print(second_finger);
Serial.print("\t");


Serial.print(third_finger);
Serial.print("\t");



Serial.println(fourth_finger); 
Serial.print("\t");


if(thumb >=1 && thumb <=150 )
{
  lcd.clear();
lcd.setCursor(1,0);
lcd.print("HOLA! ");
lcd.setCursor(0,1);
lcd.print("HOW ARE YOU?");
delay(500);
  
  }



else if(thumb >225 )
{
  lcd.clear();
lcd.setCursor(1,0);
lcd.print("I NEED FOOD");
lcd.setCursor(0,1);
lcd.print("I NEED CLOTHES");
delay(500);
  
  }
  
else if(thumb >=230 && thumb<=240  )
{
  lcd.clear();
lcd.setCursor(1,0);
lcd.print("I NEED A ROOM");
lcd.setCursor(0,1);
lcd.print("JOB");
delay(500);
  
  }
  else if(first_finger >=20 && first_finger <=30 )
{
  lcd.clear();
lcd.setCursor(1,0);
lcd.print("MY NAME IS ABI ");
lcd.setCursor(0,1);
lcd.print("NATIVE:TAMILNADU");
delay(500);
  
  }
  else if(first_finger >250 )
{
  lcd.clear();
lcd.setCursor(1,0);
lcd.print("COUNTRY:INDIA");
lcd.setCursor(0,1);
lcd.print("HYGIENE ITEMS");
delay(500);
  
  }
else if(second_finger >120 && second_finger <=200)
{
  lcd.clear();
lcd.setCursor(1,0);
lcd.print("RESTROOM");
lcd.setCursor(0,1);
lcd.print("HOSPITAL");
delay(500);
}
else if(second_finger >250)
{
  lcd.clear();
lcd.setCursor(1,0);
lcd.print("GROCERY SHOP");
lcd.setCursor(0,1);
lcd.print("HOSPITAL");
delay(500);
}

 else if(third_finger >120 && third_finger <=130 )
{
  lcd.clear();
lcd.setCursor(1,0);
lcd.print("MEDICINES");
lcd.setCursor(0,1);
lcd.print("FEELING ILL"); 
delay(500);
}
else if(third_finger >
230)
{
  lcd.clear();   
lcd.setCursor(1,0);
lcd.print("I NEED REST"); 
delay(500);
}

else if(fourth_finger >= 100 && fourth_finger <=199 )
{
  lcd.clear();
lcd.setCursor(1,0);
lcd.print("I AM FROM");
lcd.setCursor(0,1);
lcd.print("COIMBATORE");
delay(500);

  
  }
  else if(fourth_finger >250)
{
  lcd.clear();
lcd.setCursor(1,0);
lcd.print("HI THERE");
lcd.setCursor(0,1);
lcd.print("WELCOME");
delay(500);

  
  }


  //  SECOND DIVISION

  else if(thumb >450 )
{
  lcd.clear();
lcd.setCursor(0,1);
lcd.print("I NEED WATER");
delay(500);
  
  }
  
else if(thumb >=300 && thumb<=310  )
{
  lcd.clear();
lcd.setCursor(0,1);
lcd.print("I NEED CLOTHES");
delay(500);
  
  }
  else if(first_finger >=284 && first_finger <=300 )
{
  lcd.clear();
lcd.setCursor(0,1);
lcd.print("JOB");
delay(500);
  
  }
  else if(first_finger >300 )
{
  lcd.clear();
lcd.setCursor(0,1);
lcd.print("NATIVE TAMILNADU");
delay(500);
  
  }
else if(second_finger >300 && second_finger <=400)
{
  lcd.clear();
lcd.setCursor(0,1);
lcd.print("HYGIENE ITEMS");
delay(500);
}
else if(second_finger >400)
{
  lcd.clear();
lcd.setCursor(0,1);
lcd.print("WHAT IS THE TIME?");
delay(500);
}

 else if(third_finger >300 && third_finger <=400 )
{
  lcd.clear();
lcd.setCursor(0,1);
lcd.print("HOSPITAL"); 
delay(500);
}
else if(third_finger >
400)
{
  lcd.clear();
lcd.setCursor(0,1);
lcd.print("FEELING ILL"); 
delay(500);
}

else if(fourth_finger >280 && fourth_finger <=285)
{
  lcd.clear();
lcd.setCursor(0,1);
lcd.print("COIMBATORE");
delay(500);

  
  }
  else if(fourth_finger >285)
{
  lcd.clear();
lcd.setCursor(0,1);
lcd.print("WELCOME");
delay(500);

  
  }

  else{
     lcd.clear();
lcd.setCursor(1,0);
    lcd.print("NOTHING");
lcd.setCursor(0,1);
    lcd.print("WELCOME");
    delay(500);
    
    }






}
