
void cpSpaceEachConstraint(long param_1,code *param_2,undefined8 param_3)

{
  int *piVar1;
  long lVar2;
  
  cpSpaceLock();
  piVar1 = *(int **)(param_1 + 0x70);
  if (0 < *piVar1) {
    lVar2 = 0;
    do {
      (*param_2)(*(undefined8 *)(*(long *)(piVar1 + 2) + lVar2 * 8),param_3);
      lVar2 = lVar2 + 1;
    } while (lVar2 < *piVar1);
  }
  cpSpaceUnlock(param_1,1);
  return;
}

