
void png_set_scale_16(long param_1)

{
  if (param_1 != 0) {
    if ((*(uint *)(param_1 + 0x168) >> 6 & 1) != 0) {
      png_app_error(param_1,"invalid after png_start_read_image or png_read_update_info");
      return;
    }
    *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) | 0x4000;
    *(uint *)(param_1 + 0x16c) = *(uint *)(param_1 + 0x16c) | 0x4000000;
  }
  return;
}

