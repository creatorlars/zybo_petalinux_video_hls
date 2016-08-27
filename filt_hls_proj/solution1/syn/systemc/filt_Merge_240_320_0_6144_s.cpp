// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.2
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "filt_Merge_240_320_0_6144_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic filt_Merge_240_320_0_6144_s::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic filt_Merge_240_320_0_6144_s::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<4> filt_Merge_240_320_0_6144_s::ap_ST_st1_fsm_0 = "1";
const sc_lv<4> filt_Merge_240_320_0_6144_s::ap_ST_st2_fsm_1 = "10";
const sc_lv<4> filt_Merge_240_320_0_6144_s::ap_ST_pp0_stg0_fsm_2 = "100";
const sc_lv<4> filt_Merge_240_320_0_6144_s::ap_ST_st5_fsm_3 = "1000";
const sc_lv<32> filt_Merge_240_320_0_6144_s::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<1> filt_Merge_240_320_0_6144_s::ap_const_lv1_1 = "1";
const sc_lv<32> filt_Merge_240_320_0_6144_s::ap_const_lv32_2 = "10";
const sc_lv<1> filt_Merge_240_320_0_6144_s::ap_const_lv1_0 = "0";
const sc_lv<32> filt_Merge_240_320_0_6144_s::ap_const_lv32_1 = "1";
const sc_lv<32> filt_Merge_240_320_0_6144_s::ap_const_lv32_3 = "11";
const sc_lv<8> filt_Merge_240_320_0_6144_s::ap_const_lv8_0 = "00000000";
const sc_lv<9> filt_Merge_240_320_0_6144_s::ap_const_lv9_0 = "000000000";
const sc_lv<8> filt_Merge_240_320_0_6144_s::ap_const_lv8_F0 = "11110000";
const sc_lv<8> filt_Merge_240_320_0_6144_s::ap_const_lv8_1 = "1";
const sc_lv<9> filt_Merge_240_320_0_6144_s::ap_const_lv9_140 = "101000000";
const sc_lv<9> filt_Merge_240_320_0_6144_s::ap_const_lv9_1 = "1";

