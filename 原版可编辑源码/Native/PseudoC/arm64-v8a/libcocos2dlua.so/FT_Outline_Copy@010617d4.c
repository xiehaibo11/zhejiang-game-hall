
undefined8 FT_Outline_Copy(short *param_1,short *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0x14;
  if ((param_1 != (short *)0x0) && (param_2 != (short *)0x0)) {
    if ((param_1[1] == param_2[1]) && (*param_1 == *param_2)) {
      if (param_1 == param_2) {
        uVar1 = 0;
      }
      else {
        memcpy(*(void **)(param_2 + 4),*(void **)(param_1 + 4),(long)param_1[1] << 4);
        memcpy(*(void **)(param_2 + 8),*(void **)(param_1 + 8),(long)param_1[1]);
        memcpy(*(void **)(param_2 + 0xc),*(void **)(param_1 + 0xc),(long)*param_1 << 1);
        uVar1 = 0;
        *(uint *)(param_2 + 0x10) =
             *(uint *)(param_1 + 0x10) & 0xfffffffe | *(uint *)(param_2 + 0x10) & 1;
      }
    }
    else {
      uVar1 = 6;
    }
  }
  return uVar1;
}

