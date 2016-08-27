// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.2
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "filt_Mat2AXIvideo.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic filt_Mat2AXIvideo::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic filt_Mat2AXIvideo::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<4> filt_Mat2AXIvideo::ap_ST_st1_fsm_0 = "1";
const sc_lv<4> filt_Mat2AXIvideo::ap_ST_st2_fsm_1 = "10";
const sc_lv<4> filt_Mat2AXIvideo::ap_ST_pp0_stg0_fsm_2 = "100";
const sc_lv<4> filt_Mat2AXIvideo::ap_ST_st5_fsm_3 = "1000";
const sc_lv<32> filt_Mat2AXIvideo::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<1> filt_Mat2AXIvideo::ap_const_lv1_1 = "1";
const sc_lv<32> filt_Mat2AXIvideo::ap_const_lv32_2 = "10";
const sc_lv<1> filt_Mat2AXIvideo::ap_const_lv1_0 = "0";
const sc_lv<32> filt_Mat2AXIvideo::ap_const_lv32_1 = "1";
const sc_lv<32> filt_Mat2AXIvideo::ap_const_lv32_3 = "11";
const sc_lv<9> filt_Mat2AXIvideo::ap_const_lv9_0 = "000000000";
const sc_lv<10> filt_Mat2AXIvideo::ap_const_lv10_0 = "0000000000";
const sc_lv<4> filt_Mat2AXIvideo::ap_const_lv4_F = "1111";
const sc_lv<4> filt_Mat2AXIvideo::ap_const_lv4_0 = "0000";
const sc_lv<11> filt_Mat2AXIvideo::ap_const_lv11_7FF = "11111111111";
const sc_lv<9> filt_Mat2AXIvideo::ap_const_lv9_1 = "1";
const sc_lv<10> filt_Mat2AXIvideo::ap_const_lv10_1 = "1";

