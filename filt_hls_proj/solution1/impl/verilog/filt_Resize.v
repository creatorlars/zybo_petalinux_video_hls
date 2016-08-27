// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.2
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module filt_Resize (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_continue,
        ap_idle,
        ap_ready,
        p_src_data_stream_0_V_dout,
        p_src_data_stream_0_V_empty_n,
        p_src_data_stream_0_V_read,
        p_src_data_stream_1_V_dout,
        p_src_data_stream_1_V_empty_n,
        p_src_data_stream_1_V_read,
        p_src_data_stream_2_V_dout,
        p_src_data_stream_2_V_empty_n,
        p_src_data_stream_2_V_read,
        p_src_data_stream_3_V_dout,
        p_src_data_stream_3_V_empty_n,
        p_src_data_stream_3_V_read,
        p_dst_rows_V_dout,
        p_dst_rows_V_empty_n,
        p_dst_rows_V_read,
        p_dst_cols_V_dout,
        p_dst_cols_V_empty_n,
        p_dst_cols_V_read,
        p_dst_data_stream_0_V_din,
        p_dst_data_stream_0_V_full_n,
        p_dst_data_stream_0_V_write,
        p_dst_data_stream_1_V_din,
        p_dst_data_stream_1_V_full_n,
        p_dst_data_stream_1_V_write,
        p_dst_data_stream_2_V_din,
        p_dst_data_stream_2_V_full_n,
        p_dst_data_stream_2_V_write,
        p_dst_data_stream_3_V_din,
        p_dst_data_stream_3_V_full_n,
        p_dst_data_stream_3_V_write,
        p_dst_rows_V_out_din,
        p_dst_rows_V_out_full_n,
        p_dst_rows_V_out_write,
        p_dst_cols_V_out_din,
        p_dst_cols_V_out_full_n,
        p_dst_cols_V_out_write
);

parameter    ap_ST_st1_fsm_0 = 2'b1;
parameter    ap_ST_st2_fsm_1 = 2'b10;
parameter    ap_const_lv32_0 = 32'b00000000000000000000000000000000;
parameter    ap_const_lv32_1 = 32'b1;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
input   ap_continue;
output   ap_idle;
output   ap_ready;
input  [7:0] p_src_data_stream_0_V_dout;
input   p_src_data_stream_0_V_empty_n;
output   p_src_data_stream_0_V_read;
input  [7:0] p_src_data_stream_1_V_dout;
input   p_src_data_stream_1_V_empty_n;
output   p_src_data_stream_1_V_read;
input  [7:0] p_src_data_stream_2_V_dout;
input   p_src_data_stream_2_V_empty_n;
output   p_src_data_stream_2_V_read;
input  [7:0] p_src_data_stream_3_V_dout;
input   p_src_data_stream_3_V_empty_n;
output   p_src_data_stream_3_V_read;
input  [9:0] p_dst_rows_V_dout;
input   p_dst_rows_V_empty_n;
output   p_dst_rows_V_read;
input  [10:0] p_dst_cols_V_dout;
input   p_dst_cols_V_empty_n;
output   p_dst_cols_V_read;
output  [7:0] p_dst_data_stream_0_V_din;
input   p_dst_data_stream_0_V_full_n;
output   p_dst_data_stream_0_V_write;
output  [7:0] p_dst_data_stream_1_V_din;
input   p_dst_data_stream_1_V_full_n;
output   p_dst_data_stream_1_V_write;
output  [7:0] p_dst_data_stream_2_V_din;
input   p_dst_data_stream_2_V_full_n;
output   p_dst_data_stream_2_V_write;
output  [7:0] p_dst_data_stream_3_V_din;
input   p_dst_data_stream_3_V_full_n;
output   p_dst_data_stream_3_V_write;
output  [9:0] p_dst_rows_V_out_din;
input   p_dst_rows_V_out_full_n;
output   p_dst_rows_V_out_write;
output  [10:0] p_dst_cols_V_out_din;
input   p_dst_cols_V_out_full_n;
output   p_dst_cols_V_out_write;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg p_src_data_stream_0_V_read;
reg p_src_data_stream_1_V_read;
reg p_src_data_stream_2_V_read;
reg p_src_data_stream_3_V_read;
reg p_dst_rows_V_read;
reg p_dst_cols_V_read;
reg p_dst_data_stream_0_V_write;
reg p_dst_data_stream_1_V_write;
reg p_dst_data_stream_2_V_write;
reg p_dst_data_stream_3_V_write;
reg p_dst_rows_V_out_write;
reg p_dst_cols_V_out_write;

