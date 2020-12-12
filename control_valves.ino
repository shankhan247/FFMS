const int valve1 = 3;
const int valve2 = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode(valve1, OUTPUT);
  pinMode(valve2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Pressurize now: valve 1 open");
  digitalWrite(valve1, LOW);
  digitalWrite(valve2, HIGH);
  delay(3000);

  Serial.println("Pressurize now: valve 2 open");
  digitalWrite(valve1, HIGH);
  digitalWrite(valve2, LOW);
  delay(3000);

  Serial.println("Pressurize now: both valves open");
  digitalWrite(valve1, LOW);
  digitalWrite(valve2, LOW);
  delay(3000);

  Serial.println("Do not pressurize");
  digitalWrite(valve1, HIGH);
  digitalWrite(valve2, HIGH);
  delay(3000);

}
