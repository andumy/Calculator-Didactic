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
static const char *ng0 = "E:/Facultate/An3/Sem 1/AC/Tema3/tema/build/bin/tester/tester.v";
static const char *ng1 = "test.config";
static const char *ng2 = "r";
static const char *ng3 = "error opening config file\n";
static const char *ng4 = "name=%16s\n";
static int ng5[] = {1, 0};
static const char *ng6 = "error reading test name\n";
static const char *ng7 = "value=%f\n";
static const char *ng8 = "error reading test value\n";
static const char *ng9 = "penalty=%f\n";
static const char *ng10 = "error reading test penalty\n";
static const char *ng11 = "first_instr=%d\n";
static const char *ng12 = "error reading first instruction counted for grading\n";
static const char *ng13 = "max_instr_count=%d\n";
static const char *ng14 = "error reading number of instructions to execute\n";
static const char *ng15 = "max_instr_cycles=%d\n";
static const char *ng16 = "error reading number of cycles to allow for a instruction\n";
static const char *ng17 = "ignore_ind=%d\n";
static const char *ng18 = "error reading flag for ignoring IND mismatches\n";
static int ng19[] = {0, 0};
static const char *ng20 = " done in %0d cycles\n";
static const char *ng21 = "--------------------------------------------------------------------------------\n";
static const char *ng22 = "\tCPs diverged: found %x, expected %x\n";
static const char *ng23 = "\t\tat instr count: %0d, instr addr: %x, instr: %x\n";
static int ng24[] = {4, 0};
static const char *ng25 = "\tINDs differ: found (";
static const char *ng26 = "P";
static const char *ng27 = "S";
static const char *ng28 = "Z";
static const char *ng29 = "O";
static const char *ng30 = "C";
static const char *ng31 = "), expected (";
static const char *ng32 = ")\n";
static const char *ng33 = "\n";
static const char *ng34 = "\ttimeout after %0d cycles\n";
static int ng35[] = {8, 0};
static int ng36[] = {7, 0};
static int ng37[] = {2, 0};
static const char *ng38 = "\treg %0d differs, found: %x, expected: %x\n";
static int ng39[] = {1024, 0};
static int ng40[] = {3, 0};
static const char *ng41 = "\tram addr %x differs, found: %x, expected: %x\n";
static const char *ng42 = "test ok\n";
static const char *ng43 = "instr count: %0d, instr addr: %x, instr: %x";
static const char *ng44 = "result.tester";
static const char *ng45 = "%5.2f: %d out of %d instructions (%6.2f%% completed) test %0s\n";



static void Initial_30_0(char *t0)
{
    char t1[8];
    char t18[32];
    char t22[8];
    char t25[8];
    char *t2;
    char *t3;
    char *t4;
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
    unsigned int t16;
    unsigned int t17;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    double t24;
    char *t26;

LAB0:    xsi_set_current_line(30, ng0);

LAB2:    xsi_set_current_line(31, ng0);
    *((int *)t1) = xsi_vlogfile_file_open_of_cname_ctype(ng1, ng2);
    t2 = (t1 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 7960);
    xsi_vlogvar_assign_value(t3, t1, 0, 0, 32);
    xsi_set_current_line(32, ng0);
    t2 = (t0 + 7960);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t1, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 4294967295U);
    if (t10 != 0)
        goto LAB6;

LAB4:    if (*((unsigned int *)t5) == 0)
        goto LAB3;

LAB5:    t11 = (t1 + 4);
    *((unsigned int *)t1) = 1;
    *((unsigned int *)t11) = 1;

LAB6:    t12 = (t1 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t1);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB7;

LAB8:
LAB9:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 7960);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6840);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_bit_copy(t18, 0, t12, 0, 128);
    *((int *)t1) = xsi_vlogfile_fscanf(*((unsigned int *)t4), ng4, 2, t0, (char)118, t18, 128);
    t19 = (t1 + 4);
    *((int *)t19) = 0;
    t20 = (t0 + 6840);
    xsi_vlogvar_assign_value(t20, t18, 0, 0, 128);
    t21 = ((char*)((ng5)));
    memset(t22, 0, 8);
    xsi_vlog_signed_not_equal(t22, 32, t1, 32, t21, 32);
    t23 = (t22 + 4);
    t6 = *((unsigned int *)t23);
    t7 = (~(t6));
    t8 = *((unsigned int *)t22);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:
LAB13:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 7960);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7000);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t24 = *((double *)t12);
    t19 = xsi_vlog_convert_real_to_bits(t24, t1, 64);
    *((int *)t22) = xsi_vlogfile_fscanf(*((unsigned int *)t4), ng7, 2, t0, (char)101, t1, 64);
    t20 = (t22 + 4);
    *((int *)t20) = 0;
    t21 = (t0 + 7000);
    xsi_vlogvar_assign_value_double(t21, *((double *)t1), 0);
    t23 = ((char*)((ng5)));
    memset(t25, 0, 8);
    xsi_vlog_signed_not_equal(t25, 32, t22, 32, t23, 32);
    t26 = (t25 + 4);
    t6 = *((unsigned int *)t26);
    t7 = (~(t6));
    t8 = *((unsigned int *)t25);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB15;

LAB16:
LAB17:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 7960);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7160);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t24 = *((double *)t12);
    t19 = xsi_vlog_convert_real_to_bits(t24, t1, 64);
    *((int *)t22) = xsi_vlogfile_fscanf(*((unsigned int *)t4), ng9, 2, t0, (char)101, t1, 64);
    t20 = (t22 + 4);
    *((int *)t20) = 0;
    t21 = (t0 + 7160);
    xsi_vlogvar_assign_value_double(t21, *((double *)t1), 0);
    t23 = ((char*)((ng5)));
    memset(t25, 0, 8);
    xsi_vlog_signed_not_equal(t25, 32, t22, 32, t23, 32);
    t26 = (t25 + 4);
    t6 = *((unsigned int *)t26);
    t7 = (~(t6));
    t8 = *((unsigned int *)t25);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB19;

LAB20:
LAB21:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 7960);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7320);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_bit_copy(t1, 0, t12, 0, 32);
    *((int *)t22) = xsi_vlogfile_fscanf(*((unsigned int *)t4), ng11, 2, t0, (char)119, t1, 32);
    t19 = (t22 + 4);
    *((int *)t19) = 0;
    t20 = (t0 + 7320);
    xsi_vlogvar_assign_value(t20, t1, 0, 0, 32);
    t21 = ((char*)((ng5)));
    memset(t25, 0, 8);
    xsi_vlog_signed_not_equal(t25, 32, t22, 32, t21, 32);
    t23 = (t25 + 4);
    t6 = *((unsigned int *)t23);
    t7 = (~(t6));
    t8 = *((unsigned int *)t25);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB23;

LAB24:
LAB25:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 7960);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7480);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_bit_copy(t1, 0, t12, 0, 32);
    *((int *)t22) = xsi_vlogfile_fscanf(*((unsigned int *)t4), ng13, 2, t0, (char)119, t1, 32);
    t19 = (t22 + 4);
    *((int *)t19) = 0;
    t20 = (t0 + 7480);
    xsi_vlogvar_assign_value(t20, t1, 0, 0, 32);
    t21 = ((char*)((ng5)));
    memset(t25, 0, 8);
    xsi_vlog_signed_not_equal(t25, 32, t22, 32, t21, 32);
    t23 = (t25 + 4);
    t6 = *((unsigned int *)t23);
    t7 = (~(t6));
    t8 = *((unsigned int *)t25);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB27;

