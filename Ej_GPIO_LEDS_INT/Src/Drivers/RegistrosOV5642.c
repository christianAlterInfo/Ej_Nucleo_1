
/*------------SYSTEM CONTROL-------------*/
const static uint16_t SYSRST00  = 0x3000;
const static uint16_t SYSRST01  = 0x3001;
const static uint16_t SYSRST02  = 0x3002;
const static uint16_t SYSRST03  = 0x3003;
const static uint16_t CLKENB00  = 0x3004;
const static uint16_t CLKENB01  = 0x3005;
const static uint16_t CLKENB02  = 0x3006;
const static uint16_t CLKENB03  = 0x3007;
const static uint16_t SYSCTRL00 = 0x3008;
/*-----------SYSTEM CONTROL--------------*/

/*------MICROCONTROLLER UNIT (MCU)-------*/
const static uint16_t MCCTRL00 = 0x3F00;
const static uint16_t SYSCTRL00 = 0x3008;
const static uint16_t MCINTMSK0 = 0x3F01;
const static uint16_t MCINTMSK1 = 0x3F02;
const static uint16_t MCRINTADD_HIGH_1 = 0x3F03;
const static uint16_t MCRINTADD_LOW_1 = 0x3F04;
const static uint16_t MCRINTADD_HIGH_2 = 0x3F05;
const static uint16_t MCRINTADD_LOW_2 = 0x3F06;
/*------MICROCONTROLLER UNIT (MCU)-------*/

/*-----------FORMAT DESCRIPTION----------*/
const static uint16_t FORMATCONTROL00 = 0x4300;
const static uint16_t FORMATCONTROL01 = 0x4301;
const static uint16_t YMAXVALUE_1 = 0x4302;
const static uint16_t YMAXVALUE_2 = 0x4303;
const static uint16_t YMINVALUE_1 = 0x4304;
const static uint16_t YMINVALUE_2 = 0x4305;
const static uint16_t UMAXVALUE_1 = 0x4306;
const static uint16_t UMAXVALUE_2 = 0x4307;
const static uint16_t UMINVALUE_1 = 0x4308;
const static uint16_t UMINVALUE_2 = 0x4309;
const static uint16_t VMAXVALUE_1 = 0x430A;
const static uint16_t VMAXVALUE_2 = 0x430B;
const static uint16_t VMINVALUE_1 = 0x430C;
const static uint16_t VMINVALUE_2 = 0x430D;
/*-----------FORMAT DESCRIPTION----------*/

/*--------DIGITAL VIDEO PORT (DVP)---------*/
const static uint16_t PAD_LCONTROL = 0x4711;
const static uint16_t PAD_RCONTROL = 0x4712;
const static uint16_t COMPRESSION_MODE = 0x4713;
//const static uint16_t DLINE656 = 0x4715;
//const static uint16_t CCIR656_V_SEL = 0x4719;
const static uint16_t HSYNC_CONTROL_00 = 0x471B;
const static uint16_t DVP_CONTROL_1D = 0x471D;
const static uint16_t VSTART_OFFSET = 0x4721;
const static uint16_t VEND_OFFSET = 0x4722;
const static uint16_t CCIR656_CTRL_00 = 0x4730;
const static uint16_t TEST_PATTERN = 0x4741;
const static uint16_t DATA_ORDER = 0x4745;
/*--------DIGITAL VIDEO PORT (DVP)---------*/

/*--------------SCCB CONTROL---------------*/
const static uint16_t SCCBID = 0x3100;
const static uint16_t PCLK_CLK_SELECT = 0x3103;
/*--------------SCCB CONTROL---------------*/


/*--------------GROUP WRITE---------------*/
const static uint16_t GADDR0 = 0x3200;
const static uint16_t GADDR1 = 0x3201;
const static uint16_t GADDR2 = 0x3202;
const static uint16_t GADDR3 = 0x3203;
const static uint16_t GACCSS = 0x3212;
/*--------------GROUP WRITE---------------*/

/*--------------AEC/AGC---------------*/
const static uint16_t AEC_LONG_EXPO_19_16 = 0x3500;
const static uint16_t AEC_LONG_EXPO_15_8 = 0x3501;
const static uint16_t AEC_LONG_EXPO_7_0 = 0x3502;
const static uint16_t AEC_PK_MANUAL = 0x3503;
const static uint16_t AEC_PK_AGC_ADJ_HB = 0x350A;
const static uint16_t AEC_PK_AGC_ADJ_LB = 0x350B;
const static uint16_t AEC_PK_VTS_HB = 0x350C;
const static uint16_t AEC_PK_VTS_LB = 0x350D;
/*--------------AEC/AGC---------------*/

