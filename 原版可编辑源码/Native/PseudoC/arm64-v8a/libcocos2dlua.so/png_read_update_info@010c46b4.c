
void png_read_update_info(long param_1,undefined8 param_2)

{
  if (param_1 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x168) >> 6 & 1) == 0) {
    png_read_start_row(param_1);
    png_read_transform_info(param_1,param_2);
    return;
  }
  png_app_error(param_1,"png_read_update_info/png_start_read_image: duplicate call");
  return;
}

