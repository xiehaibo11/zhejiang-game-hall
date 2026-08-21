
void float_from_gain(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1 >> 0xd & 7;
  uVar1 = (param_1 & 0x1fff) << 1;
  if (uVar2 != 0) {
    uVar1 = param_1 & 0x1fff | 0x2000;
  }
  ldexpf((float)uVar1 * 6.1035156e-05,uVar2 - 6);
  return;
}