LAB28:
LAB29:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 7960);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7640);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_bit_copy(t1, 0, t12, 0, 32);
    *((int *)t22) = xsi_vlogfile_fscanf(*((unsigned int *)t4), ng15, 2, t0, (char)119, t1, 32);
    t19 = (t22 + 4);
    *((int *)t19) = 0;
    t20 = (t0 + 7640);
    xsi_vlogvar_assign_value(t20, t1, 0, 0, 32);
    t21 = ((char*)((ng5)));
    memset(t25, 0, 8);
    xsi_vlog_signed_not_equal(t25, 32, t22, 32, t21, 32);
    t23 = (t25 + 4);
    t6 = *((unsigned int *)t23);
    t7 = (~(t6));
    t8 = *((unsigned int *)t25);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB31;

LAB32:
LAB33:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 7960);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7800);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_bit_copy(t1, 0, t12, 0, 32);
    *((int *)t22) = xsi_vlogfile_fscanf(*((unsigned int *)t4), ng17, 2, t0, (char)119, t1, 32);
    t19 = (t22 + 4);
    *((int *)t19) = 0;
    t20 = (t0 + 7800);
    xsi_vlogvar_assign_value(t20, t1, 0, 0, 32);
    t21 = ((char*)((ng5)));
    memset(t25, 0, 8);
    xsi_vlog_signed_not_equal(t25, 32, t22, 32, t21, 32);
    t23 = (t25 + 4);
    t6 = *((unsigned int *)t23);
    t7 = (~(t6));
    t8 = *((unsigned int *)t25);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB35;

LAB36:
LAB37:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 7960);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t4));

LAB1:    return;
LAB3:    *((unsigned int *)t1) = 1;
    goto LAB6;

LAB7:    xsi_set_current_line(32, ng0);

LAB10:    xsi_set_current_line(33, ng0);
    xsi_vlogfile_write(0, 0, 1, ng3, 1, t0);
    xsi_set_current_line(34, ng0);
    xsi_vlog_finish(1);
    goto LAB9;

LAB11:    xsi_set_current_line(36, ng0);

LAB14:    xsi_set_current_line(37, ng0);
    xsi_vlogfile_write(0, 0, 1, ng6, 1, t0);
    xsi_set_current_line(38, ng0);
    xsi_vlog_finish(1);
    goto LAB13;

LAB15:    xsi_set_current_line(40, ng0);

LAB18:    xsi_set_current_line(41, ng0);
    xsi_vlogfile_write(0, 0, 1, ng8, 1, t0);
    xsi_set_current_line(42, ng0);
    xsi_vlog_finish(1);
    goto LAB17;

LAB19:    xsi_set_current_line(44, ng0);

LAB22:    xsi_set_current_line(45, ng0);
    xsi_vlogfile_write(0, 0, 1, ng10, 1, t0);
    xsi_set_current_line(46, ng0);
    xsi_vlog_finish(1);
    goto LAB21;

LAB23:    xsi_set_current_line(48, ng0);

LAB26:    xsi_set_current_line(49, ng0);
    xsi_vlogfile_write(0, 0, 1, ng12, 1, t0);
    xsi_set_current_line(50, ng0);
    xsi_vlog_finish(1);
    goto LAB25;

LAB27:    xsi_set_current_line(52, ng0);

LAB30:    xsi_set_current_line(53, ng0);
    xsi_vlogfile_write(0, 0, 1, ng14, 1, t0);
    xsi_set_current_line(54, ng0);
    xsi_vlog_finish(1);
    goto LAB29;

LAB31:    xsi_set_current_line(56, ng0);

LAB34:    xsi_set_current_line(57, ng0);
    xsi_vlogfile_write(0, 0, 1, ng16, 1, t0);
    xsi_set_current_line(58, ng0);
    xsi_vlog_finish(1);
    goto LAB33;

LAB35:    xsi_set_current_line(60, ng0);

LAB38:    xsi_set_current_line(61, ng0);
    xsi_vlogfile_write(0, 0, 1, ng18, 1, t0);
    xsi_set_current_line(62, ng0);
    xsi_vlog_finish(1);
    goto LAB37;

}

static void Initial_182_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 12168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(182, ng0);

LAB4:    xsi_set_current_line(184, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 8120);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(185, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 8280);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(186, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 9880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(188, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 9560);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(189, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 9400);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(190, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 9720);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(192, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 10040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(193, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 10200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(194, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 10360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(196, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 8600);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 12);
    xsi_set_current_line(197, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 8760);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 12);
    xsi_set_current_line(198, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 9080);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 12);
    xsi_set_current_line(199, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 9240);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 12);
    xsi_set_current_line(201, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 8280);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(202, ng0);
    t2 = (t0 + 11976);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(203, ng0);
    t3 = ((char*)((ng19)));
    t4 = (t0 + 8280);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB1;

}

static void Always_206_2(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 12416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(206, ng0);
    t2 = (t0 + 12224);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(206, ng0);
    t4 = (t0 + 8120);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t0 + 8120);
    xsi_vlogvar_assign_value(t14, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

}

static void Cont_209_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;

LAB0:    t1 = (t0 + 12664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(209, ng0);
    t2 = (t0 + 3720U);
    t5 = *((char **)t2);
    t2 = (t0 + 9560);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    t9 = (t5 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB7;

LAB4:    if (t20 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t8) = 1;

LAB7:    memset(t4, 0, 8);
    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t24) != 0)
        goto LAB10;

LAB11:    t31 = (t4 + 4);
    t32 = *((unsigned int *)t4);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB12;

LAB13:    t39 = *((unsigned int *)t4);
    t40 = (~(t39));
    t41 = *((unsigned int *)t31);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t31) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t43, 8);

LAB20:    t44 = (t0 + 13856);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    memset(t48, 0, 8);
    t49 = 1U;
    t50 = t49;
    t51 = (t3 + 4);
    t52 = *((unsigned int *)t3);
    t49 = (t49 & t52);
    t53 = *((unsigned int *)t51);
    t50 = (t50 & t53);
    t54 = (t48 + 4);
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t55 | t49);
    t56 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t56 | t50);
    xsi_driver_vfirst_trans(t44, 0, 0);
    t57 = (t0 + 13728);
    *((int *)t57) = 1;

LAB1:    return;
LAB6:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t30 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB11;

LAB12:    t35 = (t0 + 8120);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memcpy(t38, t37, 8);
    goto LAB13;

LAB14:    t43 = ((char*)((ng19)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t38, 32, t43, 32);
    goto LAB20;

LAB18:    memcpy(t3, t38, 8);
    goto LAB20;

}

static void Cont_212_4(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;

LAB0:    t1 = (t0 + 12912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(212, ng0);
    t2 = (t0 + 6280U);
    t5 = *((char **)t2);
    t2 = (t0 + 9720);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    t9 = (t5 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB7;

LAB4:    if (t20 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t8) = 1;

LAB7:    memset(t4, 0, 8);
    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t24) != 0)
        goto LAB10;

LAB11:    t31 = (t4 + 4);
    t32 = *((unsigned int *)t4);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB12;

LAB13:    t39 = *((unsigned int *)t4);
    t40 = (~(t39));
    t41 = *((unsigned int *)t31);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t31) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t43, 8);