/*--------------SENSOR CONTROL---------------*/
const static uint16_t ANALOG_CR_1 = 0x3600;
const static uint16_t ANALOG_CR_2 = 0x3601;
const static uint16_t ANALOG_CR_3 = 0x3602;
const static uint16_t ANALOG_CR_4 = 0x3603;
const static uint16_t ANALOG_CR_5 = 0x3604;
const static uint16_t ANALOG_CR_6 = 0x3605;
const static uint16_t ANALOG_CR_7 = 0x3606;
const static uint16_t ANALOG_CR_8 = 0x3607;
const static uint16_t ANALOG_CR_9 = 0x3608;
const static uint16_t ANALOG_CR_10 = 0x3609;
const static uint16_t ANALOG_CR_11 = 0x360A;
const static uint16_t ANALOG_CR_12 = 0x360B;
const static uint16_t ANALOG_CR_13 = 0x360C;
const static uint16_t ANALOG_CR_14 = 0x360D;
const static uint16_t ANALOG_CR_15 = 0x360E;
const static uint16_t ANALOG_CR_16 = 0x360F;
const static uint16_t ANALOG_CR_17 = 0x3610;
const static uint16_t ANALOG_CR_18 = 0x3611;
const static uint16_t ANALOG_CR_19 = 0x3612;
const static uint16_t ANALOG_CR_20 = 0x3613;
const static uint16_t ANALOG_CR_21 = 0x3614;
const static uint16_t ANALOG_CR_22 = 0x3615;
const static uint16_t ANALOG_CR_23 = 0x3616;
const static uint16_t ANALOG_CR_24 = 0x3617;
const static uint16_t ANALOG_CR_25 = 0x3618;
const static uint16_t ANALOG_CR_26 = 0x3619;
const static uint16_t ANALOG_CR_27 = 0x361A;
const static uint16_t ANALOG_CR_28 = 0x361B;
const static uint16_t ANALOG_CR_29 = 0x361C;
const static uint16_t ANALOG_CR_30 = 0x361D;
const static uint16_t ANALOG_CR_31 = 0x361E;
const static uint16_t ANALOG_CR_32 = 0x361F;
const static uint16_t ANALOG_CR_33 = 0x3620;
const static uint16_t ANALOG_CR_34 = 0x3622;
const static uint16_t ANALOG_CR_35 = 0x3623;
const static uint16_t ANALOG_CR_36 = 0x3624;
const static uint16_t ANALOG_CR_37 = 0x3625;
const static uint16_t ANALOG_CR_38 = 0x3626;
const static uint16_t ANALOG_CR_39 = 0x3627;
const static uint16_t ANALOG_CR_40 = 0x3628;
const static uint16_t ANALOG_CR_41 = 0x3629;
const static uint16_t ANALOG_CR_42 = 0x362A;
const static uint16_t ANALOG_CR_43 = 0x362B;
const static uint16_t ANALOG_CR_44 = 0x362C;
const static uint16_t ANALOG_CR_45 = 0x362D;
const static uint16_t ANALOG_CR_46 = 0x362E;
const static uint16_t ANALOG_CR_47 = 0x362F;
const static uint16_t ANALOG_CR_48 = 0x3630;
const static uint16_t ANALOG_CR_49 = 0x3631;
const static uint16_t ANALOG_CR_50 = 0x3632;
const static uint16_t ANALOG_CR_51 = 0x3633;
const static uint16_t ANALOG_CR_52 = 0x3634;
const static uint16_t ANALOG_CR_53 = 0x3700;
const static uint16_t ANALOG_CR_54 = 0x3701;
const static uint16_t ANALOG_CR_55 = 0x3702;
const static uint16_t ANALOG_CR_56 = 0x3703;
const static uint16_t ANALOG_CR_57 = 0x3704;
const static uint16_t ANALOG_CR_58 = 0x3705;
const static uint16_t ANALOG_CR_59 = 0x3706;
const static uint16_t ANALOG_CR_60 = 0x3707;
const static uint16_t ANALOG_CR_61 = 0x3708;
const static uint16_t ANALOG_CR_62 = 0x3709;
const static uint16_t ANALOG_CR_63 = 0x370A;
const static uint16_t ANALOG_CR_64 = 0x370B;
const static uint16_t ANALOG_CR_65 = 0x370C;
const static uint16_t ANALOG_CR_66 = 0x370E;
const static uint16_t ANALOG_CR_67 = 0x370F;
const static uint16_t ANALOG_CR_68 = 0x3710;
const static uint16_t ANALOG_CR_69 = 0x3711;

const static uint16_t ARRY_CTRL_01 = 0x3621;
/*--------------SENSOR CONTROL---------------*/

/*--------------TIMING CONTROL---------------*/
const static uint16_t TIMING_HS_1 = 0x3800;
const static uint16_t TIMING_HS_2 = 0x3801;
const static uint16_t TIMING_VS_1 = 0x3802;
const static uint16_t TIMING_VS_2 = 0x3803;
const static uint16_t TIMING_HW_1 = 0x3804;
const static uint16_t TIMING_HW_2 = 0x3805;
const static uint16_t TIMING_VH_1 = 0x3806;
const static uint16_t TIMING_VH_2 = 0x3807;
const static uint16_t TIMING_DVPHO_1 = 0x3808;
const static uint16_t TIMING_DVPHO_2 = 0x3809;
const static uint16_t TIMING_DVPVO_1 = 0x380A;
const static uint16_t TIMING_DVPVO_2 = 0x380B;
const static uint16_t TIMING_DVPHO_1 = 0x3808;
const static uint16_t TIMING_DVPHO_1 = 0x3808;
/*--------------TIMING CONTROL---------------*/

/*-----------POWER DOMAIN AEC/AGC------------*/
const static uint16_t AEC_CTRL00 = 0x3A00;
const static uint16_t AEC_CTRL01 = 0x3A01;
const static uint16_t AEC_MAX_EXPO_1 = 0x3A02;
const static uint16_t AEC_MAX_EXPO_2 = 0x3A03;
const static uint16_t AEC_MAX_EXPO_3 = 0x3A04;
const static uint16_t AEC_CTRL05 = 0x3A05;
const static uint16_t AEC_B50_STEP_1 = 0x3A08;
const static uint16_t AEC_B50_STEP_2 = 0x3A09;
const static uint16_t AEC_B60_STEP_1 = 0x3A0A;
const static uint16_t AEC_B60_STEP_2 = 0x3A0B;
const static uint16_t AEC_CTRL0D = 0x3A0D;
const static uint16_t AEC_CTRL0E = 0x3A0E;
const static uint16_t AEC_CTRL0F = 0x3A0F;
const static uint16_t AEC_CTRL10 = 0x3A10;
const static uint16_t AEC_CTRL11 = 0x3A11;
const static uint16_t AEC_CTRL12 = 0x3A12;
const static uint16_t AEC_CTRL13 = 0x3A13;
const static uint16_t AEC_MAX_EXPO_50_1 = 0x3A14;
const static uint16_t AEC_MAX_EXPO_50_2 = 0x3A15;
const static uint16_t AEC_MAX_EXPO_50_3 = 0x3A16;
const static uint16_t AEC_CTRL17 = 0x3A17;
const static uint16_t AEC_GAIN_CEILING_1 = 0x3A18;
const static uint16_t AEC_GAIN_CEILING_2 = 0x3A19;
const static uint16_t AEC_CTRL_REGISTERS = 0x3A1A;
const static uint16_t AEC_CTRL1B = 0x3A1B;
const static uint16_t LED_ADD_ROW_1 = 0x3A1C;
const static uint16_t LED_ADD_ROW_2 = 0x3A1D;
const static uint16_t AEC_CTRL_1E = 0x3A1E;
const static uint16_t AEC_CTRL_1F = 0x3A1F;
const static uint16_t AEC_CTRL20 = 0x3A20;
/*-----------POWER DOMAIN AEC/AGC------------*/