filt_Mat2AXIvideo::filt_Mat2AXIvideo(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_done_reg );
    sensitive << ( exitcond4_i_fu_206_p2 );
    sensitive << ( ap_sig_cseq_ST_st2_fsm_1 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_sig_cseq_ST_st1_fsm_0 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( exitcond4_i_fu_206_p2 );
    sensitive << ( ap_sig_cseq_ST_st2_fsm_1 );

    SC_METHOD(thread_ap_sig_113);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_sig_129);
    sensitive << ( img_data_stream_0_V_empty_n );
    sensitive << ( img_data_stream_1_V_empty_n );
    sensitive << ( img_data_stream_2_V_empty_n );
    sensitive << ( img_data_stream_3_V_empty_n );
    sensitive << ( exitcond5_i_reg_290 );

    SC_METHOD(thread_ap_sig_157);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_sig_22);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_sig_75);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_sig_99);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( img_rows_V_empty_n );
    sensitive << ( img_cols_V_empty_n );

    SC_METHOD(thread_ap_sig_cseq_ST_pp0_stg0_fsm_2);
    sensitive << ( ap_sig_75 );

    SC_METHOD(thread_ap_sig_cseq_ST_st1_fsm_0);
    sensitive << ( ap_sig_22 );

    SC_METHOD(thread_ap_sig_cseq_ST_st2_fsm_1);
    sensitive << ( ap_sig_113 );

    SC_METHOD(thread_ap_sig_cseq_ST_st5_fsm_3);
    sensitive << ( ap_sig_157 );

    SC_METHOD(thread_ap_sig_ioackin_dst_axi_TREADY);
    sensitive << ( dst_axi_TREADY );
    sensitive << ( ap_reg_ioackin_dst_axi_TREADY );

    SC_METHOD(thread_axi_last_V_fu_232_p2);
    sensitive << ( ap_sig_cseq_ST_pp0_stg0_fsm_2 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( ap_reg_ppiten_pp0_it0 );
    sensitive << ( exitcond5_i_reg_290 );
    sensitive << ( r_V_reg_276 );
    sensitive << ( exitcond5_i_fu_221_p2 );
    sensitive << ( ap_sig_129 );
    sensitive << ( ap_sig_ioackin_dst_axi_TREADY );
    sensitive << ( p_3_cast_cast_i_fu_217_p1 );

    SC_METHOD(thread_dst_axi_TDATA);
    sensitive << ( img_data_stream_0_V_dout );
    sensitive << ( img_data_stream_1_V_dout );
    sensitive << ( img_data_stream_2_V_dout );
    sensitive << ( img_data_stream_3_V_dout );
    sensitive << ( ap_sig_cseq_ST_pp0_stg0_fsm_2 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( exitcond5_i_reg_290 );
    sensitive << ( ap_sig_129 );

    SC_METHOD(thread_dst_axi_TDATA_blk_n);
    sensitive << ( dst_axi_TREADY );
    sensitive << ( ap_sig_cseq_ST_pp0_stg0_fsm_2 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( exitcond5_i_reg_290 );

    SC_METHOD(thread_dst_axi_TDEST);
    sensitive << ( ap_sig_cseq_ST_pp0_stg0_fsm_2 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( exitcond5_i_reg_290 );
    sensitive << ( ap_sig_129 );

    SC_METHOD(thread_dst_axi_TID);
    sensitive << ( ap_sig_cseq_ST_pp0_stg0_fsm_2 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( exitcond5_i_reg_290 );
    sensitive << ( ap_sig_129 );

    SC_METHOD(thread_dst_axi_TKEEP);
    sensitive << ( ap_sig_cseq_ST_pp0_stg0_fsm_2 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( exitcond5_i_reg_290 );
    sensitive << ( ap_sig_129 );

    SC_METHOD(thread_dst_axi_TLAST);
    sensitive << ( ap_sig_cseq_ST_pp0_stg0_fsm_2 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( exitcond5_i_reg_290 );
    sensitive << ( ap_sig_129 );
    sensitive << ( axi_last_V_reg_299 );

    SC_METHOD(thread_dst_axi_TSTRB);
    sensitive << ( ap_sig_cseq_ST_pp0_stg0_fsm_2 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( exitcond5_i_reg_290 );
    sensitive << ( ap_sig_129 );

    SC_METHOD(thread_dst_axi_TUSER);
    sensitive << ( ap_sig_cseq_ST_pp0_stg0_fsm_2 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( exitcond5_i_reg_290 );
    sensitive << ( ap_sig_129 );
    sensitive << ( tmp_user_V_fu_100 );

    SC_METHOD(thread_dst_axi_TVALID);
    sensitive << ( ap_sig_cseq_ST_pp0_stg0_fsm_2 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( exitcond5_i_reg_290 );
    sensitive << ( ap_sig_129 );
    sensitive << ( ap_reg_ioackin_dst_axi_TREADY );

    SC_METHOD(thread_exitcond4_i_fu_206_p2);
    sensitive << ( img_rows_V_read_reg_266 );
    sensitive << ( ap_sig_cseq_ST_st2_fsm_1 );
    sensitive << ( p_cast_cast_i_fu_202_p1 );

    SC_METHOD(thread_exitcond5_i_fu_221_p2);
    sensitive << ( ap_sig_cseq_ST_pp0_stg0_fsm_2 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( ap_reg_ppiten_pp0_it0 );
    sensitive << ( exitcond5_i_reg_290 );
    sensitive << ( img_cols_V_read_reg_271 );
    sensitive << ( ap_sig_129 );
    sensitive << ( ap_sig_ioackin_dst_axi_TREADY );
    sensitive << ( p_3_cast_cast_i_fu_217_p1 );

    SC_METHOD(thread_i_V_fu_211_p2);
    sensitive << ( p_i_reg_169 );

    SC_METHOD(thread_img_cols_V_blk_n);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_sig_cseq_ST_st1_fsm_0 );
    sensitive << ( img_cols_V_empty_n );

    SC_METHOD(thread_img_cols_V_read);
    sensitive << ( ap_sig_cseq_ST_st1_fsm_0 );
    sensitive << ( ap_sig_99 );

    SC_METHOD(thread_img_data_stream_0_V_blk_n);
    sensitive << ( img_data_stream_0_V_empty_n );
    sensitive << ( ap_sig_cseq_ST_pp0_stg0_fsm_2 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( exitcond5_i_reg_290 );

    SC_METHOD(thread_img_data_stream_0_V_read);
    sensitive << ( ap_sig_cseq_ST_pp0_stg0_fsm_2 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( exitcond5_i_reg_290 );
    sensitive << ( ap_sig_129 );
    sensitive << ( ap_sig_ioackin_dst_axi_TREADY );

    SC_METHOD(thread_img_data_stream_1_V_blk_n);
    sensitive << ( img_data_stream_1_V_empty_n );
    sensitive << ( ap_sig_cseq_ST_pp0_stg0_fsm_2 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( exitcond5_i_reg_290 );

    SC_METHOD(thread_img_data_stream_1_V_read);
    sensitive << ( ap_sig_cseq_ST_pp0_stg0_fsm_2 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( exitcond5_i_reg_290 );
    sensitive << ( ap_sig_129 );
    sensitive << ( ap_sig_ioackin_dst_axi_TREADY );

    SC_METHOD(thread_img_data_stream_2_V_blk_n);
    sensitive << ( img_data_stream_2_V_empty_n );
    sensitive << ( ap_sig_cseq_ST_pp0_stg0_fsm_2 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( exitcond5_i_reg_290 );

    SC_METHOD(thread_img_data_stream_2_V_read);
    sensitive << ( ap_sig_cseq_ST_pp0_stg0_fsm_2 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( exitcond5_i_reg_290 );
    sensitive << ( ap_sig_129 );
    sensitive << ( ap_sig_ioackin_dst_axi_TREADY );

    SC_METHOD(thread_img_data_stream_3_V_blk_n);
    sensitive << ( img_data_stream_3_V_empty_n );
    sensitive << ( ap_sig_cseq_ST_pp0_stg0_fsm_2 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( exitcond5_i_reg_290 );

    SC_METHOD(thread_img_data_stream_3_V_read);
    sensitive << ( ap_sig_cseq_ST_pp0_stg0_fsm_2 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( exitcond5_i_reg_290 );
    sensitive << ( ap_sig_129 );
    sensitive << ( ap_sig_ioackin_dst_axi_TREADY );

    SC_METHOD(thread_img_rows_V_blk_n);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_sig_cseq_ST_st1_fsm_0 );
    sensitive << ( img_rows_V_empty_n );

    SC_METHOD(thread_img_rows_V_read);
    sensitive << ( ap_sig_cseq_ST_st1_fsm_0 );
    sensitive << ( ap_sig_99 );

    SC_METHOD(thread_j_V_fu_226_p2);
    sensitive << ( p_3_i_reg_180 );

    SC_METHOD(thread_p_3_cast_cast_i_fu_217_p1);
    sensitive << ( p_3_i_reg_180 );

    SC_METHOD(thread_p_cast_cast_i_fu_202_p1);
    sensitive << ( p_i_reg_169 );

    SC_METHOD(thread_r_V_fu_191_p2);
    sensitive << ( img_cols_V_dout );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( ap_reg_ppiten_pp0_it0 );
    sensitive << ( exitcond5_i_reg_290 );
    sensitive << ( ap_sig_99 );
    sensitive << ( exitcond4_i_fu_206_p2 );
    sensitive << ( exitcond5_i_fu_221_p2 );
    sensitive << ( ap_sig_129 );
    sensitive << ( ap_sig_ioackin_dst_axi_TREADY );

    ap_done_reg = SC_LOGIC_0;
    ap_CS_fsm = "0001";
    ap_reg_ppiten_pp0_it1 = SC_LOGIC_0;
    ap_reg_ppiten_pp0_it0 = SC_LOGIC_0;
    ap_reg_ioackin_dst_axi_TREADY = SC_LOGIC_0;
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "filt_Mat2AXIvideo_sc_trace_" << apTFileNum ++;
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
    sc_trace(mVcdFile, img_rows_V_dout, "(port)img_rows_V_dout");
    sc_trace(mVcdFile, img_rows_V_empty_n, "(port)img_rows_V_empty_n");
    sc_trace(mVcdFile, img_rows_V_read, "(port)img_rows_V_read");
    sc_trace(mVcdFile, img_cols_V_dout, "(port)img_cols_V_dout");
    sc_trace(mVcdFile, img_cols_V_empty_n, "(port)img_cols_V_empty_n");
    sc_trace(mVcdFile, img_cols_V_read, "(port)img_cols_V_read");
    sc_trace(mVcdFile, img_data_stream_0_V_dout, "(port)img_data_stream_0_V_dout");
    sc_trace(mVcdFile, img_data_stream_0_V_empty_n, "(port)img_data_stream_0_V_empty_n");
    sc_trace(mVcdFile, img_data_stream_0_V_read, "(port)img_data_stream_0_V_read");
    sc_trace(mVcdFile, img_data_stream_1_V_dout, "(port)img_data_stream_1_V_dout");
    sc_trace(mVcdFile, img_data_stream_1_V_empty_n, "(port)img_data_stream_1_V_empty_n");
    sc_trace(mVcdFile, img_data_stream_1_V_read, "(port)img_data_stream_1_V_read");
    sc_trace(mVcdFile, img_data_stream_2_V_dout, "(port)img_data_stream_2_V_dout");
    sc_trace(mVcdFile, img_data_stream_2_V_empty_n, "(port)img_data_stream_2_V_empty_n");
    sc_trace(mVcdFile, img_data_stream_2_V_read, "(port)img_data_stream_2_V_read");
    sc_trace(mVcdFile, img_data_stream_3_V_dout, "(port)img_data_stream_3_V_dout");
    sc_trace(mVcdFile, img_data_stream_3_V_empty_n, "(port)img_data_stream_3_V_empty_n");
    sc_trace(mVcdFile, img_data_stream_3_V_read, "(port)img_data_stream_3_V_read");
    sc_trace(mVcdFile, dst_axi_TDATA, "(port)dst_axi_TDATA");
    sc_trace(mVcdFile, dst_axi_TVALID, "(port)dst_axi_TVALID");
    sc_trace(mVcdFile, dst_axi_TREADY, "(port)dst_axi_TREADY");
    sc_trace(mVcdFile, dst_axi_TKEEP, "(port)dst_axi_TKEEP");
    sc_trace(mVcdFile, dst_axi_TSTRB, "(port)dst_axi_TSTRB");
    sc_trace(mVcdFile, dst_axi_TUSER, "(port)dst_axi_TUSER");
    sc_trace(mVcdFile, dst_axi_TLAST, "(port)dst_axi_TLAST");
    sc_trace(mVcdFile, dst_axi_TID, "(port)dst_axi_TID");
    sc_trace(mVcdFile, dst_axi_TDEST, "(port)dst_axi_TDEST");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_done_reg, "ap_done_reg");
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_sig_cseq_ST_st1_fsm_0, "ap_sig_cseq_ST_st1_fsm_0");
    sc_trace(mVcdFile, ap_sig_22, "ap_sig_22");
    sc_trace(mVcdFile, img_rows_V_blk_n, "img_rows_V_blk_n");
    sc_trace(mVcdFile, img_cols_V_blk_n, "img_cols_V_blk_n");
    sc_trace(mVcdFile, img_data_stream_0_V_blk_n, "img_data_stream_0_V_blk_n");
    sc_trace(mVcdFile, ap_sig_cseq_ST_pp0_stg0_fsm_2, "ap_sig_cseq_ST_pp0_stg0_fsm_2");
    sc_trace(mVcdFile, ap_sig_75, "ap_sig_75");
    sc_trace(mVcdFile, ap_reg_ppiten_pp0_it1, "ap_reg_ppiten_pp0_it1");
    sc_trace(mVcdFile, ap_reg_ppiten_pp0_it0, "ap_reg_ppiten_pp0_it0");
    sc_trace(mVcdFile, exitcond5_i_reg_290, "exitcond5_i_reg_290");
    sc_trace(mVcdFile, img_data_stream_1_V_blk_n, "img_data_stream_1_V_blk_n");
    sc_trace(mVcdFile, img_data_stream_2_V_blk_n, "img_data_stream_2_V_blk_n");
    sc_trace(mVcdFile, img_data_stream_3_V_blk_n, "img_data_stream_3_V_blk_n");
    sc_trace(mVcdFile, dst_axi_TDATA_blk_n, "dst_axi_TDATA_blk_n");
    sc_trace(mVcdFile, p_3_i_reg_180, "p_3_i_reg_180");
    sc_trace(mVcdFile, img_rows_V_read_reg_266, "img_rows_V_read_reg_266");
    sc_trace(mVcdFile, ap_sig_99, "ap_sig_99");
    sc_trace(mVcdFile, img_cols_V_read_reg_271, "img_cols_V_read_reg_271");
    sc_trace(mVcdFile, r_V_fu_191_p2, "r_V_fu_191_p2");
    sc_trace(mVcdFile, r_V_reg_276, "r_V_reg_276");
    sc_trace(mVcdFile, exitcond4_i_fu_206_p2, "exitcond4_i_fu_206_p2");
    sc_trace(mVcdFile, ap_sig_cseq_ST_st2_fsm_1, "ap_sig_cseq_ST_st2_fsm_1");
    sc_trace(mVcdFile, ap_sig_113, "ap_sig_113");
    sc_trace(mVcdFile, i_V_fu_211_p2, "i_V_fu_211_p2");
    sc_trace(mVcdFile, i_V_reg_285, "i_V_reg_285");
    sc_trace(mVcdFile, exitcond5_i_fu_221_p2, "exitcond5_i_fu_221_p2");
    sc_trace(mVcdFile, ap_sig_129, "ap_sig_129");
    sc_trace(mVcdFile, ap_sig_ioackin_dst_axi_TREADY, "ap_sig_ioackin_dst_axi_TREADY");
    sc_trace(mVcdFile, j_V_fu_226_p2, "j_V_fu_226_p2");
    sc_trace(mVcdFile, axi_last_V_fu_232_p2, "axi_last_V_fu_232_p2");
    sc_trace(mVcdFile, axi_last_V_reg_299, "axi_last_V_reg_299");
    sc_trace(mVcdFile, p_i_reg_169, "p_i_reg_169");
    sc_trace(mVcdFile, ap_sig_cseq_ST_st5_fsm_3, "ap_sig_cseq_ST_st5_fsm_3");
    sc_trace(mVcdFile, ap_sig_157, "ap_sig_157");
    sc_trace(mVcdFile, tmp_user_V_fu_100, "tmp_user_V_fu_100");
    sc_trace(mVcdFile, ap_reg_ioackin_dst_axi_TREADY, "ap_reg_ioackin_dst_axi_TREADY");
    sc_trace(mVcdFile, p_cast_cast_i_fu_202_p1, "p_cast_cast_i_fu_202_p1");
    sc_trace(mVcdFile, p_3_cast_cast_i_fu_217_p1, "p_3_cast_cast_i_fu_217_p1");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
}

filt_Mat2AXIvideo::~filt_Mat2AXIvideo() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void filt_Mat2AXIvideo::thread_ap_clk_no_reset_() {
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
                    !esl_seteq<1,1,1>(ap_const_lv1_0, exitcond4_i_fu_206_p2.read()))) {
            ap_done_reg = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_ioackin_dst_axi_TREADY = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_2.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
              esl_seteq<1,1,1>(exitcond5_i_reg_290.read(), ap_const_lv1_0) && 
              !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && (ap_sig_129.read() || 
  (esl_seteq<1,1,1>(exitcond5_i_reg_290.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_dst_axi_TREADY.read()))))))) {
            ap_reg_ioackin_dst_axi_TREADY = ap_const_logic_0;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_2.read()) && 
                     esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                     esl_seteq<1,1,1>(exitcond5_i_reg_290.read(), ap_const_lv1_0) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && ap_sig_129.read()) && 
                     esl_seteq<1,1,1>(ap_const_logic_1, dst_axi_TREADY.read())))) {
            ap_reg_ioackin_dst_axi_TREADY = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_ppiten_pp0_it0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_2.read()) && 
             !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && (ap_sig_129.read() || 
  (esl_seteq<1,1,1>(exitcond5_i_reg_290.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_dst_axi_TREADY.read())))) && 
             !esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_i_fu_221_p2.read()))) {
            ap_reg_ppiten_pp0_it0 = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
                    esl_seteq<1,1,1>(ap_const_lv1_0, exitcond4_i_fu_206_p2.read()))) {
            ap_reg_ppiten_pp0_it0 = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_ppiten_pp0_it1 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_2.read()) && 
             !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && (ap_sig_129.read() || 
  (esl_seteq<1,1,1>(exitcond5_i_reg_290.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_dst_axi_TREADY.read())))) && 
             esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_i_fu_221_p2.read()))) {
            ap_reg_ppiten_pp0_it1 = ap_const_logic_1;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
                     esl_seteq<1,1,1>(ap_const_lv1_0, exitcond4_i_fu_206_p2.read())) || 
                    (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_2.read()) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && (ap_sig_129.read() || 
  (esl_seteq<1,1,1>(exitcond5_i_reg_290.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_dst_axi_TREADY.read())))) && 
                     !esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_i_fu_221_p2.read())))) {
            ap_reg_ppiten_pp0_it1 = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && (ap_sig_129.read() || 
  (esl_seteq<1,1,1>(exitcond5_i_reg_290.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_dst_axi_TREADY.read())))) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_i_fu_221_p2.read()))) {
        p_3_i_reg_180 = j_V_fu_226_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond4_i_fu_206_p2.read()))) {
        p_3_i_reg_180 = ap_const_lv10_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
         !ap_sig_99.read())) {
        p_i_reg_169 = ap_const_lv9_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st5_fsm_3.read())) {
        p_i_reg_169 = i_V_reg_285.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond5_i_reg_290.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && (ap_sig_129.read() || 
  (esl_seteq<1,1,1>(exitcond5_i_reg_290.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_dst_axi_TREADY.read())))))) {
        tmp_user_V_fu_100 = ap_const_lv1_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
                !ap_sig_99.read())) {
        tmp_user_V_fu_100 = ap_const_lv1_1;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_2.read()) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && (ap_sig_129.read() || 
  (esl_seteq<1,1,1>(exitcond5_i_reg_290.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_dst_axi_TREADY.read())))) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_i_fu_221_p2.read()))) {
        axi_last_V_reg_299 = axi_last_V_fu_232_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_2.read()) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && (ap_sig_129.read() || 
  (esl_seteq<1,1,1>(exitcond5_i_reg_290.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_dst_axi_TREADY.read())))))) {
        exitcond5_i_reg_290 = exitcond5_i_fu_221_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read())) {
        i_V_reg_285 = i_V_fu_211_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && !ap_sig_99.read())) {
        img_cols_V_read_reg_271 = img_cols_V_dout.read();
        img_rows_V_read_reg_266 = img_rows_V_dout.read();
        r_V_reg_276 = r_V_fu_191_p2.read();
    }
}

