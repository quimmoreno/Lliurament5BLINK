/*
  PROGRAMA BLINK
  
  Quim Moreno
  
 */
void setup() {
  // S' executa nomes un cop al iniciarse el programa. S'utilitza per definir els pins que poden utilitzarse tan com a entrades com sortides.
  pinMode(13, OUTPUT); // El pin 13 l'hem configurat perque actues de sortida.
}


void loop() {
  //  La funció Loop s'executa continuament llegint les entrades, sortides etc.
  
  digitalWrite(13, HIGH);   // La Sortida 13 esta activada 
  delay(1000);              // Temps d'estat ON de la sortida 13 és de 1000 mS
  digitalWrite(13, LOW);    // La sortida 13 esta desectivada
  delay(1000);              // Temps d'estat OFF de la sortida 13 és de 1000 mS
}