/*-------------LIGHT FREQUENCY--------------*/
const static uint16_t ALFD_CTRL_1 = 0x3C01;
const static uint16_t ALFD_CTRL_2 = 0x3C00;
const static uint16_t ALFD_CTRL_3 = 0x3C03;
const static uint16_t ALFD_CTRL_4 = 0x3C04;
const static uint16_t ALFD_CTRL_5 = 0x3C05;
const static uint16_t ALFD_CTRL_6 = 0x3C06;
const static uint16_t ALFD_CTRL_7 = 0x3C07;
const static uint16_t ALFD_CTRL_8 = 0x3C08;
const static uint16_t ALFD_CTRL_9 = 0x3C09;
const static uint16_t ALFD_CTRL_A = 0x3C0A;
const static uint16_t ALFD_CTRL_B = 0x3C0B;
const static uint16_t ALFD_CTRL_C = 0x3C0C;
const static uint16_t ALFD_CTRL_D = 0x3C0D;
const static uint16_t ALFD_CTRL_E = 0x3C0E;
const static uint16_t ALFD_CTRL_F = 0x3C0F;
const static uint16_t ALFD_CTRL_10 = 0x3C10;
const static uint16_t ALFD_CTRL_11 = 0x3C11;
const static uint16_t ALFD_CTRL_12 = 0x3C12;
const static uint16_t ALFD_CTRL_13 = 0x3C13;
const static uint16_t ALFD_CTRL_14 = 0x3C14;
const static uint16_t ALFD_CTRL_15 = 0x3C15;
const static uint16_t ALFD_CTRL_16 = 0x3C16;
const static uint16_t ALFD_CTRL_17 = 0x3C17;
const static uint16_t ALFD_CTRL_18 = 0x3C18;
const static uint16_t ALFD_CTRL_19 = 0x3C19;
const static uint16_t ALFD_CTRL_1A = 0x3C1A;
const static uint16_t ALFD_CTRL_1B = 0x3C1B;
const static uint16_t ALFD_CTRL_1C = 0x3C1C;
const static uint16_t ALFD_CTRL_1D = 0x3C1D;
const static uint16_t ALFD_CTRL_1E = 0x3C1E;
const static uint16_t ALFD_CTRL_1F = 0x3C1F;
/*-------------LIGHT FREQUENCY--------------*/

/*------------------ BLC -------------------*/
const static uint16_t BLC_CTRL00 = 0x4000;
const static uint16_t BLC_CTRL03 = 0x4003;
const static uint16_t LONG_EXPOSURE_BLACK_LVL_TARGET_1 = 0x4006;
const static uint16_t LONG_EXPOSURE_BLACK_LVL_TARGET_2 = 0x4007;
const static uint16_t BLC_CTRL04 = 0x400C;
const static uint16_t BLC_FRAME_CTRL = 0x401D;
const static uint16_t BLC_FRAME = 0x401E;
/*------------------ BLC -------------------*/

/*------------------ CIF -------------------*/
const static uint16_t CIF_CTRL00 = 0x4100;
/*------------------ CIF -------------------*/

/*------------- FRAME CONTROL --------------*/
const static uint16_t FRAME_CTRL00 = 0x4201;
const static uint16_t FRAME_CTRL01 = 0x4202;
/*------------- FRAME CONTROL --------------*/

/*---------------- FORMAT ------------------*/
const static uint16_t FORMAT_CONTROL_00 = 0x4300;
const static uint16_t FORMAT_CTRL01 = 0x4301;
const static uint16_t YMAX_VALUE_1 = 0x4302;
const static uint16_t YMAX_VALUE_2 = 0x4303;
const static uint16_t YMIN_VALUE_1 = 0x4304;
const static uint16_t YMIN_VALUE_2 = 0x4305;
const static uint16_t UMAX_VALUE_1 = 0x4306;
const static uint16_t UMAX_VALUE_2 = 0x4307;
const static uint16_t UMIN_VALUE_1 = 0x4308;
const static uint16_t UMIN_VALUE_2 = 0x4309;
const static uint16_t VMAX_VALUE_1 = 0x430A;
const static uint16_t VMAX_VALUE_2 = 0x430B;
const static uint16_t VMIN_VALUE_1 = 0x430C;
const static uint16_t VMIN_VALUE_2 = 0x430D;
/*---------------- FORMAT ------------------*/

/*------------- COMPRESSION ----------------*/
const static uint16_t COMPRESSION_CTRL00 = 0x4400;
const static uint16_t COMPRESSION_CTRL01 = 0x4401;
const static uint16_t COMPRESSION_CTRL02 = 0x4402;
const static uint16_t COMPRESSION_CTRL03 = 0x4403;
const static uint16_t COMPRESSION_CTRL04 = 0x4404;
const static uint16_t COMPRESSION_CTRL05 = 0x4405;
const static uint16_t COMPRESSION_CTRL06 = 0x4406;
const static uint16_t COMPRESSION_CTRL07 = 0x4407;
const static uint16_t COMPRESSION_ISI_CTRL = 0x4408;
const static uint16_t COMPRESSION_CTRL09 = 0x4409;
const static uint16_t COMPRESSION_CTRL0A = 0x440A;
const static uint16_t COMPRESSION_CTRL0B = 0x440B;
const static uint16_t COMPRESSION_CTRL0C = 0x440C;
const static uint16_t COMPRESSION_QT_DATA = 0x4410;
const static uint16_t COMPRESSION_QT_ADDR = 0x4411;
const static uint16_t COMPRESSION_ISI_DATA_1 = 0x4412;
const static uint16_t COMPRESSION_ISI_DATA_2 = 0x4413;
const static uint16_t COMPRESSION_LENGTH_1 = 0x4414;
const static uint16_t COMPRESSION_LENGTH_2 = 0x4415;
const static uint16_t COMPRESSION_LENGTH_3 = 0x4416;
const static uint16_t JFIFO_OVERFLOW = 0x4417;
/*------------- COMPRESSION ----------------*/

