

// define ioctl code
#define ASUS_SCALER_IOC_TYPE    0xc1
#define ASUS_SCALER_FW_UPDATE  _IOWR(ASUS_SCALER_IOC_TYPE,	1,	int)
#define ASUS_SCALER_GET_FW_VERSION  _IOWR(ASUS_SCALER_IOC_TYPE,	2,	int)
#define ASUS_SCALER_MAX_NR  2