
long FUN_00c1b928(undefined8 param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  void *__dest;
  void *__src;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  
  iVar1 = 0;
  if (*(int *)(param_2 + 0x34) != 0) {
    iVar1 = ((uint)LZCOUNT(*(int *)(param_2 + 0x34)) ^ 0x1f) + 1;
  }
  lVar6 = FUN_00c1b698(param_1,*(undefined4 *)(param_2 + 0x30),iVar1);
  *(undefined1 *)(lVar6 + 10) = 0;
  uVar4 = *(uint *)(param_2 + 0x30);
  if (uVar4 != 0) {
    __dest = *(void **)(lVar6 + 0x10);
    __src = *(void **)(param_2 + 0x10);
    if (uVar4 < 0x40) {
      lVar9 = 0;
      do {
        *(undefined8 *)((long)__dest + lVar9 * 8) = *(undefined8 *)((long)__src + lVar9 * 8);
        lVar9 = lVar9 + 1;
      } while ((uint)lVar9 < uVar4);
    }
    else {
      memcpy(__dest,__src,(ulong)uVar4 << 3);
    }
  }
  uVar4 = *(uint *)(param_2 + 0x34);
  if (uVar4 != 0) {
    lVar9 = *(long *)(param_2 + 0x28);
    lVar11 = *(long *)(lVar6 + 0x28);
    *(long *)(lVar6 + 0x38) = (lVar11 - lVar9) + *(long *)(param_2 + 0x38);
    uVar7 = 0;
    do {
      uVar2 = (int)uVar7 + 1;
      lVar5 = uVar7 * 0x18;
      lVar8 = *(long *)(lVar9 + lVar5 + 0x10);
      uVar10 = *(undefined8 *)(lVar9 + lVar5 + 8);
      *(undefined8 *)(lVar11 + lVar5) = *(undefined8 *)(lVar9 + lVar5);
      lVar3 = lVar8 + (lVar11 - lVar9);
      *(undefined8 *)(lVar11 + lVar5 + 8) = uVar10;
      if (lVar8 == 0) {
        lVar3 = 0;
      }
      *(long *)(lVar11 + lVar5 + 0x10) = lVar3;
      uVar7 = (ulong)uVar2;
    } while (uVar2 <= uVar4);
  }
  return lVar6;
}