void filt_Mat2AXIvideo::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_done_reg.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, exitcond4_i_fu_206_p2.read())))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void filt_Mat2AXIvideo::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void filt_Mat2AXIvideo::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st2_fsm_1.read()) && 
         !esl_seteq<1,1,1>(ap_const_lv1_0, exitcond4_i_fu_206_p2.read()))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void filt_Mat2AXIvideo::thread_ap_sig_113() {
    ap_sig_113 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(1, 1));
}

void filt_Mat2AXIvideo::thread_ap_sig_129() {
    ap_sig_129 = ((esl_seteq<1,1,1>(exitcond5_i_reg_290.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(img_data_stream_0_V_empty_n.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(exitcond5_i_reg_290.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(img_data_stream_1_V_empty_n.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(exitcond5_i_reg_290.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(img_data_stream_2_V_empty_n.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(exitcond5_i_reg_290.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(img_data_stream_3_V_empty_n.read(), ap_const_logic_0)));
}

void filt_Mat2AXIvideo::thread_ap_sig_157() {
    ap_sig_157 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(3, 3));
}

void filt_Mat2AXIvideo::thread_ap_sig_22() {
    ap_sig_22 = esl_seteq<1,1,1>(ap_CS_fsm.read().range(0, 0), ap_const_lv1_1);
}

void filt_Mat2AXIvideo::thread_ap_sig_75() {
    ap_sig_75 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(2, 2));
}

void filt_Mat2AXIvideo::thread_ap_sig_99() {
    ap_sig_99 = (esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1) || esl_seteq<1,1,1>(img_rows_V_empty_n.read(), ap_const_logic_0) || esl_seteq<1,1,1>(img_cols_V_empty_n.read(), ap_const_logic_0));
}

void filt_Mat2AXIvideo::thread_ap_sig_cseq_ST_pp0_stg0_fsm_2() {
    if (ap_sig_75.read()) {
        ap_sig_cseq_ST_pp0_stg0_fsm_2 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg0_fsm_2 = ap_const_logic_0;
    }
}

void filt_Mat2AXIvideo::thread_ap_sig_cseq_ST_st1_fsm_0() {
    if (ap_sig_22.read()) {
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_0;
    }
}

void filt_Mat2AXIvideo::thread_ap_sig_cseq_ST_st2_fsm_1() {
    if (ap_sig_113.read()) {
        ap_sig_cseq_ST_st2_fsm_1 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st2_fsm_1 = ap_const_logic_0;
    }
}

void filt_Mat2AXIvideo::thread_ap_sig_cseq_ST_st5_fsm_3() {
    if (ap_sig_157.read()) {
        ap_sig_cseq_ST_st5_fsm_3 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st5_fsm_3 = ap_const_logic_0;
    }
}

void filt_Mat2AXIvideo::thread_ap_sig_ioackin_dst_axi_TREADY() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_dst_axi_TREADY.read())) {
        ap_sig_ioackin_dst_axi_TREADY = dst_axi_TREADY.read();
    } else {
        ap_sig_ioackin_dst_axi_TREADY = ap_const_logic_1;
    }
}

void filt_Mat2AXIvideo::thread_axi_last_V_fu_232_p2() {
    axi_last_V_fu_232_p2 = (!p_3_cast_cast_i_fu_217_p1.read().is_01() || !r_V_reg_276.read().is_01())? sc_lv<1>(): sc_lv<1>(p_3_cast_cast_i_fu_217_p1.read() == r_V_reg_276.read());
}

void filt_Mat2AXIvideo::thread_dst_axi_TDATA() {
    dst_axi_TDATA = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(img_data_stream_3_V_dout.read(), img_data_stream_2_V_dout.read()), img_data_stream_1_V_dout.read()), img_data_stream_0_V_dout.read());
}

