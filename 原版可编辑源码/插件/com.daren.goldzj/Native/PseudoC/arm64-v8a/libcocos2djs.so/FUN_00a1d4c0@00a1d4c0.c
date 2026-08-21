
void FUN_00a1d4c0(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  if (param_1 != (long *)0x0) {
    plVar1 = (long *)*param_1;
    while (plVar1 != (long *)0x0) {
      lVar2 = *plVar1;
      (*(code *)PTR_free_01d1b748)(plVar1[7]);
      (*(code *)PTR_free_01d1b748)(plVar1[5]);
      (*(code *)PTR_free_01d1b748)(plVar1[3]);
      (*(code *)PTR_free_01d1b748)(plVar1[4]);
      (*(code *)PTR_free_01d1b748)(plVar1[1]);
                    /* try { // try from 00a1d528 to 00b1d52f has its CatchHandler @ 00a1d6dc */
                    /* try { // try from 00a1d530 to 00b1d5af has its CatchHandler @ 00a1d484 */
      (*(code *)PTR_free_01d1b748)(plVar1[2]);
      (*(code *)PTR_free_01d1b748)(plVar1[10]);
      (*(code *)PTR_free_01d1b748)(plVar1[9]);
      (*(code *)PTR_free_01d1b748)(plVar1);
      plVar1 = (long *)lVar2;
    }
    *param_1 = 0;
    param_1[3] = 0;
  }
  return;
}