/*------------------DVP---------------------*/

/*------------------DVP---------------------*/

/*------------------MIPI---------------------*/

/*------------------MIPI---------------------*/

/*------------ISP FRAME CONTROL--------------*/
const static uint16_t FRAME_CTRL00 = 0x4901;
const static uint16_t FRAME_CTRL01 = 0x4902;
/*------------ISP FRAME CONTROL--------------*/

/*-------------ISP TOP CONTROL---------------*/
const static uint16_t ISP_CONTROL_00 = 0x5000;
const static uint16_t ISP_CONTROL_01 = 0x5001;
const static uint16_t ISP_CONTROL_02 = 0x5002;
const static uint16_t ISP_CONTROL_03 = 0x5003;
const static uint16_t ISP_CONTROL_05 = 0x5005;
const static uint16_t HORIZON_SUBSAMPLE_MODE = 0x501C;
const static uint16_t RGB_DITHER_CONTROL = 0x501E;
const static uint16_t FORMAT_MUX_CONTROL = 0x501F;
const static uint16_t ISP_CONTROL_37 = 0x5025;
const static uint16_t DRAW_WINDOW_CTRL_00 = 0x5027;
const static uint16_t DRAW_WL_POS_CTRL_1 = 0x5028;
const static uint16_t DRAW_WL_POS_CTRL_2 = 0x5029;
const static uint16_t DRAW_WR_POS_CTRL_1 = 0x502A;
const static uint16_t DRAW_WR_POS_CTRL_2 = 0x502B;
const static uint16_t DRAW_WT_POS_CTRL_1 = 0x502C;
const static uint16_t DRAW_WT_POS_CTRL_2 = 0x502D;
const static uint16_t DRAW_WB_POS_CTRL_1 = 0x502E;
const static uint16_t DRAW_WB_POS_CTRL_2 = 0x502F;
const static uint16_t DRAW_WH_BOUNDARY_WIDTH_CTRL_1 = 0x5030;
const static uint16_t DRAW_WH_BOUNDARY_WIDTH_CTRL_2 = 0x5031;
const static uint16_t DRAW_WV_BOUNDARY_WIDTH_CTRL_1 = 0x5032;
const static uint16_t DRAW_WV_BOUNDARY_WIDTH_CTRL_2 = 0x5033;
const static uint16_t DRAW_WINDOW_Y_CONTROL = 0x5034;
const static uint16_t DRAW_WINDOW_U_CONTROL = 0x5035;
const static uint16_t DRAW_WINDOW_V_CONTROL = 0x5036;
const static uint16_t PRE_ISP_TEST_SETTING_1 = 0x503D;
const static uint16_t PRE_ISP_TEST_SETTING_2 = 0x503E;
const static uint16_t PRE_ISP_TEST_SETTING_3 = 0x503F;
const static uint16_t EVEN_CTRL_00 = 0x5080;
/*-------------ISP TOP CONTROL---------------*/

/*-------------------AWB---------------------*/
/*--------------AWB CONTROL---------------*/
const static uint16_t AWB_R_GAIN_HB = 0x3400;
const static uint16_t AWB_R_GAIN_LB = 0x3401;
const static uint16_t AWB_G_GAIN_HB = 0x3402;
const static uint16_t AWB_G_GAIN_LB = 0x3403;
const static uint16_t AWB_B_GAIN_HB = 0x3404;
const static uint16_t AWB_B_GAIN_LB = 0x3405;
const static uint16_t AWB_MANUAL = 0x3406;
/*--------------AWB CONTROL---------------*/
const static uint16_t AWB_CONTROL_00 = 0x5180;
const static uint16_t AWB_CONTROL_01 = 0x5181;
const static uint16_t AWB_CONTROL_02 = 0x5182;
const static uint16_t AWB_CONTROL_03 = 0x5183;
const static uint16_t AWB_CONTROL_04 = 0x5184;
const static uint16_t AWB_CONTROL_05 = 0x5185;
const static uint16_t AWB_CONTROL_06 = 0x5186;
const static uint16_t AWB_CONTROL_07 = 0x5187;
const static uint16_t AWB_CONTROL_09 = 0x5189;
const static uint16_t AWB_CONTROL_10 = 0x518A;
const static uint16_t AWB_CONTROL_11 = 0x518B;
const static uint16_t AWB_CONTROL_12 = 0x518C;
const static uint16_t AWB_CONTROL_13 = 0x518D;
const static uint16_t AWB_CONTROL_14 = 0x518E;
const static uint16_t AWB_CONTROL_15 = 0x518F;
const static uint16_t AWB_CONTROL_16 = 0x5190;
const static uint16_t AWB_CONTROL_17 = 0x5191;
const static uint16_t AWB_CONTROL_18 = 0x5192;
const static uint16_t AWB_CONTROL_19 = 0x5193;
const static uint16_t AWB_CONTROL_20 = 0x5194;
const static uint16_t AWB_CONTROL_21 = 0x5195;
const static uint16_t AWB_CONTROL_22 = 0x5196;
const static uint16_t AWB_CONTROL_23 = 0x5197;
const static uint16_t AWB_R_GAIN_MANUAL_HB = 0x5198;
const static uint16_t AWB_R_GAIN_MANUAL_LB = 0x5199;
const static uint16_t AWB_G_GAIN_MANUAL_HB = 0x519A;
const static uint16_t AWB_G_GAIN_MANUAL_LB = 0x519B;
const static uint16_t AWB_B_GAIN_MANUAL_HB = 0x519C;
const static uint16_t AWB_B_GAIN_MANUAL_LB = 0x519D;
const static uint16_t AWB_CONTROL_30 = 0x519E;
const static uint16_t AWB_CURRENT_R_GAIN_1 = 0x519F;
const static uint16_t AWB_CURRENT_R_GAIN_2 = 0x51A0;
const static uint16_t AWB_CURRENT_G_GAIN_1 = 0x51A1;
const static uint16_t AWB_CURRENT_G_GAIN_2 = 0x51A2;
const static uint16_t AWB_CURRENT_B_GAIN_1 = 0x51A3;
const static uint16_t AWB_CURRENT_B_GAIN_2 = 0x51A4;
const static uint16_t AWB_AVERAGE_B_1 = 0x51A5;
const static uint16_t AWB_AVERAGE_B_2 = 0x51A6;
const static uint16_t AWB_AVERAGE_B_3 = 0x51A7;
/*-------------------AWB---------------------*/

