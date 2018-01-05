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
static const char *ng0 = "E:/Facultate/An3/Sem 1/AC/Tema3/tema/build/bin/calc_didactic/alu.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {4, 0};
static int ng5[] = {5, 0};
static int ng6[] = {6, 0};
static int ng7[] = {3, 0};
static int ng8[] = {7, 0};
static int ng9[] = {8, 0};
static int ng10[] = {9, 0};



static void Always_56_0(char *t0)
{
    char t10[8];
    char t12[8];
    char t26[8];
    char t40[8];
    char t54[8];
    char t65[8];
    char t74[8];
    char t90[8];
    char t98[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    char *t64;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    char *t129;
    int t130;

LAB0:    t1 = (t0 + 4400U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 5216);
    *((int *)t2) = 1;
    t3 = (t0 + 4432);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(56, ng0);

LAB5:    xsi_set_current_line(57, ng0);
    t4 = (t0 + 1480U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB25;

LAB26:
LAB28:
LAB27:    xsi_set_current_line(115, ng0);

LAB145:    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3480);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB29:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 2680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t10, 0, 8);
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t8);
    t22 = *((unsigned int *)t9);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB149;

LAB146:    if (t23 != 0)
        goto LAB148;

LAB147:    *((unsigned int *)t10) = 1;

LAB149:    t13 = (t0 + 3160);
    xsi_vlogvar_assign_value(t13, t10, 0, 0, 1);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 2680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t7 = (t10 + 4);
    t8 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 15);
    t16 = (t15 & 1);
    *((unsigned int *)t10) = t16;
    t17 = *((unsigned int *)t8);
    t18 = (t17 >> 15);
    t19 = (t18 & 1);
    *((unsigned int *)t7) = t19;
    t9 = (t0 + 3000);
    xsi_vlogvar_assign_value(t9, t10, 0, 0, 1);
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 2680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t7 = (t4 + 4);
    t14 = 1;
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t4);
    t16 = (t16 & 1);
    if (*((unsigned int *)t7) != 0)
        goto LAB150;

LAB151:    t17 = 0;

LAB153:    t18 = (t17 <= 15);
    if (t18 == 1)
        goto LAB154;

LAB155:    t20 = (!(t16));
    *((unsigned int *)t10) = t20;

LAB152:    t9 = (t0 + 2840);
    xsi_vlogvar_assign_value(t9, t10, 0, 0, 1);
    goto LAB2;

LAB7:    xsi_set_current_line(58, ng0);

LAB30:    xsi_set_current_line(59, ng0);
    t7 = (t0 + 1640U);
    t8 = *((char **)t7);
    t7 = (t0 + 1800U);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 17, t8, 16, t9, 16);
    t7 = (t0 + 1960U);
    t11 = *((char **)t7);
    memset(t12, 0, 8);
    xsi_vlog_unsigned_add(t12, 17, t10, 17, t11, 1);
    t7 = (t0 + 2680);
    xsi_vlogvar_assign_value(t7, t12, 0, 0, 16);
    t13 = (t0 + 3480);
    xsi_vlogvar_assign_value(t13, t12, 16, 0, 1);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1640U);
    t3 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t10 + 4);
    t4 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (t14 >> 15);
    t16 = (t15 & 1);
    *((unsigned int *)t10) = t16;
    t17 = *((unsigned int *)t4);
    t18 = (t17 >> 15);
    t19 = (t18 & 1);
    *((unsigned int *)t2) = t19;
    t7 = (t0 + 1800U);
    t8 = *((char **)t7);
    memset(t12, 0, 8);
    t7 = (t12 + 4);
    t9 = (t8 + 4);
    t20 = *((unsigned int *)t8);
    t21 = (t20 >> 15);
    t22 = (t21 & 1);
    *((unsigned int *)t12) = t22;
    t23 = *((unsigned int *)t9);
    t24 = (t23 >> 15);
    t25 = (t24 & 1);
    *((unsigned int *)t7) = t25;
    memset(t26, 0, 8);
    t11 = (t10 + 4);
    t13 = (t12 + 4);
    t27 = *((unsigned int *)t10);
    t28 = *((unsigned int *)t12);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t11);
    t31 = *((unsigned int *)t13);
    t32 = (t30 ^ t31);
    t33 = (t29 | t32);
    t34 = *((unsigned int *)t11);
    t35 = *((unsigned int *)t13);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB34;

LAB31:    if (t36 != 0)
        goto LAB33;

LAB32:    *((unsigned int *)t26) = 1;

LAB34:    memset(t40, 0, 8);
    t41 = (t26 + 4);
    t42 = *((unsigned int *)t41);
    t43 = (~(t42));
    t44 = *((unsigned int *)t26);
    t45 = (t44 & t43);
    t46 = (t45 & 1U);
    if (t46 != 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t41) != 0)
        goto LAB37;

LAB38:    t48 = (t40 + 4);
    t49 = *((unsigned int *)t40);
    t50 = *((unsigned int *)t48);
    t51 = (t49 || t50);
    if (t51 > 0)
        goto LAB39;

LAB40:    memcpy(t98, t40, 8);

LAB41:    t129 = (t0 + 3320);
    xsi_vlogvar_assign_value(t129, t98, 0, 0, 1);
    goto LAB29;

LAB9:    xsi_set_current_line(63, ng0);

