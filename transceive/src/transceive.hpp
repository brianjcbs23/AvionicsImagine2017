#ifndef __TRANSCEIVE_HPP__
#define __TRANSCEIVE_HPP__

#define LSM9DS1_M_CS	7
#define LSM9DS1_AG_CS	8


// RFM Pin definitions
#define RFM95_CS 10
#define RFM95_RST 9
#define RFM95_INT 2

// RF Frequency
#define RF95_FREQ 915.0

void readIMU();
void _init();
void sendMessage();

// IMU Register Indexes
typedef enum imu_register_e {
    AX = 0,
    AY,
    AZ,
    MX,
    MY,
    MZ,
} imuRegister_e;

#endif