/*-------------------CIP---------------------*/
const static uint16_t CIP_MIN_GAIN_1 = 0x5300;
const static uint16_t CIP_MIN_GAIN_2 = 0x5301;
const static uint16_t CIP_MAX_GAIN_1 = 0x5302;
const static uint16_t CIP_MAX_GAIN_2 = 0x5303;
const static uint16_t CIP_MIN_INTNOISE_1 = 0x5304;
const static uint16_t CIP_MIN_INTNOISE_2 = 0x5305;
const static uint16_t CIP_MAX_INTNOISE_1 = 0x5306;
const static uint16_t CIP_MAX_INTNOISE_2 = 0x5307;
const static uint16_t CIP_SHARPEN_MASK_0 = 0x5308;
const static uint16_t CIP_SHARPEN_MASK_1 = 0x5309;
const static uint16_t CIP_CONTROL10 = 0x530A;
const static uint16_t CIP_MANUAL_SHARPENP = 0x531E;
const static uint16_t CIP_MANUAL_SHARPENM = 0x531F;
const static uint16_t CIP_MANUAL_SHARPENTP = 0x5320;
const static uint16_t CIP_MANUAL_SHARPENTM = 0x5321;
const static uint16_t CMX00_1 = 0x5380;
const static uint16_t CMX00_2 = 0x5381;
const static uint16_t CMX01_1 = 0x5382;
const static uint16_t CMX01_2 = 0x5383;
const static uint16_t CMX02_1 = 0x5384;
const static uint16_t CMX02_2 = 0x5385;
const static uint16_t CMX10_1 = 0x5386;
const static uint16_t CMX10_2 = 0x5387;
const static uint16_t CMX11_1 = 0x5388;
const static uint16_t CMX11_2 = 0x5389;
const static uint16_t CMX12_1 = 0x538A;
const static uint16_t CMX12_2 = 0x538B;
const static uint16_t CMX20_1 = 0x538C;
const static uint16_t CMX20_2 = 0x538D;
const static uint16_t CMX21_1 = 0x538E;
const static uint16_t CMX21_2 = 0x538F;
const static uint16_t CMX22_1 = 0x5390;
const static uint16_t CMX22_2 = 0x5391;
const static uint16_t CMX_CMXSIGN_1 = 0x5392;
const static uint16_t CMX_CMXSIGN_2 = 0x5393;
const static uint16_t CMX_CONTROL_20 = 0x5394;
/*-------------------CIP---------------------*/

/*-----------------STRETCH-------------------*/
const static uint16_t ST_MIN_HIGH_LVL_1 = 0x5402;
const static uint16_t ST_MIN_HIGH_LVL_2 = 0x5403;
const static uint16_t ST_MAX_LOW_LVL_1 = 0x5404;
const static uint16_t ST_MAX_LOW_LVL_2 = 0x5405;
const static uint16_t ST_THRES1_1 = 0x540E;
const static uint16_t ST_THRES1_2 = 0x540F;
const static uint16_t ST_THRES1_3 = 0x5410;
const static uint16_t ST_THRES2_1 = 0x5412;
const static uint16_t ST_THRES2_2 = 0x5413;
const static uint16_t ST_THRES2_3 = 0x5414;
const static uint16_t DEBUG_MODE_1 = 0x5415;
const static uint16_t DEBUG_MODE_2 = 0x5416;
const static uint16_t DEBUG_MODE_3 = 0x5417;
const static uint16_t DEBUG_MODE_4 = 0x5418;
const static uint16_t DEBUG_MODE_5 = 0x5419;
const static uint16_t DEBUG_MODE_6 = 0x541A;
const static uint16_t DEBUG_MODE_7 = 0x541B;
const static uint16_t DEBUG_MODE_8 = 0x541C;
const static uint16_t ST_STEP = 0x541D;
/*-----------------STRETCH-------------------*/

