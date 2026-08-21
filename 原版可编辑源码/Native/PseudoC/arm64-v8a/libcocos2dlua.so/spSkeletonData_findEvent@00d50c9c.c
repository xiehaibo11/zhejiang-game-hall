
undefined8 * spSkeletonData_findEvent(long param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  
  iVar1 = *(int *)(param_1 + 0x50);
  if (0 < iVar1) {
    lVar4 = *(long *)(param_1 + 0x58);
                    /* try { // try from 00d50cc0 to 00e50cc7 has its CatchHandler @ 00d50d90 */
    lVar5 = 0;
    do {
      puVar3 = *(undefined8 **)(lVar4 + lVar5 * 8);
                    /* try { // try from 00d50ccc to 00e50cd7 has its CatchHandler @ 00d50d8c */
      iVar2 = strcmp((char *)*puVar3,param_2);
      if (iVar2 == 0) {
        return puVar3;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar1);
  }
                    /* try { // try from 00d50ce8 to 00e50d2f has its CatchHandler @ 00d50db4 */
  return (undefined8 *)0x0;
}

