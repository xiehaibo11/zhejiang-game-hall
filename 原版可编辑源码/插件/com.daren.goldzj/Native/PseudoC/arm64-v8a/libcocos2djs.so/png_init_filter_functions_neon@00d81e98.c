
void png_init_filter_functions_neon(long param_1,int param_2)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  
  *(code **)(param_1 + 0x4f8) = png_read_filter_row_up_neon;
  if (param_2 == 4) {
    pcVar1 = png_read_filter_row_avg4_neon;
    pcVar3 = png_read_filter_row_paeth4_neon;
    pcVar2 = png_read_filter_row_sub4_neon;
  }
  else {
    if (param_2 != 3) {
      return;
    }
    pcVar1 = png_read_filter_row_avg3_neon;
    pcVar3 = png_read_filter_row_paeth3_neon;
    pcVar2 = png_read_filter_row_sub3_neon;
  }
  *(code **)(param_1 + 0x4f0) = pcVar2;
  *(code **)(param_1 + 0x508) = pcVar3;
  *(code **)(param_1 + 0x500) = pcVar1;
  return;
}

