
undefined4 FT_Stream_ReadAt(long *param_1,ulong param_2,void *param_3,ulong param_4)

{
  ulong uVar1;
  size_t __n;
  undefined4 uVar2;
  
                    /* catch() { ... } // from try @ 010644f0 with catch @ 01064648 */
  uVar1 = param_1[1] - param_2;
  if ((ulong)param_1[1] < param_2 || uVar1 == 0) {
    uVar2 = 0x55;
  }
  else {
    if ((code *)param_1[5] == (code *)0x0) {
      __n = param_4;
      if (uVar1 <= param_4) {
        __n = uVar1;
      }
      memcpy(param_3,(void *)(*param_1 + param_2),__n);
    }
    else {
                    /* catch() { ... } // from try @ 01064320 with catch @ 01064678 */
      __n = (*(code *)param_1[5])(param_1,param_2,param_3,param_4);
    }
    uVar2 = 0x55;
                    /* try { // try from 010646bc to 011646bf has its CatchHandler @ 01064704 */
    if (param_4 <= __n) {
      uVar2 = 0;
    }
    param_1[2] = __n + param_2;
  }
  return uVar2;
}

