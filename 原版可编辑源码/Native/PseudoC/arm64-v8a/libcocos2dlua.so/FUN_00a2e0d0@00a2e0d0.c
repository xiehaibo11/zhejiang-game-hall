
undefined8 FUN_00a2e0d0(long param_1,int param_2)

{
  int *piVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  piVar1 = (int *)(param_1 + 0x8e40);
                    /* catch() { ... } // from try @ 00a2e05c with catch @ 00a2e0f4 */
                    /* catch() { ... } // from try @ 00a2e074 with catch @ 00a2e0f8 */
  if (*piVar1 != 0) {
    plVar2 = (long *)(param_1 + 0x8e48);
    if (0 < *piVar1) {
      lVar4 = 0;
      do {
        lVar5 = lVar4 * 8;
        FUN_00a2c624(*(undefined8 *)(*plVar2 + lVar5));
        lVar4 = lVar4 + 1;
                    /* catch() { ... } // from try @ 00a2e028 with catch @ 00a2e128 */
        *(undefined8 *)(*plVar2 + lVar5) = 0;
      } while (lVar4 < *piVar1);
    }
    (*(code *)PTR_free_01769a00)(*plVar2);
    *plVar2 = 0;
    *piVar1 = 0;
  }
  lVar4 = (*(code *)PTR_calloc_01769a18)((long)param_2,8);
  if (lVar4 == 0) {
    uVar3 = 0x1b;
  }
  else {
    uVar3 = 0;
    *piVar1 = param_2;
    *(long *)(param_1 + 0x8e48) = lVar4;
  }
  return uVar3;
}

