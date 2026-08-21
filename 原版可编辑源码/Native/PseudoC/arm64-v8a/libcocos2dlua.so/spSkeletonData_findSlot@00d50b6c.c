
long spSkeletonData_findSlot(long param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (0 < iVar1) {
    lVar4 = *(long *)(param_1 + 0x30);
    lVar5 = 0;
    do {
      lVar3 = *(long *)(lVar4 + lVar5 * 8);
      iVar2 = strcmp(*(char **)(lVar3 + 8),param_2);
      if (iVar2 == 0) {
        return lVar3;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar1);
  }
  return 0;
}

