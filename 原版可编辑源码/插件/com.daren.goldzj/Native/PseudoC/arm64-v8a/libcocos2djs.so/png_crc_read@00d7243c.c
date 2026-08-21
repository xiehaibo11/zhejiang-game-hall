
void png_crc_read(long param_1,undefined8 param_2,undefined4 param_3)

{
  if (param_1 != 0) {
    png_read_data(param_1,param_2,param_3);
    png_calculate_crc(param_1,param_2,param_3);
    return;
  }
  return;
}

