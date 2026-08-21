
void FUN_00a1cc80(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  if (param_1 == (long *)0x0) {
                    /* catch() { ... } // from try @ 00a1cd10 with catch @ 00a1cd50 */
    return;
  }
  (*(code *)PTR_free_01d1b748)(param_1[1]);
  plVar1 = (long *)*param_1;
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    (*(code *)PTR_free_01d1b748)(plVar1[7]);
                    /* catch() { ... } // from try @ 00a1cd1c with catch @ 00a1cccc */
    (*(code *)PTR_free_01d1b748)(plVar1[5]);
    (*(code *)PTR_free_01d1b748)(plVar1[3]);
    (*(code *)PTR_free_01d1b748)(plVar1[4]);
    (*(code *)PTR_free_01d1b748)(plVar1[1]);
    (*(code *)PTR_free_01d1b748)(plVar1[2]);
    (*(code *)PTR_free_01d1b748)(plVar1[10]);
                    /* try { // try from 00a1cd10 to 00b1cd1b has its CatchHandler @ 00a1cd50 */
    (*(code *)PTR_free_01d1b748)(plVar1[9]);
                    /* try { // try from 00a1cd1c to 00b1cd6b has its CatchHandler @ 00a1cccc */
    (*(code *)PTR_free_01d1b748)(plVar1);
    plVar1 = (long *)lVar2;
  }
  (*(code *)PTR_free_01d1b748)(param_1);
  return;
}

