//FirstName Blinky

int led_blinky = D7; //Output of first morse code

void setup() {

  pinMode(led_blinky, OUTPUT);//setting up led D7 for output

}

// Loop of blinking of first repeatedly.

void loop() {
    
  // Morse code for S- LED on when HIGH and off when LOW 
  
  digitalWrite(led_blinky, HIGH);
  delay(500);  // wait of 1/2 sec
  digitalWrite(led_blinky, LOW);
  delay(1000); // wait of 1 sec
  digitalWrite(led_blinky, HIGH);
  delay(500);  // wait of 1/2 sec
  digitalWrite(led_blinky, LOW);
  delay(1000); // wait of 1 sec
  digitalWrite(led_blinky, HIGH);
  delay(500);  // wait of 1/2 sec
  digitalWrite(led_blinky, LOW);
  delay(1000); // wait of 1 sec
  
  // Morse code for A- LED on when HIGH and off when LOW 
  
  digitalWrite(led_blinky, HIGH);
  delay(500);  // wait of 1/2 sec
  digitalWrite(led_blinky, LOW);
  delay(1000); // wait of 1 sec
  digitalWrite(led_blinky, HIGH);
  delay(1000);  // wait of 1/2 sec
  digitalWrite(led_blinky, LOW);
  delay(1000); // wait of 1 sec
 

  // Morse code for C- LED on when HIGH and off when LOW 
  
  digitalWrite(led_blinky, HIGH);
  delay(1000);  // wait of 1/2 sec
  digitalWrite(led_blinky, LOW);
  delay(1000); // wait of 1 sec
  digitalWrite(led_blinky, HIGH);
  delay(500);  // wait of 1/2 sec
  digitalWrite(led_blinky, LOW);
  delay(1000); // wait of 1 sec
  digitalWrite(led_blinky, HIGH);
  delay(1000);  // wait of 1/2 sec
  digitalWrite(led_blinky, LOW);
  delay(1000); // wait of 1 sec
  digitalWrite(led_blinky, HIGH);
  delay(500);  // wait of 1/2 sec
  digitalWrite(led_blinky, LOW);
  delay(1000); // wait of 1 sec
  
  // Morse code for H- LED on when HIGH and off when LOW 
  
  digitalWrite(led_blinky, HIGH);
  delay(500);  // wait of 1/2 sec
  digitalWrite(led_blinky, LOW);
  delay(1000); // wait of 1 sec
  digitalWrite(led_blinky, HIGH);
  delay(500);  // wait of 1/2 sec
  digitalWrite(led_blinky, LOW);
  delay(1000); // wait of 1 sec565
  digitalWrite(led_blinky, HIGH);
  delay(500);  // wait of 1/2 sec
  digitalWrite(led_blinky, LOW);
  delay(1000); // wait of 1 sec
  delay(500);  // wait of 1/2 sec
  digitalWrite(led_blinky, LOW);
  delay(1000); // wait of 1 sec
  
  // Morse code for I- LED on when HIGH and off when LOW 
  
  digitalWrite(led_blinky, HIGH);
  delay(500);  // wait of 1/2 sec
  digitalWrite(led_blinky, LOW);
  delay(1000); // wait of 1 sec
  digitalWrite(led_blinky, HIGH);
  delay(500);  // wait of 1/2 sec
  digitalWrite(led_blinky, LOW);
  delay(1000); // wait of 1 sec

  // Morse code for N- LED on when HIGH and off when LOW 
  
  digitalWrite(led_blinky, HIGH);
  delay(1000);  // wait of 1/2 sec
  digitalWrite(led_blinky, LOW);
  delay(1000); // wait of 1 sec
  digitalWrite(led_blinky, HIGH);
  delay(500);  // wait of 1/2 sec
  digitalWrite(led_blinky, LOW);
  delay(1000); // wait of 1 sec
  
  // Morse code for I- LED on when HIGH and off when LOW 
  
  digitalWrite(led_blinky, HIGH);
  delay(500);  // wait of 1/2 sec
  digitalWrite(led_blinky, LOW);
  delay(1000); // wait of 1 sec
  digitalWrite(led_blinky, HIGH);
  delay(500);  // wait of 1/2 sec
  digitalWrite(led_blinky, LOW);
  delay(1000); // wait of 1 sec
  
  
  delay(5000); //End of first name
  
  // And repeat!
}

