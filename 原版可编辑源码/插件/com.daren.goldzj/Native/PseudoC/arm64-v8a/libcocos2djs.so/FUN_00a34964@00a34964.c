
undefined8 FUN_00a34964(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  undefined8 *puVar5;
  
  puVar2 = (undefined8 *)0x0;
  if (param_1[2] != 0) {
    puVar2 = *(undefined8 **)(param_1[2] + 0x10);
    param_1[2] = (long)puVar2;
    if (puVar2 != (undefined8 *)0x0) goto LAB_00a349b0;
  }
  iVar4 = (int)param_1[1];
  lVar3 = (long)iVar4;
  iVar1 = (int)((long *)*param_1)[4];
  if (iVar4 < iVar1) {
    do {
      iVar4 = iVar4 + 1;
      puVar5 = (undefined8 *)**(undefined8 **)(*(long *)*param_1 + lVar3 * 8);
                    /* try { // try from 00a3499c to 00b349f7 has its CatchHandler @ 00a3499c
                       catch() { ... } // from try @ 00a3499c with catch @ 00a3499c
                       catch() { ... } // from try @ 00a34ca0 with catch @ 00a3499c */
      if (puVar5 != (undefined8 *)0x0) {
        param_1[2] = (long)puVar5;
        *(int *)(param_1 + 1) = iVar4;
        return *puVar5;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
  }
LAB_00a349b0:
  if (puVar2 != (undefined8 *)0x0) {
    return *puVar2;
  }
  param_1[2] = 0;
  return 0;
}