filt_Merge_240_320_0_6144_s::filt_Merge_240_320_0_6144_s(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_done_reg );
    sensitive << ( exitcond2_fu_150_p2 );
    sensitive << ( ap_sig_cseq_ST_st2_fsm_1 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_sig_cseq_ST_st1_fsm_0 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( exitcond2_fu_150_p2 );
    sensitive << ( ap_sig_cseq_ST_st2_fsm_1 );

    SC_METHOD(thread_ap_sig_122);
    sensitive << ( src0_data_stream_V_empty_n );
    sensitive << ( src1_data_stream_V_empty_n );
    sensitive << ( src2_data_stream_V_empty_n );
    sensitive << ( src3_data_stream_V_empty_n );
    sensitive << ( dst_data_stream_0_V_full_n );
    sensitive << ( dst_data_stream_1_V_full_n );
    sensitive << ( dst_data_stream_2_V_full_n );
    sensitive << ( dst_data_stream_3_V_full_n );
    sensitive << ( exitcond_reg_183 );

    SC_METHOD(thread_ap_sig_144);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_sig_150);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );

    SC_METHOD(thread_ap_sig_22);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_sig_67);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_sig_94);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_sig_cseq_ST_pp0_stg0_fsm_2);
    sensitive << ( ap_sig_67 );

    SC_METHOD(thread_ap_sig_cseq_ST_st1_fsm_0);
    sensitive << ( ap_sig_22 );

    SC_METHOD(thread_ap_sig_cseq_ST_st2_fsm_1);
    sensitive << ( ap_sig_94 );

    SC_METHOD(thread_ap_sig_cseq_ST_st5_fsm_3);
    sensitive << ( ap_sig_144 );

    SC_METHOD(thread_dst_data_stream_0_V_blk_n);
    sensitive << ( dst_data_stream_0_V_full_n );
    sensitive << ( ap_sig_cseq_ST_pp0_stg0_fsm_2 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( exitcond_reg_183 );

    SC_METHOD(thread_dst_data_stream_0_V_din);
    sensitive << ( src0_data_stream_V_dout );
    sensitive << ( ap_sig_cseq_ST_pp0_stg0_fsm_2 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( exitcond_reg_183 );
    sensitive << ( ap_sig_122 );

    SC_METHOD(thread_dst_data_stream_0_V_write);
    sensitive << ( ap_sig_cseq_ST_pp0_stg0_fsm_2 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( exitcond_reg_183 );
    sensitive << ( ap_sig_122 );

    SC_METHOD(thread_dst_data_stream_1_V_blk_n);
    sensitive << ( dst_data_stream_1_V_full_n );
    sensitive << ( ap_sig_cseq_ST_pp0_stg0_fsm_2 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( exitcond_reg_183 );

    SC_METHOD(thread_dst_data_stream_1_V_din);
    sensitive << ( src1_data_stream_V_dout );
    sensitive << ( ap_sig_cseq_ST_pp0_stg0_fsm_2 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( exitcond_reg_183 );
    sensitive << ( ap_sig_122 );

    SC_METHOD(thread_dst_data_stream_1_V_write);
    sensitive << ( ap_sig_cseq_ST_pp0_stg0_fsm_2 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( exitcond_reg_183 );
    sensitive << ( ap_sig_122 );

    SC_METHOD(thread_dst_data_stream_2_V_blk_n);
    sensitive << ( dst_data_stream_2_V_full_n );
    sensitive << ( ap_sig_cseq_ST_pp0_stg0_fsm_2 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( exitcond_reg_183 );

    SC_METHOD(thread_dst_data_stream_2_V_din);
    sensitive << ( src2_data_stream_V_dout );
    sensitive << ( ap_sig_cseq_ST_pp0_stg0_fsm_2 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( exitcond_reg_183 );
    sensitive << ( ap_sig_122 );

    SC_METHOD(thread_dst_data_stream_2_V_write);
    sensitive << ( ap_sig_cseq_ST_pp0_stg0_fsm_2 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( exitcond_reg_183 );
    sensitive << ( ap_sig_122 );

    SC_METHOD(thread_dst_data_stream_3_V_blk_n);
    sensitive << ( dst_data_stream_3_V_full_n );
    sensitive << ( ap_sig_cseq_ST_pp0_stg0_fsm_2 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( exitcond_reg_183 );

    SC_METHOD(thread_dst_data_stream_3_V_din);
    sensitive << ( src3_data_stream_V_dout );
    sensitive << ( ap_sig_cseq_ST_pp0_stg0_fsm_2 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( exitcond_reg_183 );
    sensitive << ( ap_sig_122 );

    SC_METHOD(thread_dst_data_stream_3_V_write);
    sensitive << ( ap_sig_cseq_ST_pp0_stg0_fsm_2 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( exitcond_reg_183 );
    sensitive << ( ap_sig_122 );

    SC_METHOD(thread_exitcond2_fu_150_p2);
    sensitive << ( ap_sig_cseq_ST_st2_fsm_1 );
    sensitive << ( p_s_reg_128 );

    SC_METHOD(thread_exitcond_fu_162_p2);
    sensitive << ( ap_sig_cseq_ST_pp0_stg0_fsm_2 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( ap_reg_ppiten_pp0_it0 );
    sensitive << ( p_1_reg_139 );
    sensitive << ( ap_sig_122 );

    SC_METHOD(thread_i_V_fu_156_p2);
    sensitive << ( p_s_reg_128 );

    SC_METHOD(thread_j_V_fu_168_p2);
    sensitive << ( p_1_reg_139 );

    SC_METHOD(thread_src0_data_stream_V_blk_n);
    sensitive << ( src0_data_stream_V_empty_n );
    sensitive << ( ap_sig_cseq_ST_pp0_stg0_fsm_2 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( exitcond_reg_183 );

    SC_METHOD(thread_src0_data_stream_V_read);
    sensitive << ( ap_sig_cseq_ST_pp0_stg0_fsm_2 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( exitcond_reg_183 );
    sensitive << ( ap_sig_122 );

    SC_METHOD(thread_src1_data_stream_V_blk_n);
    sensitive << ( src1_data_stream_V_empty_n );
    sensitive << ( ap_sig_cseq_ST_pp0_stg0_fsm_2 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( exitcond_reg_183 );

    SC_METHOD(thread_src1_data_stream_V_read);
    sensitive << ( ap_sig_cseq_ST_pp0_stg0_fsm_2 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( exitcond_reg_183 );
    sensitive << ( ap_sig_122 );

    SC_METHOD(thread_src2_data_stream_V_blk_n);
    sensitive << ( src2_data_stream_V_empty_n );
    sensitive << ( ap_sig_cseq_ST_pp0_stg0_fsm_2 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( exitcond_reg_183 );

    SC_METHOD(thread_src2_data_stream_V_read);
    sensitive << ( ap_sig_cseq_ST_pp0_stg0_fsm_2 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( exitcond_reg_183 );
    sensitive << ( ap_sig_122 );

    SC_METHOD(thread_src3_data_stream_V_blk_n);
    sensitive << ( src3_data_stream_V_empty_n );
    sensitive << ( ap_sig_cseq_ST_pp0_stg0_fsm_2 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( exitcond_reg_183 );

    SC_METHOD(thread_src3_data_stream_V_read);
    sensitive << ( ap_sig_cseq_ST_pp0_stg0_fsm_2 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( exitcond_reg_183 );
    sensitive << ( ap_sig_122 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( ap_reg_ppiten_pp0_it0 );
    sensitive << ( exitcond2_fu_150_p2 );
    sensitive << ( exitcond_fu_162_p2 );
    sensitive << ( ap_sig_122 );
    sensitive << ( ap_sig_150 );

    ap_done_reg = SC_LOGIC_0;
    ap_CS_fsm = "0001";
    ap_reg_ppiten_pp0_it1 = SC_LOGIC_0;
    ap_reg_ppiten_pp0_it0 = SC_LOGIC_0;
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "filt_Merge_240_320_0_6144_s_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_continue, "(port)ap_continue");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, src0_data_stream_V_dout, "(port)src0_data_stream_V_dout");
    sc_trace(mVcdFile, src0_data_stream_V_empty_n, "(port)src0_data_stream_V_empty_n");
    sc_trace(mVcdFile, src0_data_stream_V_read, "(port)src0_data_stream_V_read");
    sc_trace(mVcdFile, src1_data_stream_V_dout, "(port)src1_data_stream_V_dout");
    sc_trace(mVcdFile, src1_data_stream_V_empty_n, "(port)src1_data_stream_V_empty_n");
    sc_trace(mVcdFile, src1_data_stream_V_read, "(port)src1_data_stream_V_read");
    sc_trace(mVcdFile, src2_data_stream_V_dout, "(port)src2_data_stream_V_dout");
    sc_trace(mVcdFile, src2_data_stream_V_empty_n, "(port)src2_data_stream_V_empty_n");
    sc_trace(mVcdFile, src2_data_stream_V_read, "(port)src2_data_stream_V_read");
    sc_trace(mVcdFile, src3_data_stream_V_dout, "(port)src3_data_stream_V_dout");
    sc_trace(mVcdFile, src3_data_stream_V_empty_n, "(port)src3_data_stream_V_empty_n");
    sc_trace(mVcdFile, src3_data_stream_V_read, "(port)src3_data_stream_V_read");
    sc_trace(mVcdFile, dst_data_stream_0_V_din, "(port)dst_data_stream_0_V_din");
    sc_trace(mVcdFile, dst_data_stream_0_V_full_n, "(port)dst_data_stream_0_V_full_n");
    sc_trace(mVcdFile, dst_data_stream_0_V_write, "(port)dst_data_stream_0_V_write");
    sc_trace(mVcdFile, dst_data_stream_1_V_din, "(port)dst_data_stream_1_V_din");
    sc_trace(mVcdFile, dst_data_stream_1_V_full_n, "(port)dst_data_stream_1_V_full_n");
    sc_trace(mVcdFile, dst_data_stream_1_V_write, "(port)dst_data_stream_1_V_write");
    sc_trace(mVcdFile, dst_data_stream_2_V_din, "(port)dst_data_stream_2_V_din");
    sc_trace(mVcdFile, dst_data_stream_2_V_full_n, "(port)dst_data_stream_2_V_full_n");
    sc_trace(mVcdFile, dst_data_stream_2_V_write, "(port)dst_data_stream_2_V_write");
    sc_trace(mVcdFile, dst_data_stream_3_V_din, "(port)dst_data_stream_3_V_din");
    sc_trace(mVcdFile, dst_data_stream_3_V_full_n, "(port)dst_data_stream_3_V_full_n");
    sc_trace(mVcdFile, dst_data_stream_3_V_write, "(port)dst_data_stream_3_V_write");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_done_reg, "ap_done_reg");
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_sig_cseq_ST_st1_fsm_0, "ap_sig_cseq_ST_st1_fsm_0");
    sc_trace(mVcdFile, ap_sig_22, "ap_sig_22");
    sc_trace(mVcdFile, src0_data_stream_V_blk_n, "src0_data_stream_V_blk_n");
    sc_trace(mVcdFile, ap_sig_cseq_ST_pp0_stg0_fsm_2, "ap_sig_cseq_ST_pp0_stg0_fsm_2");
    sc_trace(mVcdFile, ap_sig_67, "ap_sig_67");
    sc_trace(mVcdFile, ap_reg_ppiten_pp0_it1, "ap_reg_ppiten_pp0_it1");
    sc_trace(mVcdFile, ap_reg_ppiten_pp0_it0, "ap_reg_ppiten_pp0_it0");
    sc_trace(mVcdFile, exitcond_reg_183, "exitcond_reg_183");
    sc_trace(mVcdFile, src1_data_stream_V_blk_n, "src1_data_stream_V_blk_n");
    sc_trace(mVcdFile, src2_data_stream_V_blk_n, "src2_data_stream_V_blk_n");
    sc_trace(mVcdFile, src3_data_stream_V_blk_n, "src3_data_stream_V_blk_n");
    sc_trace(mVcdFile, dst_data_stream_0_V_blk_n, "dst_data_stream_0_V_blk_n");
    sc_trace(mVcdFile, dst_data_stream_1_V_blk_n, "dst_data_stream_1_V_blk_n");
    sc_trace(mVcdFile, dst_data_stream_2_V_blk_n, "dst_data_stream_2_V_blk_n");
    sc_trace(mVcdFile, dst_data_stream_3_V_blk_n, "dst_data_stream_3_V_blk_n");
    sc_trace(mVcdFile, p_1_reg_139, "p_1_reg_139");
    sc_trace(mVcdFile, exitcond2_fu_150_p2, "exitcond2_fu_150_p2");
    sc_trace(mVcdFile, ap_sig_cseq_ST_st2_fsm_1, "ap_sig_cseq_ST_st2_fsm_1");
    sc_trace(mVcdFile, ap_sig_94, "ap_sig_94");
    sc_trace(mVcdFile, i_V_fu_156_p2, "i_V_fu_156_p2");
    sc_trace(mVcdFile, i_V_reg_178, "i_V_reg_178");
    sc_trace(mVcdFile, exitcond_fu_162_p2, "exitcond_fu_162_p2");
    sc_trace(mVcdFile, ap_sig_122, "ap_sig_122");
    sc_trace(mVcdFile, j_V_fu_168_p2, "j_V_fu_168_p2");
    sc_trace(mVcdFile, p_s_reg_128, "p_s_reg_128");
    sc_trace(mVcdFile, ap_sig_cseq_ST_st5_fsm_3, "ap_sig_cseq_ST_st5_fsm_3");
    sc_trace(mVcdFile, ap_sig_144, "ap_sig_144");
    sc_trace(mVcdFile, ap_sig_150, "ap_sig_150");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
}

filt_Merge_240_320_0_6144_s::~filt_Merge_240_320_0_6144_s() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void filt_Merge_240_320_0_6144_s::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_st1_fsm_0;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_done_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_continue.read())) {
            ap_done_reg = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
                    !esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_fu_150_p2.read()))) {
            ap_done_reg = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_ppiten_pp0_it0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_2.read()) && 
             !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && ap_sig_122.read()) && 
             !esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_162_p2.read()))) {
            ap_reg_ppiten_pp0_it0 = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
                    esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_fu_150_p2.read()))) {
            ap_reg_ppiten_pp0_it0 = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_ppiten_pp0_it1 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_2.read()) && 
             !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && ap_sig_122.read()) && 
             esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_162_p2.read()))) {
            ap_reg_ppiten_pp0_it1 = ap_const_logic_1;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
                     esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_fu_150_p2.read())) || 
                    (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_2.read()) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && ap_sig_122.read()) && 
                     !esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_162_p2.read())))) {
            ap_reg_ppiten_pp0_it1 = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && ap_sig_122.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_162_p2.read()))) {
        p_1_reg_139 = j_V_fu_168_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_fu_150_p2.read()))) {
        p_1_reg_139 = ap_const_lv9_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
         !ap_sig_150.read())) {
        p_s_reg_128 = ap_const_lv8_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st5_fsm_3.read())) {
        p_s_reg_128 = i_V_reg_178.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_2.read()) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && ap_sig_122.read()))) {
        exitcond_reg_183 = exitcond_fu_162_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        i_V_reg_178 = i_V_fu_156_p2.read();
    }
}

