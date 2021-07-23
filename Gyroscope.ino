#include <MPU9250.h>

MPU9250 mpu; // You can also use MPU9255 as is

void setup() {
    Serial.begin(9600);
    Serial.println("AccX,AccY,AccZ");
    Wire.begin();
    delay(2000);

    mpu.setup(0x68);  // change to your own address
}

void loop() {
    if (mpu.update()) {
        Serial.print(mpu.getAccX()); 
        Serial.print("\t");
        Serial.print(mpu.getAccY()); 
        Serial.print("\t");
        Serial.println(mpu.getAccZ());
    }
}