LAB53:    xsi_set_current_line(64, ng0);
    t3 = (t0 + 1640U);
    t4 = *((char **)t3);
    t3 = (t0 + 1800U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 17, t4, 16, t7, 16);
    t3 = (t0 + 1960U);
    t8 = *((char **)t3);
    memset(t12, 0, 8);
    xsi_vlog_unsigned_minus(t12, 17, t10, 17, t8, 1);
    t3 = (t0 + 2680);
    xsi_vlogvar_assign_value(t3, t12, 0, 0, 16);
    t9 = (t0 + 3480);
    xsi_vlogvar_assign_value(t9, t12, 16, 0, 1);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1640U);
    t3 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t10 + 4);
    t4 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (t14 >> 15);
    t16 = (t15 & 1);
    *((unsigned int *)t10) = t16;
    t17 = *((unsigned int *)t4);
    t18 = (t17 >> 15);
    t19 = (t18 & 1);
    *((unsigned int *)t2) = t19;
    t7 = (t0 + 1800U);
    t8 = *((char **)t7);
    memset(t12, 0, 8);
    t7 = (t12 + 4);
    t9 = (t8 + 4);
    t20 = *((unsigned int *)t8);
    t21 = (t20 >> 15);
    t22 = (t21 & 1);
    *((unsigned int *)t12) = t22;
    t23 = *((unsigned int *)t9);
    t24 = (t23 >> 15);
    t25 = (t24 & 1);
    *((unsigned int *)t7) = t25;
    memset(t26, 0, 8);
    t11 = (t10 + 4);
    t13 = (t12 + 4);
    t27 = *((unsigned int *)t10);
    t28 = *((unsigned int *)t12);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t11);
    t31 = *((unsigned int *)t13);
    t32 = (t30 ^ t31);
    t33 = (t29 | t32);
    t34 = *((unsigned int *)t11);
    t35 = *((unsigned int *)t13);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB55;

LAB54:    if (t36 != 0)
        goto LAB56;

LAB57:    memset(t40, 0, 8);
    t41 = (t26 + 4);
    t42 = *((unsigned int *)t41);
    t43 = (~(t42));
    t44 = *((unsigned int *)t26);
    t45 = (t44 & t43);
    t46 = (t45 & 1U);
    if (t46 != 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t41) != 0)
        goto LAB60;

LAB61:    t48 = (t40 + 4);
    t49 = *((unsigned int *)t40);
    t50 = *((unsigned int *)t48);
    t51 = (t49 || t50);
    if (t51 > 0)
        goto LAB62;

LAB63:    memcpy(t98, t40, 8);

LAB64:    t129 = (t0 + 3320);
    xsi_vlogvar_assign_value(t129, t98, 0, 0, 1);
    goto LAB29;

LAB11:    xsi_set_current_line(68, ng0);

LAB76:    xsi_set_current_line(69, ng0);
    t3 = (t0 + 1800U);
    t4 = *((char **)t3);
    t3 = (t0 + 1640U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 17, t4, 16, t7, 16);
    t3 = (t0 + 1960U);
    t8 = *((char **)t3);
    memset(t12, 0, 8);
    xsi_vlog_unsigned_minus(t12, 17, t10, 17, t8, 1);
    t3 = (t0 + 2680);
    xsi_vlogvar_assign_value(t3, t12, 0, 0, 16);
    t9 = (t0 + 3480);
    xsi_vlogvar_assign_value(t9, t12, 16, 0, 1);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1800U);
    t3 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t10 + 4);
    t4 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (t14 >> 15);
    t16 = (t15 & 1);
    *((unsigned int *)t10) = t16;
    t17 = *((unsigned int *)t4);
    t18 = (t17 >> 15);
    t19 = (t18 & 1);
    *((unsigned int *)t2) = t19;
    t7 = (t0 + 1640U);
    t8 = *((char **)t7);
    memset(t12, 0, 8);
    t7 = (t12 + 4);
    t9 = (t8 + 4);
    t20 = *((unsigned int *)t8);
    t21 = (t20 >> 15);
    t22 = (t21 & 1);
    *((unsigned int *)t12) = t22;
    t23 = *((unsigned int *)t9);
    t24 = (t23 >> 15);
    t25 = (t24 & 1);
    *((unsigned int *)t7) = t25;
    memset(t26, 0, 8);
    t11 = (t10 + 4);
    t13 = (t12 + 4);
    t27 = *((unsigned int *)t10);
    t28 = *((unsigned int *)t12);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t11);
    t31 = *((unsigned int *)t13);
    t32 = (t30 ^ t31);
    t33 = (t29 | t32);
    t34 = *((unsigned int *)t11);
    t35 = *((unsigned int *)t13);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB78;

LAB77:    if (t36 != 0)
        goto LAB79;

LAB80:    memset(t40, 0, 8);
    t41 = (t26 + 4);
    t42 = *((unsigned int *)t41);
    t43 = (~(t42));
    t44 = *((unsigned int *)t26);
    t45 = (t44 & t43);
    t46 = (t45 & 1U);
    if (t46 != 0)
        goto LAB81;

LAB82:    if (*((unsigned int *)t41) != 0)
        goto LAB83;

LAB84:    t48 = (t40 + 4);
    t49 = *((unsigned int *)t40);
    t50 = *((unsigned int *)t48);
    t51 = (t49 || t50);
    if (t51 > 0)
        goto LAB85;

LAB86:    memcpy(t98, t40, 8);

LAB87:    t129 = (t0 + 3320);
    xsi_vlogvar_assign_value(t129, t98, 0, 0, 1);
    goto LAB29;

LAB13:    xsi_set_current_line(73, ng0);

LAB99:    xsi_set_current_line(74, ng0);
    t3 = (t0 + 1640U);
    t4 = *((char **)t3);
    t3 = (t0 + 1800U);
    t7 = *((char **)t3);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t7);
    t16 = (t14 & t15);
    *((unsigned int *)t10) = t16;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t17 = *((unsigned int *)t3);
    t18 = *((unsigned int *)t8);
    t19 = (t17 | t18);
    *((unsigned int *)t9) = t19;
    t20 = *((unsigned int *)t9);
    t21 = (t20 != 0);
    if (t21 == 1)
        goto LAB100;

LAB101:
LAB102:    t39 = (t0 + 2680);
    xsi_vlogvar_assign_value(t39, t10, 0, 0, 16);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3480);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB29;

LAB15:    xsi_set_current_line(79, ng0);

LAB103:    xsi_set_current_line(80, ng0);
    t3 = (t0 + 1640U);
    t4 = *((char **)t3);
    t3 = (t0 + 1800U);
    t7 = *((char **)t3);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t7);
    t16 = (t14 | t15);
    *((unsigned int *)t10) = t16;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t17 = *((unsigned int *)t3);
    t18 = *((unsigned int *)t8);
    t19 = (t17 | t18);
    *((unsigned int *)t9) = t19;
    t20 = *((unsigned int *)t9);
    t21 = (t20 != 0);
    if (t21 == 1)
        goto LAB104;

