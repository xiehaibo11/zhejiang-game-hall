
void FUN_010ab444(undefined8 param_1,ulong *param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5,int param_6)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (((*(byte *)((uVar1 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(uVar1 - 1)) & 0xf8) == 0x80)
     || (param_6 != *(int *)((uVar1 & 0xffffffff00000000 | (ulong)*(uint *)(uVar1 + 7)) + 3) >> 1))
  {
    FUN_010abeb0(param_2,param_6);
  }
  FUN_0108c644(param_2,param_3,param_4,param_6);
  return;
}

