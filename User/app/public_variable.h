
#ifndef		__PUBLIC_VARIABLE__

#define		__PUBLIC_VARIABLE__
#include "api_type.h"

extern uchar ProUart0Rec;
extern uchar domeNo, Protocol_No;
extern uchar Baud_rate;
extern uchar Rec_byte_com, Rocket_fir_data, Rocket_sec_data, Rocket_thr_data, Rocket_fou_data,Rocket_six_data, Rocket_fiv_data, command_byte;

extern uchar KBDRecWrongFlag;
extern uchar PanTiltStopFlag;
extern uchar PanTiltStopFlag1;
extern uchar Uart0RecResetFlag;

extern volatile uchar Current_Protocol;      
extern volatile uchar Rec_keyboard_data_buffer[20];
extern uchar com_buffer[6];   //main to motor command buffer
extern uchar com_buffer_tilt[6];

extern uchar txd1_buffer[200],txd1_buff_cFlag,rxd1_buffer[200],rxd1_buff_cFlag,counter_receive;
extern uchar cam_counter_send; //byte of command counter
extern u8 cam_cmd_lenth;

extern const uchar pt_code2motor[];
extern uchar Call_presetpoint_flag;

extern const double focus_pos_table[2045];

extern u8 cam_recieve_cnt_public;
extern u16	AN41908_STEPS_ONE_TIME;


extern s16 iris_step_cnt;//靠近CLOSE边为0，到OPEN最大时为最大值35
extern u8 iris_auto_manual_state;//0,iris auto;1,iris manual


#ifndef	__UNION_SYS__

#define	__UNION_SYS__
typedef	union __Union_system_para 
{
    struct system_para_type
    {   u8 para_system_para_flag1;
        u8 para_system_para_flag2;
		u16 para_stepsmotor_pulse_per_step;
        u8 para_ex_io_1_mode;
        u8 para_ex_io_2_mode;
        u8 para_ex_io_3_mode;
        u8 para_ex_lens_vol_mode;
        u8 para_iris_ex_mode;
        u8 para_cam_block0[43];
        u8 para_cam_block1[15];
        u8 para_cam_block2[63];
        u8 para_cam_block3[15];
        u8 para_cam_block4[63];
        u8 para_cam_block5[31];
        u8 para_cam_block6[131];
        u8 para_cam_block7[55];
        u8 para_cam_block8[85];

    }system_para;
    u8 system_para_arr[511];
}Union_system_para;


typedef	union __Union_system_para_2 
{
    struct system_para_2_type
    {   u8 para_system_para_flag1;
        u8 para_system_para_flag2;
		u16 para_stepsmotor_pulse_per_step;

    }system_para;
    u8 system_para_arr[4];
}Union_system_para_2;

#endif

extern Union_system_para system_para;
extern Union_system_para_2 system_expand_para;

extern u8 shutter_val_auto_iris_level;

#endif