LAB105:
LAB106:    t39 = (t0 + 2680);
    xsi_vlogvar_assign_value(t39, t10, 0, 0, 16);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3480);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB29;

LAB17:    xsi_set_current_line(85, ng0);

LAB107:    xsi_set_current_line(86, ng0);
    t3 = (t0 + 1640U);
    t4 = *((char **)t3);
    t3 = (t0 + 1800U);
    t7 = *((char **)t3);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    *((unsigned int *)t10) = t16;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t17 = *((unsigned int *)t3);
    t18 = *((unsigned int *)t8);
    t19 = (t17 | t18);
    *((unsigned int *)t9) = t19;
    t20 = *((unsigned int *)t9);
    t21 = (t20 != 0);
    if (t21 == 1)
        goto LAB108;

LAB109:
LAB110:    t11 = (t0 + 2680);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 16);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3480);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB29;

LAB19:    xsi_set_current_line(91, ng0);

LAB111:    xsi_set_current_line(92, ng0);
    t3 = (t0 + 1640U);
    t4 = *((char **)t3);
    t3 = (t0 + 1800U);
    t7 = *((char **)t3);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t7);
    t16 = (t14 | t15);
    *((unsigned int *)t12) = t16;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t12 + 4);
    t17 = *((unsigned int *)t3);
    t18 = *((unsigned int *)t8);
    t19 = (t17 | t18);
    *((unsigned int *)t9) = t19;
    t20 = *((unsigned int *)t9);
    t21 = (t20 != 0);
    if (t21 == 1)
        goto LAB112;

LAB113:
LAB114:    memset(t10, 0, 8);
    t39 = (t10 + 4);
    t41 = (t12 + 4);
    t35 = *((unsigned int *)t12);
    t36 = (~(t35));
    *((unsigned int *)t10) = t36;
    *((unsigned int *)t39) = 0;
    if (*((unsigned int *)t41) != 0)
        goto LAB116;

LAB115:    t44 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t44 & 65535U);
    t45 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t45 & 65535U);
    t47 = (t0 + 2680);
    xsi_vlogvar_assign_value(t47, t10, 0, 0, 16);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3480);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB29;

LAB21:    xsi_set_current_line(97, ng0);

LAB117:    xsi_set_current_line(98, ng0);
    t3 = (t0 + 1640U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_lshift(t10, 16, t4, 16, t3, 32);
    t7 = (t0 + 1800U);
    t8 = *((char **)t7);
    t7 = ((char*)((ng2)));
    memset(t12, 0, 8);
    xsi_vlog_unsigned_lshift(t12, 16, t8, 16, t7, 32);
    t14 = *((unsigned int *)t10);
    t15 = *((unsigned int *)t12);
    t16 = (t14 | t15);
    *((unsigned int *)t26) = t16;
    t9 = (t10 + 4);
    t11 = (t12 + 4);
    t13 = (t26 + 4);
    t17 = *((unsigned int *)t9);
    t18 = *((unsigned int *)t11);
    t19 = (t17 | t18);
    *((unsigned int *)t13) = t19;
    t20 = *((unsigned int *)t13);
    t21 = (t20 != 0);
    if (t21 == 1)
        goto LAB118;

LAB119:
LAB120:    t47 = (t0 + 2680);
    xsi_vlogvar_assign_value(t47, t26, 0, 0, 16);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 1640U);
    t3 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t10 + 4);
    t4 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (t14 >> 15);
    t16 = (t15 & 1);
    *((unsigned int *)t10) = t16;
    t17 = *((unsigned int *)t4);
    t18 = (t17 >> 15);
    t19 = (t18 & 1);
    *((unsigned int *)t2) = t19;
    t7 = (t0 + 1800U);
    t8 = *((char **)t7);
    memset(t12, 0, 8);
    t7 = (t12 + 4);
    t9 = (t8 + 4);
    t20 = *((unsigned int *)t8);
    t21 = (t20 >> 15);
    t22 = (t21 & 1);
    *((unsigned int *)t12) = t22;
    t23 = *((unsigned int *)t9);
    t24 = (t23 >> 15);
    t25 = (t24 & 1);
    *((unsigned int *)t7) = t25;
    t27 = *((unsigned int *)t10);
    t28 = *((unsigned int *)t12);
    t29 = (t27 | t28);
    *((unsigned int *)t26) = t29;
    t11 = (t10 + 4);
    t13 = (t12 + 4);
    t39 = (t26 + 4);
    t30 = *((unsigned int *)t11);
    t31 = *((unsigned int *)t13);
    t32 = (t30 | t31);
    *((unsigned int *)t39) = t32;
    t33 = *((unsigned int *)t39);
    t34 = (t33 != 0);
    if (t34 == 1)
        goto LAB121;

LAB122:
LAB123:    t48 = (t0 + 3480);
    xsi_vlogvar_assign_value(t48, t26, 0, 0, 1);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 2680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t7 = (t10 + 4);
    t8 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 15);
    t16 = (t15 & 1);
    *((unsigned int *)t10) = t16;
    t17 = *((unsigned int *)t8);
    t18 = (t17 >> 15);
    t19 = (t18 & 1);
    *((unsigned int *)t7) = t19;
    t9 = (t0 + 3480);
    t11 = (t9 + 56U);
    t13 = *((char **)t11);
    memset(t12, 0, 8);
    t39 = (t10 + 4);
    t41 = (t13 + 4);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t13);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t39);
    t24 = *((unsigned int *)t41);
    t25 = (t23 ^ t24);
    t27 = (t22 | t25);
    t28 = *((unsigned int *)t39);
    t29 = *((unsigned int *)t41);
    t30 = (t28 | t29);
    t31 = (~(t30));
    t32 = (t27 & t31);
    if (t32 != 0)
        goto LAB125;

LAB124:    if (t30 != 0)
        goto LAB126;

LAB127:    t48 = (t0 + 3320);
    xsi_vlogvar_assign_value(t48, t12, 0, 0, 1);
    goto LAB29;

LAB23:    xsi_set_current_line(103, ng0);

