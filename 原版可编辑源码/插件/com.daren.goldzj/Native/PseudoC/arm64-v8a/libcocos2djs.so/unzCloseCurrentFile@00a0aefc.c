
undefined4 unzCloseCurrentFile(long param_1)

{
  void *__ptr;
  undefined4 uVar1;
  undefined8 *__ptr_00;
  
  if ((param_1 == 0) ||
     (__ptr_00 = *(undefined8 **)(param_1 + 0x120), __ptr_00 == (undefined8 *)0x0)) {
    uVar1 = 0xffffff9a;
  }
  else {
    if ((__ptr_00[0x17] == 0) && (*(int *)(__ptr_00 + 0x23) == 0)) {
      uVar1 = 0;
      if (__ptr_00[0x14] != __ptr_00[0x15]) {
        uVar1 = 0xffffff97;
      }
      __ptr = (void *)*__ptr_00;
    }
    else {
      uVar1 = 0;
      __ptr = (void *)*__ptr_00;
    }
                    /* try { // try from 00a0af34 to 00b0af43 has its CatchHandler @ 00a0b180 */
    if (__ptr != (void *)0x0) {
      free(__ptr);
    }
    *__ptr_00 = 0;
                    /* try { // try from 00a0af44 to 00b0af57 has its CatchHandler @ 00a0b170 */
    if (__ptr_00[0x10] != 0) {
      inflateEnd(__ptr_00 + 1);
    }
    free(__ptr_00);
    *(undefined8 *)(param_1 + 0x120) = 0;
  }
                    /* try { // try from 00a0af64 to 00b0afcb has its CatchHandler @ 00a0b1d4 */
  return uVar1;
}

