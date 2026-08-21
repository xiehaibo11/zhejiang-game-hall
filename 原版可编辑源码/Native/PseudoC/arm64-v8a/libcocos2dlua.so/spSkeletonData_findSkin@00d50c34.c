
undefined8 * spSkeletonData_findSkin(long param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if (0 < iVar1) {
    lVar4 = *(long *)(param_1 + 0x40);
    lVar5 = 0;
    do {
      puVar3 = *(undefined8 **)(lVar4 + lVar5 * 8);
      iVar2 = strcmp((char *)*puVar3,param_2);
      if (iVar2 == 0) {
        return puVar3;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar1);
  }
  return (undefined8 *)0x0;
}