LAB128:    xsi_set_current_line(104, ng0);
    t3 = (t0 + 1640U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_rshift(t10, 16, t4, 16, t3, 32);
    t7 = (t0 + 1800U);
    t8 = *((char **)t7);
    t7 = ((char*)((ng2)));
    memset(t12, 0, 8);
    xsi_vlog_unsigned_rshift(t12, 16, t8, 16, t7, 32);
    t14 = *((unsigned int *)t10);
    t15 = *((unsigned int *)t12);
    t16 = (t14 | t15);
    *((unsigned int *)t26) = t16;
    t9 = (t10 + 4);
    t11 = (t12 + 4);
    t13 = (t26 + 4);
    t17 = *((unsigned int *)t9);
    t18 = *((unsigned int *)t11);
    t19 = (t17 | t18);
    *((unsigned int *)t13) = t19;
    t20 = *((unsigned int *)t13);
    t21 = (t20 != 0);
    if (t21 == 1)
        goto LAB129;

LAB130:
LAB131:    t47 = (t0 + 2680);
    xsi_vlogvar_assign_value(t47, t26, 0, 0, 16);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 1640U);
    t3 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t10 + 4);
    t4 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (t14 >> 0);
    t16 = (t15 & 1);
    *((unsigned int *)t10) = t16;
    t17 = *((unsigned int *)t4);
    t18 = (t17 >> 0);
    t19 = (t18 & 1);
    *((unsigned int *)t2) = t19;
    t7 = (t0 + 1800U);
    t8 = *((char **)t7);
    memset(t12, 0, 8);
    t7 = (t12 + 4);
    t9 = (t8 + 4);
    t20 = *((unsigned int *)t8);
    t21 = (t20 >> 0);
    t22 = (t21 & 1);
    *((unsigned int *)t12) = t22;
    t23 = *((unsigned int *)t9);
    t24 = (t23 >> 0);
    t25 = (t24 & 1);
    *((unsigned int *)t7) = t25;
    t27 = *((unsigned int *)t10);
    t28 = *((unsigned int *)t12);
    t29 = (t27 | t28);
    *((unsigned int *)t26) = t29;
    t11 = (t10 + 4);
    t13 = (t12 + 4);
    t39 = (t26 + 4);
    t30 = *((unsigned int *)t11);
    t31 = *((unsigned int *)t13);
    t32 = (t30 | t31);
    *((unsigned int *)t39) = t32;
    t33 = *((unsigned int *)t39);
    t34 = (t33 != 0);
    if (t34 == 1)
        goto LAB132;

LAB133:
LAB134:    t48 = (t0 + 3480);
    xsi_vlogvar_assign_value(t48, t26, 0, 0, 1);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 1640U);
    t3 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t10 + 4);
    t4 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (t14 >> 15);
    t16 = (t15 & 1);
    *((unsigned int *)t10) = t16;
    t17 = *((unsigned int *)t4);
    t18 = (t17 >> 15);
    t19 = (t18 & 1);
    *((unsigned int *)t2) = t19;
    t7 = (t0 + 1800U);
    t8 = *((char **)t7);
    memset(t12, 0, 8);
    t7 = (t12 + 4);
    t9 = (t8 + 4);
    t20 = *((unsigned int *)t8);
    t21 = (t20 >> 15);
    t22 = (t21 & 1);
    *((unsigned int *)t12) = t22;
    t23 = *((unsigned int *)t9);
    t24 = (t23 >> 15);
    t25 = (t24 & 1);
    *((unsigned int *)t7) = t25;
    t27 = *((unsigned int *)t10);
    t28 = *((unsigned int *)t12);
    t29 = (t27 | t28);
    *((unsigned int *)t26) = t29;
    t11 = (t10 + 4);
    t13 = (t12 + 4);
    t39 = (t26 + 4);
    t30 = *((unsigned int *)t11);
    t31 = *((unsigned int *)t13);
    t32 = (t30 | t31);
    *((unsigned int *)t39) = t32;
    t33 = *((unsigned int *)t39);
    t34 = (t33 != 0);
    if (t34 == 1)
        goto LAB135;

LAB136:
LAB137:    t48 = (t0 + 3320);
    xsi_vlogvar_assign_value(t48, t26, 0, 0, 1);
    goto LAB29;

LAB25:    xsi_set_current_line(109, ng0);

LAB138:    xsi_set_current_line(110, ng0);
    t3 = (t0 + 1640U);
    t4 = *((char **)t3);
    memset(t12, 0, 8);
    t3 = (t12 + 4);
    t7 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 1);
    *((unsigned int *)t12) = t15;
    t16 = *((unsigned int *)t7);
    t17 = (t16 >> 1);
    *((unsigned int *)t3) = t17;
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t18 & 32767U);
    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 32767U);
    t8 = (t0 + 1640U);
    t9 = *((char **)t8);
    memset(t26, 0, 8);
    t8 = (t26 + 4);
    t11 = (t9 + 4);
    t20 = *((unsigned int *)t9);
    t21 = (t20 >> 15);
    t22 = (t21 & 1);
    *((unsigned int *)t26) = t22;
    t23 = *((unsigned int *)t11);
    t24 = (t23 >> 15);
    t25 = (t24 & 1);
    *((unsigned int *)t8) = t25;
    xsi_vlogtype_concat(t10, 16, 16, 2U, t26, 1, t12, 15);
    t13 = (t0 + 1800U);
    t39 = *((char **)t13);
    memset(t54, 0, 8);
    t13 = (t54 + 4);
    t41 = (t39 + 4);
    t27 = *((unsigned int *)t39);
    t28 = (t27 >> 1);
    *((unsigned int *)t54) = t28;
    t29 = *((unsigned int *)t41);
    t30 = (t29 >> 1);
    *((unsigned int *)t13) = t30;
    t31 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t31 & 32767U);
    t32 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t32 & 32767U);
    t47 = (t0 + 1800U);
    t48 = *((char **)t47);
    memset(t65, 0, 8);
    t47 = (t65 + 4);
    t52 = (t48 + 4);
    t33 = *((unsigned int *)t48);
    t34 = (t33 >> 15);
    t35 = (t34 & 1);
    *((unsigned int *)t65) = t35;
    t36 = *((unsigned int *)t52);
    t37 = (t36 >> 15);
    t38 = (t37 & 1);
    *((unsigned int *)t47) = t38;
    xsi_vlogtype_concat(t40, 16, 16, 2U, t65, 1, t54, 15);
    t42 = *((unsigned int *)t10);
    t43 = *((unsigned int *)t40);
    t44 = (t42 | t43);
    *((unsigned int *)t74) = t44;
    t53 = (t10 + 4);
    t55 = (t40 + 4);
    t62 = (t74 + 4);
    t45 = *((unsigned int *)t53);
    t46 = *((unsigned int *)t55);
    t49 = (t45 | t46);
    *((unsigned int *)t62) = t49;
    t50 = *((unsigned int *)t62);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB139;

