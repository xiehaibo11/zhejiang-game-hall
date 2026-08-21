
undefined8 FT_Get_Track_Kerning(long param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if (param_4 != 0) {
    pcVar3 = *(code **)(**(long **)(param_1 + 0xb0) + 0x40);
    if (pcVar3 != (code *)0x0) {
      puVar1 = (undefined8 *)(*pcVar3)(*(long **)(param_1 + 0xb0),"kerning");
      if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00e177dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*(code *)*puVar1)(param_1,param_2,param_3,param_4);
        return uVar2;
      }
    }
    return 7;
  }
  return 6;
}

