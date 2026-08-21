
undefined8 FT_Get_Sfnt_Table(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x10) >> 3 & 1) != 0)) {
    pcVar3 = *(code **)(**(long **)(param_1 + 0xb0) + 0x40);
    if ((pcVar3 != (code *)0x0) &&
       (lVar1 = (*pcVar3)(*(long **)(param_1 + 0xb0),"sfnt-table"), lVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0105fc40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(lVar1 + 8))(param_1,param_2);
      return uVar2;
    }
  }
  return 0;
}

