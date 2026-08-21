
undefined8 FT_Load_Char(long param_1,ulong param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0xa8) != 0) {
      param_2 = (**(code **)(*(long *)(*(long *)(param_1 + 0xa8) + 0x10) + 0x18))();
      param_2 = param_2 & 0xffffffff;
    }
    uVar1 = FT_Load_Glyph(param_1,param_2,param_3);
    return uVar1;
  }
  return 0x23;
}