void filt_Mat2AXIvideo::thread_dst_axi_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond5_i_reg_290.read(), ap_const_lv1_0))) {
        dst_axi_TDATA_blk_n = dst_axi_TREADY.read();
    } else {
        dst_axi_TDATA_blk_n = ap_const_logic_1;
    }
}

void filt_Mat2AXIvideo::thread_dst_axi_TDEST() {
    dst_axi_TDEST = ap_const_lv1_0;
}

void filt_Mat2AXIvideo::thread_dst_axi_TID() {
    dst_axi_TID = ap_const_lv1_0;
}

void filt_Mat2AXIvideo::thread_dst_axi_TKEEP() {
    dst_axi_TKEEP = ap_const_lv4_F;
}

void filt_Mat2AXIvideo::thread_dst_axi_TLAST() {
    dst_axi_TLAST = axi_last_V_reg_299.read();
}

void filt_Mat2AXIvideo::thread_dst_axi_TSTRB() {
    dst_axi_TSTRB = ap_const_lv4_0;
}

void filt_Mat2AXIvideo::thread_dst_axi_TUSER() {
    dst_axi_TUSER = tmp_user_V_fu_100.read();
}

void filt_Mat2AXIvideo::thread_dst_axi_TVALID() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(exitcond5_i_reg_290.read(), ap_const_lv1_0) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && ap_sig_129.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_dst_axi_TREADY.read())))) {
        dst_axi_TVALID = ap_const_logic_1;
    } else {
        dst_axi_TVALID = ap_const_logic_0;
    }
}

