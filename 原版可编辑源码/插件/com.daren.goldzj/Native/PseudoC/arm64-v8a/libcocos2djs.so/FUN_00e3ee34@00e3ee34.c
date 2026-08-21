
undefined8 FUN_00e3ee34(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = 0x96;
  if (((undefined *)param_1[2] != &DAT_01c935b0) && ((undefined *)param_1[2] != &DAT_01c93600)) {
    uVar1 = FT_Get_Module(*(undefined8 *)(*(long *)(*param_1 + 0xb0) + 8),&DAT_01975980);
    puVar2 = (undefined8 *)FUN_00e19608(uVar1,"tt-cmaps",0);
    uVar1 = 0;
    if (puVar2 != (undefined8 *)0x0) {
      if ((code *)*puVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00e3eeb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (*(code *)*puVar2)(param_1,param_2);
        return uVar1;
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}

