# 
# Synthesis run script generated by Vivado
# 

set_param xicom.use_bs_reader 1
set_msg_config -id {HDL 9-1061} -limit 100000
set_msg_config -id {HDL 9-1654} -limit 100000
set_msg_config -id {Synth 8-256} -limit 10000
set_msg_config -id {Synth 8-638} -limit 10000
create_project -in_memory -part xc7z010clg400-1

set_param project.singleFileAddWarning.threshold 0
set_param project.compositeFile.enableAutoGeneration 0
set_param synth.vivado.isSynthRun true
set_msg_config -source 4 -id {IP_Flow 19-2162} -severity warning -new_severity info
set_property webtalk.parent_dir /opt/Xilinx/Projects/zybo_petalinux_video_hls/zybo_petalinux_video_hls.cache/wt [current_project]
set_property parent.project_path /opt/Xilinx/Projects/zybo_petalinux_video_hls/zybo_petalinux_video_hls.xpr [current_project]
set_property XPM_LIBRARIES {XPM_CDC XPM_MEMORY} [current_project]
set_property default_lib xil_defaultlib [current_project]
set_property target_language VHDL [current_project]
set_property ip_repo_paths {
  /opt/Xilinx/Projects/zybo_petalinux_video_hls/ip_repo
  /opt/Xilinx/Projects/zybo_petalinux_video_hls/filt_hls_proj/solution1/impl
} [current_project]
read_ip -quiet /opt/Xilinx/Projects/zybo_petalinux_video_hls/zybo_petalinux_video_hls.srcs/sources_1/bd/block_design_0/ip/block_design_0_auto_pc_0/block_design_0_auto_pc_0.xci
set_property is_locked true [get_files /opt/Xilinx/Projects/zybo_petalinux_video_hls/zybo_petalinux_video_hls.srcs/sources_1/bd/block_design_0/ip/block_design_0_auto_pc_0/block_design_0_auto_pc_0.xci]

foreach dcp [get_files -quiet -all *.dcp] {
  set_property used_in_implementation false $dcp
}
read_xdc dont_touch.xdc
set_property used_in_implementation false [get_files dont_touch.xdc]

synth_design -top block_design_0_auto_pc_0 -part xc7z010clg400-1 -mode out_of_context

rename_ref -prefix_all block_design_0_auto_pc_0_

write_checkpoint -force -noxdef block_design_0_auto_pc_0.dcp

catch { report_utilization -file block_design_0_auto_pc_0_utilization_synth.rpt -pb block_design_0_auto_pc_0_utilization_synth.pb }

if { [catch {
  file copy -force /opt/Xilinx/Projects/zybo_petalinux_video_hls/zybo_petalinux_video_hls.runs/block_design_0_auto_pc_0_synth_1/block_design_0_auto_pc_0.dcp /opt/Xilinx/Projects/zybo_petalinux_video_hls/zybo_petalinux_video_hls.srcs/sources_1/bd/block_design_0/ip/block_design_0_auto_pc_0/block_design_0_auto_pc_0.dcp
} _RESULT ] } { 
  send_msg_id runtcl-3 error "ERROR: Unable to successfully create or copy the sub-design checkpoint file."
  error "ERROR: Unable to successfully create or copy the sub-design checkpoint file."
}

if { [catch {
  write_verilog -force -mode synth_stub /opt/Xilinx/Projects/zybo_petalinux_video_hls/zybo_petalinux_video_hls.srcs/sources_1/bd/block_design_0/ip/block_design_0_auto_pc_0/block_design_0_auto_pc_0_stub.v
} _RESULT ] } { 
  puts "CRITICAL WARNING: Unable to successfully create a Verilog synthesis stub for the sub-design. This may lead to errors in top level synthesis of the design. Error reported: $_RESULT"
}

if { [catch {
  write_vhdl -force -mode synth_stub /opt/Xilinx/Projects/zybo_petalinux_video_hls/zybo_petalinux_video_hls.srcs/sources_1/bd/block_design_0/ip/block_design_0_auto_pc_0/block_design_0_auto_pc_0_stub.vhdl
} _RESULT ] } { 
  puts "CRITICAL WARNING: Unable to successfully create a VHDL synthesis stub for the sub-design. This may lead to errors in top level synthesis of the design. Error reported: $_RESULT"
}

if { [catch {
  write_verilog -force -mode funcsim /opt/Xilinx/Projects/zybo_petalinux_video_hls/zybo_petalinux_video_hls.srcs/sources_1/bd/block_design_0/ip/block_design_0_auto_pc_0/block_design_0_auto_pc_0_sim_netlist.v
} _RESULT ] } { 
  puts "CRITICAL WARNING: Unable to successfully create the Verilog functional simulation sub-design file. Post-Synthesis Functional Simulation with this file may not be possible or may give incorrect results. Error reported: $_RESULT"
}

if { [catch {
  write_vhdl -force -mode funcsim /opt/Xilinx/Projects/zybo_petalinux_video_hls/zybo_petalinux_video_hls.srcs/sources_1/bd/block_design_0/ip/block_design_0_auto_pc_0/block_design_0_auto_pc_0_sim_netlist.vhdl
} _RESULT ] } { 
  puts "CRITICAL WARNING: Unable to successfully create the VHDL functional simulation sub-design file. Post-Synthesis Functional Simulation with this file may not be possible or may give incorrect results. Error reported: $_RESULT"
}

if {[file isdir /opt/Xilinx/Projects/zybo_petalinux_video_hls/zybo_petalinux_video_hls.ip_user_files/ip/block_design_0_auto_pc_0]} {
  catch { 
    file copy -force /opt/Xilinx/Projects/zybo_petalinux_video_hls/zybo_petalinux_video_hls.srcs/sources_1/bd/block_design_0/ip/block_design_0_auto_pc_0/block_design_0_auto_pc_0_stub.v /opt/Xilinx/Projects/zybo_petalinux_video_hls/zybo_petalinux_video_hls.ip_user_files/ip/block_design_0_auto_pc_0
  }
}

if {[file isdir /opt/Xilinx/Projects/zybo_petalinux_video_hls/zybo_petalinux_video_hls.ip_user_files/ip/block_design_0_auto_pc_0]} {
  catch { 
    file copy -force /opt/Xilinx/Projects/zybo_petalinux_video_hls/zybo_petalinux_video_hls.srcs/sources_1/bd/block_design_0/ip/block_design_0_auto_pc_0/block_design_0_auto_pc_0_stub.vhdl /opt/Xilinx/Projects/zybo_petalinux_video_hls/zybo_petalinux_video_hls.ip_user_files/ip/block_design_0_auto_pc_0
  }
}
