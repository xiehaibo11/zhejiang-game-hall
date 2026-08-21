
undefined8 * spSkeleton_findTransformConstraint(long param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  
                    /* try { // try from 00d60724 to 00e60733 has its CatchHandler @ 00d60a68 */
  iVar1 = *(int *)(param_1 + 0x48);
  if (0 < iVar1) {
    lVar4 = *(long *)(param_1 + 0x50);
    lVar5 = 0;
    do {
      puVar3 = *(undefined8 **)(lVar4 + lVar5 * 8);
      iVar2 = strcmp(*(char **)*puVar3,param_2);
      if (iVar2 == 0) {
        return puVar3;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar1);
  }
  return (undefined8 *)0x0;
}