/*------------RAW GAMMA/Y GAMMA--------------*/
const static uint16_t GAMMA_GAIN_LIST_00_1 = 0x5490;
const static uint16_t GAMMA_GAIN_LIST_00_2 = 0x5491;
const static uint16_t GAMMA_GAIN_LIST_01_1 = 0x5492;
const static uint16_t GAMMA_GAIN_LIST_01_2 = 0x5493;
const static uint16_t GAMMA_GAIN_LIST_02_1 = 0x5494;
const static uint16_t GAMMA_GAIN_LIST_02_2 = 0x5495;
const static uint16_t GAMMA_GAIN_LIST_03_1 = 0x5496;
const static uint16_t GAMMA_GAIN_LIST_03_2 = 0x5497;
const static uint16_t GAMMA_GAIN_LIST_04_1 = 0x5498;
const static uint16_t GAMMA_GAIN_LIST_04_2 = 0x5499;
const static uint16_t GAMMA_GAIN_LIST_05_1 = 0x549A;
const static uint16_t GAMMA_GAIN_LIST_05_2 = 0x549B;
const static uint16_t GAMMA_GAIN_LIST_06_1 = 0x549C;
const static uint16_t GAMMA_GAIN_LIST_06_2 = 0x549D;
const static uint16_t GAMMA_GAIN_LIST_07_1 = 0x549E;
const static uint16_t GAMMA_GAIN_LIST_07_2 = 0x549F;
const static uint16_t GAMMA_GAIN_LIST_08_1 = 0x54A0;
const static uint16_t GAMMA_GAIN_LIST_08_2 = 0x54A1;
const static uint16_t GAMMA_GAIN_LIST_09_1 = 0x54A2;
const static uint16_t GAMMA_GAIN_LIST_09_2 = 0x54A3;
const static uint16_t GAMMA_GAIN_LIST_10_1 = 0x54A4;
const static uint16_t GAMMA_GAIN_LIST_10_2 = 0x54A5;
const static uint16_t GAMMA_GAIN_LIST_11_1 = 0x54A6;
const static uint16_t GAMMA_GAIN_LIST_11_2 = 0x54A7;
const static uint16_t GAMMA_GAIN_LIST_12_1 = 0x54A8;
const static uint16_t GAMMA_GAIN_LIST_12_2 = 0x54A9;
const static uint16_t GAMMA_GAIN_LIST_13_1 = 0x54AA;
const static uint16_t GAMMA_GAIN_LIST_13_2 = 0x54AB;
const static uint16_t GAMMA_GAIN_LIST_14_1 = 0x54AC;
const static uint16_t GAMMA_GAIN_LIST_14_2 = 0x54AD;
const static uint16_t GAMMA_GAIN_LIST_15_1 = 0x54AE;
const static uint16_t GAMMA_GAIN_LIST_15_2 = 0x54AF;
const static uint16_t GAMMA_CONTROL30 = 0x54B0;
const static uint16_t GAMMA_CONTROL31 = 0x54B1;
const static uint16_t GAMMA_CONTROL32 = 0x54B2;
const static uint16_t GAMMA_CONTROL33 = 0x54B3;
const static uint16_t GAMMA_CONTROL34 = 0x54B4;
const static uint16_t GAMMA_CONTROL35 = 0x54B5;
const static uint16_t GAMMA_CONTROL36 = 0x54B6;
const static uint16_t GAMMA_CONTROL37 = 0x54B7;
/*------------RAW GAMMA/Y GAMMA--------------*/

/*----------------UV ADJUST------------------*/
const static uint16_t UV_ADJUST_CONTROL0 = 0x5500;
const static uint16_t UV_ADJUST_CONTROL3 = 0x5501;
const static uint16_t UV_ADJUST_TH1_1 = 0x5502;
const static uint16_t UV_ADJUST_TH1_2 = 0x5503;
const static uint16_t UV_ADJUST_TH2_1 = 0x5504;
const static uint16_t UV_ADJUST_TH2_2 = 0x5505;
const static uint16_t UV_ADJUST_AUTO = 0x5506;
/*----------------UV ADJUST------------------*/

/*--------------SCALE/AVERAGE----------------*/
const static uint16_t SCALE_CONTROL00 = 0x5600;
const static uint16_t AVG_X_START_1 = 0x5680;
const static uint16_t AVG_X_START_2 = 0x5681;
const static uint16_t AVG_X_END_1 = 0x5682;
const static uint16_t AVG_X_END_2 = 0x5683;
const static uint16_t AVG_Y_START_1 = 0x5684;
const static uint16_t AVG_Y_START_2 = 0x5685;
const static uint16_t AVG_Y_END_1 = 0x5686;
const static uint16_t AVG_Y_END_2 = 0x5687;
const static uint16_t AVG_R8 = 0x5688;
const static uint16_t AVG_R9 = 0x5689;
const static uint16_t AVG_RA = 0x568A;
const static uint16_t AVG_RB = 0x568B;
const static uint16_t AVG_RC = 0x568C;
const static uint16_t AVG_RD = 0x568D;
const static uint16_t AVG_RE = 0x568E;
const static uint16_t AVG_RF = 0x568F;
const static uint16_t AVG_R10 = 0x5690;
const static uint16_t AVG_R11 = 0x5691;
/*--------------SCALE/AVERAGE----------------*/