void filt_Mat2AXIvideo::thread_exitcond4_i_fu_206_p2() {
    exitcond4_i_fu_206_p2 = (!p_cast_cast_i_fu_202_p1.read().is_01() || !img_rows_V_read_reg_266.read().is_01())? sc_lv<1>(): sc_lv<1>(p_cast_cast_i_fu_202_p1.read() == img_rows_V_read_reg_266.read());
}

void filt_Mat2AXIvideo::thread_exitcond5_i_fu_221_p2() {
    exitcond5_i_fu_221_p2 = (!p_3_cast_cast_i_fu_217_p1.read().is_01() || !img_cols_V_read_reg_271.read().is_01())? sc_lv<1>(): sc_lv<1>(p_3_cast_cast_i_fu_217_p1.read() == img_cols_V_read_reg_271.read());
}

void filt_Mat2AXIvideo::thread_i_V_fu_211_p2() {
    i_V_fu_211_p2 = (!p_i_reg_169.read().is_01() || !ap_const_lv9_1.is_01())? sc_lv<9>(): (sc_biguint<9>(p_i_reg_169.read()) + sc_biguint<9>(ap_const_lv9_1));
}

void filt_Mat2AXIvideo::thread_img_cols_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
         !(esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        img_cols_V_blk_n = img_cols_V_empty_n.read();
    } else {
        img_cols_V_blk_n = ap_const_logic_1;
    }
}

