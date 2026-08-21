
uint tls1_ec_curve_id2nid(uint param_1,uint *param_2)

{
  uint uVar1;
  
                    /* catch() { ... } // from try @ 00adae6c with catch @ 00adb218 */
  uVar1 = 0;
  if ((0 < (int)param_1) && (param_1 < 0x1e)) {
                    /* catch() { ... } // from try @ 00adb294 with catch @ 00adb234 */
    if (param_2 != (uint *)0x0) {
      *param_2 = (&UINT_018a516c)[(long)(int)param_1 * 3];
    }
    uVar1 = (&UINT_018a5164)[(long)(int)param_1 * 3];
  }
  return uVar1;
}

