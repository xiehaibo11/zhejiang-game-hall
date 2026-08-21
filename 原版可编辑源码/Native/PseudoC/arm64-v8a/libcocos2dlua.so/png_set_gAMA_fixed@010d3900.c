
void png_set_gAMA_fixed(long param_1,long param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    png_colorspace_set_gamma(param_1,param_2 + 0x34);
                    /* try { // try from 010d3934 to 011d393f has its CatchHandler @ 010d4164 */
    png_colorspace_sync_info(param_1,param_2);
    return;
  }
                    /* try { // try from 010d3940 to 011d398f has its CatchHandler @ 010d35bc */
  return;
}

