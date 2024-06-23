#ifndef _IOTA_LOGIN_H_
#define _IOTA_LOGIN_H_

HW_API_FUNC HW_INT IOTA_Connect(void);
HW_API_FUNC HW_INT IOTA_DisConnect(void);

/**
 * ----------------------------deprecated below-------------------------------------->
 */
#define IOTA_TOPIC_CONNECTED_NTY    "IOTA_TOPIC_CONNECTED_NTY"
#define IOTA_TOPIC_DISCONNECT_NTY   "IOTA_TOPIC_DISCONNECT_NTY"

/** Indicates notification parameters */
typedef enum enum_EN_IOTA_LGN_IE_TYPE
{
    EN_IOTA_LGN_IE_REASON = 0, 
} EN_IOTA_LGN_IE_TYPE;
          
typedef enum enum_IOTA_LOGIN_REASON_TYPE
{
    EN_IOTA_LGN_REASON_NULL = 0,                //EN_ULGN_REASON_NULL,
    EN_IOTA_LGN_REASON_CONNCET_ERR = 1,         //����ʧ�� = EN_ULGN_REASON_CONNCET_ERR,
    EN_IOTA_LGN_REASON_SERVER_BUSY = 2,         //������æ = EN_ULGN_REASON_SERVER_BUSY,
    EN_IOTA_LGN_REASON_AUTH_FAILED = 3,         //��Ȩʧ�� = EN_ULGN_REASON_AUTH_FAILED,
    EN_IOTA_LGN_REASON_NET_UNAVAILABLE = 5,     //���粻���� = EN_ULGN_REASON_NET_UNAVAILABLE,
    EN_IOTA_LGN_REASON_DEVICE_NOEXIST  = 12,    //�豸������ = EN_ULGN_REASON_UNREG_USER,
    EN_IOTA_LGN_REASON_DEVICE_RMVED    = 13,    //�豸��ɾ�� = EN_ULGN_REASON_RMVED_USER,
    EN_IOTA_LGN_REASON_UNKNOWN = 255
}EN_IOTA_LGN_REASON_TYPE;

#endif

