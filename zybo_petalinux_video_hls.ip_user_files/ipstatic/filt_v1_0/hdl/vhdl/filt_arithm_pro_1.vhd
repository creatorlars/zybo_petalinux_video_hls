-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2016.2
-- Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity filt_arithm_pro_1 is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    src1_0_data_stream_V_dout : IN STD_LOGIC_VECTOR (7 downto 0);
    src1_0_data_stream_V_empty_n : IN STD_LOGIC;
    src1_0_data_stream_V_read : OUT STD_LOGIC;
    src1_1_data_stream_V_dout : IN STD_LOGIC_VECTOR (7 downto 0);
    src1_1_data_stream_V_empty_n : IN STD_LOGIC;
    src1_1_data_stream_V_read : OUT STD_LOGIC;
    src1_2_data_stream_V_dout : IN STD_LOGIC_VECTOR (7 downto 0);
    src1_2_data_stream_V_empty_n : IN STD_LOGIC;
    src1_2_data_stream_V_read : OUT STD_LOGIC;
    src2_0_data_stream_V_dout : IN STD_LOGIC_VECTOR (7 downto 0);
    src2_0_data_stream_V_empty_n : IN STD_LOGIC;
    src2_0_data_stream_V_read : OUT STD_LOGIC;
    src2_1_data_stream_V_dout : IN STD_LOGIC_VECTOR (7 downto 0);
    src2_1_data_stream_V_empty_n : IN STD_LOGIC;
    src2_1_data_stream_V_read : OUT STD_LOGIC;
    src2_2_data_stream_V_dout : IN STD_LOGIC_VECTOR (7 downto 0);
    src2_2_data_stream_V_empty_n : IN STD_LOGIC;
    src2_2_data_stream_V_read : OUT STD_LOGIC;
    dst_data_stream_0_V_din : OUT STD_LOGIC_VECTOR (7 downto 0);
    dst_data_stream_0_V_full_n : IN STD_LOGIC;
    dst_data_stream_0_V_write : OUT STD_LOGIC;
    dst_data_stream_1_V_din : OUT STD_LOGIC_VECTOR (7 downto 0);
    dst_data_stream_1_V_full_n : IN STD_LOGIC;
    dst_data_stream_1_V_write : OUT STD_LOGIC;
    dst_data_stream_2_V_din : OUT STD_LOGIC_VECTOR (7 downto 0);
    dst_data_stream_2_V_full_n : IN STD_LOGIC;
    dst_data_stream_2_V_write : OUT STD_LOGIC;
    p0 : IN STD_LOGIC_VECTOR (0 downto 0) );
end;