LAB20:    t44 = (t0 + 13920);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    memset(t48, 0, 8);
    t49 = 1U;
    t50 = t49;
    t51 = (t3 + 4);
    t52 = *((unsigned int *)t3);
    t49 = (t49 & t52);
    t53 = *((unsigned int *)t51);
    t50 = (t50 & t53);
    t54 = (t48 + 4);
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t55 | t49);
    t56 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t56 | t50);
    xsi_driver_vfirst_trans(t44, 0, 0);
    t57 = (t0 + 13744);
    *((int *)t57) = 1;

LAB1:    return;
LAB6:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t30 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB11;

LAB12:    t35 = (t0 + 8120);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memcpy(t38, t37, 8);
    goto LAB13;

LAB14:    t43 = ((char*)((ng19)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t38, 32, t43, 32);
    goto LAB20;

LAB18:    memcpy(t3, t38, 8);
    goto LAB20;

}

static void Cont_215_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 13160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(215, ng0);
    t2 = (t0 + 8120);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 13984);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 13760);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_217_6(char *t0)
{
    char t13[8];
    char t39[8];
    char t44[8];
    char t57[8];
    char t64[8];
    char t105[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
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
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    char *t102;
    char *t103;
    char *t104;
    char *t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    char *t120;
    char *t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    char *t127;
    char *t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    char *t134;
    char *t135;
    char *t136;
    double t137;
    double t138;
    double t139;
    double t140;
    double t141;
    double t142;
    double t143;

LAB0:    t1 = (t0 + 13408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(217, ng0);
    t2 = (t0 + 13776);
    *((int *)t2) = 1;
    t3 = (t0 + 13440);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(217, ng0);

LAB5:    xsi_set_current_line(218, ng0);
    t4 = (t0 + 9880);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng19)));
    t8 = xsi_vlog_signed_case_compare(t6, 32, t7, 32);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_signed_case_compare(t6, 32, t2, 32);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng37)));
    t8 = xsi_vlog_signed_case_compare(t6, 32, t2, 32);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng40)));
    t8 = xsi_vlog_signed_case_compare(t6, 32, t2, 32);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng24)));
    t8 = xsi_vlog_signed_case_compare(t6, 32, t2, 32);
    if (t8 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(219, ng0);

LAB18:    xsi_set_current_line(220, ng0);
    t9 = (t0 + 3720U);
    t10 = *((char **)t9);
    t9 = (t0 + 9560);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    t14 = (t10 + 4);
    t15 = (t12 + 4);
    t16 = *((unsigned int *)t10);
    t17 = *((unsigned int *)t12);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t15);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t14);
    t24 = *((unsigned int *)t15);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB22;

LAB19:    if (t25 != 0)
        goto LAB21;

LAB20:    *((unsigned int *)t13) = 1;

LAB22:    t29 = (t13 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB23;

LAB24:
LAB25:    xsi_set_current_line(223, ng0);
    t2 = (t0 + 3720U);
    t3 = *((char **)t2);
    t2 = (t0 + 9560);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    t7 = (t3 + 4);
    t9 = (t5 + 4);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t5);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t9);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t9);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB27;

LAB26:    if (t25 != 0)
        goto LAB28;

LAB29:    memset(t39, 0, 8);
    t11 = (t13 + 4);
    t30 = *((unsigned int *)t11);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t11) != 0)
        goto LAB32;

LAB33:    t14 = (t39 + 4);
    t41 = *((unsigned int *)t39);
    t42 = *((unsigned int *)t14);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB34;

LAB35:    memcpy(t64, t39, 8);

LAB36:    t95 = (t64 + 4);
    t96 = *((unsigned int *)t95);
    t97 = (~(t96));
    t98 = *((unsigned int *)t64);
    t99 = (t98 & t97);
    t100 = (t99 != 0);
    if (t100 > 0)
        goto LAB48;

LAB49:    xsi_set_current_line(279, ng0);
    t2 = (t0 + 10200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7640);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memset(t13, 0, 8);
    xsi_vlog_signed_equal(t13, 32, t4, 32, t9, 32);
    t10 = (t13 + 4);
    t16 = *((unsigned int *)t10);
    t17 = (~(t16));
    t18 = *((unsigned int *)t13);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB124;

LAB125:
LAB126:
LAB50:    goto LAB17;

LAB9:    xsi_set_current_line(291, ng0);

LAB131:    xsi_set_current_line(292, ng0);
    t3 = (t0 + 8760);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng5)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t5, 12, t7, 32);
    t9 = ((char*)((ng35)));
    memset(t39, 0, 8);
    xsi_vlog_unsigned_mod(t39, 32, t13, 32, t9, 32);
    t10 = (t0 + 8760);
    xsi_vlogvar_wait_assign_value(t10, t39, 0, 0, 12, 0LL);
    xsi_set_current_line(293, ng0);
    t2 = (t0 + 9240);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 12, t5, 32);
    t7 = ((char*)((ng35)));
    memset(t39, 0, 8);
    xsi_vlog_unsigned_mod(t39, 32, t13, 32, t7, 32);
    t9 = (t0 + 9240);
    xsi_vlogvar_wait_assign_value(t9, t39, 0, 0, 12, 0LL);
    xsi_set_current_line(295, ng0);
    t2 = (t0 + 8760);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng36)));
    memset(t13, 0, 8);
    t7 = (t4 + 4);
    t9 = (t5 + 4);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t9);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t9);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB135;

LAB132:    if (t25 != 0)
        goto LAB134;

LAB133:    *((unsigned int *)t13) = 1;

LAB135:    t11 = (t13 + 4);
    t30 = *((unsigned int *)t11);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB136;

LAB137:
LAB138:    xsi_set_current_line(298, ng0);
    t2 = (t0 + 5000U);
    t3 = *((char **)t2);
    t2 = (t0 + 2440U);
    t4 = *((char **)t2);
    memset(t13, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t4))
        goto LAB140;

LAB139:    t2 = (t3 + 4);
    t5 = (t4 + 4);
    if (*((unsigned int *)t2) != *((unsigned int *)t5))
        goto LAB140;

LAB141:    t7 = (t13 + 4);
    t16 = *((unsigned int *)t7);
    t17 = (~(t16));
    t18 = *((unsigned int *)t13);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB142;

LAB143:
LAB144:    goto LAB17;

LAB11:    xsi_set_current_line(310, ng0);

LAB150:    xsi_set_current_line(311, ng0);
    t3 = (t0 + 8600);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng5)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t5, 12, t7, 32);
    t9 = (t0 + 8600);
    xsi_vlogvar_wait_assign_value(t9, t13, 0, 0, 12, 0LL);
    xsi_set_current_line(312, ng0);
    t2 = (t0 + 9080);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 12, t5, 32);
    t7 = (t0 + 9080);
    xsi_vlogvar_wait_assign_value(t7, t13, 0, 0, 12, 0LL);
    xsi_set_current_line(314, ng0);
    t2 = (t0 + 8600);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng39)));
    memset(t13, 0, 8);
    t7 = (t4 + 4);
    t9 = (t5 + 4);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t9);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t9);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB154;

LAB151:    if (t25 != 0)
        goto LAB153;

LAB152:    *((unsigned int *)t13) = 1;

LAB154:    t11 = (t13 + 4);
    t30 = *((unsigned int *)t11);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB155;

