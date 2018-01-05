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
static const char *ng0 = "E:/Facultate/An3/Sem 1/AC/Tema3/tema/build/bin/reference/ram.v";
static const char *ng1 = "test.coe";
static const char *ng2 = "r";
static const char *ng3 = "error opening data file\n";
static const char *ng4 = "MEMORY_INITIALIZATION_RADIX=16;\n";
static const char *ng5 = "MEMORY_INITIALIZATION_VECTOR=\n";
static int ng6[] = {0, 0};
static int ng7[] = {1024, 0};
static const char *ng8 = "%x,\n";
static int ng9[] = {1, 0};
static const char *ng10 = "error reading test data\n";



static void Initial_52_0(char *t0)
{
    char t1[8];
    char t18[8];
    char t20[8];
    char t24[8];
    char t31[8];
    char t39[8];
    char t80[8];
    char t84[8];
    char t94[8];
    char t97[8];
    char t98[8];
    char t120[8];
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
    char *t21;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    int t63;
    int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    char *t79;
    char *t81;
    char *t82;
    char *t83;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t95;
    char *t96;
    char *t99;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    char *t108;
    unsigned int t109;
    int t110;
    char *t111;
    unsigned int t112;
    int t113;
    int t114;
    unsigned int t115;
    unsigned int t116;
    int t117;
    int t118;
    char *t119;
    char *t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;

LAB0:    xsi_set_current_line(52, ng0);

LAB2:    xsi_set_current_line(53, ng0);
    *((int *)t1) = xsi_vlogfile_file_open_of_cname_ctype(ng1, ng2);
    t2 = (t1 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t1, 0, 0, 32);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 3208);
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
LAB9:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    *((int *)t1) = xsi_vlogfile_fscanf(*((unsigned int *)t4), ng4, 1, t0);
    t5 = (t1 + 4);
    *((int *)t5) = 0;
    t11 = (t0 + 3528);
    xsi_vlogvar_assign_value(t11, t1, 0, 0, 32);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    *((int *)t1) = xsi_vlogfile_fscanf(*((unsigned int *)t4), ng5, 1, t0);
    t5 = (t1 + 4);
    *((int *)t5) = 0;
    t11 = (t0 + 3528);
    xsi_vlogvar_assign_value(t11, t1, 0, 0, 32);
    xsi_set_current_line(60, ng0);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB11:    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t1, 0, 8);
    xsi_vlog_signed_less(t1, 32, t4, 32, t5, 32);
    memset(t18, 0, 8);
    t11 = (t1 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t1);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t11) != 0)
        goto LAB14;

LAB15:    t19 = (t18 + 4);
    t13 = *((unsigned int *)t18);
    t14 = *((unsigned int *)t19);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB16;

LAB17:    memcpy(t39, t18, 8);

LAB18:    t71 = (t39 + 4);
    t72 = *((unsigned int *)t71);
    t73 = (~(t72));
    t74 = *((unsigned int *)t39);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t4));

LAB1:    return;
LAB3:    *((unsigned int *)t1) = 1;
    goto LAB6;

LAB7:    xsi_set_current_line(54, ng0);

LAB10:    xsi_set_current_line(55, ng0);
    xsi_vlogfile_write(0, 0, 1, ng3, 1, t0);
    xsi_set_current_line(56, ng0);
    xsi_vlog_finish(1);
    goto LAB9;

LAB12:    *((unsigned int *)t18) = 1;
    goto LAB15;

LAB14:    t12 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB15;

LAB16:    t21 = (t0 + 3208);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    *((int *)t24) = xsi_vlogfile_feof(*((unsigned int *)t23));
    t25 = (t24 + 4);
    *((int *)t25) = 0;
    memset(t20, 0, 8);
    t26 = (t24 + 4);
    t16 = *((unsigned int *)t26);
    t17 = (~(t16));
    t27 = *((unsigned int *)t24);
    t28 = (t27 & t17);
    t29 = (t28 & 4294967295U);
    if (t29 != 0)
        goto LAB22;

LAB20:    if (*((unsigned int *)t26) == 0)
        goto LAB19;

LAB21:    t30 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t30) = 1;

LAB22:    memset(t31, 0, 8);
    t32 = (t20 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t20);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t32) != 0)
        goto LAB25;

LAB26:    t40 = *((unsigned int *)t18);
    t41 = *((unsigned int *)t31);
    t42 = (t40 & t41);
    *((unsigned int *)t39) = t42;
    t43 = (t18 + 4);
    t44 = (t31 + 4);
    t45 = (t39 + 4);
    t46 = *((unsigned int *)t43);
    t47 = *((unsigned int *)t44);
    t48 = (t46 | t47);
    *((unsigned int *)t45) = t48;
    t49 = *((unsigned int *)t45);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB27;

