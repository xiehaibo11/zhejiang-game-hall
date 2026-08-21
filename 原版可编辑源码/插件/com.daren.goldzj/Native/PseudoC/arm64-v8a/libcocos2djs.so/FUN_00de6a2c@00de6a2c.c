
undefined4 FUN_00de6a2c(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  void *__dest;
  long lVar11;
  int iVar12;
  long lVar13;
  
  iVar10 = *(int *)(param_1 + 0xc);
  iVar3 = *(int *)(param_1 + 0x10);
  iVar1 = iVar10 + 2;
  iVar2 = iVar3 + 2;
  if (-1 < iVar10 + 1) {
    iVar1 = iVar10 + 1;
  }
  if (-1 < iVar3 + 1) {
    iVar2 = iVar3 + 1;
  }
  if (0 < iVar3) {
    lVar11 = *param_2;
    iVar6 = *(int *)(param_1 + 8);
    lVar4 = *(long *)(lVar11 + 0x18);
    iVar5 = *(int *)(lVar11 + 0x34);
    lVar9 = *(long *)(lVar11 + 0x20);
    __dest = (void *)(*(long *)(lVar11 + 0x10) + (long)*(int *)(lVar11 + 0x30) * (long)iVar6);
    iVar7 = *(int *)(lVar11 + 0x38);
    memcpy(__dest,*(void **)(param_1 + 0x18),(long)iVar10);
    if (iVar3 != 1) {
      iVar12 = 1;
      do {
        memcpy((void *)((long)__dest + (long)*(int *)(lVar11 + 0x30) * (long)iVar12),
               (void *)(*(long *)(param_1 + 0x18) + (long)*(int *)(param_1 + 0x30) * (long)iVar12),
               (long)iVar10);
        iVar12 = iVar12 + 1;
      } while (iVar3 != iVar12);
    }
    if (0 < iVar3) {
      lVar8 = ((long)iVar6 << 0x20) >> 0x21;
      iVar10 = 0;
      do {
        lVar13 = (long)iVar10;
        memcpy((void *)(lVar4 + iVar5 * lVar8 + *(int *)(lVar11 + 0x34) * lVar13),
               (void *)(*(long *)(param_1 + 0x20) + *(int *)(param_1 + 0x34) * lVar13),
               (long)(iVar1 >> 1));
        memcpy((void *)(lVar9 + iVar7 * lVar8 + *(int *)(lVar11 + 0x38) * lVar13),
               (void *)(*(long *)(param_1 + 0x28) + *(int *)(param_1 + 0x34) * lVar13),
               (long)(iVar1 >> 1));
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar2 >> 1);
    }
  }
  return *(undefined4 *)(param_1 + 0x10);
}

