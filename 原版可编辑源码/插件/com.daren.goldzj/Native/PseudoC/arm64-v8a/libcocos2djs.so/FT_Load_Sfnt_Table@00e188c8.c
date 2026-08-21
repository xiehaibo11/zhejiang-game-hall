
undefined8
FT_Load_Sfnt_Table(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  if ((param_1 == 0) || ((*(byte *)(param_1 + 0x10) >> 3 & 1) == 0)) {
    uVar1 = 0x23;
  }
  else {
    pcVar3 = *(code **)(**(long **)(param_1 + 0xb0) + 0x40);
    if ((pcVar3 != (code *)0x0) &&
       (puVar2 = (undefined8 *)(*pcVar3)(*(long **)(param_1 + 0xb0),"sfnt-table"),
       puVar2 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00e1894c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)*puVar2)(param_1,param_2,param_3,param_4,param_5);
      return uVar1;
    }
    uVar1 = 7;
  }
  return uVar1;
}

