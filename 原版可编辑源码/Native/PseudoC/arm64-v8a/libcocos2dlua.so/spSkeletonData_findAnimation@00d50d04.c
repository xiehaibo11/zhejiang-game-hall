
undefined8 * spSkeletonData_findAnimation(long param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  
  iVar1 = *(int *)(param_1 + 0x60);
  if (0 < iVar1) {
    lVar4 = *(long *)(param_1 + 0x68);
    lVar5 = 0;
    do {
                    /* try { // try from 00d50d30 to 00e50dd7 has its CatchHandler @ 00d50960 */
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

