
uint FUN_00e77fcc(uint param_1)

{
  param_1 = param_1 ^ param_1 << 0xd;
  param_1 = param_1 ^ param_1 >> 0x11;
  return param_1 ^ param_1 << 5;
}