LAB156:
LAB157:    xsi_set_current_line(320, ng0);
    t2 = (t0 + 8600);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng19)));
    memset(t13, 0, 8);
    t7 = (t4 + 4);
    t9 = (t5 + 4);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t9);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t9);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB160;

LAB159:    if (t25 != 0)
        goto LAB161;

LAB162:    memset(t39, 0, 8);
    t11 = (t13 + 4);
    t30 = *((unsigned int *)t11);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB163;

LAB164:    if (*((unsigned int *)t11) != 0)
        goto LAB165;

LAB166:    t14 = (t39 + 4);
    t41 = *((unsigned int *)t39);
    t42 = *((unsigned int *)t14);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB167;

LAB168:    memcpy(t64, t39, 8);

LAB169:    t70 = (t64 + 4);
    t82 = *((unsigned int *)t70);
    t83 = (~(t82));
    t84 = *((unsigned int *)t64);
    t85 = (t84 & t83);
    t86 = (t85 != 0);
    if (t86 > 0)
        goto LAB180;

LAB181:
LAB182:    goto LAB17;

LAB13:    xsi_set_current_line(332, ng0);

LAB188:    xsi_set_current_line(333, ng0);
    t3 = (t0 + 10040);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    t7 = (t5 + 4);
    t16 = *((unsigned int *)t7);
    t17 = (~(t16));
    t18 = *((unsigned int *)t5);
    t19 = (t18 & t17);
    t20 = (t19 & 4294967295U);
    if (t20 != 0)
        goto LAB192;

LAB190:    if (*((unsigned int *)t7) == 0)
        goto LAB189;

LAB191:    t9 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t9) = 1;

LAB192:    t10 = (t13 + 4);
    t21 = *((unsigned int *)t10);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB193;

LAB194:    xsi_set_current_line(337, ng0);
    t2 = (t0 + 10360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7480);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memset(t13, 0, 8);
    xsi_vlog_signed_equal(t13, 32, t4, 32, t9, 32);
    t10 = (t13 + 4);
    t16 = *((unsigned int *)t10);
    t17 = (~(t16));
    t18 = *((unsigned int *)t13);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB197;

LAB198:    xsi_set_current_line(341, ng0);

LAB201:    xsi_set_current_line(342, ng0);
    t2 = (t0 + 2760U);
    t3 = *((char **)t2);
    t2 = (t0 + 9400);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 16, 0LL);
    xsi_set_current_line(343, ng0);
    t2 = (t0 + 3720U);
    t3 = *((char **)t2);
    t2 = (t0 + 9560);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 16, 0LL);
    xsi_set_current_line(344, ng0);
    t2 = (t0 + 6280U);
    t3 = *((char **)t2);
    t2 = (t0 + 9720);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 16, 0LL);
    xsi_set_current_line(345, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 10040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(346, ng0);
    t2 = (t0 + 10360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t7 = (t0 + 10360);
    xsi_vlogvar_wait_assign_value(t7, t13, 0, 0, 32, 0LL);
    xsi_set_current_line(347, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 10200);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(348, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 9880);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(350, ng0);
    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t16 = *((unsigned int *)t2);
    t17 = (~(t16));
    t18 = *((unsigned int *)t3);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB202;

LAB203:
LAB204:
LAB199:
LAB195:    goto LAB17;

LAB15:    xsi_set_current_line(354, ng0);

LAB205:    xsi_set_current_line(355, ng0);
    xsi_vlogfile_write(0, 0, 1, ng21, 1, t0);
    xsi_set_current_line(357, ng0);
    t2 = (t0 + 7480);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7320);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memset(t13, 0, 8);
    xsi_vlog_signed_minus(t13, 32, t4, 32, t9, 32);
    t10 = ((char*)((ng5)));
    memset(t39, 0, 8);
    xsi_vlog_signed_add(t39, 32, t13, 32, t10, 32);
    t11 = (t0 + 10680);
    xsi_vlogvar_assign_value(t11, t39, 0, 0, 10);
    xsi_set_current_line(358, ng0);
    t2 = (t0 + 10360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7320);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memset(t13, 0, 8);
    xsi_vlog_signed_minus(t13, 32, t4, 32, t9, 32);
    t10 = ((char*)((ng5)));
    memset(t39, 0, 8);
    xsi_vlog_signed_add(t39, 32, t13, 32, t10, 32);
    t11 = (t0 + 10520);
    xsi_vlogvar_assign_value(t11, t39, 0, 0, 10);
    xsi_set_current_line(359, ng0);
    t2 = (t0 + 10520);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng19)));
    memset(t44, 0, 8);
    xsi_vlog_signed_less(t44, 32, t4, 10, t5, 32);
    memset(t39, 0, 8);
    t7 = (t44 + 4);
    t16 = *((unsigned int *)t7);
    t17 = (~(t16));
    t18 = *((unsigned int *)t44);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB206;

LAB207:    if (*((unsigned int *)t7) != 0)
        goto LAB208;

LAB209:    t10 = (t39 + 4);
    t21 = *((unsigned int *)t39);
    t22 = *((unsigned int *)t10);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB210;

LAB211:    t24 = *((unsigned int *)t39);
    t25 = (~(t24));
    t26 = *((unsigned int *)t10);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB212;

LAB213:    if (*((unsigned int *)t10) > 0)
        goto LAB214;

LAB215:    if (*((unsigned int *)t39) > 0)
        goto LAB216;

LAB217:    memcpy(t13, t57, 8);

LAB218:    t36 = (t0 + 10520);
    xsi_vlogvar_assign_value(t36, t13, 0, 0, 10);
    xsi_set_current_line(360, ng0);
    t2 = (t0 + 10520);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t137 = xsi_vlog_convert_to_real(t4, 10, 1);
    t138 = (t137 * 1.0000000000000000);
    t5 = (t0 + 10680);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    t139 = xsi_vlog_convert_to_real(t9, 10, 1);
    t140 = (t138 / t139);
    t10 = (t0 + 10840);
    xsi_vlogvar_assign_value_double(t10, t140, 0);
    xsi_set_current_line(362, ng0);
    *((int *)t13) = xsi_vlogfile_file_open_of_cname(ng44);
    t2 = (t13 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 11000);
    xsi_vlogvar_assign_value(t3, t13, 0, 0, 32);
    xsi_set_current_line(363, ng0);
    t2 = (t0 + 11000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7000);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    t137 = *((double *)t9);
    t10 = (t0 + 10840);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t138 = *((double *)t12);
    t14 = (t0 + 7160);
    t15 = (t14 + 56U);
    t28 = *((char **)t15);
    t139 = *((double *)t28);
    t140 = (t138 - t139);
    t141 = (t137 * t140);
    *((double *)t13) = t141;
    t29 = (t0 + 10520);
    t35 = (t29 + 56U);
    t36 = *((char **)t35);
    t37 = (t0 + 10680);
    t38 = (t37 + 56U);
    t40 = *((char **)t38);
    t63 = (t0 + 10840);
    t68 = (t63 + 56U);
    t69 = *((char **)t68);
    t142 = *((double *)t69);
    t143 = (100.00000000000000 * t142);
    *((double *)t39) = t143;
    t70 = (t0 + 6840);
    t78 = (t70 + 56U);
    t79 = *((char **)t78);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 0, 0, 1, ng45, 6, t0, (char)114, t13, 64, (char)119, t36, 10, (char)119, t40, 10, (char)114, t39, 64, (char)118, t79, 128);
    xsi_set_current_line(364, ng0);
    t2 = (t0 + 11000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t4));
    xsi_set_current_line(365, ng0);
    xsi_vlog_finish(1);
    goto LAB17;

