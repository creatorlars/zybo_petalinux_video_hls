// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.2
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _filt_Resize_HH_
#define _filt_Resize_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "filt_Resize_opr_linear.h"

namespace ap_rtl {

struct filt_Resize : public sc_module {
    // Port declarations 43
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<8> > p_src_data_stream_0_V_dout;
    sc_in< sc_logic > p_src_data_stream_0_V_empty_n;
    sc_out< sc_logic > p_src_data_stream_0_V_read;
    sc_in< sc_lv<8> > p_src_data_stream_1_V_dout;
    sc_in< sc_logic > p_src_data_stream_1_V_empty_n;
    sc_out< sc_logic > p_src_data_stream_1_V_read;
    sc_in< sc_lv<8> > p_src_data_stream_2_V_dout;
    sc_in< sc_logic > p_src_data_stream_2_V_empty_n;
    sc_out< sc_logic > p_src_data_stream_2_V_read;
    sc_in< sc_lv<8> > p_src_data_stream_3_V_dout;
    sc_in< sc_logic > p_src_data_stream_3_V_empty_n;
    sc_out< sc_logic > p_src_data_stream_3_V_read;
    sc_in< sc_lv<10> > p_dst_rows_V_dout;
    sc_in< sc_logic > p_dst_rows_V_empty_n;
    sc_out< sc_logic > p_dst_rows_V_read;
    sc_in< sc_lv<11> > p_dst_cols_V_dout;
    sc_in< sc_logic > p_dst_cols_V_empty_n;
    sc_out< sc_logic > p_dst_cols_V_read;
    sc_out< sc_lv<8> > p_dst_data_stream_0_V_din;
    sc_in< sc_logic > p_dst_data_stream_0_V_full_n;
    sc_out< sc_logic > p_dst_data_stream_0_V_write;
    sc_out< sc_lv<8> > p_dst_data_stream_1_V_din;
    sc_in< sc_logic > p_dst_data_stream_1_V_full_n;
    sc_out< sc_logic > p_dst_data_stream_1_V_write;
    sc_out< sc_lv<8> > p_dst_data_stream_2_V_din;
    sc_in< sc_logic > p_dst_data_stream_2_V_full_n;
    sc_out< sc_logic > p_dst_data_stream_2_V_write;
    sc_out< sc_lv<8> > p_dst_data_stream_3_V_din;
    sc_in< sc_logic > p_dst_data_stream_3_V_full_n;
    sc_out< sc_logic > p_dst_data_stream_3_V_write;
    sc_out< sc_lv<10> > p_dst_rows_V_out_din;
    sc_in< sc_logic > p_dst_rows_V_out_full_n;
    sc_out< sc_logic > p_dst_rows_V_out_write;
    sc_out< sc_lv<11> > p_dst_cols_V_out_din;
    sc_in< sc_logic > p_dst_cols_V_out_full_n;
    sc_out< sc_logic > p_dst_cols_V_out_write;


    // Module declarations
    filt_Resize(sc_module_name name);
    SC_HAS_PROCESS(filt_Resize);

    ~filt_Resize();

    sc_trace_file* mVcdFile;

