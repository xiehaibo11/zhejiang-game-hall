
void FUN_00a4c834(long *param_1)

{
  ulong uVar1;
  long lVar2;
  
  while (param_1 != (long *)0x0) {
    lVar2 = *param_1;
    FUN_00a4c834(param_1[9]);
    uVar1 = param_1[10];
    if (((uint)uVar1 >> 2 & 1) == 0) {
                    /* catch() { ... } // from try @ 00a4c82c with catch @ 00a4c874 */
      (*(code *)PTR_free_01d1b748)(param_1[1]);
      uVar1 = param_1[10];
    }
    if ((uVar1 & 0x58) == 0) {
                    /* catch() { ... } // from try @ 00a4c8e0 with catch @ 00a4c888 */
      (*(code *)PTR_free_01d1b748)(param_1[3]);
    }
    (*(code *)PTR_free_01d1b748)(param_1[7]);
    (*(code *)PTR_free_01d1b748)(param_1[0xb]);
    (*(code *)PTR_free_01d1b748)(param_1);
    param_1 = (long *)lVar2;
  }
  return;
}

