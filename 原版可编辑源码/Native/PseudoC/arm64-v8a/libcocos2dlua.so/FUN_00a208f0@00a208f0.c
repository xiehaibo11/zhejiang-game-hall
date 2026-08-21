
undefined8 FUN_00a208f0(ushort *param_1,uint param_2)

{
  uint uVar1;
  ushort *puVar2;
  undefined *puVar3;
  
  if (param_2 < 0x100) {
    uVar1 = param_2 >> 4;
    puVar3 = &DAT_0138b2e6;
  }
  else if (param_2 - 0x200 < 0x260) {
    uVar1 = (param_2 >> 4) - 0x20;
    puVar3 = &UNK_0138b326;
  }
  else if (param_2 - 0x2000 < 0x2c0) {
    uVar1 = (param_2 >> 4) - 0x200;
    puVar3 = &UNK_0138b3be;
  }
  else if (param_2 - 0x2400 < 0x250) {
    uVar1 = (param_2 >> 4) - 0x240;
    puVar3 = &UNK_0138b46e;
  }
  else if (param_2 - 0x3000 < 0x3e0) {
    uVar1 = (param_2 >> 4) - 0x300;
    puVar3 = &UNK_0138b502;
  }
  else if (param_2 - 0x4e00 >> 4 < 0x51b) {
    uVar1 = (param_2 >> 4) - 0x4e0;
    puVar3 = &UNK_0138b5fa;
  }
  else {
    if (param_2 >> 4 == 4000) {
      puVar2 = (ushort *)&UNK_0138ca66;
      goto LAB_00a209f0;
    }
    if (0x16f < param_2 - 0xfe00) {
      return 0xffffffff;
    }
    uVar1 = (param_2 >> 4) - 0xfe0;
    puVar3 = &UNK_0138ca82;
  }
  puVar2 = (ushort *)(puVar3 + (ulong)uVar1 * 4);
LAB_00a209f0:
  uVar1 = 1 << (ulong)(param_2 & 0xf);
  if ((uVar1 & puVar2[1]) == 0) {
    return 0xffffffff;
  }
  uVar1 = (uint)puVar2[1] & uVar1 - 1;
  uVar1 = (uVar1 >> 1 & 0x55555555) + (uVar1 & 0x55555555);
  uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
  uVar1 = (uVar1 >> 4 & 0xffffff0f) + (uVar1 & 0xf0f0f0f);
  *param_1 = *(ushort *)
              (&DAT_0138cade + ((ulong)*puVar2 + (ulong)((uVar1 & 0xf) + (uVar1 >> 8))) * 2) >> 8 |
             *(ushort *)
              (&DAT_0138cade + ((ulong)*puVar2 + (ulong)((uVar1 & 0xf) + (uVar1 >> 8))) * 2) << 8;
  return 2;
}