LAB21:    t28 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB22;

LAB23:    xsi_set_current_line(221, ng0);
    t35 = (t0 + 10200);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng5)));
    memset(t39, 0, 8);
    xsi_vlog_signed_add(t39, 32, t37, 32, t38, 32);
    t40 = (t0 + 10200);
    xsi_vlogvar_wait_assign_value(t40, t39, 0, 0, 32, 0LL);
    goto LAB25;

LAB27:    *((unsigned int *)t13) = 1;
    goto LAB29;

LAB28:    t10 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB29;

LAB30:    *((unsigned int *)t39) = 1;
    goto LAB33;

LAB32:    t12 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB33;

LAB34:    t15 = (t0 + 6280U);
    t28 = *((char **)t15);
    t15 = (t0 + 9720);
    t29 = (t15 + 56U);
    t35 = *((char **)t29);
    memset(t44, 0, 8);
    t36 = (t28 + 4);
    t37 = (t35 + 4);
    t45 = *((unsigned int *)t28);
    t46 = *((unsigned int *)t35);
    t47 = (t45 ^ t46);
    t48 = *((unsigned int *)t36);
    t49 = *((unsigned int *)t37);
    t50 = (t48 ^ t49);
    t51 = (t47 | t50);
    t52 = *((unsigned int *)t36);
    t53 = *((unsigned int *)t37);
    t54 = (t52 | t53);
    t55 = (~(t54));
    t56 = (t51 & t55);
    if (t56 != 0)
        goto LAB38;

LAB37:    if (t54 != 0)
        goto LAB39;

LAB40:    memset(t57, 0, 8);
    t40 = (t44 + 4);
    t58 = *((unsigned int *)t40);
    t59 = (~(t58));
    t60 = *((unsigned int *)t44);
    t61 = (t60 & t59);
    t62 = (t61 & 1U);
    if (t62 != 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t40) != 0)
        goto LAB43;

LAB44:    t65 = *((unsigned int *)t39);
    t66 = *((unsigned int *)t57);
    t67 = (t65 & t66);
    *((unsigned int *)t64) = t67;
    t68 = (t39 + 4);
    t69 = (t57 + 4);
    t70 = (t64 + 4);
    t71 = *((unsigned int *)t68);
    t72 = *((unsigned int *)t69);
    t73 = (t71 | t72);
    *((unsigned int *)t70) = t73;
    t74 = *((unsigned int *)t70);
    t75 = (t74 != 0);
    if (t75 == 1)
        goto LAB45;

LAB46:
LAB47:    goto LAB36;

LAB38:    *((unsigned int *)t44) = 1;
    goto LAB40;

LAB39:    t38 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB40;

LAB41:    *((unsigned int *)t57) = 1;
    goto LAB44;

LAB43:    t63 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB44;

LAB45:    t76 = *((unsigned int *)t64);
    t77 = *((unsigned int *)t70);
    *((unsigned int *)t64) = (t76 | t77);
    t78 = (t39 + 4);
    t79 = (t57 + 4);
    t80 = *((unsigned int *)t39);
    t81 = (~(t80));
    t82 = *((unsigned int *)t78);
    t83 = (~(t82));
    t84 = *((unsigned int *)t57);
    t85 = (~(t84));
    t86 = *((unsigned int *)t79);
    t87 = (~(t86));
    t8 = (t81 & t83);
    t88 = (t85 & t87);
    t89 = (~(t8));
    t90 = (~(t88));
    t91 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t91 & t89);
    t92 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t92 & t90);
    t93 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t93 & t89);
    t94 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t94 & t90);
    goto LAB47;

LAB48:    xsi_set_current_line(223, ng0);

LAB51:    xsi_set_current_line(224, ng0);
    t101 = (t0 + 9720);
    t102 = (t101 + 56U);
    t103 = *((char **)t102);
    t104 = ((char*)((ng19)));
    memset(t105, 0, 8);
    t106 = (t103 + 4);
    t107 = (t104 + 4);
    t108 = *((unsigned int *)t103);
    t109 = *((unsigned int *)t104);
    t110 = (t108 ^ t109);
    t111 = *((unsigned int *)t106);
    t112 = *((unsigned int *)t107);
    t113 = (t111 ^ t112);
    t114 = (t110 | t113);
    t115 = *((unsigned int *)t106);
    t116 = *((unsigned int *)t107);
    t117 = (t115 | t116);
    t118 = (~(t117));
    t119 = (t114 & t118);
    if (t119 != 0)
        goto LAB53;

LAB52:    if (t117 != 0)
        goto LAB54;

LAB55:    t121 = (t105 + 4);
    t122 = *((unsigned int *)t121);
    t123 = (~(t122));
    t124 = *((unsigned int *)t105);
    t125 = (t124 & t123);
    t126 = (t125 != 0);
    if (t126 > 0)
        goto LAB56;

LAB57:    xsi_set_current_line(227, ng0);

LAB63:    xsi_set_current_line(228, ng0);
    xsi_vlogfile_write(0, 0, 1, ng21, 1, t0);

LAB58:    xsi_set_current_line(231, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 9880);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(233, ng0);
    t2 = (t0 + 2760U);
    t3 = *((char **)t2);
    t2 = (t0 + 5320U);
    t4 = *((char **)t2);
    memset(t13, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t4))
        goto LAB65;

LAB64:    t2 = (t3 + 4);
    t5 = (t4 + 4);
    if (*((unsigned int *)t2) != *((unsigned int *)t5))
        goto LAB65;

LAB66:    t7 = (t13 + 4);
    t16 = *((unsigned int *)t7);
    t17 = (~(t16));
    t18 = *((unsigned int *)t13);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB67;

LAB68:
LAB69:    xsi_set_current_line(244, ng0);
    t2 = (t0 + 2920U);
    t3 = *((char **)t2);
    t2 = (t0 + 5480U);
    t4 = *((char **)t2);
    memset(t13, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t4))
        goto LAB76;

LAB75:    t2 = (t3 + 4);
    t5 = (t4 + 4);
    if (*((unsigned int *)t2) != *((unsigned int *)t5))
        goto LAB76;

LAB77:    t7 = (t13 + 4);
    t16 = *((unsigned int *)t7);
    t17 = (~(t16));
    t18 = *((unsigned int *)t13);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB78;

LAB79:
LAB80:    goto LAB50;

LAB53:    *((unsigned int *)t105) = 1;
    goto LAB55;

LAB54:    t120 = (t105 + 4);
    *((unsigned int *)t105) = 1;
    *((unsigned int *)t120) = 1;
    goto LAB55;

LAB56:    xsi_set_current_line(224, ng0);

LAB59:    xsi_set_current_line(225, ng0);
    t127 = (t0 + 608);
    t128 = *((char **)t127);
    t127 = (t128 + 4);
    t129 = *((unsigned int *)t127);
    t130 = (~(t129));
    t131 = *((unsigned int *)t128);
    t132 = (t131 & t130);
    t133 = (t132 != 0);
    if (t133 > 0)
        goto LAB60;

LAB61:
LAB62:    goto LAB58;

LAB60:    xsi_set_current_line(225, ng0);
    t134 = (t0 + 10200);
    t135 = (t134 + 56U);
    t136 = *((char **)t135);
    xsi_vlogfile_write(0, 0, 1, ng20, 2, t0, (char)119, t136, 32);
    goto LAB62;

