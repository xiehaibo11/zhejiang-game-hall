
undefined8
FUN_00a2484c(ulong param_1,undefined *param_2,undefined *param_3,undefined *param_4,
            undefined *param_5,undefined *param_6)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 2;
  if ((((param_2 != (undefined *)0x0) && (param_3 != (undefined *)0x0)) &&
      (param_4 != (undefined *)0x0)) &&
     ((param_5 != (undefined *)0x0 && (param_6 != (undefined *)0x0)))) {
    if (DAT_017824b0 == 0) {
      DAT_017824b0 = 1;
      PTR_malloc_017699f8 = param_2;
      PTR_free_01769a00 = param_3;
      PTR_realloc_01769a08 = param_4;
      PTR_strdup_01769a10 = param_5;
      PTR_calloc_01769a18 = param_6;
      if (((param_1 & 1) == 0) || (iVar1 = FUN_00a2d540(2), iVar1 != 0)) {
        FUN_00a2b08c();
        if (((uint)param_1 >> 2 & 1) != 0) {
          DAT_017824c0 = 1;
        }
        DAT_017824b8 = param_1;
        FUN_00a22b88();
        uVar2 = 0;
      }
      else {
        uVar2 = 2;
      }
    }
    else {
      DAT_017824b0 = DAT_017824b0 + 1;
      uVar2 = 0;
    }
  }
  return uVar2;
}

