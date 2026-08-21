
void FUN_00debb14(long param_1,int param_2)

{
  void *__src;
  void *__dest;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  iVar1 = *(int *)(param_1 + 0x8c);
  iVar4 = param_2 - iVar1;
  if (0 < iVar4) {
    __dest = *(void **)(param_1 + 0x20);
    iVar2 = *(int *)(param_1 + 0xf0);
    lVar9 = (long)iVar2;
    uVar3 = *(int *)(param_1 + 0x84) * iVar4;
    __src = (void *)(*(long *)(param_1 + 0x18) + (long)(*(int *)(param_1 + 0x84) * iVar1) * 4);
    memcpy(__dest,__src,-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2);
    if ((0 < iVar2) &&
       (FUN_00df2de8(param_1 + lVar9 * 0x18 + 0xe0,iVar1,param_2,__src,__dest), iVar2 != 1)) {
      lVar8 = param_1 + lVar9 * 0x18 + 200;
      do {
        FUN_00df2de8(lVar8,iVar1,param_2,__dest,__dest);
        lVar9 = lVar9 + -1;
        lVar8 = lVar8 + -0x18;
      } while (1 < lVar9);
    }
    iVar1 = **(int **)(param_1 + 8);
    uVar3 = iVar1 * iVar4;
    if (0 < (int)uVar3) {
      uVar7 = (ulong)uVar3;
      puVar5 = *(undefined4 **)(param_1 + 0x20);
      puVar6 = (undefined1 *)
               (*(long *)(*(int **)(param_1 + 8) + 0xe) +
               (long)*(int *)(param_1 + 0x8c) * (long)iVar1);
      do {
        uVar7 = uVar7 - 1;
        *puVar6 = (char)((uint)*puVar5 >> 8);
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (uVar7 != 0);
    }
    *(int *)(param_1 + 0x94) = param_2;
    *(int *)(param_1 + 0x8c) = param_2;
  }
  return;
}