void filt_Merge_240_320_0_6144_s::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_done_reg.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_fu_150_p2.read())))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void filt_Merge_240_320_0_6144_s::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void filt_Merge_240_320_0_6144_s::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         !esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_fu_150_p2.read()))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void filt_Merge_240_320_0_6144_s::thread_ap_sig_122() {
    ap_sig_122 = ((esl_seteq<1,1,1>(exitcond_reg_183.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(src0_data_stream_V_empty_n.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(exitcond_reg_183.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(src1_data_stream_V_empty_n.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(exitcond_reg_183.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(src2_data_stream_V_empty_n.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(exitcond_reg_183.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(src3_data_stream_V_empty_n.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(exitcond_reg_183.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(dst_data_stream_0_V_full_n.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(exitcond_reg_183.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(dst_data_stream_1_V_full_n.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(exitcond_reg_183.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(dst_data_stream_2_V_full_n.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(exitcond_reg_183.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(dst_data_stream_3_V_full_n.read(), ap_const_logic_0)));
}

void filt_Merge_240_320_0_6144_s::thread_ap_sig_144() {
    ap_sig_144 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(3, 3));
}

void filt_Merge_240_320_0_6144_s::thread_ap_sig_150() {
    ap_sig_150 = (esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1));
}

void filt_Merge_240_320_0_6144_s::thread_ap_sig_22() {
    ap_sig_22 = esl_seteq<1,1,1>(ap_CS_fsm.read().range(0, 0), ap_const_lv1_1);
}

void filt_Merge_240_320_0_6144_s::thread_ap_sig_67() {
    ap_sig_67 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(2, 2));
}

void filt_Merge_240_320_0_6144_s::thread_ap_sig_94() {
    ap_sig_94 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(1, 1));
}

void filt_Merge_240_320_0_6144_s::thread_ap_sig_cseq_ST_pp0_stg0_fsm_2() {
    if (ap_sig_67.read()) {
        ap_sig_cseq_ST_pp0_stg0_fsm_2 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg0_fsm_2 = ap_const_logic_0;
    }
}

void filt_Merge_240_320_0_6144_s::thread_ap_sig_cseq_ST_st1_fsm_0() {
    if (ap_sig_22.read()) {
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_0;
    }
}

void filt_Merge_240_320_0_6144_s::thread_ap_sig_cseq_ST_st2_fsm_1() {
    if (ap_sig_94.read()) {
        ap_sig_cseq_ST_st2_fsm_1 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st2_fsm_1 = ap_const_logic_0;
    }
}

void filt_Merge_240_320_0_6144_s::thread_ap_sig_cseq_ST_st5_fsm_3() {
    if (ap_sig_144.read()) {
        ap_sig_cseq_ST_st5_fsm_3 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st5_fsm_3 = ap_const_logic_0;
    }
}

void filt_Merge_240_320_0_6144_s::thread_dst_data_stream_0_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond_reg_183.read(), ap_const_lv1_0))) {
        dst_data_stream_0_V_blk_n = dst_data_stream_0_V_full_n.read();
    } else {
        dst_data_stream_0_V_blk_n = ap_const_logic_1;
    }
}

void filt_Merge_240_320_0_6144_s::thread_dst_data_stream_0_V_din() {
    dst_data_stream_0_V_din = src0_data_stream_V_dout.read();
}

void filt_Merge_240_320_0_6144_s::thread_dst_data_stream_0_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond_reg_183.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && ap_sig_122.read()))) {
        dst_data_stream_0_V_write = ap_const_logic_1;
    } else {
        dst_data_stream_0_V_write = ap_const_logic_0;
    }
}

void filt_Merge_240_320_0_6144_s::thread_dst_data_stream_1_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond_reg_183.read(), ap_const_lv1_0))) {
        dst_data_stream_1_V_blk_n = dst_data_stream_1_V_full_n.read();
    } else {
        dst_data_stream_1_V_blk_n = ap_const_logic_1;
    }
}

