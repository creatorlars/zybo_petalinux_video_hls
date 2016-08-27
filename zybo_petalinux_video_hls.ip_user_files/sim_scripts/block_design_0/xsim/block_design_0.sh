#!/bin/bash -f
# Vivado (TM) v2016.2 (64-bit)
#
# Filename    : block_design_0.sh
# Simulator   : Xilinx Vivado Simulator
# Description : Simulation script for compiling, elaborating and verifying the project source files.
#               The script will automatically create the design libraries sub-directories in the run
#               directory, add the library logical mappings in the simulator setup file, create default
#               'do/prj' file, execute compilation, elaboration and simulation steps.
#
# Generated by Vivado on Fri Aug 26 09:22:25 EDT 2016
# IP Build 1577682 on Fri Jun  3 12:00:54 MDT 2016 
#
# usage: block_design_0.sh [-help]
# usage: block_design_0.sh [-lib_map_path]
# usage: block_design_0.sh [-noclean_files]
# usage: block_design_0.sh [-reset_run]
#
# ********************************************************************************************************

# Command line options
xvlog_opts="-m64 --relax"
xvhdl_opts="-m64 --relax"


# Script info
echo -e "block_design_0.sh - Script generated by export_simulation (Vivado v2016.2 (64-bit)-id)\n"

# Main steps
run()
{
  check_args $# $1
  setup $1 $2
  compile
  elaborate
  simulate
}

# RUN_STEP: <compile>
compile()
{
  # Compile design files
  xvlog $xvlog_opts -prj vlog.prj 2>&1 | tee compile.log
  xvhdl $xvhdl_opts -prj vhdl.prj 2>&1 | tee compile.log

}

# RUN_STEP: <elaborate>
elaborate()
{
  xelab --relax --debug typical --mt auto -L xil_defaultlib -L xpm -L processing_system7_bfm_v2_0_5 -L lib_cdc_v1_0_2 -L proc_sys_reset_v5_0_9 -L generic_baseblocks_v2_1_0 -L axi_infrastructure_v1_1_0 -L axi_register_slice_v2_1_9 -L fifo_generator_v13_1_1 -L axi_data_fifo_v2_1_8 -L axi_crossbar_v2_1_10 -L axi_lite_ipif_v3_0_4 -L interrupt_control_v3_1_4 -L axi_gpio_v2_0_11 -L lib_pkg_v1_0_2 -L lib_fifo_v1_0_5 -L blk_mem_gen_v8_3_3 -L lib_bmg_v1_0_5 -L lib_srl_fifo_v1_0_2 -L axi_datamover_v5_1_11 -L axi_vdma_v6_2_8 -L axi_clock_converter_v2_1_8 -L axi_protocol_converter_v2_1_9 -L axi_dwidth_converter_v2_1_9 -L unisims_ver -L unimacro_ver -L secureip --snapshot block_design_0 xil_defaultlib.block_design_0 xil_defaultlib.glbl -log elaborate.log
}

# RUN_STEP: <simulate>
simulate()
{
  xsim block_design_0 -key {Behavioral:sim_1:Functional:block_design_0} -tclbatch cmd.tcl -log simulate.log
}

# STEP: setup
setup()
{
  case $1 in
    "-lib_map_path" )
      if [[ ($2 == "") ]]; then
        echo -e "ERROR: Simulation library directory path not specified (type \"./block_design_0.sh -help\" for more information)\n"
        exit 1
      fi
    ;;
    "-reset_run" )
      reset_run
      echo -e "INFO: Simulation run files deleted.\n"
      exit 0
    ;;
    "-noclean_files" )
      # do not remove previous data
    ;;
    * )
  esac

  # Add any setup/initialization commands here:-

  # <user specific commands>

}

# Delete generated data from the previous run
reset_run()
{
  files_to_remove=(xelab.pb xsim.jou xvhdl.log xvlog.log compile.log elaborate.log simulate.log xelab.log xsim.log run.log xvhdl.pb xvlog.pb block_design_0.wdb xsim.dir)
  for (( i=0; i<${#files_to_remove[*]}; i++ )); do
    file="${files_to_remove[i]}"
    if [[ -e $file ]]; then
      rm -rf $file
    fi
  done
}

# Check command line arguments
check_args()
{
  if [[ ($1 == 1 ) && ($2 != "-lib_map_path" && $2 != "-noclean_files" && $2 != "-reset_run" && $2 != "-help" && $2 != "-h") ]]; then
    echo -e "ERROR: Unknown option specified '$2' (type \"./block_design_0.sh -help\" for more information)\n"
    exit 1
  fi

  if [[ ($2 == "-help" || $2 == "-h") ]]; then
    usage
  fi
}

# Script usage
usage()
{
  msg="Usage: block_design_0.sh [-help]\n\
Usage: block_design_0.sh [-lib_map_path]\n\
Usage: block_design_0.sh [-reset_run]\n\
Usage: block_design_0.sh [-noclean_files]\n\n\
[-help] -- Print help information for this script\n\n\
[-lib_map_path <path>] -- Compiled simulation library directory path. The simulation library is compiled\n\
using the compile_simlib tcl command. Please see 'compile_simlib -help' for more information.\n\n\
[-reset_run] -- Recreate simulator setup files and library mappings for a clean run. The generated files\n\
from the previous run will be removed. If you don't want to remove the simulator generated files, use the\n\
-noclean_files switch.\n\n\
[-noclean_files] -- Reset previous run, but do not remove simulator generated files from the previous run.\n\n"
  echo -e $msg
  exit 1
}

# Launch script
run $1 $2
