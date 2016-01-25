/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7dea747 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Eslam/final_project_Stop_watch/Counter_Binary.vhd";
extern char *IEEE_P_3620187407;

char *ieee_p_3620187407_sub_436351764_3620187407(char *, char *, char *, char *, int );


static void work_a_3326118601_3212880686_p_0(char *t0)
{
    char t12[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    char *t13;
    char *t14;
    char *t15;
    int t16;
    unsigned int t17;
    char *t18;
    char *t19;

LAB0:    xsi_set_current_line(33, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    xsi_set_current_line(42, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 5992U);
    t5 = (t0 + 6042);
    t7 = (t12 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 5;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t16 = (5 - 0);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t17;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t12);
    if (t3 != 0)
        goto LAB10;

LAB12:
LAB11:    t1 = (t0 + 3632);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(34, ng0);
    t1 = (t0 + 1352U);
    t5 = *((char **)t1);
    t1 = (t0 + 3712);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 6U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(35, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 3776);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 6U);
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1992U);
    t6 = *((char **)t2);
    t2 = (t0 + 5992U);
    t7 = ieee_p_3620187407_sub_436351764_3620187407(IEEE_P_3620187407, t12, t6, t2, 1);
    t8 = (t0 + 3712);
    t9 = (t8 + 56U);
    t13 = *((char **)t9);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t7, 6U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(38, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 3840);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 6U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(39, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 3904);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 6U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB7:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t10 = *((unsigned char *)t5);
    t11 = (t10 == (unsigned char)3);
    t3 = t11;
    goto LAB9;

LAB10:    xsi_set_current_line(43, ng0);
    t8 = (t0 + 6048);
    t13 = (t0 + 3712);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t18 = (t15 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t8, 6U);
    xsi_driver_first_trans_fast(t13);
    xsi_set_current_line(44, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 5992U);
    t5 = ieee_p_3620187407_sub_436351764_3620187407(IEEE_P_3620187407, t12, t2, t1, 1);
    t6 = (t0 + 3776);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t13 = *((char **)t9);
    memcpy(t13, t5, 6U);
    xsi_driver_first_trans_fast(t6);
    goto LAB11;

}


extern void work_a_3326118601_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3326118601_3212880686_p_0};
	xsi_register_didat("work_a_3326118601_3212880686", "isim/TOP_isim_beh.exe.sim/work/a_3326118601_3212880686.didat");
	xsi_register_executes(pe);
}