void filt_Merge_240_320_0_6144_s::thread_dst_data_stream_1_V_din() {
    dst_data_stream_1_V_din = src1_data_stream_V_dout.read();
}

void filt_Merge_240_320_0_6144_s::thread_dst_data_stream_1_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond_reg_183.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && ap_sig_122.read()))) {
        dst_data_stream_1_V_write = ap_const_logic_1;
    } else {
        dst_data_stream_1_V_write = ap_const_logic_0;
    }
}

void filt_Merge_240_320_0_6144_s::thread_dst_data_stream_2_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond_reg_183.read(), ap_const_lv1_0))) {
        dst_data_stream_2_V_blk_n = dst_data_stream_2_V_full_n.read();
    } else {
        dst_data_stream_2_V_blk_n = ap_const_logic_1;
    }
}

void filt_Merge_240_320_0_6144_s::thread_dst_data_stream_2_V_din() {
    dst_data_stream_2_V_din = src2_data_stream_V_dout.read();
}

void filt_Merge_240_320_0_6144_s::thread_dst_data_stream_2_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond_reg_183.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && ap_sig_122.read()))) {
        dst_data_stream_2_V_write = ap_const_logic_1;
    } else {
        dst_data_stream_2_V_write = ap_const_logic_0;
    }
}

