
/* WARNING: Type propagation algorithm not settling */

void png_write_png(long param_1,long param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    return;
  }
  if (-1 < *(char *)(param_2 + 9)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010d7320 with catch @ 010d7498
                        */
    png_app_error(param_1,"no rows for png_write_image to write");
    return;
  }
  png_write_info(param_1,param_2);
  if ((param_3 >> 5 & 1) != 0) {
    png_set_invert_mono(param_1);
  }
  if (((param_3 >> 6 & 1) != 0) && ((*(byte *)(param_2 + 8) >> 1 & 1) != 0)) {
    png_set_shift(param_1,param_2 + 0xb0);
  }
  if ((param_3 >> 2 & 1) != 0) {
    png_set_packing(param_1);
  }
  if ((param_3 >> 8 & 1) != 0) {
                    /* try { // try from 010d7530 to 011d7593 has its CatchHandler @ 010d7530
                       catch() { ... } // from try @ 010d7530 with catch @ 010d7530
                       catch() { ... } // from try @ 010d76a4 with catch @ 010d7530 */
    png_set_swap_alpha(param_1);
  }
                    /* try { // try from 010d7500 to 011d750b has its CatchHandler @ 010d71e8 */
  if ((param_3 & 0x1800) != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010d74fc with catch @ 010d7508
                        */
    if ((param_3 >> 0xc & 1) == 0) {
      if ((param_3 >> 0xb & 1) == 0) goto LAB_010d7564;
      uVar2 = 0;
    }
    else {
      if ((param_3 >> 0xb & 1) != 0) {
        png_app_error(param_1,"PNG_TRANSFORM_STRIP_FILLER: BEFORE+AFTER not supported");
      }
      uVar2 = 1;
    }
    png_set_filler(param_1,0,uVar2);
  }
LAB_010d7564:
  if ((param_3 >> 7 & 1) != 0) {
    png_set_bgr(param_1);
  }
  if ((param_3 >> 9 & 1) != 0) {
                    /* try { // try from 010d75f8 to 011d75ff has its CatchHandler @ 010d7728 */
    png_set_swap(param_1);
  }
  if ((param_3 >> 3 & 1) != 0) {
    png_set_packswap(param_1);
  }
  if ((param_3 >> 10 & 1) != 0) {
    png_set_invert_alpha(param_1);
  }
  lVar4 = *(long *)(param_2 + 0x150);
  iVar1 = png_set_interlace_handling(param_1);
  if (0 < iVar1) {
                    /* try { // try from 010d7594 to 011d759b has its CatchHandler @ 010d777c */
    uVar3 = *(uint *)(param_1 + 0x234);
    iVar5 = 0;
    do {
      if (uVar3 != 0) {
        lVar6 = 0;
        do {
          png_write_row(param_1,*(undefined8 *)(lVar4 + lVar6 * 8));
          uVar3 = *(uint *)(param_1 + 0x234);
                    /* try { // try from 010d75b4 to 011d75c7 has its CatchHandler @ 010d775c */
          lVar6 = lVar6 + 1;
        } while ((uint)lVar6 < uVar3);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != iVar1);
  }
  png_write_end(param_1,param_2);
  return;
}

