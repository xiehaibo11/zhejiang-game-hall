
uint FT_Get_Char_Index(long param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = 0;
    if ((*(long *)(param_1 + 0xa8) != 0) &&
       (uVar1 = (**(code **)(*(long *)(*(long *)(param_1 + 0xa8) + 0x10) + 0x18))(),
       *(uint *)(param_1 + 0x20) <= uVar1)) {
      uVar1 = 0;
    }
  }
  return uVar1;
}