LAB140:
LAB141:    t66 = (t0 + 2680);
    xsi_vlogvar_assign_value(t66, t74, 0, 0, 16);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 1640U);
    t3 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t10 + 4);
    t4 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (t14 >> 0);
    t16 = (t15 & 1);
    *((unsigned int *)t10) = t16;
    t17 = *((unsigned int *)t4);
    t18 = (t17 >> 0);
    t19 = (t18 & 1);
    *((unsigned int *)t2) = t19;
    t7 = (t0 + 1800U);
    t8 = *((char **)t7);
    memset(t12, 0, 8);
    t7 = (t12 + 4);
    t9 = (t8 + 4);
    t20 = *((unsigned int *)t8);
    t21 = (t20 >> 0);
    t22 = (t21 & 1);
    *((unsigned int *)t12) = t22;
    t23 = *((unsigned int *)t9);
    t24 = (t23 >> 0);
    t25 = (t24 & 1);
    *((unsigned int *)t7) = t25;
    t27 = *((unsigned int *)t10);
    t28 = *((unsigned int *)t12);
    t29 = (t27 | t28);
    *((unsigned int *)t26) = t29;
    t11 = (t10 + 4);
    t13 = (t12 + 4);
    t39 = (t26 + 4);
    t30 = *((unsigned int *)t11);
    t31 = *((unsigned int *)t13);
    t32 = (t30 | t31);
    *((unsigned int *)t39) = t32;
    t33 = *((unsigned int *)t39);
    t34 = (t33 != 0);
    if (t34 == 1)
        goto LAB142;

LAB143:
LAB144:    t48 = (t0 + 3480);
    xsi_vlogvar_assign_value(t48, t26, 0, 0, 1);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB29;

LAB33:    t39 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB34;

LAB35:    *((unsigned int *)t40) = 1;
    goto LAB38;

LAB37:    t47 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB38;

LAB39:    t52 = (t0 + 1640U);
    t53 = *((char **)t52);
    memset(t54, 0, 8);
    t52 = (t54 + 4);
    t55 = (t53 + 4);
    t56 = *((unsigned int *)t53);
    t57 = (t56 >> 15);
    t58 = (t57 & 1);
    *((unsigned int *)t54) = t58;
    t59 = *((unsigned int *)t55);
    t60 = (t59 >> 15);
    t61 = (t60 & 1);
    *((unsigned int *)t52) = t61;
    t62 = (t0 + 2680);
    t63 = (t62 + 56U);
    t64 = *((char **)t63);
    memset(t65, 0, 8);
    t66 = (t65 + 4);
    t67 = (t64 + 4);
    t68 = *((unsigned int *)t64);
    t69 = (t68 >> 15);
    t70 = (t69 & 1);
    *((unsigned int *)t65) = t70;
    t71 = *((unsigned int *)t67);
    t72 = (t71 >> 15);
    t73 = (t72 & 1);
    *((unsigned int *)t66) = t73;
    memset(t74, 0, 8);
    t75 = (t54 + 4);
    t76 = (t65 + 4);
    t77 = *((unsigned int *)t54);
    t78 = *((unsigned int *)t65);
    t79 = (t77 ^ t78);
    t80 = *((unsigned int *)t75);
    t81 = *((unsigned int *)t76);
    t82 = (t80 ^ t81);
    t83 = (t79 | t82);
    t84 = *((unsigned int *)t75);
    t85 = *((unsigned int *)t76);
    t86 = (t84 | t85);
    t87 = (~(t86));
    t88 = (t83 & t87);
    if (t88 != 0)
        goto LAB43;

LAB42:    if (t86 != 0)
        goto LAB44;

LAB45:    memset(t90, 0, 8);
    t91 = (t74 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (~(t92));
    t94 = *((unsigned int *)t74);
    t95 = (t94 & t93);
    t96 = (t95 & 1U);
    if (t96 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t91) != 0)
        goto LAB48;

LAB49:    t99 = *((unsigned int *)t40);
    t100 = *((unsigned int *)t90);
    t101 = (t99 & t100);
    *((unsigned int *)t98) = t101;
    t102 = (t40 + 4);
    t103 = (t90 + 4);
    t104 = (t98 + 4);
    t105 = *((unsigned int *)t102);
    t106 = *((unsigned int *)t103);
    t107 = (t105 | t106);
    *((unsigned int *)t104) = t107;
    t108 = *((unsigned int *)t104);
    t109 = (t108 != 0);
    if (t109 == 1)
        goto LAB50;

LAB51:
LAB52:    goto LAB41;

LAB43:    *((unsigned int *)t74) = 1;
    goto LAB45;

LAB44:    t89 = (t74 + 4);
    *((unsigned int *)t74) = 1;
    *((unsigned int *)t89) = 1;
    goto LAB45;

LAB46:    *((unsigned int *)t90) = 1;
    goto LAB49;

LAB48:    t97 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB49;

LAB50:    t110 = *((unsigned int *)t98);
    t111 = *((unsigned int *)t104);
    *((unsigned int *)t98) = (t110 | t111);
    t112 = (t40 + 4);
    t113 = (t90 + 4);
    t114 = *((unsigned int *)t40);
    t115 = (~(t114));
    t116 = *((unsigned int *)t112);
    t117 = (~(t116));
    t118 = *((unsigned int *)t90);
    t119 = (~(t118));
    t120 = *((unsigned int *)t113);
    t121 = (~(t120));
    t6 = (t115 & t117);
    t122 = (t119 & t121);
    t123 = (~(t6));
    t124 = (~(t122));
    t125 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t125 & t123);
    t126 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t126 & t124);
    t127 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t127 & t123);
    t128 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t128 & t124);
    goto LAB52;

