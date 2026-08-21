
void FUN_00a62910(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)*param_1;
  if (plVar1 != (long *)0x0) {
    do {
                    /* try { // try from 00a62938 to 00b629eb has its CatchHandler @ 00a628b4 */
      plVar2 = (long *)*plVar1;
      if (*(uint *)(plVar1 + 1) < 3) {
        (*(code *)PTR_free_01769a00)(plVar1[2]);
      }
      (*(code *)PTR_free_01769a00)(plVar1);
      plVar1 = plVar2;
    } while (plVar2 != (long *)0x0);
    *param_1 = 0;
  }
  return;
}

