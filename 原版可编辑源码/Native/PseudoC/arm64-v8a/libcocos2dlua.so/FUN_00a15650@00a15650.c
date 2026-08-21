
undefined8 FUN_00a15650(undefined8 param_1,ushort *param_2,uint param_3,ulong param_4)

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
    puVar4 = &DAT_0130e75a;
  }
  else if (param_3 - 0x2100 < 0x30) {
    uVar2 = (param_3 >> 4) - 0x210;
    puVar4 = &UNK_0130e872;
  }
  else if (param_3 - 0x4e00 >> 4 < 0x51b) {
    uVar2 = (param_3 >> 4) - 0x4e0;
    puVar4 = &UNK_0130e87e;
  }
  else {
    if (0x5f < param_3 - 0xff00) {
      return 0xffffffff;
    }
    uVar2 = (param_3 >> 4) - 0xff0;
    puVar4 = &DAT_0130fcea;
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
              (&DAT_0130fd02 +
              ((ulong)*(ushort *)(puVar4 + (ulong)uVar2 * 4) + (ulong)((uVar3 & 0xf) + (uVar3 >> 8))
              ) * 2) >> 8 |
             *(ushort *)
              (&DAT_0130fd02 +
              ((ulong)*(ushort *)(puVar4 + (ulong)uVar2 * 4) + (ulong)((uVar3 & 0xf) + (uVar3 >> 8))
              ) * 2) << 8;
  return 2;
}