void filt_Merge_240_320_0_6144_s::thread_dst_data_stream_3_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond_reg_183.read(), ap_const_lv1_0))) {
        dst_data_stream_3_V_blk_n = dst_data_stream_3_V_full_n.read();
    } else {
        dst_data_stream_3_V_blk_n = ap_const_logic_1;
    }
}

void filt_Merge_240_320_0_6144_s::thread_dst_data_stream_3_V_din() {
    dst_data_stream_3_V_din = src3_data_stream_V_dout.read();
}

void filt_Merge_240_320_0_6144_s::thread_dst_data_stream_3_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond_reg_183.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && ap_sig_122.read()))) {
        dst_data_stream_3_V_write = ap_const_logic_1;
    } else {
        dst_data_stream_3_V_write = ap_const_logic_0;
    }
}

void filt_Merge_240_320_0_6144_s::thread_exitcond2_fu_150_p2() {
    exitcond2_fu_150_p2 = (!p_s_reg_128.read().is_01() || !ap_const_lv8_F0.is_01())? sc_lv<1>(): sc_lv<1>(p_s_reg_128.read() == ap_const_lv8_F0);
}

void filt_Merge_240_320_0_6144_s::thread_exitcond_fu_162_p2() {
    exitcond_fu_162_p2 = (!p_1_reg_139.read().is_01() || !ap_const_lv9_140.is_01())? sc_lv<1>(): sc_lv<1>(p_1_reg_139.read() == ap_const_lv9_140);
}