/*------------------LENC--------------------*/
const static uint16_t LENC_PARA_G00 = 0x5800;
const static uint16_t LENC_PARA_G01 = 0x5801;
const static uint16_t LENC_PARA_G02 = 0x5802;
const static uint16_t LENC_PARA_G03 = 0x5803;
const static uint16_t LENC_PARA_G04 = 0x5804;
const static uint16_t LENC_PARA_G05 = 0x5805;
const static uint16_t LENC_PARA_G06 = 0x5806;
const static uint16_t LENC_PARA_G07 = 0x5807;
const static uint16_t LENC_PARA_G08 = 0x5808;
const static uint16_t LENC_PARA_G09 = 0x5809;
const static uint16_t LENC_PARA_G10 = 0x580A;
const static uint16_t LENC_PARA_G11 = 0x580B;
const static uint16_t LENC_PARA_G12 = 0x580C;
const static uint16_t LENC_PARA_G13 = 0x580D;
const static uint16_t LENC_PARA_G14 = 0x580E;
const static uint16_t LENC_PARA_G15 = 0x580F;
const static uint16_t LENC_PARA_G16 = 0x5810;
const static uint16_t LENC_PARA_G17 = 0x5811;
const static uint16_t LENC_PARA_G18 = 0x5812;
const static uint16_t LENC_PARA_G19 = 0x5813;
const static uint16_t LENC_PARA_G20 = 0x5814;
const static uint16_t LENC_PARA_G21 = 0x5815;
const static uint16_t LENC_PARA_G22 = 0x5816;
const static uint16_t LENC_PARA_G23 = 0x5817;
const static uint16_t LENC_PARA_G24 = 0x5818;
const static uint16_t LENC_PARA_G25 = 0x5819;
const static uint16_t LENC_PARA_G26 = 0x581A;
const static uint16_t LENC_PARA_G27 = 0x581B;
const static uint16_t LENC_PARA_G28 = 0x581C;
const static uint16_t LENC_PARA_G29 = 0x581D;
const static uint16_t LENC_PARA_G30 = 0x581E;
const static uint16_t LENC_PARA_G31 = 0x581F;
const static uint16_t LENC_PARA_G32 = 0x5820;
const static uint16_t LENC_PARA_G33 = 0x5821;
const static uint16_t LENC_PARA_G34 = 0x5822;
const static uint16_t LENC_PARA_G35 = 0x5823;
const static uint16_t LENC_PARA_G36 = 0x5824;
const static uint16_t LENC_PARA_G37 = 0x5825;
const static uint16_t LENC_PARA_G38 = 0x5826;
const static uint16_t LENC_PARA_G39 = 0x5827;
const static uint16_t LENC_PARA_G40 = 0x5828;
const static uint16_t LENC_PARA_G41 = 0x5829;
const static uint16_t LENC_PARA_G42 = 0x582A;
const static uint16_t LENC_PARA_G43 = 0x582B;
const static uint16_t LENC_PARA_G44 = 0x582C;
const static uint16_t LENC_PARA_G45 = 0x582D;
const static uint16_t LENC_PARA_G46 = 0x582E;
const static uint16_t LENC_PARA_G47 = 0x582F;
const static uint16_t LENC_PARA_G48 = 0x5830;
const static uint16_t LENC_PARA_G49 = 0x5831;
const static uint16_t LENC_PARA_G50 = 0x5832;
const static uint16_t LENC_PARA_G51 = 0x5833;
const static uint16_t LENC_PARA_G52 = 0x5834;
const static uint16_t LENC_PARA_G53 = 0x5835;
const static uint16_t LENC_PARA_G54 = 0x5836;
const static uint16_t LENC_PARA_G55 = 0x5837;
const static uint16_t LENC_PARA_G56 = 0x5838;
const static uint16_t LENC_PARA_G57 = 0x5839;
const static uint16_t LENC_PARA_G58 = 0x583A;
const static uint16_t LENC_PARA_G59 = 0x583B;
const static uint16_t LENC_PARA_G60 = 0x583C;
const static uint16_t LENC_PARA_G61 = 0x583D;
const static uint16_t LENC_PARA_G62 = 0x583E;
const static uint16_t LENC_PARA_G63 = 0x583F;
const static uint16_t LENC_PARA_BR00 = 0x5840;
const static uint16_t LENC_PARA_BR01 = 0x5841;
const static uint16_t LENC_PARA_BR02 = 0x5842;
const static uint16_t LENC_PARA_BR03 = 0x5843;
const static uint16_t LENC_PARA_BR04 = 0x5844;
const static uint16_t LENC_PARA_BR05 = 0x5845;
const static uint16_t LENC_PARA_BR06 = 0x5846;
const static uint16_t LENC_PARA_BR07 = 0x5847;
const static uint16_t LENC_PARA_BR08 = 0x5848;
const static uint16_t LENC_PARA_BR09 = 0x5849;
const static uint16_t LENC_PARA_BR10 = 0x584A;
const static uint16_t LENC_PARA_BR11 = 0x584B;
const static uint16_t LENC_PARA_BR12 = 0x584C;
const static uint16_t LENC_PARA_BR13 = 0x584D;
const static uint16_t LENC_PARA_BR14 = 0x584E;
const static uint16_t LENC_PARA_BR15 = 0x584F;
const static uint16_t LENC_PARA_BR16 = 0x5850;
const static uint16_t LENC_PARA_BR17 = 0x5851;
const static uint16_t LENC_PARA_BR18 = 0x5852;
const static uint16_t LENC_PARA_BR19 = 0x5853;
const static uint16_t LENC_PARA_BR20 = 0x5854;
const static uint16_t LENC_PARA_BR21 = 0x5855;
const static uint16_t LENC_PARA_BR22 = 0x5856;
const static uint16_t LENC_PARA_BR23 = 0x5857;
const static uint16_t LENC_PARA_BR24 = 0x5858;
const static uint16_t LENC_PARA_BR25 = 0x5859;
const static uint16_t LENC_PARA_BR26 = 0x585A;
const static uint16_t LENC_PARA_BR27 = 0x585B;
const static uint16_t LENC_PARA_BR28 = 0x585C;
const static uint16_t LENC_PARA_BR29 = 0x585D;
const static uint16_t LENC_PARA_BR30 = 0x585E;
const static uint16_t LENC_PARA_BR31 = 0x585F;
const static uint16_t LENC_PARA_BR32 = 0x5860;
const static uint16_t LENC_PARA_BR33 = 0x5861;
const static uint16_t LENC_PARA_BR34 = 0x5862;
const static uint16_t LENC_PARA_BR35 = 0x5863;
const static uint16_t LENC_PARA_BR36 = 0x5864;
const static uint16_t LENC_PARA_BR37 = 0x5865;
const static uint16_t LENC_PARA_BR38 = 0x5866;
const static uint16_t LENC_PARA_BR39 = 0x5867;
const static uint16_t LENC_PARA_BR40 = 0x5868;
const static uint16_t LENC_PARA_BR41 = 0x5869;
const static uint16_t LENC_PARA_BR42 = 0x586A;
const static uint16_t LENC_PARA_BR43 = 0x586B;
const static uint16_t LENC_PARA_BR44 = 0x586C;
const static uint16_t LENC_PARA_BR45 = 0x586D;
const static uint16_t LENC_PARA_BR46 = 0x586E;
const static uint16_t LENC_PARA_BR47 = 0x586F;
const static uint16_t LENC_PARA_BR48 = 0x5870;
const static uint16_t LENC_PARA_BR49 = 0x5871;
const static uint16_t LENC_PARA_BR50 = 0x5872;
const static uint16_t LENC_PARA_BR51 = 0x5873;
const static uint16_t LENC_PARA_BR52 = 0x5874;
const static uint16_t LENC_PARA_BR53 = 0x5875;
const static uint16_t LENC_PARA_BR54 = 0x5876;
const static uint16_t LENC_PARA_BR55 = 0x5877;
const static uint16_t LENC_PARA_BR56 = 0x5878;
const static uint16_t LENC_PARA_BR57 = 0x5879;
const static uint16_t LENC_PARA_BR58 = 0x587A;
const static uint16_t LENC_PARA_BR59 = 0x587B;
const static uint16_t LENC_PARA_BR60 = 0x587C;
const static uint16_t LENC_PARA_BR61 = 0x587D;
const static uint16_t LENC_PARA_BR62 = 0x587E;
const static uint16_t LENC_PARA_BR63 = 0x587F;
const static uint16_t LENC_PARA_BR64 = 0x5880;
const static uint16_t LENC_PARA_BR65 = 0x5881;
const static uint16_t LENC_PARA_BR66 = 0x5882;
const static uint16_t LENC_PARA_BR67 = 0x5883;
const static uint16_t LENC_PARA_BR68 = 0x5884;
const static uint16_t LENC_PARA_BR69 = 0x5885;
const static uint16_t LENC_PARA_BR70 = 0x5886;
const static uint16_t LENC_PARA_BR71 = 0x5887;
const static uint16_t LENC_BRV_SCALE_1 = 0x5888;
const static uint16_t LENC_BRV_SCALE_2 = 0x5889;
const static uint16_t LENC_BRH_SCALE_1 = 0x588A;
const static uint16_t LENC_BRH_SCALE_2 = 0x588B;
const static uint16_t LENC_GV_SCALE_1 = 0x588C;
const static uint16_t LENC_GV_SCALE_2 = 0x588D;
const static uint16_t LENC_GH_SCALE_1 = 0x588E;
const static uint16_t LENC_GH_SCALE_2 = 0x588F;
const static uint16_t LENC_X_OFFSET_1 = 0x5890;
const static uint16_t LENC_X_OFFSET_2 = 0x5891;
const static uint16_t LENC_Y_OFFSET_1 = 0x5892;
const static uint16_t LENC_Y_OFFSET_2 = 0x5893;
const static uint16_t LENC_NGAIN = 0x5894;
/*------------------LENC--------------------*/