reg    ap_done_reg;
(* fsm_encoding = "none" *) reg   [1:0] ap_CS_fsm;
reg    ap_sig_cseq_ST_st1_fsm_0;
reg    ap_sig_20;
reg    p_dst_rows_V_blk_n;
reg    p_dst_cols_V_blk_n;
reg    p_dst_rows_V_out_blk_n;
reg    p_dst_cols_V_out_blk_n;
reg   [9:0] p_dst_rows_V_read_reg_98;
reg    ap_sig_95;
reg   [10:0] p_dst_cols_V_read_reg_103;
wire    grp_filt_Resize_opr_linear_fu_74_ap_start;
wire    grp_filt_Resize_opr_linear_fu_74_ap_done;
wire    grp_filt_Resize_opr_linear_fu_74_ap_idle;
wire    grp_filt_Resize_opr_linear_fu_74_ap_ready;
wire    grp_filt_Resize_opr_linear_fu_74_p_src_data_stream_0_V_read;
wire    grp_filt_Resize_opr_linear_fu_74_p_src_data_stream_1_V_read;
wire    grp_filt_Resize_opr_linear_fu_74_p_src_data_stream_2_V_read;
wire    grp_filt_Resize_opr_linear_fu_74_p_src_data_stream_3_V_read;
wire   [7:0] grp_filt_Resize_opr_linear_fu_74_p_dst_data_stream_0_V_din;
wire    grp_filt_Resize_opr_linear_fu_74_p_dst_data_stream_0_V_write;
wire   [7:0] grp_filt_Resize_opr_linear_fu_74_p_dst_data_stream_1_V_din;
wire    grp_filt_Resize_opr_linear_fu_74_p_dst_data_stream_1_V_write;
wire   [7:0] grp_filt_Resize_opr_linear_fu_74_p_dst_data_stream_2_V_din;
wire    grp_filt_Resize_opr_linear_fu_74_p_dst_data_stream_2_V_write;
wire   [7:0] grp_filt_Resize_opr_linear_fu_74_p_dst_data_stream_3_V_din;
wire    grp_filt_Resize_opr_linear_fu_74_p_dst_data_stream_3_V_write;
reg    ap_reg_grp_filt_Resize_opr_linear_fu_74_ap_start;
reg    ap_sig_cseq_ST_st2_fsm_1;
reg    ap_sig_139;
reg   [1:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_done_reg = 1'b0;
#0 ap_CS_fsm = 2'b1;
#0 ap_reg_grp_filt_Resize_opr_linear_fu_74_ap_start = 1'b0;
end

filt_Resize_opr_linear grp_filt_Resize_opr_linear_fu_74(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_filt_Resize_opr_linear_fu_74_ap_start),
    .ap_done(grp_filt_Resize_opr_linear_fu_74_ap_done),
    .ap_idle(grp_filt_Resize_opr_linear_fu_74_ap_idle),
    .ap_ready(grp_filt_Resize_opr_linear_fu_74_ap_ready),
    .p_src_data_stream_0_V_dout(p_src_data_stream_0_V_dout),
    .p_src_data_stream_0_V_empty_n(p_src_data_stream_0_V_empty_n),
    .p_src_data_stream_0_V_read(grp_filt_Resize_opr_linear_fu_74_p_src_data_stream_0_V_read),
    .p_src_data_stream_1_V_dout(p_src_data_stream_1_V_dout),
    .p_src_data_stream_1_V_empty_n(p_src_data_stream_1_V_empty_n),
    .p_src_data_stream_1_V_read(grp_filt_Resize_opr_linear_fu_74_p_src_data_stream_1_V_read),
    .p_src_data_stream_2_V_dout(p_src_data_stream_2_V_dout),
    .p_src_data_stream_2_V_empty_n(p_src_data_stream_2_V_empty_n),
    .p_src_data_stream_2_V_read(grp_filt_Resize_opr_linear_fu_74_p_src_data_stream_2_V_read),
    .p_src_data_stream_3_V_dout(p_src_data_stream_3_V_dout),
    .p_src_data_stream_3_V_empty_n(p_src_data_stream_3_V_empty_n),
    .p_src_data_stream_3_V_read(grp_filt_Resize_opr_linear_fu_74_p_src_data_stream_3_V_read),
    .p_dst_rows_V_read(p_dst_rows_V_read_reg_98),
    .p_dst_cols_V_read(p_dst_cols_V_read_reg_103),
    .p_dst_data_stream_0_V_din(grp_filt_Resize_opr_linear_fu_74_p_dst_data_stream_0_V_din),
    .p_dst_data_stream_0_V_full_n(p_dst_data_stream_0_V_full_n),
    .p_dst_data_stream_0_V_write(grp_filt_Resize_opr_linear_fu_74_p_dst_data_stream_0_V_write),
    .p_dst_data_stream_1_V_din(grp_filt_Resize_opr_linear_fu_74_p_dst_data_stream_1_V_din),
    .p_dst_data_stream_1_V_full_n(p_dst_data_stream_1_V_full_n),
    .p_dst_data_stream_1_V_write(grp_filt_Resize_opr_linear_fu_74_p_dst_data_stream_1_V_write),
    .p_dst_data_stream_2_V_din(grp_filt_Resize_opr_linear_fu_74_p_dst_data_stream_2_V_din),
    .p_dst_data_stream_2_V_full_n(p_dst_data_stream_2_V_full_n),
    .p_dst_data_stream_2_V_write(grp_filt_Resize_opr_linear_fu_74_p_dst_data_stream_2_V_write),
    .p_dst_data_stream_3_V_din(grp_filt_Resize_opr_linear_fu_74_p_dst_data_stream_3_V_din),
    .p_dst_data_stream_3_V_full_n(p_dst_data_stream_3_V_full_n),
    .p_dst_data_stream_3_V_write(grp_filt_Resize_opr_linear_fu_74_p_dst_data_stream_3_V_write)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_st1_fsm_0;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_done_reg <= 1'b0;
    end else begin
        if ((1'b1 == ap_continue)) begin
            ap_done_reg <= 1'b0;
        end else if (((1'b1 == ap_sig_cseq_ST_st2_fsm_1) & ~(1'b0 == grp_filt_Resize_opr_linear_fu_74_ap_done))) begin
            ap_done_reg <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_reg_grp_filt_Resize_opr_linear_fu_74_ap_start <= 1'b0;
    end else begin
        if (((1'b1 == ap_sig_cseq_ST_st1_fsm_0) & ~ap_sig_95)) begin
            ap_reg_grp_filt_Resize_opr_linear_fu_74_ap_start <= 1'b1;
        end else if ((1'b1 == grp_filt_Resize_opr_linear_fu_74_ap_ready)) begin
            ap_reg_grp_filt_Resize_opr_linear_fu_74_ap_start <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_sig_cseq_ST_st1_fsm_0) & ~ap_sig_95)) begin
        p_dst_cols_V_read_reg_103 <= p_dst_cols_V_dout;
        p_dst_rows_V_read_reg_98 <= p_dst_rows_V_dout;
    end
end

always @ (*) begin
    if (((1'b1 == ap_done_reg) | ((1'b1 == ap_sig_cseq_ST_st2_fsm_1) & ~(1'b0 == grp_filt_Resize_opr_linear_fu_74_ap_done)))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_start) & (1'b1 == ap_sig_cseq_ST_st1_fsm_0))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_sig_cseq_ST_st2_fsm_1) & ~(1'b0 == grp_filt_Resize_opr_linear_fu_74_ap_done))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (ap_sig_20) begin
        ap_sig_cseq_ST_st1_fsm_0 = 1'b1;
    end else begin
        ap_sig_cseq_ST_st1_fsm_0 = 1'b0;
    end
end

always @ (*) begin
    if (ap_sig_139) begin
        ap_sig_cseq_ST_st2_fsm_1 = 1'b1;
    end else begin
        ap_sig_cseq_ST_st2_fsm_1 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_sig_cseq_ST_st1_fsm_0) & ~((ap_start == 1'b0) | (ap_done_reg == 1'b1)))) begin
        p_dst_cols_V_blk_n = p_dst_cols_V_empty_n;
    end else begin
        p_dst_cols_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((1'b1 == ap_sig_cseq_ST_st1_fsm_0) & ~((ap_start == 1'b0) | (ap_done_reg == 1'b1)))) begin
        p_dst_cols_V_out_blk_n = p_dst_cols_V_out_full_n;
    end else begin
        p_dst_cols_V_out_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((1'b1 == ap_sig_cseq_ST_st1_fsm_0) & ~ap_sig_95)) begin
        p_dst_cols_V_out_write = 1'b1;
    end else begin
        p_dst_cols_V_out_write = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_sig_cseq_ST_st1_fsm_0) & ~ap_sig_95)) begin
        p_dst_cols_V_read = 1'b1;
    end else begin
        p_dst_cols_V_read = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_sig_cseq_ST_st2_fsm_1)) begin
        p_dst_data_stream_0_V_write = grp_filt_Resize_opr_linear_fu_74_p_dst_data_stream_0_V_write;
    end else begin
        p_dst_data_stream_0_V_write = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_sig_cseq_ST_st2_fsm_1)) begin
        p_dst_data_stream_1_V_write = grp_filt_Resize_opr_linear_fu_74_p_dst_data_stream_1_V_write;
    end else begin
        p_dst_data_stream_1_V_write = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_sig_cseq_ST_st2_fsm_1)) begin
        p_dst_data_stream_2_V_write = grp_filt_Resize_opr_linear_fu_74_p_dst_data_stream_2_V_write;
    end else begin
        p_dst_data_stream_2_V_write = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_sig_cseq_ST_st2_fsm_1)) begin
        p_dst_data_stream_3_V_write = grp_filt_Resize_opr_linear_fu_74_p_dst_data_stream_3_V_write;
    end else begin
        p_dst_data_stream_3_V_write = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_sig_cseq_ST_st1_fsm_0) & ~((ap_start == 1'b0) | (ap_done_reg == 1'b1)))) begin
        p_dst_rows_V_blk_n = p_dst_rows_V_empty_n;
    end else begin
        p_dst_rows_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((1'b1 == ap_sig_cseq_ST_st1_fsm_0) & ~((ap_start == 1'b0) | (ap_done_reg == 1'b1)))) begin
        p_dst_rows_V_out_blk_n = p_dst_rows_V_out_full_n;
    end else begin
        p_dst_rows_V_out_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((1'b1 == ap_sig_cseq_ST_st1_fsm_0) & ~ap_sig_95)) begin
        p_dst_rows_V_out_write = 1'b1;
    end else begin
        p_dst_rows_V_out_write = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_sig_cseq_ST_st1_fsm_0) & ~ap_sig_95)) begin
        p_dst_rows_V_read = 1'b1;
    end else begin
        p_dst_rows_V_read = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_sig_cseq_ST_st2_fsm_1)) begin
        p_src_data_stream_0_V_read = grp_filt_Resize_opr_linear_fu_74_p_src_data_stream_0_V_read;
    end else begin
        p_src_data_stream_0_V_read = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_sig_cseq_ST_st2_fsm_1)) begin
        p_src_data_stream_1_V_read = grp_filt_Resize_opr_linear_fu_74_p_src_data_stream_1_V_read;
    end else begin
        p_src_data_stream_1_V_read = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_sig_cseq_ST_st2_fsm_1)) begin
        p_src_data_stream_2_V_read = grp_filt_Resize_opr_linear_fu_74_p_src_data_stream_2_V_read;
    end else begin
        p_src_data_stream_2_V_read = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_sig_cseq_ST_st2_fsm_1)) begin
        p_src_data_stream_3_V_read = grp_filt_Resize_opr_linear_fu_74_p_src_data_stream_3_V_read;
    end else begin
        p_src_data_stream_3_V_read = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_st1_fsm_0 : begin
            if (~ap_sig_95) begin
                ap_NS_fsm = ap_ST_st2_fsm_1;
            end else begin
                ap_NS_fsm = ap_ST_st1_fsm_0;
            end
        end
        ap_ST_st2_fsm_1 : begin
            if (~(1'b0 == grp_filt_Resize_opr_linear_fu_74_ap_done)) begin
                ap_NS_fsm = ap_ST_st1_fsm_0;
            end else begin
                ap_NS_fsm = ap_ST_st2_fsm_1;
            end
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

always @ (*) begin
    ap_sig_139 = (1'b1 == ap_CS_fsm[ap_const_lv32_1]);
end

always @ (*) begin
    ap_sig_20 = (ap_CS_fsm[ap_const_lv32_0] == 1'b1);
end

always @ (*) begin
    ap_sig_95 = ((ap_start == 1'b0) | (ap_done_reg == 1'b1) | (p_dst_rows_V_empty_n == 1'b0) | (p_dst_cols_V_empty_n == 1'b0) | (p_dst_rows_V_out_full_n == 1'b0) | (p_dst_cols_V_out_full_n == 1'b0));
end

assign grp_filt_Resize_opr_linear_fu_74_ap_start = ap_reg_grp_filt_Resize_opr_linear_fu_74_ap_start;

assign p_dst_cols_V_out_din = p_dst_cols_V_dout;

assign p_dst_data_stream_0_V_din = grp_filt_Resize_opr_linear_fu_74_p_dst_data_stream_0_V_din;

assign p_dst_data_stream_1_V_din = grp_filt_Resize_opr_linear_fu_74_p_dst_data_stream_1_V_din;

assign p_dst_data_stream_2_V_din = grp_filt_Resize_opr_linear_fu_74_p_dst_data_stream_2_V_din;

assign p_dst_data_stream_3_V_din = grp_filt_Resize_opr_linear_fu_74_p_dst_data_stream_3_V_din;

assign p_dst_rows_V_out_din = p_dst_rows_V_dout;

endmodule //filt_Resize
