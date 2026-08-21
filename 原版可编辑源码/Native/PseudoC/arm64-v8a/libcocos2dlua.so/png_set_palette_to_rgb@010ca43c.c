
void png_set_palette_to_rgb(long param_1)

{
  if (param_1 != 0) {
                    /* try { // try from 010ca444 to 011ca4bb has its CatchHandler @ 010ca444
                       catch() { ... } // from try @ 010ca444 with catch @ 010ca444
                       catch() { ... } // from try @ 010ca4c0 with catch @ 010ca444 */
    if ((*(uint *)(param_1 + 0x168) >> 6 & 1) != 0) {
      png_app_error(param_1,"invalid after png_start_read_image or png_read_update_info");
      return;
    }
    *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) | 0x4000;
    *(uint *)(param_1 + 0x16c) = *(uint *)(param_1 + 0x16c) | 0x2001000;
  }
  return;
}

