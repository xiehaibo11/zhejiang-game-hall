
undefined8 FUN_00a15fac(undefined8 param_1,ushort *param_2,uint param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  
  if (param_4 < 2) {
    return 0xfffffffe;
  }
  if (param_3 < 0x460) {
    uVar2 = param_3 >> 4;
    puVar4 = &DAT_01321e46;
  }
  else if (param_3 - 0x2000 < 0x670) {
    uVar2 = (param_3 >> 4) - 0x200;
    puVar4 = &UNK_01321f5e;
  }
  else if (param_3 - 0x3000 < 0x3e0) {
    uVar2 = (param_3 >> 4) - 0x300;
    puVar4 = &UNK_013220fa;
  }
  else if (param_3 - 0x4e00 >> 5 < 0x28d) {
    uVar2 = (param_3 >> 4) - 0x4e0;
    puVar4 = &UNK_013221f2;
  }
  else if (param_3 - 0xac00 >> 5 < 0x15d) {
    uVar2 = (param_3 >> 4) - 0xac0;
    puVar4 = &UNK_0132365a;
  }
  else if (param_3 - 0xf900 < 0x110) {
    uVar2 = (param_3 >> 4) - 0xf90;
    puVar4 = &UNK_01324142;
  }
  else {
    if (0xef < param_3 - 0xff00) {
      return 0xffffffff;
    }
    uVar2 = (param_3 >> 4) - 0xff0;
    puVar4 = &UNK_01324186;
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
              (&DAT_013241c2 +
              ((ulong)*(ushort *)(puVar4 + (ulong)uVar2 * 4) + (ulong)((uVar3 & 0xf) + (uVar3 >> 8))
              ) * 2) >> 8 |
             *(ushort *)
              (&DAT_013241c2 +
              ((ulong)*(ushort *)(puVar4 + (ulong)uVar2 * 4) + (ulong)((uVar3 & 0xf) + (uVar3 >> 8))
              ) * 2) << 8;
  return 2;
}