/*--------------AFC CONTROL-----------------*/
const static uint16_t AFC_CTRL00 = 0x6000;
const static uint16_t AFC_CTRL01 = 0x6001;
const static uint16_t AFC_CTRL02 = 0x6002;
const static uint16_t AFC_CTRL03 = 0x6003;
const static uint16_t AFC_CTRL04 = 0x6004;
const static uint16_t AFC_CTRL05 = 0x6005;
const static uint16_t AFC_CTRL06 = 0x6006;
const static uint16_t AFC_CTRL07 = 0x6007;
const static uint16_t AFC_CTRL08 = 0x6008;
const static uint16_t AFC_CTRL09 = 0x6009;
const static uint16_t AFC_CTRL10 = 0x600A;
const static uint16_t AFC_CTRL11 = 0x600B;
const static uint16_t AFC_CTRL12 = 0x600C;
const static uint16_t AFC_CTRL13 = 0x600D;
const static uint16_t AFC_CTRL14 = 0x600E;
const static uint16_t AFC_CTRL15 = 0x600F;
const static uint16_t AFC_CTRL16 = 0x6010;
const static uint16_t AFC_CTRL17 = 0x6011;
const static uint16_t AFC_CTRL18 = 0x6012;
const static uint16_t AFC_CTRL19 = 0x6013;
const static uint16_t AFC_CTRL20 = 0x6014;
const static uint16_t AFC_CTRL21 = 0x6015;
const static uint16_t AFC_CTRL22 = 0x6016;
const static uint16_t AFC_CTRL23 = 0x6017;
const static uint16_t AFC_CTRL24 = 0x6018;
const static uint16_t AFC_CTRL25 = 0x6019;
const static uint16_t AFC_CTRL26 = 0x601A;
const static uint16_t AFC_CTRL27 = 0x601B;
const static uint16_t AFC_CTRL28 = 0x601C;
const static uint16_t AFC_CTRL29 = 0x601D;
const static uint16_t AFC_CTRL30 = 0x601E;
const static uint16_t AFC_CTRL31 = 0x601F;
const static uint16_t AFC_CTRL32 = 0x6020;
const static uint16_t AFC_CTRL33 = 0x6021;
const static uint16_t AFC_CTRL34 = 0x6022;
const static uint16_t AFC_CTRL35 = 0x6023;
const static uint16_t AFC_CTRL36 = 0x6024;
const static uint16_t AFC_CTRL37 = 0x6025;
const static uint16_t AFC_CTRL38 = 0x6026;
const static uint16_t AFC_CTRL39 = 0x6027;
const static uint16_t AFC_CTRL40 = 0x6028;
const static uint16_t AFC_CTRL41 = 0x6029;
const static uint16_t AFC_CTRL42 = 0x602A;
const static uint16_t AFC_CTRL43 = 0x602B;
const static uint16_t AFC_CTRL44 = 0x602C;
const static uint16_t AFC_CTRL45 = 0x602D;
const static uint16_t AFC_CTRL46 = 0x602E;
const static uint16_t AFC_CTRL47 = 0x602F;
const static uint16_t AFC_CTRL48 = 0x6030;
const static uint16_t AFC_CTRL49 = 0x6031;
const static uint16_t AFC_CTRL50 = 0x6032;
const static uint16_t AFC_CTRL51 = 0x6033;
const static uint16_t AFC_CTRL52 = 0x6034;
const static uint16_t AFC_CTRL53 = 0x6035;
const static uint16_t AFC_CTRL54 = 0x6036;
const static uint16_t AFC_CTRL55 = 0x6037;
const static uint16_t AFC_CTRL56 = 0x6038;
const static uint16_t AFC_CTRL57 = 0x6039;
const static uint16_t AFC_CTRL58 = 0x603A;
const static uint16_t AFC_CTRL59 = 0x603B;
const static uint16_t AFC_CTRL60 = 0x603C;
/*--------------AFC CONTROL-----------------*/


