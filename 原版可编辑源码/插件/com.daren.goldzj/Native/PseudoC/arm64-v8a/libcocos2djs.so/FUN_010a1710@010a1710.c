
bool FUN_010a1710(undefined8 param_1,ulong param_2,long param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)((param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + 7)) +
                    (param_3 * 0xc00000000 + 0x1000000000 >> 0x20) + 7);
  if ((uVar1 & 1) == 0) {
    return true;
  }
  return uVar1 != *(uint *)((param_2 & 0xffffffff00000000) + 0xa8);
}