    filt_Resize_opr_linear* grp_filt_Resize_opr_linear_fu_74;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<2> > ap_CS_fsm;
    sc_signal< sc_logic > ap_sig_cseq_ST_st1_fsm_0;
    sc_signal< bool > ap_sig_20;
    sc_signal< sc_logic > p_dst_rows_V_blk_n;
    sc_signal< sc_logic > p_dst_cols_V_blk_n;
    sc_signal< sc_logic > p_dst_rows_V_out_blk_n;
    sc_signal< sc_logic > p_dst_cols_V_out_blk_n;
    sc_signal< sc_lv<10> > p_dst_rows_V_read_reg_98;
    sc_signal< bool > ap_sig_95;
    sc_signal< sc_lv<11> > p_dst_cols_V_read_reg_103;
    sc_signal< sc_logic > grp_filt_Resize_opr_linear_fu_74_ap_start;
    sc_signal< sc_logic > grp_filt_Resize_opr_linear_fu_74_ap_done;
    sc_signal< sc_logic > grp_filt_Resize_opr_linear_fu_74_ap_idle;
    sc_signal< sc_logic > grp_filt_Resize_opr_linear_fu_74_ap_ready;
    sc_signal< sc_logic > grp_filt_Resize_opr_linear_fu_74_p_src_data_stream_0_V_read;
    sc_signal< sc_logic > grp_filt_Resize_opr_linear_fu_74_p_src_data_stream_1_V_read;
    sc_signal< sc_logic > grp_filt_Resize_opr_linear_fu_74_p_src_data_stream_2_V_read;
    sc_signal< sc_logic > grp_filt_Resize_opr_linear_fu_74_p_src_data_stream_3_V_read;
    sc_signal< sc_lv<8> > grp_filt_Resize_opr_linear_fu_74_p_dst_data_stream_0_V_din;
    sc_signal< sc_logic > grp_filt_Resize_opr_linear_fu_74_p_dst_data_stream_0_V_write;
    sc_signal< sc_lv<8> > grp_filt_Resize_opr_linear_fu_74_p_dst_data_stream_1_V_din;
    sc_signal< sc_logic > grp_filt_Resize_opr_linear_fu_74_p_dst_data_stream_1_V_write;
    sc_signal< sc_lv<8> > grp_filt_Resize_opr_linear_fu_74_p_dst_data_stream_2_V_din;
    sc_signal< sc_logic > grp_filt_Resize_opr_linear_fu_74_p_dst_data_stream_2_V_write;
    sc_signal< sc_lv<8> > grp_filt_Resize_opr_linear_fu_74_p_dst_data_stream_3_V_din;
    sc_signal< sc_logic > grp_filt_Resize_opr_linear_fu_74_p_dst_data_stream_3_V_write;
    sc_signal< sc_logic > ap_reg_grp_filt_Resize_opr_linear_fu_74_ap_start;
    sc_signal< sc_logic > ap_sig_cseq_ST_st2_fsm_1;
    sc_signal< bool > ap_sig_139;
    sc_signal< sc_lv<2> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<2> ap_ST_st1_fsm_0;
    static const sc_lv<2> ap_ST_st2_fsm_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_sig_139();
    void thread_ap_sig_20();
    void thread_ap_sig_95();
    void thread_ap_sig_cseq_ST_st1_fsm_0();
    void thread_ap_sig_cseq_ST_st2_fsm_1();
    void thread_grp_filt_Resize_opr_linear_fu_74_ap_start();
    void thread_p_dst_cols_V_blk_n();
    void thread_p_dst_cols_V_out_blk_n();
    void thread_p_dst_cols_V_out_din();
    void thread_p_dst_cols_V_out_write();
    void thread_p_dst_cols_V_read();
    void thread_p_dst_data_stream_0_V_din();
    void thread_p_dst_data_stream_0_V_write();
    void thread_p_dst_data_stream_1_V_din();
    void thread_p_dst_data_stream_1_V_write();
    void thread_p_dst_data_stream_2_V_din();
    void thread_p_dst_data_stream_2_V_write();
    void thread_p_dst_data_stream_3_V_din();
    void thread_p_dst_data_stream_3_V_write();
    void thread_p_dst_rows_V_blk_n();
    void thread_p_dst_rows_V_out_blk_n();
    void thread_p_dst_rows_V_out_din();
    void thread_p_dst_rows_V_out_write();
    void thread_p_dst_rows_V_read();
    void thread_p_src_data_stream_0_V_read();
    void thread_p_src_data_stream_1_V_read();
    void thread_p_src_data_stream_2_V_read();
    void thread_p_src_data_stream_3_V_read();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
