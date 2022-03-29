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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "E:/verilog/VLU1/IEEE_to_binary.v";
static int ng1[] = {127, 0};
static int ng2[] = {4, 0};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {3, 0};
static int ng5[] = {2, 0};
static int ng6[] = {1, 0};
static int ng7[] = {0, 0};



static void Always_10_0(char *t0)
{
    char t4[8];
    char t15[8];
    char t29[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(10, ng0);
    t2 = (t0 + 3008);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(10, ng0);

LAB5:    xsi_set_current_line(12, ng0);
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 23);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 23);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 255U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 255U);
    t14 = ((char*)((ng1)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_minus(t15, 32, t4, 32, t14, 32);
    t16 = (t0 + 1768);
    xsi_vlogvar_assign_value(t16, t15, 0, 0, 4);
    xsi_set_current_line(14, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t4, 0, 8);
    t7 = (t5 + 4);
    t14 = (t6 + 4);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t14);
    t13 = (t11 ^ t12);
    t17 = (t10 | t13);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t14);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t4) = 1;

LAB9:    t23 = (t4 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(19, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t4, 0, 8);
    t7 = (t5 + 4);
    t14 = (t6 + 4);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t14);
    t13 = (t11 ^ t12);
    t17 = (t10 | t13);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t14);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB17;

LAB14:    if (t20 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t4) = 1;

LAB17:    t23 = (t4 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB18;

LAB19:
LAB20:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng5)));
    memset(t4, 0, 8);
    t7 = (t5 + 4);
    t14 = (t6 + 4);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t14);
    t13 = (t11 ^ t12);
    t17 = (t10 | t13);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t14);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB25;

LAB22:    if (t20 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t4) = 1;

LAB25:    t23 = (t4 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB26;

LAB27:
LAB28:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng6)));
    memset(t4, 0, 8);
    t7 = (t5 + 4);
    t14 = (t6 + 4);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t14);
    t13 = (t11 ^ t12);
    t17 = (t10 | t13);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t14);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB33;

LAB30:    if (t20 != 0)
        goto LAB32;

LAB31:    *((unsigned int *)t4) = 1;

LAB33:    t23 = (t4 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB34;

LAB35:
LAB36:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng7)));
    memset(t4, 0, 8);
    t7 = (t5 + 4);
    t14 = (t6 + 4);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t14);
    t13 = (t11 ^ t12);
    t17 = (t10 | t13);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t14);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB41;

LAB38:    if (t20 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t4) = 1;

LAB41:    t23 = (t4 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB42;

LAB43:
LAB44:    goto LAB2;

LAB8:    t16 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(14, ng0);

LAB13:    xsi_set_current_line(15, ng0);
    t30 = (t0 + 1048U);
    t31 = *((char **)t30);
    memset(t29, 0, 8);
    t30 = (t29 + 4);
    t32 = (t31 + 4);
    t33 = *((unsigned int *)t31);
    t34 = (t33 >> 19);
    *((unsigned int *)t29) = t34;
    t35 = *((unsigned int *)t32);
    t36 = (t35 >> 19);
    *((unsigned int *)t30) = t36;
    t37 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t37 & 15U);
    t38 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t38 & 15U);
    t39 = ((char*)((ng3)));
    xsi_vlogtype_concat(t15, 5, 5, 2U, t39, 1, t29, 4);
    t40 = (t0 + 1448);
    xsi_vlogvar_assign_value(t40, t15, 0, 0, 5);
    xsi_set_current_line(16, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 14);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 14);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 31U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 31U);
    t6 = (t0 + 1608);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 5);
    goto LAB12;

LAB16:    t16 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(19, ng0);

LAB21:    xsi_set_current_line(20, ng0);
    t30 = (t0 + 1048U);
    t31 = *((char **)t30);
    memset(t29, 0, 8);
    t30 = (t29 + 4);
    t32 = (t31 + 4);
    t33 = *((unsigned int *)t31);
    t34 = (t33 >> 20);
    *((unsigned int *)t29) = t34;
    t35 = *((unsigned int *)t32);
    t36 = (t35 >> 20);
    *((unsigned int *)t30) = t36;
    t37 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t37 & 7U);
    t38 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t38 & 7U);
    t39 = ((char*)((ng3)));
    xsi_vlogtype_concat(t15, 5, 5, 2U, t39, 2, t29, 3);
    t40 = (t0 + 1448);
    xsi_vlogvar_assign_value(t40, t15, 0, 0, 5);
    xsi_set_current_line(21, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 15);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 15);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 31U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 31U);
    t6 = (t0 + 1608);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 5);
    goto LAB20;

LAB24:    t16 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(24, ng0);

LAB29:    xsi_set_current_line(25, ng0);
    t30 = (t0 + 1048U);
    t31 = *((char **)t30);
    memset(t29, 0, 8);
    t30 = (t29 + 4);
    t32 = (t31 + 4);
    t33 = *((unsigned int *)t31);
    t34 = (t33 >> 21);
    *((unsigned int *)t29) = t34;
    t35 = *((unsigned int *)t32);
    t36 = (t35 >> 21);
    *((unsigned int *)t30) = t36;
    t37 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t37 & 3U);
    t38 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t38 & 3U);
    t39 = ((char*)((ng3)));
    xsi_vlogtype_concat(t15, 5, 5, 2U, t39, 3, t29, 2);
    t40 = (t0 + 1448);
    xsi_vlogvar_assign_value(t40, t15, 0, 0, 5);
    xsi_set_current_line(26, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 16);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 16);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 31U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 31U);
    t6 = (t0 + 1608);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 5);
    goto LAB28;

LAB32:    t16 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB33;

LAB34:    xsi_set_current_line(29, ng0);

LAB37:    xsi_set_current_line(30, ng0);
    t30 = (t0 + 1048U);
    t31 = *((char **)t30);
    memset(t29, 0, 8);
    t30 = (t29 + 4);
    t32 = (t31 + 4);
    t33 = *((unsigned int *)t31);
    t34 = (t33 >> 22);
    t35 = (t34 & 1);
    *((unsigned int *)t29) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 >> 22);
    t38 = (t37 & 1);
    *((unsigned int *)t30) = t38;
    t39 = ((char*)((ng3)));
    xsi_vlogtype_concat(t15, 5, 5, 2U, t39, 4, t29, 1);
    t40 = (t0 + 1448);
    xsi_vlogvar_assign_value(t40, t15, 0, 0, 5);
    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 17);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 17);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 31U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 31U);
    t6 = (t0 + 1608);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 5);
    goto LAB36;

LAB40:    t16 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB41;

LAB42:    xsi_set_current_line(34, ng0);

LAB45:    xsi_set_current_line(35, ng0);
    t30 = ((char*)((ng3)));
    t31 = (t0 + 1448);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 5);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 18);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 18);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 31U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 31U);
    t6 = (t0 + 1608);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 5);
    goto LAB44;

}


extern void work_m_00000000002399242145_3308070455_init()
{
	static char *pe[] = {(void *)Always_10_0};
	xsi_register_didat("work_m_00000000002399242145_3308070455", "isim/IEEE_to_binarytest_isim_beh.exe.sim/work/m_00000000002399242145_3308070455.didat");
	xsi_register_executes(pe);
}
