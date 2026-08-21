
undefined8 * spSkeletonData_findTransformConstraint(long param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  
                    /* catch() { ... } // from try @ 00d50e30 with catch @ 00d50dd8
                       catch() { ... } // from try @ 00d51070 with catch @ 00d50dd8 */
  iVar1 = *(int *)(param_1 + 0x80);
  if (0 < iVar1) {
    lVar4 = *(long *)(param_1 + 0x88);
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
                    /* try { // try from 00d50e28 to 00e50e2f has its CatchHandler @ 00d510c0 */
                    /* try { // try from 00d50e30 to 00e50eb7 has its CatchHandler @ 00d50dd8 */
  return (undefined8 *)0x0;
}

