
bool FUN_010b2ce4(undefined8 param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  
  if ((*(uint *)((param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + 0xb)) + 0x1b) >> 2 & 1)
      == 0) {
    uVar1 = *(ulong *)(param_2 + 0x1f);
  }
  else {
    uVar1 = 0;
  }
  return param_3 < uVar1;
}

