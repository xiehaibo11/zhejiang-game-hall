
void FUN_00bd5740(ulong *param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  bool bVar5;
  ulong in_x12;
  ulong in_x13;
  ulong in_x14;
  ulong in_x15;
  ulong in_x16;
  ulong in_x17;
  
  bVar4 = CARRY8(in_x15,in_x12) || CARRY8(in_x15 + in_x12,(ulong)(in_x14 != 0));
  bVar1 = CARRY8(in_x16,(ulong)bVar4);
  bVar5 = (in_x14 & 1) != 0;
  uVar2 = in_x17;
  if (bVar5) {
    uVar2 = in_x17 + in_x13 + (ulong)bVar1;
    in_x16 = in_x16 + bVar4;
    in_x15 = in_x15 + in_x12 + (ulong)(in_x14 != 0);
    in_x14 = in_x14 - 1;
  }
  uVar3 = 0;
  if (bVar5) {
    uVar3 = (ulong)(CARRY8(in_x17,in_x13) || CARRY8(in_x17 + in_x13,(ulong)bVar1));
  }
  *param_1 = in_x14 >> 1 | in_x15 << 0x3f;
  param_1[1] = in_x15 >> 1 | in_x16 << 0x3f;
  param_1[2] = in_x16 >> 1 | uVar2 << 0x3f;
  param_1[3] = uVar2 >> 1 | uVar3 << 0x3f;
  return;
}