LAB65:    *((unsigned int *)t13) = 1;
    goto LAB66;

LAB67:    xsi_set_current_line(233, ng0);

LAB70:    xsi_set_current_line(234, ng0);
    t9 = (t0 + 2760U);
    t10 = *((char **)t9);
    t9 = (t0 + 5320U);
    t11 = *((char **)t9);
    xsi_vlogfile_write(0, 0, 1, ng22, 3, t0, (char)118, t10, 16, (char)118, t11, 16);
    xsi_set_current_line(235, ng0);
    t2 = (t0 + 10360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 9400);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    t10 = (t0 + 9560);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    xsi_vlogfile_write(0, 0, 1, ng23, 4, t0, (char)119, t4, 32, (char)118, t9, 16, (char)118, t12, 16);
    xsi_set_current_line(237, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 10040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(238, ng0);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t16 = *((unsigned int *)t2);
    t17 = (~(t16));
    t18 = *((unsigned int *)t3);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB71;

LAB72:
LAB73:    goto LAB69;

LAB71:    xsi_set_current_line(238, ng0);

LAB74:    xsi_set_current_line(239, ng0);
    t4 = (t0 + 10360);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t9 = ((char*)((ng5)));
    memset(t13, 0, 8);
    xsi_vlog_signed_minus(t13, 32, t7, 32, t9, 32);
    t10 = (t0 + 10360);
    xsi_vlogvar_wait_assign_value(t10, t13, 0, 0, 32, 0LL);
    xsi_set_current_line(240, ng0);
    t2 = ((char*)((ng24)));
    t3 = (t0 + 9880);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB73;

LAB76:    *((unsigned int *)t13) = 1;
    goto LAB77;

LAB78:    xsi_set_current_line(244, ng0);

LAB81:    xsi_set_current_line(245, ng0);
    xsi_vlogfile_write(0, 0, 1, ng25, 1, t0);
    xsi_set_current_line(246, ng0);
    t2 = (t0 + 2920U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (t16 >> 4);
    t18 = (t17 & 1);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t4);
    t20 = (t19 >> 4);
    t21 = (t20 & 1);
    *((unsigned int *)t2) = t21;
    t5 = (t13 + 4);
    t22 = *((unsigned int *)t5);
    t23 = (~(t22));
    t24 = *((unsigned int *)t13);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB82;

LAB83:
LAB84:    xsi_set_current_line(248, ng0);
    t2 = (t0 + 2920U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (t16 >> 3);
    t18 = (t17 & 1);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t4);
    t20 = (t19 >> 3);
    t21 = (t20 & 1);
    *((unsigned int *)t2) = t21;
    t5 = (t13 + 4);
    t22 = *((unsigned int *)t5);
    t23 = (~(t22));
    t24 = *((unsigned int *)t13);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB85;

LAB86:
LAB87:    xsi_set_current_line(250, ng0);
    t2 = (t0 + 2920U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (t16 >> 2);
    t18 = (t17 & 1);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t4);
    t20 = (t19 >> 2);
    t21 = (t20 & 1);
    *((unsigned int *)t2) = t21;
    t5 = (t13 + 4);
    t22 = *((unsigned int *)t5);
    t23 = (~(t22));
    t24 = *((unsigned int *)t13);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB88;

LAB89:
LAB90:    xsi_set_current_line(252, ng0);
    t2 = (t0 + 2920U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (t16 >> 1);
    t18 = (t17 & 1);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t4);
    t20 = (t19 >> 1);
    t21 = (t20 & 1);
    *((unsigned int *)t2) = t21;
    t5 = (t13 + 4);
    t22 = *((unsigned int *)t5);
    t23 = (~(t22));
    t24 = *((unsigned int *)t13);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB91;

LAB92:
LAB93:    xsi_set_current_line(254, ng0);
    t2 = (t0 + 2920U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (t16 >> 0);
    t18 = (t17 & 1);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t4);
    t20 = (t19 >> 0);
    t21 = (t20 & 1);
    *((unsigned int *)t2) = t21;
    t5 = (t13 + 4);
    t22 = *((unsigned int *)t5);
    t23 = (~(t22));
    t24 = *((unsigned int *)t13);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB94;

LAB95:
LAB96:    xsi_set_current_line(256, ng0);
    xsi_vlogfile_write(0, 0, 1, ng31, 1, t0);
    xsi_set_current_line(257, ng0);
    t2 = (t0 + 5480U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (t16 >> 4);
    t18 = (t17 & 1);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t4);
    t20 = (t19 >> 4);
    t21 = (t20 & 1);
    *((unsigned int *)t2) = t21;
    t5 = (t13 + 4);
    t22 = *((unsigned int *)t5);
    t23 = (~(t22));
    t24 = *((unsigned int *)t13);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB97;

LAB98:
LAB99:    xsi_set_current_line(259, ng0);
    t2 = (t0 + 5480U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (t16 >> 3);
    t18 = (t17 & 1);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t4);
    t20 = (t19 >> 3);
    t21 = (t20 & 1);
    *((unsigned int *)t2) = t21;
    t5 = (t13 + 4);
    t22 = *((unsigned int *)t5);
    t23 = (~(t22));
    t24 = *((unsigned int *)t13);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB100;

LAB101:
LAB102:    xsi_set_current_line(261, ng0);
    t2 = (t0 + 5480U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (t16 >> 2);
    t18 = (t17 & 1);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t4);
    t20 = (t19 >> 2);
    t21 = (t20 & 1);
    *((unsigned int *)t2) = t21;
    t5 = (t13 + 4);
    t22 = *((unsigned int *)t5);
    t23 = (~(t22));
    t24 = *((unsigned int *)t13);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB103;

LAB104:
LAB105:    xsi_set_current_line(263, ng0);
    t2 = (t0 + 5480U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (t16 >> 1);
    t18 = (t17 & 1);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t4);
    t20 = (t19 >> 1);
    t21 = (t20 & 1);
    *((unsigned int *)t2) = t21;
    t5 = (t13 + 4);
    t22 = *((unsigned int *)t5);
    t23 = (~(t22));
    t24 = *((unsigned int *)t13);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB106;

LAB107:
LAB108:    xsi_set_current_line(265, ng0);
    t2 = (t0 + 5480U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (t16 >> 0);
    t18 = (t17 & 1);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t4);
    t20 = (t19 >> 0);
    t21 = (t20 & 1);
    *((unsigned int *)t2) = t21;
    t5 = (t13 + 4);
    t22 = *((unsigned int *)t5);
    t23 = (~(t22));
    t24 = *((unsigned int *)t13);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB109;

LAB110:
LAB111:    xsi_set_current_line(267, ng0);
    xsi_vlogfile_write(0, 0, 1, ng32, 1, t0);
    xsi_set_current_line(268, ng0);
    t2 = (t0 + 10360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 9400);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    t10 = (t0 + 9560);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    xsi_vlogfile_write(0, 0, 1, ng23, 4, t0, (char)119, t4, 32, (char)118, t9, 16, (char)118, t12, 16);
    xsi_set_current_line(270, ng0);
    t2 = (t0 + 7800);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (~(t16));
    t18 = *((unsigned int *)t4);
    t19 = (t18 & t17);
    t20 = (t19 & 4294967295U);
    if (t20 != 0)
        goto LAB115;

LAB113:    if (*((unsigned int *)t5) == 0)
        goto LAB112;

LAB114:    t7 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t7) = 1;

