
void FUN_008d3530(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 - 1 & param_2) != 0) {
    param_2 = std::__ndk1::__next_prime(param_2);
  }
  uVar2 = *(ulong *)(param_1 + 8);
  uVar1 = param_2;
  if (uVar2 < param_2) {
LAB_008d3580:
    FUN_008d3614(param_1,uVar1);
    return;
  }
  if (param_2 < uVar2) {
    uVar1 = (ulong)((float)*(ulong *)(param_1 + 0x18) / *(float *)(param_1 + 0x20));
    if (uVar2 < 3 || (uVar2 - 1 & uVar2) != 0) {
      uVar1 = std::__ndk1::__next_prime(uVar1);
    }
    else if (1 < uVar1) {
      uVar1 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar1 - 1) & 0x3f);
    }
    if (uVar1 <= param_2) {
      uVar1 = param_2;
    }
    if (uVar1 < uVar2) goto LAB_008d3580;
  }
  return;
}

