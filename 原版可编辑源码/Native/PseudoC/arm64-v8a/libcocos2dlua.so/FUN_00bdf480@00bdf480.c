
void FUN_00bdf480(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong in_x4;
  ulong in_x5;
  int in_w6;
  uint uVar3;
  uint uVar4;
  
  uVar1 = (uint)(in_x4 >> 0x1a) & 0x3ffffff;
  uVar3 = (uint)(in_x4 >> 0x34) | (uint)(in_x5 << 0xc) & 0x3ffffff;
  uVar2 = (uint)(in_x5 >> 0xe) & 0x3ffffff;
  uVar4 = (uint)(in_x5 >> 0x28) | in_w6 << 0x18;
  *param_1 = (uint)in_x4 & 0x3ffffff;
  param_1[4] = uVar1;
  param_1[8] = uVar1 * 5;
  param_1[0xc] = uVar3;
  param_1[0x10] = uVar3 * 5;
  param_1[0x14] = uVar2;
  param_1[0x18] = uVar2 * 5;
  param_1[0x1c] = uVar4;
  param_1[0x20] = uVar4 * 5;
  return;
}

