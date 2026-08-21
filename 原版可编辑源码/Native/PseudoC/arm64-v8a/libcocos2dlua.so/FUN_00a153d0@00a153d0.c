
undefined8 FUN_00a153d0(undefined8 param_1,ushort *param_2,uint param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  
  if (param_4 < 2) {
    return 0xfffffffe;
  }
  if (param_3 < 0x100) {
    uVar2 = param_3 >> 4;
    puVar4 = &DAT_01306966;
  }
  else if (param_3 - 0x300 < 0x160) {
    uVar2 = (param_3 >> 4) - 0x30;
    puVar4 = &UNK_013069a6;
  }
  else if (param_3 - 0x2000 < 800) {
    uVar2 = (param_3 >> 4) - 0x200;
    puVar4 = &UNK_013069fe;
  }
  else if (param_3 - 0x2500 < 0x170) {
    uVar2 = (param_3 >> 4) - 0x250;
    puVar4 = &UNK_01306ac6;
  }
  else if ((param_3 & 0xffffff00) == 0x3000) {
    uVar2 = (param_3 >> 4) - 0x300;
    puVar4 = &UNK_01306b22;
  }
  else if (param_3 - 0x4e00 >> 4 < 0x51b) {
    uVar2 = (param_3 >> 4) - 0x4e0;
    puVar4 = &UNK_01306b62;
  }
  else {
    if (0xef < param_3 - 0xff00) {
      return 0xffffffff;
    }
    uVar2 = (param_3 >> 4) - 0xff0;
    puVar4 = &UNK_01307fce;
  }
  uVar1 = 1 << (ulong)(param_3 & 0xf);
  uVar3 = (uint)*(ushort *)((long)(puVar4 + (ulong)uVar2 * 4) + 2);
  if ((uVar1 & uVar3) == 0) {
    return 0xffffffff;
  }
  uVar3 = uVar3 & uVar1 - 1;
  uVar3 = (uVar3 >> 1 & 0x55555555) + (uVar3 & 0x55555555);
  uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
  uVar3 = (uVar3 >> 4 & 0xffffff0f) + (uVar3 & 0xf0f0f0f);
  *param_2 = *(ushort *)
              (&DAT_0130800a +
              ((ulong)*(ushort *)(puVar4 + (ulong)uVar2 * 4) + (ulong)((uVar3 & 0xf) + (uVar3 >> 8))
              ) * 2) >> 8 |
             *(ushort *)
              (&DAT_0130800a +
              ((ulong)*(ushort *)(puVar4 + (ulong)uVar2 * 4) + (ulong)((uVar3 & 0xf) + (uVar3 >> 8))
              ) * 2) << 8;
  return 2;
}

