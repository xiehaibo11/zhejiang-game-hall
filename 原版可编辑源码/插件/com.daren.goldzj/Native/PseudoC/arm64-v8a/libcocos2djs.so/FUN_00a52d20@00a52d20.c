
long * FUN_00a52d20(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
                    /* catch() { ... } // from try @ 00a52c30 with catch @ 00a52d24 */
                    /* catch() { ... } // from try @ 00a52bec with catch @ 00a52d3c */
                    /* catch() { ... } // from try @ 00a52bc0 with catch @ 00a52d40 */
  plVar1 = (long *)(*(code *)PTR_malloc_01d1b740)(0x10);
  if (plVar1 != (long *)0x0) {
    lVar2 = (*(code *)PTR_malloc_01d1b740)(*(undefined4 *)(param_1 + 3));
    plVar1[1] = lVar2;
    if (lVar2 == 0) {
      (*(code *)PTR_free_01d1b748)(plVar1);
      plVar1 = (long *)0x0;
    }
    else {
      *plVar1 = (long)param_1;
      (*(code *)*param_1)();
    }
  }
                    /* catch() { ... } // from try @ 00a52df4 with catch @ 00a52d90 */
  return plVar1;
}