LAB28:
LAB29:    goto LAB18;

LAB19:    *((unsigned int *)t20) = 1;
    goto LAB22;

LAB23:    *((unsigned int *)t31) = 1;
    goto LAB26;

LAB25:    t38 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB26;

LAB27:    t51 = *((unsigned int *)t39);
    t52 = *((unsigned int *)t45);
    *((unsigned int *)t39) = (t51 | t52);
    t53 = (t18 + 4);
    t54 = (t31 + 4);
    t55 = *((unsigned int *)t18);
    t56 = (~(t55));
    t57 = *((unsigned int *)t53);
    t58 = (~(t57));
    t59 = *((unsigned int *)t31);
    t60 = (~(t59));
    t61 = *((unsigned int *)t54);
    t62 = (~(t61));
    t63 = (t56 & t58);
    t64 = (t60 & t62);
    t65 = (~(t63));
    t66 = (~(t64));
    t67 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t67 & t65);
    t68 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t68 & t66);
    t69 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t69 & t65);
    t70 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t70 & t66);
    goto LAB29;

LAB30:    xsi_set_current_line(60, ng0);

LAB32:    xsi_set_current_line(61, ng0);
    t77 = (t0 + 3208);
    t78 = (t77 + 56U);
    t79 = *((char **)t78);
    t81 = (t0 + 3048);
    t82 = (t81 + 56U);
    t83 = *((char **)t82);
    t85 = (t0 + 3048);
    t86 = (t85 + 72U);
    t87 = *((char **)t86);
    t88 = (t0 + 3048);
    t89 = (t88 + 64U);
    t90 = *((char **)t89);
    t91 = (t0 + 3368);
    t92 = (t91 + 56U);
    t93 = *((char **)t92);
    xsi_vlog_generic_get_array_select_value(t84, 16, t83, t87, t90, 2, 1, t93, 32, 1);
    xsi_vlog_bit_copy(t80, 0, t84, 0, 16);
    *((int *)t94) = xsi_vlogfile_fscanf(*((unsigned int *)t79), ng8, 2, t0, (char)118, t80, 16);
    t95 = (t94 + 4);
    *((int *)t95) = 0;
    t96 = (t0 + 3048);
    t99 = (t0 + 3048);
    t100 = (t99 + 72U);
    t101 = *((char **)t100);
    t102 = (t0 + 3048);
    t103 = (t102 + 64U);
    t104 = *((char **)t103);
    t105 = (t0 + 3368);
    t106 = (t105 + 56U);
    t107 = *((char **)t106);
    xsi_vlog_generic_convert_array_indices(t97, t98, t101, t104, 2, 1, t107, 32, 1);
    t108 = (t97 + 4);
    t109 = *((unsigned int *)t108);
    t110 = (!(t109));
    t111 = (t98 + 4);
    t112 = *((unsigned int *)t111);
    t113 = (!(t112));
    t114 = (t110 && t113);
    if (t114 == 1)
        goto LAB33;

LAB34:    t119 = ((char*)((ng9)));
    memset(t120, 0, 8);
    xsi_vlog_signed_not_equal(t120, 32, t94, 32, t119, 32);
    t121 = (t120 + 4);
    t122 = *((unsigned int *)t121);
    t123 = (~(t122));
    t124 = *((unsigned int *)t120);
    t125 = (t124 & t123);
    t126 = (t125 != 0);
    if (t126 > 0)
        goto LAB35;

LAB36:
LAB37:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t1, 0, 8);
    xsi_vlog_signed_add(t1, 32, t4, 32, t5, 32);
    t11 = (t0 + 3368);
    xsi_vlogvar_assign_value(t11, t1, 0, 0, 32);
    goto LAB11;

LAB33:    t115 = *((unsigned int *)t97);
    t116 = *((unsigned int *)t98);
    t117 = (t115 - t116);
    t118 = (t117 + 1);
    xsi_vlogvar_assign_value(t96, t80, 0, *((unsigned int *)t98), t118);
    goto LAB34;

LAB35:    xsi_set_current_line(61, ng0);

LAB38:    xsi_set_current_line(62, ng0);
    xsi_vlogfile_write(0, 0, 1, ng10, 1, t0);
    xsi_set_current_line(63, ng0);
    xsi_vlog_finish(1);
    goto LAB37;

}