LAB55:    *((unsigned int *)t26) = 1;
    goto LAB57;

LAB56:    t39 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB57;

LAB58:    *((unsigned int *)t40) = 1;
    goto LAB61;

LAB60:    t47 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB61;

LAB62:    t52 = (t0 + 1640U);
    t53 = *((char **)t52);
    memset(t54, 0, 8);
    t52 = (t54 + 4);
    t55 = (t53 + 4);
    t56 = *((unsigned int *)t53);
    t57 = (t56 >> 15);
    t58 = (t57 & 1);
    *((unsigned int *)t54) = t58;
    t59 = *((unsigned int *)t55);
    t60 = (t59 >> 15);
    t61 = (t60 & 1);
    *((unsigned int *)t52) = t61;
    t62 = (t0 + 2680);
    t63 = (t62 + 56U);
    t64 = *((char **)t63);
    memset(t65, 0, 8);
    t66 = (t65 + 4);
    t67 = (t64 + 4);
    t68 = *((unsigned int *)t64);
    t69 = (t68 >> 15);
    t70 = (t69 & 1);
    *((unsigned int *)t65) = t70;
    t71 = *((unsigned int *)t67);
    t72 = (t71 >> 15);
    t73 = (t72 & 1);
    *((unsigned int *)t66) = t73;
    memset(t74, 0, 8);
    t75 = (t54 + 4);
    t76 = (t65 + 4);
    t77 = *((unsigned int *)t54);
    t78 = *((unsigned int *)t65);
    t79 = (t77 ^ t78);
    t80 = *((unsigned int *)t75);
    t81 = *((unsigned int *)t76);
    t82 = (t80 ^ t81);
    t83 = (t79 | t82);
    t84 = *((unsigned int *)t75);
    t85 = *((unsigned int *)t76);
    t86 = (t84 | t85);
    t87 = (~(t86));
    t88 = (t83 & t87);
    if (t88 != 0)
        goto LAB66;

LAB65:    if (t86 != 0)
        goto LAB67;

LAB68:    memset(t90, 0, 8);
    t91 = (t74 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (~(t92));
    t94 = *((unsigned int *)t74);
    t95 = (t94 & t93);
    t96 = (t95 & 1U);
    if (t96 != 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t91) != 0)
        goto LAB71;

LAB72:    t99 = *((unsigned int *)t40);
    t100 = *((unsigned int *)t90);
    t101 = (t99 & t100);
    *((unsigned int *)t98) = t101;
    t102 = (t40 + 4);
    t103 = (t90 + 4);
    t104 = (t98 + 4);
    t105 = *((unsigned int *)t102);
    t106 = *((unsigned int *)t103);
    t107 = (t105 | t106);
    *((unsigned int *)t104) = t107;
    t108 = *((unsigned int *)t104);
    t109 = (t108 != 0);
    if (t109 == 1)
        goto LAB73;

LAB74:
LAB75:    goto LAB64;

LAB66:    *((unsigned int *)t74) = 1;
    goto LAB68;

LAB67:    t89 = (t74 + 4);
    *((unsigned int *)t74) = 1;
    *((unsigned int *)t89) = 1;
    goto LAB68;

LAB69:    *((unsigned int *)t90) = 1;
    goto LAB72;

LAB71:    t97 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB72;

LAB73:    t110 = *((unsigned int *)t98);
    t111 = *((unsigned int *)t104);
    *((unsigned int *)t98) = (t110 | t111);
    t112 = (t40 + 4);
    t113 = (t90 + 4);
    t114 = *((unsigned int *)t40);
    t115 = (~(t114));
    t116 = *((unsigned int *)t112);
    t117 = (~(t116));
    t118 = *((unsigned int *)t90);
    t119 = (~(t118));
    t120 = *((unsigned int *)t113);
    t121 = (~(t120));
    t6 = (t115 & t117);
    t122 = (t119 & t121);
    t123 = (~(t6));
    t124 = (~(t122));
    t125 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t125 & t123);
    t126 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t126 & t124);
    t127 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t127 & t123);
    t128 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t128 & t124);
    goto LAB75;

LAB78:    *((unsigned int *)t26) = 1;
    goto LAB80;

LAB79:    t39 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB80;

LAB81:    *((unsigned int *)t40) = 1;
    goto LAB84;

LAB83:    t47 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB84;

LAB85:    t52 = (t0 + 1800U);
    t53 = *((char **)t52);
    memset(t54, 0, 8);
    t52 = (t54 + 4);
    t55 = (t53 + 4);
    t56 = *((unsigned int *)t53);
    t57 = (t56 >> 15);
    t58 = (t57 & 1);
    *((unsigned int *)t54) = t58;
    t59 = *((unsigned int *)t55);
    t60 = (t59 >> 15);
    t61 = (t60 & 1);
    *((unsigned int *)t52) = t61;
    t62 = (t0 + 2680);
    t63 = (t62 + 56U);
    t64 = *((char **)t63);
    memset(t65, 0, 8);
    t66 = (t65 + 4);
    t67 = (t64 + 4);
    t68 = *((unsigned int *)t64);
    t69 = (t68 >> 15);
    t70 = (t69 & 1);
    *((unsigned int *)t65) = t70;
    t71 = *((unsigned int *)t67);
    t72 = (t71 >> 15);
    t73 = (t72 & 1);
    *((unsigned int *)t66) = t73;
    memset(t74, 0, 8);
    t75 = (t54 + 4);
    t76 = (t65 + 4);
    t77 = *((unsigned int *)t54);
    t78 = *((unsigned int *)t65);
    t79 = (t77 ^ t78);
    t80 = *((unsigned int *)t75);
    t81 = *((unsigned int *)t76);
    t82 = (t80 ^ t81);
    t83 = (t79 | t82);
    t84 = *((unsigned int *)t75);
    t85 = *((unsigned int *)t76);
    t86 = (t84 | t85);
    t87 = (~(t86));
    t88 = (t83 & t87);
    if (t88 != 0)
        goto LAB89;