void filt_Mat2AXIvideo::thread_img_cols_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
         !ap_sig_99.read())) {
        img_cols_V_read = ap_const_logic_1;
    } else {
        img_cols_V_read = ap_const_logic_0;
    }
}

void filt_Mat2AXIvideo::thread_img_data_stream_0_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond5_i_reg_290.read(), ap_const_lv1_0))) {
        img_data_stream_0_V_blk_n = img_data_stream_0_V_empty_n.read();
    } else {
        img_data_stream_0_V_blk_n = ap_const_logic_1;
    }
}

void filt_Mat2AXIvideo::thread_img_data_stream_0_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond5_i_reg_290.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && (ap_sig_129.read() || 
  (esl_seteq<1,1,1>(exitcond5_i_reg_290.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_dst_axi_TREADY.read())))))) {
        img_data_stream_0_V_read = ap_const_logic_1;
    } else {
        img_data_stream_0_V_read = ap_const_logic_0;
    }
}

void filt_Mat2AXIvideo::thread_img_data_stream_1_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond5_i_reg_290.read(), ap_const_lv1_0))) {
        img_data_stream_1_V_blk_n = img_data_stream_1_V_empty_n.read();
    } else {
        img_data_stream_1_V_blk_n = ap_const_logic_1;
    }
}

