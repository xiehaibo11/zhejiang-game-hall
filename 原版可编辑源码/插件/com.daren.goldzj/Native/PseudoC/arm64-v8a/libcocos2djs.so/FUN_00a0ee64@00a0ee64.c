
undefined8
FUN_00a0ee64(ulong param_1,undefined *param_2,undefined *param_3,undefined *param_4,
            undefined *param_5,undefined *param_6)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 2;
  if ((((param_2 != (undefined *)0x0) && (param_3 != (undefined *)0x0)) &&
      (param_4 != (undefined *)0x0)) &&
     ((param_5 != (undefined *)0x0 && (param_6 != (undefined *)0x0)))) {
                    /* try { // try from 00a0ee8c to 00b0ee97 has its CatchHandler @ 00a0f14c */
    if (DAT_01d38bb0 == 0) {
                    /* try { // try from 00a0eeb8 to 00b0eebf has its CatchHandler @ 00a0f170 */
                    /* try { // try from 00a0eecc to 00b0eed7 has its CatchHandler @ 00a0f154 */
      DAT_01d38bb0 = 1;
      PTR_malloc_01d1b740 = param_2;
      PTR_free_01d1b748 = param_3;
      PTR_realloc_01d1b750 = param_4;
      PTR_strdup_01d1b758 = param_5;
      PTR_calloc_01d1b760 = param_6;
      if (((param_1 & 1) == 0) || (iVar1 = FUN_00a17b58(2), iVar1 != 0)) {
        FUN_00a156a4();
        if (((uint)param_1 >> 2 & 1) != 0) {
                    /* try { // try from 00a0eef0 to 00b0eef7 has its CatchHandler @ 00a0f104 */
                    /* try { // try from 00a0eef8 to 00b0ef0b has its CatchHandler @ 00a0f0f4 */
          DAT_01d38bc0 = 1;
        }
        DAT_01d38bb8 = param_1;
        FUN_00a0d1a0();
        uVar2 = 0;
      }
      else {
        uVar2 = 2;
      }
    }
    else {
      DAT_01d38bb0 = DAT_01d38bb0 + 1;
      uVar2 = 0;
    }
  }
                    /* try { // try from 00a0ef1c to 00b0ef23 has its CatchHandler @ 00a0f0f0 */
  return uVar2;
}

