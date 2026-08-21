
undefined8 * spSkeletonData_findIkConstraint(long param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  
  iVar1 = *(int *)(param_1 + 0x70);
  if (0 < iVar1) {
                    /* catch() { ... } // from try @ 00d50ccc with catch @ 00d50d8c */
    lVar4 = *(long *)(param_1 + 0x78);
                    /* catch() { ... } // from try @ 00d50cc0 with catch @ 00d50d90 */
                    /* catch() { ... } // from try @ 00d509b0 with catch @ 00d50d94 */
    lVar5 = 0;
    do {
      puVar3 = *(undefined8 **)(lVar4 + lVar5 * 8);
      iVar2 = strcmp((char *)*puVar3,param_2);
      if (iVar2 == 0) {
        return puVar3;
      }
      lVar5 = lVar5 + 1;
                    /* catch() { ... } // from try @ 00d50a48 with catch @ 00d50db0 */
                    /* catch() { ... } // from try @ 00d50ce8 with catch @ 00d50db4 */
    } while (lVar5 < iVar1);
  }
  return (undefined8 *)0x0;
}

