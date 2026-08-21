
undefined8 af_get_char_index(long param_1,undefined8 param_2,ulong *param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = 6;
  }
  else {
    uVar1 = FT_Get_Char_Index(**(undefined8 **)(param_1 + 0x40));
    uVar2 = 0;
    *param_3 = uVar1 & 0xffffffff;
    *param_4 = 0;
  }
  return uVar2;
}

