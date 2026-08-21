
undefined8 FT_Load_Char(long param_1,ulong param_2,undefined4 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0xa8) != 0) {
      uVar1 = (**(code **)(*(long *)(*(long *)(param_1 + 0xa8) + 0x10) + 0x18))();
      if (*(uint *)(param_1 + 0x20) <= uVar1) {
        uVar1 = 0;
      }
      param_2 = (ulong)uVar1;
    }
    uVar2 = FT_Load_Glyph(param_1,param_2,param_3);
    return uVar2;
  }
  return 0x23;
}

