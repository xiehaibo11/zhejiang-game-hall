
void png_start_read_image(long param_1)

{
  if (param_1 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x168) >> 6 & 1) == 0) {
    png_read_start_row();
    return;
  }
  png_app_error(param_1,"png_start_read_image/png_read_update_info: duplicate call");
  return;
}