static void Always_69_1(char *t0)
{
    char t20[8];
    char t21[8];
    char *t1;
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
    char *t18;
    char *t19;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    int t31;
    char *t32;
    unsigned int t33;
    int t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    int t38;
    int t39;

LAB0:    t1 = (t0 + 4696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 5016);
    *((int *)t2) = 1;
    t3 = (t0 + 4728);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(69, ng0);

LAB5:    xsi_set_current_line(70, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB15;

LAB16:
LAB17:    goto LAB2;

LAB6:    xsi_set_current_line(70, ng0);

LAB9:    xsi_set_current_line(71, ng0);
    t11 = (t0 + 1528U);
    t12 = *((char **)t11);
    t11 = (t12 + 4);
    t13 = *((unsigned int *)t11);
    t14 = (~(t13));
    t15 = *((unsigned int *)t12);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3048);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t18 = (t0 + 3048);
    t19 = (t18 + 64U);
    t22 = *((char **)t19);
    t23 = (t0 + 1368U);
    t24 = *((char **)t23);
    xsi_vlog_generic_get_array_select_value(t20, 16, t4, t12, t22, 2, 1, t24, 10, 2);
    t23 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t23, t20, 0, 0, 16, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(72, ng0);
    t18 = (t0 + 1208U);
    t19 = *((char **)t18);
    t18 = (t0 + 3048);
    t22 = (t0 + 3048);
    t23 = (t22 + 72U);
    t24 = *((char **)t23);
    t25 = (t0 + 3048);
    t26 = (t25 + 64U);
    t27 = *((char **)t26);
    t28 = (t0 + 1368U);
    t29 = *((char **)t28);
    xsi_vlog_generic_convert_array_indices(t20, t21, t24, t27, 2, 1, t29, 10, 2);
    t28 = (t20 + 4);
    t30 = *((unsigned int *)t28);
    t31 = (!(t30));
    t32 = (t21 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (!(t33));
    t35 = (t31 && t34);
    if (t35 == 1)
        goto LAB13;

LAB14:    goto LAB12;

LAB13:    t36 = *((unsigned int *)t20);
    t37 = *((unsigned int *)t21);
    t38 = (t36 - t37);
    t39 = (t38 + 1);
    xsi_vlogvar_wait_assign_value(t18, t19, 0, *((unsigned int *)t21), t39, 0LL);
    goto LAB14;

LAB15:    xsi_set_current_line(76, ng0);

LAB18:    xsi_set_current_line(77, ng0);
    t4 = (t0 + 2328U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (~(t13));
    t15 = *((unsigned int *)t5);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB19;

LAB20:
LAB21:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3048);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t18 = (t0 + 3048);
    t19 = (t18 + 64U);
    t22 = *((char **)t19);
    t23 = (t0 + 2168U);
    t24 = *((char **)t23);
    xsi_vlog_generic_get_array_select_value(t20, 16, t4, t12, t22, 2, 1, t24, 10, 2);
    t23 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t23, t20, 0, 0, 16, 0LL);
    goto LAB17;

LAB19:    xsi_set_current_line(78, ng0);
    t11 = (t0 + 2008U);
    t12 = *((char **)t11);
    t11 = (t0 + 3048);
    t18 = (t0 + 3048);
    t19 = (t18 + 72U);
    t22 = *((char **)t19);
    t23 = (t0 + 3048);
    t24 = (t23 + 64U);
    t25 = *((char **)t24);
    t26 = (t0 + 2168U);
    t27 = *((char **)t26);
    xsi_vlog_generic_convert_array_indices(t20, t21, t22, t25, 2, 1, t27, 10, 2);
    t26 = (t20 + 4);
    t30 = *((unsigned int *)t26);
    t31 = (!(t30));
    t28 = (t21 + 4);
    t33 = *((unsigned int *)t28);
    t34 = (!(t33));
    t35 = (t31 && t34);
    if (t35 == 1)
        goto LAB22;

LAB23:    goto LAB21;

LAB22:    t36 = *((unsigned int *)t20);
    t37 = *((unsigned int *)t21);
    t38 = (t36 - t37);
    t39 = (t38 + 1);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, *((unsigned int *)t21), t39, 0LL);
    goto LAB23;

}


extern void reference_m_00000000002927503033_2078607169_init()
{
	static char *pe[] = {(void *)Initial_52_0,(void *)Always_69_1};
	xsi_register_didat("reference_m_00000000002927503033_2078607169", "isim/tester.exe.sim/reference/m_00000000002927503033_2078607169.didat");
	xsi_register_executes(pe);
}
