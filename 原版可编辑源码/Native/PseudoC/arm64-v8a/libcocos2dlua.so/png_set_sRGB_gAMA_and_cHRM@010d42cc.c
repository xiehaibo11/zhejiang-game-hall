
void png_set_sRGB_gAMA_and_cHRM(long param_1,long param_2)

{
  int iVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
                    /* try { // try from 010d42ec to 011d42f7 has its CatchHandler @ 010d5230 */
    iVar1 = png_colorspace_set_sRGB(param_1,param_2 + 0x34);
    if (iVar1 != 0) {
                    /* try { // try from 010d42f8 to 011d4363 has its CatchHandler @ 010d4230 */
      *(ushort *)(param_2 + 0x7e) = *(ushort *)(param_2 + 0x7e) | 0x18;
    }
    png_colorspace_sync_info(param_1,param_2);
    return;
  }
  return;
}