architecture behav of filt_arithm_pro_1 is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_st1_fsm_0 : STD_LOGIC_VECTOR (3 downto 0) := "0001";
    constant ap_ST_st2_fsm_1 : STD_LOGIC_VECTOR (3 downto 0) := "0010";
    constant ap_ST_pp0_stg0_fsm_2 : STD_LOGIC_VECTOR (3 downto 0) := "0100";
    constant ap_ST_st6_fsm_3 : STD_LOGIC_VECTOR (3 downto 0) := "1000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv8_0 : STD_LOGIC_VECTOR (7 downto 0) := "00000000";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv9_0 : STD_LOGIC_VECTOR (8 downto 0) := "000000000";
    constant ap_const_lv8_FF : STD_LOGIC_VECTOR (7 downto 0) := "11111111";
    constant ap_const_lv8_F0 : STD_LOGIC_VECTOR (7 downto 0) := "11110000";
    constant ap_const_lv8_1 : STD_LOGIC_VECTOR (7 downto 0) := "00000001";
    constant ap_const_lv9_140 : STD_LOGIC_VECTOR (8 downto 0) := "101000000";
    constant ap_const_lv9_1 : STD_LOGIC_VECTOR (8 downto 0) := "000000001";
    constant ap_const_lv32_8 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001000";

    signal ap_CS_fsm : STD_LOGIC_VECTOR (3 downto 0) := "0001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_sig_cseq_ST_st1_fsm_0 : STD_LOGIC;
    signal ap_sig_21 : BOOLEAN;
    signal src1_0_data_stream_V_blk_n : STD_LOGIC;
    signal ap_sig_cseq_ST_pp0_stg0_fsm_2 : STD_LOGIC;
    signal ap_sig_69 : BOOLEAN;
    signal ap_reg_ppiten_pp0_it1 : STD_LOGIC := '0';
    signal ap_reg_ppiten_pp0_it0 : STD_LOGIC := '0';
    signal ap_reg_ppiten_pp0_it2 : STD_LOGIC := '0';
    signal exitcond4_reg_337 : STD_LOGIC_VECTOR (0 downto 0);
    signal src1_1_data_stream_V_blk_n : STD_LOGIC;
    signal src1_2_data_stream_V_blk_n : STD_LOGIC;
    signal src2_0_data_stream_V_blk_n : STD_LOGIC;
    signal src2_1_data_stream_V_blk_n : STD_LOGIC;
    signal src2_2_data_stream_V_blk_n : STD_LOGIC;
    signal dst_data_stream_0_V_blk_n : STD_LOGIC;
    signal ap_reg_ppstg_exitcond4_reg_337_pp0_iter1 : STD_LOGIC_VECTOR (0 downto 0);
    signal dst_data_stream_1_V_blk_n : STD_LOGIC;
    signal dst_data_stream_2_V_blk_n : STD_LOGIC;
    signal p_3_reg_158 : STD_LOGIC_VECTOR (8 downto 0);
    signal tmp_9_cast_fu_169_p3 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_9_cast_reg_321 : STD_LOGIC_VECTOR (7 downto 0);
    signal exitcond3_fu_177_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_sig_cseq_ST_st2_fsm_1 : STD_LOGIC;
    signal ap_sig_107 : BOOLEAN;
    signal i_V_fu_183_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal i_V_reg_332 : STD_LOGIC_VECTOR (7 downto 0);
    signal exitcond4_fu_189_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_sig_129 : BOOLEAN;
    signal ap_sig_139 : BOOLEAN;
    signal j_V_fu_195_p2 : STD_LOGIC_VECTOR (8 downto 0);
    signal p_Val2_2_fu_214_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal p_Val2_2_reg_346 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_10_reg_351 : STD_LOGIC_VECTOR (0 downto 0);
    signal p_Val2_5_fu_247_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal p_Val2_5_reg_356 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_11_reg_361 : STD_LOGIC_VECTOR (0 downto 0);
    signal p_Val2_6_fu_280_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal p_Val2_6_reg_366 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_12_reg_371 : STD_LOGIC_VECTOR (0 downto 0);
    signal p_s_reg_147 : STD_LOGIC_VECTOR (7 downto 0);
    signal ap_sig_cseq_ST_st6_fsm_3 : STD_LOGIC;
    signal ap_sig_177 : BOOLEAN;
    signal r_V_fu_201_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal r_V_cast_fu_206_p1 : STD_LOGIC_VECTOR (8 downto 0);
    signal rhs_V_cast_cast_fu_210_p1 : STD_LOGIC_VECTOR (8 downto 0);
    signal p_Val2_1_fu_220_p2 : STD_LOGIC_VECTOR (8 downto 0);
    signal r_V_1_fu_234_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal r_V_1_cast_fu_239_p1 : STD_LOGIC_VECTOR (8 downto 0);
    signal rhs_V_1_cast_cast_fu_243_p1 : STD_LOGIC_VECTOR (8 downto 0);
    signal p_Val2_4_fu_253_p2 : STD_LOGIC_VECTOR (8 downto 0);
    signal r_V_2_fu_267_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal r_V_2_cast_fu_272_p1 : STD_LOGIC_VECTOR (8 downto 0);
    signal rhs_V_2_cast_cast_fu_276_p1 : STD_LOGIC_VECTOR (8 downto 0);
    signal p_Val2_s_fu_286_p2 : STD_LOGIC_VECTOR (8 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (3 downto 0);


begin




    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_st1_fsm_0;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    ap_reg_ppiten_pp0_it0_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_reg_ppiten_pp0_it0 <= ap_const_logic_0;
            else
                if (((ap_const_logic_1 = ap_sig_cseq_ST_pp0_stg0_fsm_2) and not((((ap_const_logic_1 = ap_reg_ppiten_pp0_it1) and ap_sig_129) or ((ap_const_logic_1 = ap_reg_ppiten_pp0_it2) and ap_sig_139))) and not((ap_const_lv1_0 = exitcond4_fu_189_p2)))) then 
                    ap_reg_ppiten_pp0_it0 <= ap_const_logic_0;
                elsif (((ap_const_logic_1 = ap_sig_cseq_ST_st2_fsm_1) and (ap_const_lv1_0 = exitcond3_fu_177_p2))) then 
                    ap_reg_ppiten_pp0_it0 <= ap_const_logic_1;
                end if; 
            end if;
        end if;
    end process;


    ap_reg_ppiten_pp0_it1_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_reg_ppiten_pp0_it1 <= ap_const_logic_0;
            else
                if (((ap_const_logic_1 = ap_sig_cseq_ST_pp0_stg0_fsm_2) and not((((ap_const_logic_1 = ap_reg_ppiten_pp0_it1) and ap_sig_129) or ((ap_const_logic_1 = ap_reg_ppiten_pp0_it2) and ap_sig_139))) and (ap_const_lv1_0 = exitcond4_fu_189_p2))) then 
                    ap_reg_ppiten_pp0_it1 <= ap_const_logic_1;
                elsif ((((ap_const_logic_1 = ap_sig_cseq_ST_st2_fsm_1) and (ap_const_lv1_0 = exitcond3_fu_177_p2)) or ((ap_const_logic_1 = ap_sig_cseq_ST_pp0_stg0_fsm_2) and not((((ap_const_logic_1 = ap_reg_ppiten_pp0_it1) and ap_sig_129) or ((ap_const_logic_1 = ap_reg_ppiten_pp0_it2) and ap_sig_139))) and not((ap_const_lv1_0 = exitcond4_fu_189_p2))))) then 
                    ap_reg_ppiten_pp0_it1 <= ap_const_logic_0;
                end if; 
            end if;
        end if;
    end process;


    ap_reg_ppiten_pp0_it2_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_reg_ppiten_pp0_it2 <= ap_const_logic_0;
            else
                if (not((((ap_const_logic_1 = ap_reg_ppiten_pp0_it1) and ap_sig_129) or ((ap_const_logic_1 = ap_reg_ppiten_pp0_it2) and ap_sig_139)))) then 
                    ap_reg_ppiten_pp0_it2 <= ap_reg_ppiten_pp0_it1;
                elsif (((ap_const_logic_1 = ap_sig_cseq_ST_st2_fsm_1) and (ap_const_lv1_0 = exitcond3_fu_177_p2))) then 
                    ap_reg_ppiten_pp0_it2 <= ap_const_logic_0;
                end if; 
            end if;
        end if;
    end process;


    p_3_reg_158_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_sig_cseq_ST_pp0_stg0_fsm_2) and (ap_const_logic_1 = ap_reg_ppiten_pp0_it0) and not((((ap_const_logic_1 = ap_reg_ppiten_pp0_it1) and ap_sig_129) or ((ap_const_logic_1 = ap_reg_ppiten_pp0_it2) and ap_sig_139))) and (ap_const_lv1_0 = exitcond4_fu_189_p2))) then 
                p_3_reg_158 <= j_V_fu_195_p2;
            elsif (((ap_const_logic_1 = ap_sig_cseq_ST_st2_fsm_1) and (ap_const_lv1_0 = exitcond3_fu_177_p2))) then 
                p_3_reg_158 <= ap_const_lv9_0;
            end if; 
        end if;
    end process;

    p_s_reg_147_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_sig_cseq_ST_st6_fsm_3)) then 
                p_s_reg_147 <= i_V_reg_332;
            elsif (((ap_const_logic_1 = ap_sig_cseq_ST_st1_fsm_0) and not((ap_start = ap_const_logic_0)))) then 
                p_s_reg_147 <= ap_const_lv8_0;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_sig_cseq_ST_pp0_stg0_fsm_2) and not((((ap_const_logic_1 = ap_reg_ppiten_pp0_it1) and ap_sig_129) or ((ap_const_logic_1 = ap_reg_ppiten_pp0_it2) and ap_sig_139))))) then
                ap_reg_ppstg_exitcond4_reg_337_pp0_iter1 <= exitcond4_reg_337;
                exitcond4_reg_337 <= exitcond4_fu_189_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_sig_cseq_ST_st2_fsm_1)) then
                i_V_reg_332 <= i_V_fu_183_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_sig_cseq_ST_pp0_stg0_fsm_2) and (exitcond4_reg_337 = ap_const_lv1_0) and not((((ap_const_logic_1 = ap_reg_ppiten_pp0_it1) and ap_sig_129) or ((ap_const_logic_1 = ap_reg_ppiten_pp0_it2) and ap_sig_139))))) then
                p_Val2_2_reg_346 <= p_Val2_2_fu_214_p2;
                p_Val2_5_reg_356 <= p_Val2_5_fu_247_p2;
                p_Val2_6_reg_366 <= p_Val2_6_fu_280_p2;
                tmp_10_reg_351 <= p_Val2_1_fu_220_p2(8 downto 8);
                tmp_11_reg_361 <= p_Val2_4_fu_253_p2(8 downto 8);
                tmp_12_reg_371 <= p_Val2_s_fu_286_p2(8 downto 8);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_sig_cseq_ST_st1_fsm_0) and not((ap_start = ap_const_logic_0)))) then
                tmp_9_cast_reg_321 <= tmp_9_cast_fu_169_p3;
            end if;
        end if;
    end process;

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_reg_ppiten_pp0_it1, ap_reg_ppiten_pp0_it0, ap_reg_ppiten_pp0_it2, exitcond3_fu_177_p2, exitcond4_fu_189_p2, ap_sig_129, ap_sig_139)
    begin
        case ap_CS_fsm is
            when ap_ST_st1_fsm_0 => 
                if (not((ap_start = ap_const_logic_0))) then
                    ap_NS_fsm <= ap_ST_st2_fsm_1;
                else
                    ap_NS_fsm <= ap_ST_st1_fsm_0;
                end if;
            when ap_ST_st2_fsm_1 => 
                if (not((ap_const_lv1_0 = exitcond3_fu_177_p2))) then
                    ap_NS_fsm <= ap_ST_st1_fsm_0;
                else
                    ap_NS_fsm <= ap_ST_pp0_stg0_fsm_2;
                end if;
            when ap_ST_pp0_stg0_fsm_2 => 
                if ((not(((ap_const_logic_1 = ap_reg_ppiten_pp0_it2) and not((((ap_const_logic_1 = ap_reg_ppiten_pp0_it1) and ap_sig_129) or ((ap_const_logic_1 = ap_reg_ppiten_pp0_it2) and ap_sig_139))) and not((ap_const_logic_1 = ap_reg_ppiten_pp0_it1)))) and not(((ap_const_logic_1 = ap_reg_ppiten_pp0_it0) and not((((ap_const_logic_1 = ap_reg_ppiten_pp0_it1) and ap_sig_129) or ((ap_const_logic_1 = ap_reg_ppiten_pp0_it2) and ap_sig_139))) and not((ap_const_lv1_0 = exitcond4_fu_189_p2)) and not((ap_const_logic_1 = ap_reg_ppiten_pp0_it1)))))) then
                    ap_NS_fsm <= ap_ST_pp0_stg0_fsm_2;
                elsif ((((ap_const_logic_1 = ap_reg_ppiten_pp0_it2) and not((((ap_const_logic_1 = ap_reg_ppiten_pp0_it1) and ap_sig_129) or ((ap_const_logic_1 = ap_reg_ppiten_pp0_it2) and ap_sig_139))) and not((ap_const_logic_1 = ap_reg_ppiten_pp0_it1))) or ((ap_const_logic_1 = ap_reg_ppiten_pp0_it0) and not((((ap_const_logic_1 = ap_reg_ppiten_pp0_it1) and ap_sig_129) or ((ap_const_logic_1 = ap_reg_ppiten_pp0_it2) and ap_sig_139))) and not((ap_const_lv1_0 = exitcond4_fu_189_p2)) and not((ap_const_logic_1 = ap_reg_ppiten_pp0_it1))))) then
                    ap_NS_fsm <= ap_ST_st6_fsm_3;
                else
                    ap_NS_fsm <= ap_ST_pp0_stg0_fsm_2;
                end if;
            when ap_ST_st6_fsm_3 => 
                ap_NS_fsm <= ap_ST_st2_fsm_1;
            when others =>  
                ap_NS_fsm <= "XXXX";
        end case;
    end process;

    ap_done_assign_proc : process(ap_start, ap_sig_cseq_ST_st1_fsm_0, exitcond3_fu_177_p2, ap_sig_cseq_ST_st2_fsm_1)
    begin
        if ((((ap_const_logic_0 = ap_start) and (ap_const_logic_1 = ap_sig_cseq_ST_st1_fsm_0)) or ((ap_const_logic_1 = ap_sig_cseq_ST_st2_fsm_1) and not((ap_const_lv1_0 = exitcond3_fu_177_p2))))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_assign_proc : process(ap_start, ap_sig_cseq_ST_st1_fsm_0)
    begin
        if (((ap_const_logic_0 = ap_start) and (ap_const_logic_1 = ap_sig_cseq_ST_st1_fsm_0))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_ready_assign_proc : process(exitcond3_fu_177_p2, ap_sig_cseq_ST_st2_fsm_1)
    begin
        if (((ap_const_logic_1 = ap_sig_cseq_ST_st2_fsm_1) and not((ap_const_lv1_0 = exitcond3_fu_177_p2)))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;


    ap_sig_107_assign_proc : process(ap_CS_fsm)
    begin
                ap_sig_107 <= (ap_const_lv1_1 = ap_CS_fsm(1 downto 1));
    end process;


    ap_sig_129_assign_proc : process(src1_0_data_stream_V_empty_n, src1_1_data_stream_V_empty_n, src1_2_data_stream_V_empty_n, src2_0_data_stream_V_empty_n, src2_1_data_stream_V_empty_n, src2_2_data_stream_V_empty_n, exitcond4_reg_337)
    begin
                ap_sig_129 <= (((exitcond4_reg_337 = ap_const_lv1_0) and (src1_0_data_stream_V_empty_n = ap_const_logic_0)) or ((exitcond4_reg_337 = ap_const_lv1_0) and (src1_1_data_stream_V_empty_n = ap_const_logic_0)) or ((exitcond4_reg_337 = ap_const_lv1_0) and (src1_2_data_stream_V_empty_n = ap_const_logic_0)) or ((exitcond4_reg_337 = ap_const_lv1_0) and (src2_0_data_stream_V_empty_n = ap_const_logic_0)) or ((exitcond4_reg_337 = ap_const_lv1_0) and (src2_1_data_stream_V_empty_n = ap_const_logic_0)) or ((exitcond4_reg_337 = ap_const_lv1_0) and (src2_2_data_stream_V_empty_n = ap_const_logic_0)));
    end process;


    ap_sig_139_assign_proc : process(dst_data_stream_0_V_full_n, dst_data_stream_1_V_full_n, dst_data_stream_2_V_full_n, ap_reg_ppstg_exitcond4_reg_337_pp0_iter1)
    begin
                ap_sig_139 <= (((ap_const_lv1_0 = ap_reg_ppstg_exitcond4_reg_337_pp0_iter1) and (dst_data_stream_0_V_full_n = ap_const_logic_0)) or ((ap_const_lv1_0 = ap_reg_ppstg_exitcond4_reg_337_pp0_iter1) and (dst_data_stream_1_V_full_n = ap_const_logic_0)) or ((ap_const_lv1_0 = ap_reg_ppstg_exitcond4_reg_337_pp0_iter1) and (dst_data_stream_2_V_full_n = ap_const_logic_0)));
    end process;


    ap_sig_177_assign_proc : process(ap_CS_fsm)
    begin
                ap_sig_177 <= (ap_const_lv1_1 = ap_CS_fsm(3 downto 3));
    end process;


    ap_sig_21_assign_proc : process(ap_CS_fsm)
    begin
                ap_sig_21 <= (ap_CS_fsm(0 downto 0) = ap_const_lv1_1);
    end process;


    ap_sig_69_assign_proc : process(ap_CS_fsm)
    begin
                ap_sig_69 <= (ap_const_lv1_1 = ap_CS_fsm(2 downto 2));
    end process;


    ap_sig_cseq_ST_pp0_stg0_fsm_2_assign_proc : process(ap_sig_69)
    begin
        if (ap_sig_69) then 
            ap_sig_cseq_ST_pp0_stg0_fsm_2 <= ap_const_logic_1;
        else 
            ap_sig_cseq_ST_pp0_stg0_fsm_2 <= ap_const_logic_0;
        end if; 
    end process;


    ap_sig_cseq_ST_st1_fsm_0_assign_proc : process(ap_sig_21)
    begin
        if (ap_sig_21) then 
            ap_sig_cseq_ST_st1_fsm_0 <= ap_const_logic_1;
        else 
            ap_sig_cseq_ST_st1_fsm_0 <= ap_const_logic_0;
        end if; 
    end process;


    ap_sig_cseq_ST_st2_fsm_1_assign_proc : process(ap_sig_107)
    begin
        if (ap_sig_107) then 
            ap_sig_cseq_ST_st2_fsm_1 <= ap_const_logic_1;
        else 
            ap_sig_cseq_ST_st2_fsm_1 <= ap_const_logic_0;
        end if; 
    end process;


    ap_sig_cseq_ST_st6_fsm_3_assign_proc : process(ap_sig_177)
    begin
        if (ap_sig_177) then 
            ap_sig_cseq_ST_st6_fsm_3 <= ap_const_logic_1;
        else 
            ap_sig_cseq_ST_st6_fsm_3 <= ap_const_logic_0;
        end if; 
    end process;


    dst_data_stream_0_V_blk_n_assign_proc : process(dst_data_stream_0_V_full_n, ap_reg_ppiten_pp0_it2, ap_reg_ppstg_exitcond4_reg_337_pp0_iter1)
    begin
        if (((ap_const_logic_1 = ap_reg_ppiten_pp0_it2) and (ap_const_lv1_0 = ap_reg_ppstg_exitcond4_reg_337_pp0_iter1))) then 
            dst_data_stream_0_V_blk_n <= dst_data_stream_0_V_full_n;
        else 
            dst_data_stream_0_V_blk_n <= ap_const_logic_1;
        end if; 
    end process;

    dst_data_stream_0_V_din <= 
        ap_const_lv8_FF when (tmp_10_reg_351(0) = '1') else 
        p_Val2_2_reg_346;

    dst_data_stream_0_V_write_assign_proc : process(ap_reg_ppiten_pp0_it1, ap_reg_ppiten_pp0_it2, ap_reg_ppstg_exitcond4_reg_337_pp0_iter1, ap_sig_129, ap_sig_139)
    begin
        if (((ap_const_logic_1 = ap_reg_ppiten_pp0_it2) and (ap_const_lv1_0 = ap_reg_ppstg_exitcond4_reg_337_pp0_iter1) and not((((ap_const_logic_1 = ap_reg_ppiten_pp0_it1) and ap_sig_129) or ((ap_const_logic_1 = ap_reg_ppiten_pp0_it2) and ap_sig_139))))) then 
            dst_data_stream_0_V_write <= ap_const_logic_1;
        else 
            dst_data_stream_0_V_write <= ap_const_logic_0;
        end if; 
    end process;


    dst_data_stream_1_V_blk_n_assign_proc : process(dst_data_stream_1_V_full_n, ap_reg_ppiten_pp0_it2, ap_reg_ppstg_exitcond4_reg_337_pp0_iter1)
    begin
        if (((ap_const_logic_1 = ap_reg_ppiten_pp0_it2) and (ap_const_lv1_0 = ap_reg_ppstg_exitcond4_reg_337_pp0_iter1))) then 
            dst_data_stream_1_V_blk_n <= dst_data_stream_1_V_full_n;
        else 
            dst_data_stream_1_V_blk_n <= ap_const_logic_1;
        end if; 
    end process;

    dst_data_stream_1_V_din <= 
        ap_const_lv8_FF when (tmp_11_reg_361(0) = '1') else 
        p_Val2_5_reg_356;

    dst_data_stream_1_V_write_assign_proc : process(ap_reg_ppiten_pp0_it1, ap_reg_ppiten_pp0_it2, ap_reg_ppstg_exitcond4_reg_337_pp0_iter1, ap_sig_129, ap_sig_139)
    begin
        if (((ap_const_logic_1 = ap_reg_ppiten_pp0_it2) and (ap_const_lv1_0 = ap_reg_ppstg_exitcond4_reg_337_pp0_iter1) and not((((ap_const_logic_1 = ap_reg_ppiten_pp0_it1) and ap_sig_129) or ((ap_const_logic_1 = ap_reg_ppiten_pp0_it2) and ap_sig_139))))) then 
            dst_data_stream_1_V_write <= ap_const_logic_1;
        else 
            dst_data_stream_1_V_write <= ap_const_logic_0;
        end if; 
    end process;


    dst_data_stream_2_V_blk_n_assign_proc : process(dst_data_stream_2_V_full_n, ap_reg_ppiten_pp0_it2, ap_reg_ppstg_exitcond4_reg_337_pp0_iter1)
    begin
        if (((ap_const_logic_1 = ap_reg_ppiten_pp0_it2) and (ap_const_lv1_0 = ap_reg_ppstg_exitcond4_reg_337_pp0_iter1))) then 
            dst_data_stream_2_V_blk_n <= dst_data_stream_2_V_full_n;
        else 
            dst_data_stream_2_V_blk_n <= ap_const_logic_1;
        end if; 
    end process;

    dst_data_stream_2_V_din <= 
        ap_const_lv8_FF when (tmp_12_reg_371(0) = '1') else 
        p_Val2_6_reg_366;

    dst_data_stream_2_V_write_assign_proc : process(ap_reg_ppiten_pp0_it1, ap_reg_ppiten_pp0_it2, ap_reg_ppstg_exitcond4_reg_337_pp0_iter1, ap_sig_129, ap_sig_139)
    begin
        if (((ap_const_logic_1 = ap_reg_ppiten_pp0_it2) and (ap_const_lv1_0 = ap_reg_ppstg_exitcond4_reg_337_pp0_iter1) and not((((ap_const_logic_1 = ap_reg_ppiten_pp0_it1) and ap_sig_129) or ((ap_const_logic_1 = ap_reg_ppiten_pp0_it2) and ap_sig_139))))) then 
            dst_data_stream_2_V_write <= ap_const_logic_1;
        else 
            dst_data_stream_2_V_write <= ap_const_logic_0;
        end if; 
    end process;

    exitcond3_fu_177_p2 <= "1" when (p_s_reg_147 = ap_const_lv8_F0) else "0";
    exitcond4_fu_189_p2 <= "1" when (p_3_reg_158 = ap_const_lv9_140) else "0";
    i_V_fu_183_p2 <= std_logic_vector(unsigned(p_s_reg_147) + unsigned(ap_const_lv8_1));
    j_V_fu_195_p2 <= std_logic_vector(unsigned(p_3_reg_158) + unsigned(ap_const_lv9_1));
    p_Val2_1_fu_220_p2 <= std_logic_vector(unsigned(r_V_cast_fu_206_p1) + unsigned(rhs_V_cast_cast_fu_210_p1));
    p_Val2_2_fu_214_p2 <= std_logic_vector(unsigned(src2_0_data_stream_V_dout) + unsigned(r_V_fu_201_p2));
    p_Val2_4_fu_253_p2 <= std_logic_vector(unsigned(r_V_1_cast_fu_239_p1) + unsigned(rhs_V_1_cast_cast_fu_243_p1));
    p_Val2_5_fu_247_p2 <= std_logic_vector(unsigned(src2_1_data_stream_V_dout) + unsigned(r_V_1_fu_234_p2));
    p_Val2_6_fu_280_p2 <= std_logic_vector(unsigned(src2_2_data_stream_V_dout) + unsigned(r_V_2_fu_267_p2));
    p_Val2_s_fu_286_p2 <= std_logic_vector(unsigned(r_V_2_cast_fu_272_p1) + unsigned(rhs_V_2_cast_cast_fu_276_p1));
    r_V_1_cast_fu_239_p1 <= std_logic_vector(resize(unsigned(r_V_1_fu_234_p2),9));
    r_V_1_fu_234_p2 <= (src1_1_data_stream_V_dout and tmp_9_cast_reg_321);
    r_V_2_cast_fu_272_p1 <= std_logic_vector(resize(unsigned(r_V_2_fu_267_p2),9));
    r_V_2_fu_267_p2 <= (src1_2_data_stream_V_dout and tmp_9_cast_reg_321);
    r_V_cast_fu_206_p1 <= std_logic_vector(resize(unsigned(r_V_fu_201_p2),9));
    r_V_fu_201_p2 <= (src1_0_data_stream_V_dout and tmp_9_cast_reg_321);
    rhs_V_1_cast_cast_fu_243_p1 <= std_logic_vector(resize(unsigned(src2_1_data_stream_V_dout),9));
    rhs_V_2_cast_cast_fu_276_p1 <= std_logic_vector(resize(unsigned(src2_2_data_stream_V_dout),9));
    rhs_V_cast_cast_fu_210_p1 <= std_logic_vector(resize(unsigned(src2_0_data_stream_V_dout),9));

    src1_0_data_stream_V_blk_n_assign_proc : process(src1_0_data_stream_V_empty_n, ap_sig_cseq_ST_pp0_stg0_fsm_2, ap_reg_ppiten_pp0_it1, exitcond4_reg_337)
    begin
        if (((ap_const_logic_1 = ap_sig_cseq_ST_pp0_stg0_fsm_2) and (ap_const_logic_1 = ap_reg_ppiten_pp0_it1) and (exitcond4_reg_337 = ap_const_lv1_0))) then 
            src1_0_data_stream_V_blk_n <= src1_0_data_stream_V_empty_n;
        else 
            src1_0_data_stream_V_blk_n <= ap_const_logic_1;
        end if; 
    end process;


    src1_0_data_stream_V_read_assign_proc : process(ap_sig_cseq_ST_pp0_stg0_fsm_2, ap_reg_ppiten_pp0_it1, ap_reg_ppiten_pp0_it2, exitcond4_reg_337, ap_sig_129, ap_sig_139)
    begin
        if (((ap_const_logic_1 = ap_sig_cseq_ST_pp0_stg0_fsm_2) and (ap_const_logic_1 = ap_reg_ppiten_pp0_it1) and (exitcond4_reg_337 = ap_const_lv1_0) and not((((ap_const_logic_1 = ap_reg_ppiten_pp0_it1) and ap_sig_129) or ((ap_const_logic_1 = ap_reg_ppiten_pp0_it2) and ap_sig_139))))) then 
            src1_0_data_stream_V_read <= ap_const_logic_1;
        else 
            src1_0_data_stream_V_read <= ap_const_logic_0;
        end if; 
    end process;


    src1_1_data_stream_V_blk_n_assign_proc : process(src1_1_data_stream_V_empty_n, ap_sig_cseq_ST_pp0_stg0_fsm_2, ap_reg_ppiten_pp0_it1, exitcond4_reg_337)
    begin
        if (((ap_const_logic_1 = ap_sig_cseq_ST_pp0_stg0_fsm_2) and (ap_const_logic_1 = ap_reg_ppiten_pp0_it1) and (exitcond4_reg_337 = ap_const_lv1_0))) then 
            src1_1_data_stream_V_blk_n <= src1_1_data_stream_V_empty_n;
        else 
            src1_1_data_stream_V_blk_n <= ap_const_logic_1;
        end if; 
    end process;


    src1_1_data_stream_V_read_assign_proc : process(ap_sig_cseq_ST_pp0_stg0_fsm_2, ap_reg_ppiten_pp0_it1, ap_reg_ppiten_pp0_it2, exitcond4_reg_337, ap_sig_129, ap_sig_139)
    begin
        if (((ap_const_logic_1 = ap_sig_cseq_ST_pp0_stg0_fsm_2) and (ap_const_logic_1 = ap_reg_ppiten_pp0_it1) and (exitcond4_reg_337 = ap_const_lv1_0) and not((((ap_const_logic_1 = ap_reg_ppiten_pp0_it1) and ap_sig_129) or ((ap_const_logic_1 = ap_reg_ppiten_pp0_it2) and ap_sig_139))))) then 
            src1_1_data_stream_V_read <= ap_const_logic_1;
        else 
            src1_1_data_stream_V_read <= ap_const_logic_0;
        end if; 
    end process;


    src1_2_data_stream_V_blk_n_assign_proc : process(src1_2_data_stream_V_empty_n, ap_sig_cseq_ST_pp0_stg0_fsm_2, ap_reg_ppiten_pp0_it1, exitcond4_reg_337)
    begin
        if (((ap_const_logic_1 = ap_sig_cseq_ST_pp0_stg0_fsm_2) and (ap_const_logic_1 = ap_reg_ppiten_pp0_it1) and (exitcond4_reg_337 = ap_const_lv1_0))) then 
            src1_2_data_stream_V_blk_n <= src1_2_data_stream_V_empty_n;
        else 
            src1_2_data_stream_V_blk_n <= ap_const_logic_1;
        end if; 
    end process;


    src1_2_data_stream_V_read_assign_proc : process(ap_sig_cseq_ST_pp0_stg0_fsm_2, ap_reg_ppiten_pp0_it1, ap_reg_ppiten_pp0_it2, exitcond4_reg_337, ap_sig_129, ap_sig_139)
    begin
        if (((ap_const_logic_1 = ap_sig_cseq_ST_pp0_stg0_fsm_2) and (ap_const_logic_1 = ap_reg_ppiten_pp0_it1) and (exitcond4_reg_337 = ap_const_lv1_0) and not((((ap_const_logic_1 = ap_reg_ppiten_pp0_it1) and ap_sig_129) or ((ap_const_logic_1 = ap_reg_ppiten_pp0_it2) and ap_sig_139))))) then 
            src1_2_data_stream_V_read <= ap_const_logic_1;
        else 
            src1_2_data_stream_V_read <= ap_const_logic_0;
        end if; 
    end process;


    src2_0_data_stream_V_blk_n_assign_proc : process(src2_0_data_stream_V_empty_n, ap_sig_cseq_ST_pp0_stg0_fsm_2, ap_reg_ppiten_pp0_it1, exitcond4_reg_337)
    begin
        if (((ap_const_logic_1 = ap_sig_cseq_ST_pp0_stg0_fsm_2) and (ap_const_logic_1 = ap_reg_ppiten_pp0_it1) and (exitcond4_reg_337 = ap_const_lv1_0))) then 
            src2_0_data_stream_V_blk_n <= src2_0_data_stream_V_empty_n;
        else 
            src2_0_data_stream_V_blk_n <= ap_const_logic_1;
        end if; 
    end process;


    src2_0_data_stream_V_read_assign_proc : process(ap_sig_cseq_ST_pp0_stg0_fsm_2, ap_reg_ppiten_pp0_it1, ap_reg_ppiten_pp0_it2, exitcond4_reg_337, ap_sig_129, ap_sig_139)
    begin
        if (((ap_const_logic_1 = ap_sig_cseq_ST_pp0_stg0_fsm_2) and (ap_const_logic_1 = ap_reg_ppiten_pp0_it1) and (exitcond4_reg_337 = ap_const_lv1_0) and not((((ap_const_logic_1 = ap_reg_ppiten_pp0_it1) and ap_sig_129) or ((ap_const_logic_1 = ap_reg_ppiten_pp0_it2) and ap_sig_139))))) then 
            src2_0_data_stream_V_read <= ap_const_logic_1;
        else 
            src2_0_data_stream_V_read <= ap_const_logic_0;
        end if; 
    end process;


    src2_1_data_stream_V_blk_n_assign_proc : process(src2_1_data_stream_V_empty_n, ap_sig_cseq_ST_pp0_stg0_fsm_2, ap_reg_ppiten_pp0_it1, exitcond4_reg_337)
    begin
        if (((ap_const_logic_1 = ap_sig_cseq_ST_pp0_stg0_fsm_2) and (ap_const_logic_1 = ap_reg_ppiten_pp0_it1) and (exitcond4_reg_337 = ap_const_lv1_0))) then 
            src2_1_data_stream_V_blk_n <= src2_1_data_stream_V_empty_n;
        else 
            src2_1_data_stream_V_blk_n <= ap_const_logic_1;
        end if; 
    end process;


    src2_1_data_stream_V_read_assign_proc : process(ap_sig_cseq_ST_pp0_stg0_fsm_2, ap_reg_ppiten_pp0_it1, ap_reg_ppiten_pp0_it2, exitcond4_reg_337, ap_sig_129, ap_sig_139)
    begin
        if (((ap_const_logic_1 = ap_sig_cseq_ST_pp0_stg0_fsm_2) and (ap_const_logic_1 = ap_reg_ppiten_pp0_it1) and (exitcond4_reg_337 = ap_const_lv1_0) and not((((ap_const_logic_1 = ap_reg_ppiten_pp0_it1) and ap_sig_129) or ((ap_const_logic_1 = ap_reg_ppiten_pp0_it2) and ap_sig_139))))) then 
            src2_1_data_stream_V_read <= ap_const_logic_1;
        else 
            src2_1_data_stream_V_read <= ap_const_logic_0;
        end if; 
    end process;


    src2_2_data_stream_V_blk_n_assign_proc : process(src2_2_data_stream_V_empty_n, ap_sig_cseq_ST_pp0_stg0_fsm_2, ap_reg_ppiten_pp0_it1, exitcond4_reg_337)
    begin
        if (((ap_const_logic_1 = ap_sig_cseq_ST_pp0_stg0_fsm_2) and (ap_const_logic_1 = ap_reg_ppiten_pp0_it1) and (exitcond4_reg_337 = ap_const_lv1_0))) then 
            src2_2_data_stream_V_blk_n <= src2_2_data_stream_V_empty_n;
        else 
            src2_2_data_stream_V_blk_n <= ap_const_logic_1;
        end if; 
    end process;


    src2_2_data_stream_V_read_assign_proc : process(ap_sig_cseq_ST_pp0_stg0_fsm_2, ap_reg_ppiten_pp0_it1, ap_reg_ppiten_pp0_it2, exitcond4_reg_337, ap_sig_129, ap_sig_139)
    begin
        if (((ap_const_logic_1 = ap_sig_cseq_ST_pp0_stg0_fsm_2) and (ap_const_logic_1 = ap_reg_ppiten_pp0_it1) and (exitcond4_reg_337 = ap_const_lv1_0) and not((((ap_const_logic_1 = ap_reg_ppiten_pp0_it1) and ap_sig_129) or ((ap_const_logic_1 = ap_reg_ppiten_pp0_it2) and ap_sig_139))))) then 
            src2_2_data_stream_V_read <= ap_const_logic_1;
        else 
            src2_2_data_stream_V_read <= ap_const_logic_0;
        end if; 
    end process;

    tmp_9_cast_fu_169_p3 <= 
        ap_const_lv8_FF when (p0(0) = '1') else 
        ap_const_lv8_0;
end behav;