LAB115:    t9 = (t13 + 4);
    t21 = *((unsigned int *)t9);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB116;

LAB117:
LAB118:    goto LAB80;

LAB82:    xsi_set_current_line(247, ng0);
    xsi_vlogfile_write(0, 0, 1, ng26, 1, t0);
    goto LAB84;

LAB85:    xsi_set_current_line(249, ng0);
    xsi_vlogfile_write(0, 0, 1, ng27, 1, t0);
    goto LAB87;

LAB88:    xsi_set_current_line(251, ng0);
    xsi_vlogfile_write(0, 0, 1, ng28, 1, t0);
    goto LAB90;

LAB91:    xsi_set_current_line(253, ng0);
    xsi_vlogfile_write(0, 0, 1, ng29, 1, t0);
    goto LAB93;

LAB94:    xsi_set_current_line(255, ng0);
    xsi_vlogfile_write(0, 0, 1, ng30, 1, t0);
    goto LAB96;

LAB97:    xsi_set_current_line(258, ng0);
    xsi_vlogfile_write(0, 0, 1, ng26, 1, t0);
    goto LAB99;

LAB100:    xsi_set_current_line(260, ng0);
    xsi_vlogfile_write(0, 0, 1, ng27, 1, t0);
    goto LAB102;

LAB103:    xsi_set_current_line(262, ng0);
    xsi_vlogfile_write(0, 0, 1, ng28, 1, t0);
    goto LAB105;

LAB106:    xsi_set_current_line(264, ng0);
    xsi_vlogfile_write(0, 0, 1, ng29, 1, t0);
    goto LAB108;

LAB109:    xsi_set_current_line(266, ng0);
    xsi_vlogfile_write(0, 0, 1, ng30, 1, t0);
    goto LAB111;

LAB112:    *((unsigned int *)t13) = 1;
    goto LAB115;

LAB116:    xsi_set_current_line(270, ng0);

LAB119:    xsi_set_current_line(271, ng0);
    t10 = ((char*)((ng19)));
    t11 = (t0 + 10040);
    xsi_vlogvar_wait_assign_value(t11, t10, 0, 0, 32, 0LL);
    xsi_set_current_line(272, ng0);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t16 = *((unsigned int *)t2);
    t17 = (~(t16));
    t18 = *((unsigned int *)t3);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB120;

LAB121:
LAB122:    goto LAB118;

LAB120:    xsi_set_current_line(272, ng0);

LAB123:    xsi_set_current_line(273, ng0);
    t4 = (t0 + 10360);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t9 = ((char*)((ng5)));
    memset(t13, 0, 8);
    xsi_vlog_signed_minus(t13, 32, t7, 32, t9, 32);
    t10 = (t0 + 10360);
    xsi_vlogvar_wait_assign_value(t10, t13, 0, 0, 32, 0LL);
    xsi_set_current_line(274, ng0);
    t2 = ((char*)((ng24)));
    t3 = (t0 + 9880);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB122;

LAB124:    xsi_set_current_line(279, ng0);

LAB127:    xsi_set_current_line(280, ng0);
    t11 = (t0 + 608);
    t12 = *((char **)t11);
    t11 = (t12 + 4);
    t21 = *((unsigned int *)t11);
    t22 = (~(t21));
    t23 = *((unsigned int *)t12);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB128;

LAB129:
LAB130:    xsi_set_current_line(282, ng0);
    t2 = (t0 + 10200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(0, 0, 1, ng34, 2, t0, (char)119, t4, 32);
    xsi_set_current_line(283, ng0);
    t2 = (t0 + 10360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2760U);
    t7 = *((char **)t5);
    t5 = (t0 + 3720U);
    t9 = *((char **)t5);
    xsi_vlogfile_write(0, 0, 1, ng23, 4, t0, (char)119, t4, 32, (char)118, t7, 16, (char)118, t9, 16);
    xsi_set_current_line(285, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 10040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(286, ng0);
    t2 = (t0 + 10360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t13, 0, 8);
    xsi_vlog_signed_minus(t13, 32, t4, 32, t5, 32);
    t7 = (t0 + 10360);
    xsi_vlogvar_wait_assign_value(t7, t13, 0, 0, 32, 0LL);
    xsi_set_current_line(287, ng0);
    t2 = ((char*)((ng24)));
    t3 = (t0 + 9880);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB126;

LAB128:    xsi_set_current_line(280, ng0);
    xsi_vlogfile_write(0, 0, 1, ng33, 1, t0);
    goto LAB130;

LAB134:    t10 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB135;

LAB136:    xsi_set_current_line(296, ng0);
    t12 = ((char*)((ng37)));
    t14 = (t0 + 9880);
    xsi_vlogvar_wait_assign_value(t14, t12, 0, 0, 32, 0LL);
    goto LAB138;

LAB140:    *((unsigned int *)t13) = 1;
    goto LAB141;

LAB142:    xsi_set_current_line(298, ng0);

LAB145:    xsi_set_current_line(299, ng0);
    t9 = (t0 + 8760);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 2440U);
    t14 = *((char **)t12);
    t12 = (t0 + 5000U);
    t15 = *((char **)t12);
    xsi_vlogfile_write(0, 0, 1, ng38, 4, t0, (char)118, t11, 12, (char)118, t14, 16, (char)118, t15, 16);
    xsi_set_current_line(300, ng0);
    t2 = (t0 + 10360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 9400);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    t10 = (t0 + 9560);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    xsi_vlogfile_write(0, 0, 1, ng23, 4, t0, (char)119, t4, 32, (char)118, t9, 16, (char)118, t12, 16);
    xsi_set_current_line(302, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 10040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(303, ng0);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t16 = *((unsigned int *)t2);
    t17 = (~(t16));
    t18 = *((unsigned int *)t3);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB146;

LAB147:
LAB148:    goto LAB144;

LAB146:    xsi_set_current_line(303, ng0);

LAB149:    xsi_set_current_line(304, ng0);
    t4 = (t0 + 10360);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t9 = ((char*)((ng5)));
    memset(t13, 0, 8);
    xsi_vlog_signed_minus(t13, 32, t7, 32, t9, 32);
    t10 = (t0 + 10360);
    xsi_vlogvar_wait_assign_value(t10, t13, 0, 0, 32, 0LL);
    xsi_set_current_line(305, ng0);
    t2 = ((char*)((ng24)));
    t3 = (t0 + 9880);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB148;

LAB153:    t10 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB154;

LAB155:    xsi_set_current_line(314, ng0);

LAB158:    xsi_set_current_line(315, ng0);
    t12 = ((char*)((ng19)));
    t14 = (t0 + 8600);
    xsi_vlogvar_wait_assign_value(t14, t12, 0, 0, 12, 0LL);
    xsi_set_current_line(316, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 9080);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 12, 0LL);
    xsi_set_current_line(317, ng0);
    t2 = ((char*)((ng40)));
    t3 = (t0 + 9880);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB157;

LAB160:    *((unsigned int *)t13) = 1;
    goto LAB162;

LAB161:    t10 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB162;

LAB163:    *((unsigned int *)t39) = 1;
    goto LAB166;

LAB165:    t12 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB166;

LAB167:    t15 = (t0 + 4840U);
    t28 = *((char **)t15);
    t15 = (t0 + 2280U);
    t29 = *((char **)t15);
    memset(t44, 0, 8);
    if (*((unsigned int *)t28) != *((unsigned int *)t29))
        goto LAB171;

LAB170:    t15 = (t28 + 4);
    t35 = (t29 + 4);
    if (*((unsigned int *)t15) != *((unsigned int *)t35))
        goto LAB171;

LAB172:    memset(t57, 0, 8);
    t36 = (t44 + 4);
    t45 = *((unsigned int *)t36);
    t46 = (~(t45));
    t47 = *((unsigned int *)t44);
    t48 = (t47 & t46);
    t49 = (t48 & 1U);
    if (t49 != 0)
        goto LAB173;

LAB174:    if (*((unsigned int *)t36) != 0)
        goto LAB175;

LAB176:    t50 = *((unsigned int *)t39);
    t51 = *((unsigned int *)t57);
    t52 = (t50 & t51);
    *((unsigned int *)t64) = t52;
    t38 = (t39 + 4);
    t40 = (t57 + 4);
    t63 = (t64 + 4);
    t53 = *((unsigned int *)t38);
    t54 = *((unsigned int *)t40);
    t55 = (t53 | t54);
    *((unsigned int *)t63) = t55;
    t56 = *((unsigned int *)t63);
    t58 = (t56 != 0);
    if (t58 == 1)
        goto LAB177;

LAB178:
LAB179:    goto LAB169;

LAB171:    *((unsigned int *)t44) = 1;
    goto LAB172;

LAB173:    *((unsigned int *)t57) = 1;
    goto LAB176;

LAB175:    t37 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB176;

LAB177:    t59 = *((unsigned int *)t64);
    t60 = *((unsigned int *)t63);
    *((unsigned int *)t64) = (t59 | t60);
    t68 = (t39 + 4);
    t69 = (t57 + 4);
    t61 = *((unsigned int *)t39);
    t62 = (~(t61));
    t65 = *((unsigned int *)t68);
    t66 = (~(t65));
    t67 = *((unsigned int *)t57);
    t71 = (~(t67));
    t72 = *((unsigned int *)t69);
    t73 = (~(t72));
    t8 = (t62 & t66);
    t88 = (t71 & t73);
    t74 = (~(t8));
    t75 = (~(t88));
    t76 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t76 & t74);
    t77 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t77 & t75);
    t80 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t80 & t74);
    t81 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t81 & t75);
    goto LAB179;

