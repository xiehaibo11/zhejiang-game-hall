
void png_set_tRNS_to_alpha(long param_1)

{
  if (param_1 != 0) {
    if ((*(uint *)(param_1 + 0x168) >> 6 & 1) != 0) {
                    /* catch() { ... } // from try @ 010ca4bc with catch @ 010ca4d0 */
      png_app_error(param_1,"invalid after png_start_read_image or png_read_update_info");
      return;
    }
    *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) | 0x4000;
                    /* try { // try from 010ca4bc to 011ca4bf has its CatchHandler @ 010ca4d0 */
                    /* try { // try from 010ca4c0 to 011ca507 has its CatchHandler @ 010ca444 */
    *(uint *)(param_1 + 0x16c) = *(uint *)(param_1 + 0x16c) | 0x2001000;
  }
  return;
}

