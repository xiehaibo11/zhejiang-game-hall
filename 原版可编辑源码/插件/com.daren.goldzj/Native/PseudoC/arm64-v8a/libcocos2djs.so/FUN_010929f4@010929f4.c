
bool FUN_010929f4(undefined8 param_1,ulong param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)((param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + 7)) +
                    (long)(param_3 << 2) + 7);
  if ((uVar1 & 1) == 0) {
    return true;
  }
  return uVar1 != *(uint *)((param_2 & 0xffffffff00000000) + 0xa8);
}

