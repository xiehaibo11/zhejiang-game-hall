
void FUN_00c0eb40(long *param_1,ulong param_2)

{
  uint uVar1;
  
  param_2 = param_2 & 0xffffffff;
  do {
    do {
      uVar1 = *(uint *)(*param_1 + param_2 * 0x18);
      param_2 = (ulong)(ushort)uVar1;
    } while (uVar1 >> 0x1c == 8);
  } while ((uVar1 & 0xf0800000) == 0x20800000);
  return;
}

