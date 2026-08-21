
void png_set_cHRM_XYZ_fixed
               (long param_1,long param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
               undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
               undefined4 param_10,undefined4 param_11)

{
  int iVar1;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
                    /* catch() { ... } // from try @ 010d2d68 with catch @ 010d3568 */
                    /* catch() { ... } // from try @ 010d2d08 with catch @ 010d356c */
                    /* catch() { ... } // from try @ 010d2ca0 with catch @ 010d3570 */
                    /* catch() { ... } // from try @ 010d2c38 with catch @ 010d3574 */
                    /* catch() { ... } // from try @ 010d2bf0 with catch @ 010d3578 */
                    /* catch() { ... } // from try @ 010d2b88 with catch @ 010d357c */
                    /* catch() { ... } // from try @ 010d2b20 with catch @ 010d3580 */
                    /* catch() { ... } // from try @ 010d2ab8 with catch @ 010d3584 */
  if ((param_1 != 0) && (param_2 != 0)) {
                    /* catch() { ... } // from try @ 010d2a60 with catch @ 010d3588 */
                    /* catch() { ... } // from try @ 010d2a00 with catch @ 010d358c */
                    /* catch() { ... } // from try @ 010d2998 with catch @ 010d3590 */
                    /* catch() { ... } // from try @ 010d2940 with catch @ 010d3594 */
                    /* catch() { ... } // from try @ 010d28e0 with catch @ 010d3598 */
                    /* catch() { ... } // from try @ 010d2878 with catch @ 010d359c */
                    /* catch() { ... } // from try @ 010d280c with catch @ 010d35a0 */
    local_30 = param_9;
    uStack_2c = param_10;
    local_28 = param_11;
    local_48 = param_3;
    uStack_44 = param_4;
    local_40 = param_5;
    uStack_3c = param_6;
    local_38 = param_7;
    uStack_34 = param_8;
    iVar1 = png_colorspace_set_endpoints(param_1,param_2 + 0x34,&local_48,2);
                    /* try { // try from 010d35bc to 011d37ab has its CatchHandler @ 010d35bc
                       catch() { ... } // from try @ 010d35bc with catch @ 010d35bc
                       catch() { ... } // from try @ 010d37bc with catch @ 010d35bc
                       catch() { ... } // from try @ 010d3940 with catch @ 010d35bc
                       catch() { ... } // from try @ 010d3a5c with catch @ 010d35bc
                       catch() { ... } // from try @ 010d3ba8 with catch @ 010d35bc
                       catch() { ... } // from try @ 010d3cec with catch @ 010d35bc
                       catch() { ... } // from try @ 010d3ecc with catch @ 010d35bc */
    if (iVar1 != 0) {
      *(ushort *)(param_2 + 0x7e) = *(ushort *)(param_2 + 0x7e) | 0x10;
    }
    png_colorspace_sync_info(param_1,param_2);
  }
  return;
}

