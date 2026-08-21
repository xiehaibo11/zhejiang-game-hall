
ulong FUN_00e622c4(long param_1,ulong *param_2,undefined8 param_3,long param_4,undefined8 *param_5)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (param_4 != 0) {
    FT_Get_Advance(**(undefined8 **)(param_1 + 0x40),uVar1 & 0xffffffff,0x803);
  }
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = 0;
  }
  return uVar1;
}