void filt_Mat2AXIvideo::thread_img_data_stream_1_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond5_i_reg_290.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && (ap_sig_129.read() || 
  (esl_seteq<1,1,1>(exitcond5_i_reg_290.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_dst_axi_TREADY.read())))))) {
        img_data_stream_1_V_read = ap_const_logic_1;
    } else {
        img_data_stream_1_V_read = ap_const_logic_0;
    }
}

void filt_Mat2AXIvideo::thread_img_data_stream_2_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond5_i_reg_290.read(), ap_const_lv1_0))) {
        img_data_stream_2_V_blk_n = img_data_stream_2_V_empty_n.read();
    } else {
        img_data_stream_2_V_blk_n = ap_const_logic_1;
    }
}

void filt_Mat2AXIvideo::thread_img_data_stream_2_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond5_i_reg_290.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && (ap_sig_129.read() || 
  (esl_seteq<1,1,1>(exitcond5_i_reg_290.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_dst_axi_TREADY.read())))))) {
        img_data_stream_2_V_read = ap_const_logic_1;
    } else {
        img_data_stream_2_V_read = ap_const_logic_0;
    }
}

void filt_Mat2AXIvideo::thread_img_data_stream_3_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond5_i_reg_290.read(), ap_const_lv1_0))) {
        img_data_stream_3_V_blk_n = img_data_stream_3_V_empty_n.read();
    } else {
        img_data_stream_3_V_blk_n = ap_const_logic_1;
    }
}

