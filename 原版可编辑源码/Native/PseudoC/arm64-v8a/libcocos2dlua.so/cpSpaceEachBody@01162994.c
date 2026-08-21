
void cpSpaceEachBody(long param_1,code *param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  
  cpSpaceLock();
  piVar3 = *(int **)(param_1 + 0x38);
  if (0 < *piVar3) {
    lVar4 = 0;
    do {
      (*param_2)(*(undefined8 *)(*(long *)(piVar3 + 2) + lVar4 * 8),param_3);
      lVar4 = lVar4 + 1;
    } while (lVar4 < *piVar3);
  }
  piVar3 = *(int **)(param_1 + 0x40);
  if (0 < *piVar3) {
    lVar4 = 0;
    do {
      (*param_2)(*(undefined8 *)(*(long *)(piVar3 + 2) + lVar4 * 8),param_3);
      lVar4 = lVar4 + 1;
    } while (lVar4 < *piVar3);
  }
  piVar3 = *(int **)(param_1 + 0x50);
  iVar2 = *piVar3;
  if (0 < iVar2) {
    lVar4 = 0;
    do {
      lVar1 = *(long *)(*(long *)(piVar3 + 2) + lVar4 * 8);
      if (lVar1 != 0) {
        do {
          lVar5 = *(long *)(lVar1 + 0xa8);
          (*param_2)(lVar1,param_3);
          lVar1 = lVar5;
        } while (lVar5 != 0);
        iVar2 = *piVar3;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar2);
  }
  cpSpaceUnlock(param_1,1);
  return;
}