LAB88:    if (t86 != 0)
        goto LAB90;

LAB91:    memset(t90, 0, 8);
    t91 = (t74 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (~(t92));
    t94 = *((unsigned int *)t74);
    t95 = (t94 & t93);
    t96 = (t95 & 1U);
    if (t96 != 0)
        goto LAB92;

LAB93:    if (*((unsigned int *)t91) != 0)
        goto LAB94;

LAB95:    t99 = *((unsigned int *)t40);
    t100 = *((unsigned int *)t90);
    t101 = (t99 & t100);
    *((unsigned int *)t98) = t101;
    t102 = (t40 + 4);
    t103 = (t90 + 4);
    t104 = (t98 + 4);
    t105 = *((unsigned int *)t102);
    t106 = *((unsigned int *)t103);
    t107 = (t105 | t106);
    *((unsigned int *)t104) = t107;
    t108 = *((unsigned int *)t104);
    t109 = (t108 != 0);
    if (t109 == 1)
        goto LAB96;

LAB97:
LAB98:    goto LAB87;

LAB89:    *((unsigned int *)t74) = 1;
    goto LAB91;

LAB90:    t89 = (t74 + 4);
    *((unsigned int *)t74) = 1;
    *((unsigned int *)t89) = 1;
    goto LAB91;

LAB92:    *((unsigned int *)t90) = 1;
    goto LAB95;

LAB94:    t97 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB95;

LAB96:    t110 = *((unsigned int *)t98);
    t111 = *((unsigned int *)t104);
    *((unsigned int *)t98) = (t110 | t111);
    t112 = (t40 + 4);
    t113 = (t90 + 4);
    t114 = *((unsigned int *)t40);
    t115 = (~(t114));
    t116 = *((unsigned int *)t112);
    t117 = (~(t116));
    t118 = *((unsigned int *)t90);
    t119 = (~(t118));
    t120 = *((unsigned int *)t113);
    t121 = (~(t120));
    t6 = (t115 & t117);
    t122 = (t119 & t121);
    t123 = (~(t6));
    t124 = (~(t122));
    t125 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t125 & t123);
    t126 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t126 & t124);
    t127 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t127 & t123);
    t128 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t128 & t124);
    goto LAB98;

LAB100:    t22 = *((unsigned int *)t10);
    t23 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t22 | t23);
    t11 = (t4 + 4);
    t13 = (t7 + 4);
    t24 = *((unsigned int *)t4);
    t25 = (~(t24));
    t27 = *((unsigned int *)t11);
    t28 = (~(t27));
    t29 = *((unsigned int *)t7);
    t30 = (~(t29));
    t31 = *((unsigned int *)t13);
    t32 = (~(t31));
    t122 = (t25 & t28);
    t130 = (t30 & t32);
    t33 = (~(t122));
    t34 = (~(t130));
    t35 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t35 & t33);
    t36 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t36 & t34);
    t37 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t37 & t33);
    t38 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t38 & t34);
    goto LAB102;

LAB104:    t22 = *((unsigned int *)t10);
    t23 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t22 | t23);
    t11 = (t4 + 4);
    t13 = (t7 + 4);
    t24 = *((unsigned int *)t11);
    t25 = (~(t24));
    t27 = *((unsigned int *)t4);
    t122 = (t27 & t25);
    t28 = *((unsigned int *)t13);
    t29 = (~(t28));
    t30 = *((unsigned int *)t7);
    t130 = (t30 & t29);
    t31 = (~(t122));
    t32 = (~(t130));
    t33 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t33 & t31);
    t34 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t34 & t32);
    goto LAB106;

LAB108:    t22 = *((unsigned int *)t10);
    t23 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t22 | t23);
    goto LAB110;

LAB112:    t22 = *((unsigned int *)t12);
    t23 = *((unsigned int *)t9);
    *((unsigned int *)t12) = (t22 | t23);
    t11 = (t4 + 4);
    t13 = (t7 + 4);
    t24 = *((unsigned int *)t11);
    t25 = (~(t24));
    t27 = *((unsigned int *)t4);
    t122 = (t27 & t25);
    t28 = *((unsigned int *)t13);
    t29 = (~(t28));
    t30 = *((unsigned int *)t7);
    t130 = (t30 & t29);
    t31 = (~(t122));
    t32 = (~(t130));
    t33 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t33 & t31);
    t34 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t34 & t32);
    goto LAB114;

LAB116:    t37 = *((unsigned int *)t10);
    t38 = *((unsigned int *)t41);
    *((unsigned int *)t10) = (t37 | t38);
    t42 = *((unsigned int *)t39);
    t43 = *((unsigned int *)t41);
    *((unsigned int *)t39) = (t42 | t43);
    goto LAB115;

LAB118:    t22 = *((unsigned int *)t26);
    t23 = *((unsigned int *)t13);
    *((unsigned int *)t26) = (t22 | t23);
    t39 = (t10 + 4);
    t41 = (t12 + 4);
    t24 = *((unsigned int *)t39);
    t25 = (~(t24));
    t27 = *((unsigned int *)t10);
    t122 = (t27 & t25);
    t28 = *((unsigned int *)t41);
    t29 = (~(t28));
    t30 = *((unsigned int *)t12);
    t130 = (t30 & t29);
    t31 = (~(t122));
    t32 = (~(t130));
    t33 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t33 & t31);
    t34 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t34 & t32);
    goto LAB120;

LAB121:    t35 = *((unsigned int *)t26);
    t36 = *((unsigned int *)t39);
    *((unsigned int *)t26) = (t35 | t36);
    t41 = (t10 + 4);
    t47 = (t12 + 4);
    t37 = *((unsigned int *)t41);
    t38 = (~(t37));
    t42 = *((unsigned int *)t10);
    t6 = (t42 & t38);
    t43 = *((unsigned int *)t47);
    t44 = (~(t43));
    t45 = *((unsigned int *)t12);
    t122 = (t45 & t44);
    t46 = (~(t6));
    t49 = (~(t122));
    t50 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t50 & t46);
    t51 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t51 & t49);
    goto LAB123;

LAB125:    *((unsigned int *)t12) = 1;
    goto LAB127;