void filt_Merge_240_320_0_6144_s::thread_i_V_fu_156_p2() {
    i_V_fu_156_p2 = (!p_s_reg_128.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(p_s_reg_128.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void filt_Merge_240_320_0_6144_s::thread_j_V_fu_168_p2() {
    j_V_fu_168_p2 = (!p_1_reg_139.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(p_1_reg_139.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void filt_Merge_240_320_0_6144_s::thread_src0_data_stream_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond_reg_183.read(), ap_const_lv1_0))) {
        src0_data_stream_V_blk_n = src0_data_stream_V_empty_n.read();
    } else {
        src0_data_stream_V_blk_n = ap_const_logic_1;
    }
}

void filt_Merge_240_320_0_6144_s::thread_src0_data_stream_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond_reg_183.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && ap_sig_122.read()))) {
        src0_data_stream_V_read = ap_const_logic_1;
    } else {
        src0_data_stream_V_read = ap_const_logic_0;
    }
}

void filt_Merge_240_320_0_6144_s::thread_src1_data_stream_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond_reg_183.read(), ap_const_lv1_0))) {
        src1_data_stream_V_blk_n = src1_data_stream_V_empty_n.read();
    } else {
        src1_data_stream_V_blk_n = ap_const_logic_1;
    }
}