void filt_Mat2AXIvideo::thread_img_data_stream_3_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond5_i_reg_290.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && (ap_sig_129.read() || 
  (esl_seteq<1,1,1>(exitcond5_i_reg_290.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_dst_axi_TREADY.read())))))) {
        img_data_stream_3_V_read = ap_const_logic_1;
    } else {
        img_data_stream_3_V_read = ap_const_logic_0;
    }
}

void filt_Mat2AXIvideo::thread_img_rows_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
         !(esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        img_rows_V_blk_n = img_rows_V_empty_n.read();
    } else {
        img_rows_V_blk_n = ap_const_logic_1;
    }
}

void filt_Mat2AXIvideo::thread_img_rows_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
         !ap_sig_99.read())) {
        img_rows_V_read = ap_const_logic_1;
    } else {
        img_rows_V_read = ap_const_logic_0;
    }
}

void filt_Mat2AXIvideo::thread_j_V_fu_226_p2() {
    j_V_fu_226_p2 = (!p_3_i_reg_180.read().is_01() || !ap_const_lv10_1.is_01())? sc_lv<10>(): (sc_biguint<10>(p_3_i_reg_180.read()) + sc_biguint<10>(ap_const_lv10_1));
}

void filt_Mat2AXIvideo::thread_p_3_cast_cast_i_fu_217_p1() {
    p_3_cast_cast_i_fu_217_p1 = esl_zext<11,10>(p_3_i_reg_180.read());
}

void filt_Mat2AXIvideo::thread_p_cast_cast_i_fu_202_p1() {
    p_cast_cast_i_fu_202_p1 = esl_zext<10,9>(p_i_reg_169.read());
}

void filt_Mat2AXIvideo::thread_r_V_fu_191_p2() {
    r_V_fu_191_p2 = (!img_cols_V_dout.read().is_01() || !ap_const_lv11_7FF.is_01())? sc_lv<11>(): (sc_biguint<11>(img_cols_V_dout.read()) + sc_bigint<11>(ap_const_lv11_7FF));
}

void filt_Mat2AXIvideo::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if (!ap_sig_99.read()) {
                ap_NS_fsm = ap_ST_st2_fsm_1;
            } else {
                ap_NS_fsm = ap_ST_st1_fsm_0;
            }
            break;
        case 2 : 
            if (!esl_seteq<1,1,1>(ap_const_lv1_0, exitcond4_i_fu_206_p2.read())) {
                ap_NS_fsm = ap_ST_st1_fsm_0;
            } else {
                ap_NS_fsm = ap_ST_pp0_stg0_fsm_2;
            }
            break;
        case 4 : 
            if (!(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && (ap_sig_129.read() || 
  (esl_seteq<1,1,1>(exitcond5_i_reg_290.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_dst_axi_TREADY.read())))) && !esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_i_fu_221_p2.read()))) {
                ap_NS_fsm = ap_ST_pp0_stg0_fsm_2;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && (ap_sig_129.read() || 
  (esl_seteq<1,1,1>(exitcond5_i_reg_290.read(), ap_const_lv1_0) && 
   esl_seteq<1,1,1>(ap_const_logic_0, ap_sig_ioackin_dst_axi_TREADY.read())))) && !esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_i_fu_221_p2.read()))) {
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

