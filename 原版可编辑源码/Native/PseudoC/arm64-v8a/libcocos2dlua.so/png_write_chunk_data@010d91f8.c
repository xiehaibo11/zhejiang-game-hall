
void png_write_chunk_data(long param_1,long param_2,long param_3)

{
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    png_write_data(param_1,param_2,param_3);
    png_calculate_crc(param_1,param_2,param_3);
    return;
  }
  return;
}

