
void FUN_00e16df4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar5 = *(long *)(param_1 + 0x40);
  lVar1 = *(long *)(param_1 + 0xa0);
  lVar4 = lVar5 + param_2 * 0x20;
  lVar2 = *(long *)(lVar4 + 0x10);
  *(short *)(lVar1 + 0x18) = (short)((int)lVar2 + 0x20U >> 6);
  lVar4 = *(long *)(lVar4 + 0x18);
  *(short *)(lVar1 + 0x1a) = (short)((int)lVar4 + 0x20U >> 6);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    uVar6 = (ulong)*(ushort *)(param_1 + 0x88);
    if (uVar6 == 0) {
      uVar3 = 0x7fffffff;
      if (lVar2 < 0) {
        uVar3 = 0xffffffff80000001;
      }
      uVar7 = 0x7fffffff;
    }
    else {
      uVar8 = (ulong)(*(ushort *)(param_1 + 0x88) >> 1);
      lVar5 = -lVar2;
      if (-1 < lVar2) {
        lVar5 = lVar2;
      }
      uVar7 = 0;
      if (uVar6 != 0) {
        uVar7 = (uVar8 | lVar5 << 0x10) / uVar6;
      }
      uVar3 = -uVar7;
      if (-1 < lVar2) {
        uVar3 = uVar7;
      }
      lVar2 = -lVar4;
      if (-1 < lVar4) {
        lVar2 = lVar4;
      }
      uVar7 = 0;
      if (uVar6 != 0) {
        uVar7 = (uVar8 | lVar2 << 0x10) / uVar6;
      }
    }
    uVar6 = -uVar7;
    if (-1 < lVar4) {
      uVar6 = uVar7;
    }
    *(ulong *)(lVar1 + 0x20) = uVar3;
    *(ulong *)(lVar1 + 0x28) = uVar6;
    lVar4 = uVar6 * (long)*(short *)(param_1 + 0x8a);
    *(ulong *)(lVar1 + 0x30) =
         (lVar4 + (lVar4 >> 0x3f) + 0x8000 >> 0x10) + 0x3fU & 0xffffffffffffffc0;
    lVar4 = uVar6 * (long)*(short *)(param_1 + 0x8c);
    *(ulong *)(lVar1 + 0x38) = lVar4 + (lVar4 >> 0x3f) + 0x8000 >> 0x10 & 0xffffffffffffffc0;
    lVar4 = uVar6 * (long)*(short *)(param_1 + 0x8e);
    *(ulong *)(lVar1 + 0x40) =
         (lVar4 + (lVar4 >> 0x3f) + 0x8000 >> 0x10) + 0x20U & 0xffffffffffffffc0;
    lVar4 = uVar3 * (long)*(short *)(param_1 + 0x90);
    *(ulong *)(lVar1 + 0x48) =
         (lVar4 + (lVar4 >> 0x3f) + 0x8000 >> 0x10) + 0x20U & 0xffffffffffffffc0;
    return;
  }
  *(long *)(lVar1 + 0x30) = lVar4;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0x10000;
  *(undefined8 *)(lVar1 + 0x20) = 0x10000;
  *(long *)(lVar1 + 0x40) = (long)*(short *)(lVar5 + param_2 * 0x20) << 6;
  *(long *)(lVar1 + 0x48) = lVar2;
  return;
}

