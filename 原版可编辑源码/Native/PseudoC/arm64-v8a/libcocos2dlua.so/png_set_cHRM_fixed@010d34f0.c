
void png_set_cHRM_fixed(long param_1,long param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
                    /* catch() { ... } // from try @ 010d3488 with catch @ 010d3508 */
                    /* catch() { ... } // from try @ 010d3430 with catch @ 010d350c */
  if ((param_1 != 0) && (param_2 != 0)) {
                    /* catch() { ... } // from try @ 010d33d0 with catch @ 010d3510 */
                    /* catch() { ... } // from try @ 010d3378 with catch @ 010d3514 */
                    /* catch() { ... } // from try @ 010d3318 with catch @ 010d3518 */
                    /* catch() { ... } // from try @ 010d32b0 with catch @ 010d351c */
                    /* catch() { ... } // from try @ 010d3248 with catch @ 010d3520 */
                    /* catch() { ... } // from try @ 010d31e0 with catch @ 010d3524 */
                    /* catch() { ... } // from try @ 010d3180 with catch @ 010d3528 */
                    /* catch() { ... } // from try @ 010d3118 with catch @ 010d352c */
    local_30 = param_9;
    uStack_2c = param_10;
    local_40 = param_5;
    uStack_3c = param_6;
    local_38 = param_7;
    uStack_34 = param_8;
    local_28 = param_3;
    uStack_24 = param_4;
    iVar1 = png_colorspace_set_chromaticities(param_1,param_2 + 0x34,&local_40,2);
    if (iVar1 != 0) {
                    /* catch() { ... } // from try @ 010d30d0 with catch @ 010d3540 */
                    /* catch() { ... } // from try @ 010d3088 with catch @ 010d3544 */
                    /* catch() { ... } // from try @ 010d3040 with catch @ 010d3548 */
      *(ushort *)(param_2 + 0x7e) = *(ushort *)(param_2 + 0x7e) | 0x10;
    }
                    /* catch() { ... } // from try @ 010d2ff8 with catch @ 010d354c */
                    /* catch() { ... } // from try @ 010d2fb0 with catch @ 010d3550 */
                    /* catch() { ... } // from try @ 010d2f50 with catch @ 010d3554 */
    png_colorspace_sync_info(param_1,param_2);
  }
                    /* catch() { ... } // from try @ 010d2ef0 with catch @ 010d3558 */
                    /* catch() { ... } // from try @ 010d2e88 with catch @ 010d355c */
                    /* catch() { ... } // from try @ 010d2e28 with catch @ 010d3560 */
                    /* catch() { ... } // from try @ 010d2dc8 with catch @ 010d3564 */
  return;
}

