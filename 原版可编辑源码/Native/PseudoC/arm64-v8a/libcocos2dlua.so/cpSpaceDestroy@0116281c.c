
void cpSpaceDestroy(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  
  cpSpaceLock();
  piVar4 = *(int **)(param_1 + 0x38);
  if (0 < *piVar4) {
    lVar5 = 0;
    do {
      cpBodyActivate(*(undefined8 *)(*(long *)(piVar4 + 2) + lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar5 < *piVar4);
  }
  piVar4 = *(int **)(param_1 + 0x40);
  if (0 < *piVar4) {
    lVar5 = 0;
    do {
      cpBodyActivate(*(undefined8 *)(*(long *)(piVar4 + 2) + lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar5 < *piVar4);
  }
  piVar4 = *(int **)(param_1 + 0x50);
  iVar3 = *piVar4;
  if (0 < iVar3) {
    lVar5 = 0;
    do {
      lVar1 = *(long *)(*(long *)(piVar4 + 2) + lVar5 * 8);
      if (lVar1 != 0) {
        do {
          lVar1 = *(long *)(lVar1 + 0xa8);
          cpBodyActivate();
        } while (lVar1 != 0);
        iVar3 = *piVar4;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar3);
  }
  cpSpaceUnlock(param_1,1);
  cpSpatialIndexFree(*(undefined8 *)(param_1 + 0x60));
  cpSpatialIndexFree(*(undefined8 *)(param_1 + 0x68));
  cpArrayFree(*(undefined8 *)(param_1 + 0x38));
  cpArrayFree(*(undefined8 *)(param_1 + 0x40));
  cpArrayFree(*(undefined8 *)(param_1 + 0x50));
  cpArrayFree(*(undefined8 *)(param_1 + 0x48));
  cpArrayFree(*(undefined8 *)(param_1 + 0x70));
  cpHashSetFree(*(undefined8 *)(param_1 + 0x88));
  cpArrayFree(*(undefined8 *)(param_1 + 0x78));
  cpArrayFree(*(undefined8 *)(param_1 + 0x90));
  if (*(long *)(param_1 + 0x98) != 0) {
    cpArrayFreeEach(*(long *)(param_1 + 0x98),free);
    cpArrayFree(*(undefined8 *)(param_1 + 0x98));
  }
  if (*(long *)(param_1 + 0xf0) != 0) {
    cpArrayFreeEach(*(long *)(param_1 + 0xf0),free);
    cpArrayFree(*(undefined8 *)(param_1 + 0xf0));
  }
  uVar2 = 0;
  if (*(long *)(param_1 + 0xa8) != 0) {
    cpHashSetEach(*(long *)(param_1 + 0xa8),free,0);
    uVar2 = *(undefined8 *)(param_1 + 0xa8);
  }
  cpHashSetFree(uVar2);
  return;
}