LAB126:    t47 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB127;

LAB129:    t22 = *((unsigned int *)t26);
    t23 = *((unsigned int *)t13);
    *((unsigned int *)t26) = (t22 | t23);
    t39 = (t10 + 4);
    t41 = (t12 + 4);
    t24 = *((unsigned int *)t39);
    t25 = (~(t24));
    t27 = *((unsigned int *)t10);
    t122 = (t27 & t25);
    t28 = *((unsigned int *)t41);
    t29 = (~(t28));
    t30 = *((unsigned int *)t12);
    t130 = (t30 & t29);
    t31 = (~(t122));
    t32 = (~(t130));
    t33 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t33 & t31);
    t34 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t34 & t32);
    goto LAB131;

LAB132:    t35 = *((unsigned int *)t26);
    t36 = *((unsigned int *)t39);
    *((unsigned int *)t26) = (t35 | t36);
    t41 = (t10 + 4);
    t47 = (t12 + 4);
    t37 = *((unsigned int *)t41);
    t38 = (~(t37));
    t42 = *((unsigned int *)t10);
    t6 = (t42 & t38);
    t43 = *((unsigned int *)t47);
    t44 = (~(t43));
    t45 = *((unsigned int *)t12);
    t122 = (t45 & t44);
    t46 = (~(t6));
    t49 = (~(t122));
    t50 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t50 & t46);
    t51 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t51 & t49);
    goto LAB134;

LAB135:    t35 = *((unsigned int *)t26);
    t36 = *((unsigned int *)t39);
    *((unsigned int *)t26) = (t35 | t36);
    t41 = (t10 + 4);
    t47 = (t12 + 4);
    t37 = *((unsigned int *)t41);
    t38 = (~(t37));
    t42 = *((unsigned int *)t10);
    t6 = (t42 & t38);
    t43 = *((unsigned int *)t47);
    t44 = (~(t43));
    t45 = *((unsigned int *)t12);
    t122 = (t45 & t44);
    t46 = (~(t6));
    t49 = (~(t122));
    t50 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t50 & t46);
    t51 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t51 & t49);
    goto LAB137;

LAB139:    t56 = *((unsigned int *)t74);
    t57 = *((unsigned int *)t62);
    *((unsigned int *)t74) = (t56 | t57);
    t63 = (t10 + 4);
    t64 = (t40 + 4);
    t58 = *((unsigned int *)t63);
    t59 = (~(t58));
    t60 = *((unsigned int *)t10);
    t122 = (t60 & t59);
    t61 = *((unsigned int *)t64);
    t68 = (~(t61));
    t69 = *((unsigned int *)t40);
    t130 = (t69 & t68);
    t70 = (~(t122));
    t71 = (~(t130));
    t72 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t72 & t70);
    t73 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t73 & t71);
    goto LAB141;

LAB142:    t35 = *((unsigned int *)t26);
    t36 = *((unsigned int *)t39);
    *((unsigned int *)t26) = (t35 | t36);
    t41 = (t10 + 4);
    t47 = (t12 + 4);
    t37 = *((unsigned int *)t41);
    t38 = (~(t37));
    t42 = *((unsigned int *)t10);
    t6 = (t42 & t38);
    t43 = *((unsigned int *)t47);
    t44 = (~(t43));
    t45 = *((unsigned int *)t12);
    t122 = (t45 & t44);
    t46 = (~(t6));
    t49 = (~(t122));
    t50 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t50 & t46);
    t51 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t51 & t49);
    goto LAB144;

LAB148:    t11 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB149;

LAB150:    t8 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB152;

LAB154:    if (t14 == 1)
        goto LAB157;

LAB158:    t19 = (t15 & 1);
    t16 = (t16 ^ t19);

LAB159:    t15 = (t15 >> 1);

LAB156:    t17 = (t17 + 1);
    goto LAB153;

LAB157:    t14 = 0;
    goto LAB159;

}

static void Cont_127_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t19[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;

LAB0:    t1 = (t0 + 4648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 1320U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t20 = *((unsigned int *)t4);
    t21 = (~(t20));
    t22 = *((unsigned int *)t12);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t24, 8);

LAB16:    t25 = (t0 + 5328);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memset(t29, 0, 8);
    t30 = 65535U;
    t31 = t30;
    t32 = (t3 + 4);
    t33 = *((unsigned int *)t3);
    t30 = (t30 & t33);
    t34 = *((unsigned int *)t32);
    t31 = (t31 & t34);
    t35 = (t29 + 4);
    t36 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t36 | t30);
    t37 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t37 | t31);
    xsi_driver_vfirst_trans(t25, 0, 15);
    t38 = (t0 + 5232);
    *((int *)t38) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 2680);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t19, t18, 8);
    goto LAB9;

LAB10:    t24 = ((char*)((ng1)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t19, 32, t24, 32);
    goto LAB16;

LAB14:    memcpy(t3, t19, 8);
    goto LAB16;

}

static void Cont_128_2(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;

LAB0:    t1 = (t0 + 4896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 3480);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 3320);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 3160);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 3000);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t0 + 2840);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    xsi_vlogtype_concat(t3, 5, 5, 5U, t17, 1, t14, 1, t11, 1, t8, 1, t5, 1);
    t18 = (t0 + 5392);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memset(t22, 0, 8);
    t23 = 31U;
    t24 = t23;
    t25 = (t3 + 4);
    t26 = *((unsigned int *)t3);
    t23 = (t23 & t26);
    t27 = *((unsigned int *)t25);
    t24 = (t24 & t27);
    t28 = (t22 + 4);
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t29 | t23);
    t30 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t30 | t24);
    xsi_driver_vfirst_trans(t18, 0, 4);
    t31 = (t0 + 5248);
    *((int *)t31) = 1;

LAB1:    return;
}


extern void uut_m_00000000001117543562_2613466970_init()
{
	static char *pe[] = {(void *)Always_56_0,(void *)Cont_127_1,(void *)Cont_128_2};
	xsi_register_didat("uut_m_00000000001117543562_2613466970", "isim/tester.exe.sim/uut/m_00000000001117543562_2613466970.didat");
	xsi_register_executes(pe);
}
