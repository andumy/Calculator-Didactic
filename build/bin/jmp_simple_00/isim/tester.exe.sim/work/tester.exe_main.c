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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    uut_m_00000000002658683209_3341471693_init();
    uut_m_00000000001117543562_2613466970_init();
    tester_m_00000000002927503033_0450250084_init();
    uut_m_00000000002300281207_4248780375_init();
    uut_m_00000000003572544915_1594369722_init();
    uut_m_00000000002144044857_1614946996_init();
    uut_m_00000000001497114223_3980398345_init();
    reference_m_00000000002658683209_2866092410_init();
    reference_m_00000000001117543562_2933294405_init();
    reference_m_00000000002927503033_2078607169_init();
    reference_m_00000000002300281207_3838217506_init();
    reference_m_00000000003572544915_1780020389_init();
    reference_m_00000000001172594829_1794418630_init();
    reference_m_00000000001497114223_3629178134_init();
    tester_m_00000000001937753462_2613777659_init();
    test_m_00000000003363540012_2014167163_init();


    xsi_register_tops("test_m_00000000003363540012_2014167163");


    return xsi_run_simulation(argc, argv);

}