LAB180:    xsi_set_current_line(320, ng0);

LAB183:    xsi_set_current_line(321, ng0);
    t78 = (t0 + 8600);
    t79 = (t78 + 56U);
    t95 = *((char **)t79);
    t101 = ((char*)((ng5)));
    memset(t105, 0, 8);
    xsi_vlog_unsigned_minus(t105, 32, t95, 12, t101, 32);
    t102 = (t0 + 2280U);
    t103 = *((char **)t102);
    t102 = (t0 + 4840U);
    t104 = *((char **)t102);
    xsi_vlogfile_write(0, 0, 1, ng41, 4, t0, (char)118, t105, 32, (char)118, t103, 16, (char)118, t104, 16);
    xsi_set_current_line(322, ng0);
    t2 = (t0 + 10360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 9400);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    t10 = (t0 + 9560);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    xsi_vlogfile_write(0, 0, 1, ng23, 4, t0, (char)119, t4, 32, (char)118, t9, 16, (char)118, t12, 16);
    xsi_set_current_line(324, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 10040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(325, ng0);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t16 = *((unsigned int *)t2);
    t17 = (~(t16));
    t18 = *((unsigned int *)t3);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB184;

LAB185:
LAB186:    goto LAB182;

LAB184:    xsi_set_current_line(325, ng0);

LAB187:    xsi_set_current_line(326, ng0);
    t4 = (t0 + 10360);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t9 = ((char*)((ng5)));
    memset(t13, 0, 8);
    xsi_vlog_signed_minus(t13, 32, t7, 32, t9, 32);
    t10 = (t0 + 10360);
    xsi_vlogvar_wait_assign_value(t10, t13, 0, 0, 32, 0LL);
    xsi_set_current_line(327, ng0);
    t2 = ((char*)((ng24)));
    t3 = (t0 + 9880);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB186;

LAB189:    *((unsigned int *)t13) = 1;
    goto LAB192;

LAB193:    xsi_set_current_line(333, ng0);

LAB196:    xsi_set_current_line(334, ng0);
    t11 = (t0 + 10360);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    t15 = ((char*)((ng5)));
    memset(t39, 0, 8);
    xsi_vlog_signed_minus(t39, 32, t14, 32, t15, 32);
    t28 = (t0 + 10360);
    xsi_vlogvar_wait_assign_value(t28, t39, 0, 0, 32, 0LL);
    xsi_set_current_line(335, ng0);
    t2 = ((char*)((ng24)));
    t3 = (t0 + 9880);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB195;

LAB197:    xsi_set_current_line(337, ng0);

LAB200:    xsi_set_current_line(338, ng0);
    xsi_vlogfile_write(0, 0, 1, ng42, 1, t0);
    xsi_set_current_line(339, ng0);
    t2 = ((char*)((ng24)));
    t3 = (t0 + 9880);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB199;

LAB202:    xsi_set_current_line(350, ng0);
    t4 = (t0 + 10360);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t9 = ((char*)((ng5)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t7, 32, t9, 32);
    t10 = (t0 + 5320U);
    t11 = *((char **)t10);
    t10 = (t0 + 6280U);
    t12 = *((char **)t10);
    xsi_vlogfile_write(0, 0, 1, ng43, 4, t0, (char)119, t13, 32, (char)118, t11, 16, (char)118, t12, 16);
    goto LAB204;

LAB206:    *((unsigned int *)t39) = 1;
    goto LAB209;

LAB208:    t9 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB209;

LAB210:    t11 = ((char*)((ng19)));
    goto LAB211;

LAB212:    t12 = (t0 + 10520);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t57, t15, 8);
    t32 = *((unsigned int *)t15);
    t33 = (t32 & 512U);
    t30 = t33;
    t28 = (t15 + 4);
    t34 = *((unsigned int *)t28);
    t41 = (t34 & 512U);
    t31 = t41;
    t42 = (t33 != 0);
    if (t42 == 1)
        goto LAB219;

LAB220:    t45 = (t41 != 0);
    if (t45 == 1)
        goto LAB221;

LAB222:    t47 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t47 & 4294967295U);
    t35 = (t57 + 4);
    t48 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t48 & 4294967295U);
    goto LAB213;

LAB214:    xsi_vlog_unsigned_bit_combine(t13, 32, t11, 32, t57, 32);
    goto LAB218;

LAB216:    memcpy(t13, t11, 8);
    goto LAB218;

LAB219:    t43 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t43 | 4294966272U);
    goto LAB220;

LAB221:    t29 = (t57 + 4);
    t46 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t46 | 4294966272U);
    goto LAB222;

}


extern void tester_m_00000000001937753462_2613777659_init()
{
	static char *pe[] = {(void *)Initial_30_0,(void *)Initial_182_1,(void *)Always_206_2,(void *)Cont_209_3,(void *)Cont_212_4,(void *)Cont_215_5,(void *)Always_217_6};
	xsi_register_didat("tester_m_00000000001937753462_2613777659", "isim/tester.exe.sim/tester/m_00000000001937753462_2613777659.didat");
	xsi_register_executes(pe);
}