void filt_Merge_240_320_0_6144_s::thread_src1_data_stream_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond_reg_183.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && ap_sig_122.read()))) {
        src1_data_stream_V_read = ap_const_logic_1;
    } else {
        src1_data_stream_V_read = ap_const_logic_0;
    }
}

void filt_Merge_240_320_0_6144_s::thread_src2_data_stream_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond_reg_183.read(), ap_const_lv1_0))) {
        src2_data_stream_V_blk_n = src2_data_stream_V_empty_n.read();
    } else {
        src2_data_stream_V_blk_n = ap_const_logic_1;
    }
}

void filt_Merge_240_320_0_6144_s::thread_src2_data_stream_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond_reg_183.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && ap_sig_122.read()))) {
        src2_data_stream_V_read = ap_const_logic_1;
    } else {
        src2_data_stream_V_read = ap_const_logic_0;
    }
}

void filt_Merge_240_320_0_6144_s::thread_src3_data_stream_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond_reg_183.read(), ap_const_lv1_0))) {
        src3_data_stream_V_blk_n = src3_data_stream_V_empty_n.read();
    } else {
        src3_data_stream_V_blk_n = ap_const_logic_1;
    }
}

void filt_Merge_240_320_0_6144_s::thread_src3_data_stream_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond_reg_183.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && ap_sig_122.read()))) {
        src3_data_stream_V_read = ap_const_logic_1;
    } else {
        src3_data_stream_V_read = ap_const_logic_0;
    }
}

void filt_Merge_240_320_0_6144_s::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if (!ap_sig_150.read()) {
                ap_NS_fsm = ap_ST_st2_fsm_1;
            } else {
                ap_NS_fsm = ap_ST_st1_fsm_0;
            }
            break;
        case 2 : 
            if (!esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_fu_150_p2.read())) {
                ap_NS_fsm = ap_ST_st1_fsm_0;
            } else {
                ap_NS_fsm = ap_ST_pp0_stg0_fsm_2;
            }
            break;
        case 4 : 
            if (!(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && ap_sig_122.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_162_p2.read()))) {
                ap_NS_fsm = ap_ST_pp0_stg0_fsm_2;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && ap_sig_122.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_162_p2.read()))) {
                ap_NS_fsm = ap_ST_st5_fsm_3;
            } else {
                ap_NS_fsm = ap_ST_pp0_stg0_fsm_2;
            }
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_st2_fsm_1;
            break;
        default : 
            ap_NS_fsm = "XXXX";
            break;
    }
}

}

