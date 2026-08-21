
void png_set_expand(long param_1)

{
                    /* catch() { ... } // from try @ 010ca3e4 with catch @ 010ca404 */
  if (param_1 != 0) {
    if ((*(uint *)(param_1 + 0x168) >> 6 & 1) != 0) {
      png_app_error(param_1,"invalid after png_start_read_image or png_read_update_info");
      return;
    }
    *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) | 0x4000;
    *(uint *)(param_1 + 0x16c) = *(uint *)(param_1 + 0x16c) | 0x2001000;
  }
  return;
}

