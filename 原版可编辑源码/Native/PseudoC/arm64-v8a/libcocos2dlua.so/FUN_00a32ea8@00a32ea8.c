
void FUN_00a32ea8(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  if (param_1 != (long *)0x0) {
    plVar1 = (long *)*param_1;
    while (plVar1 != (long *)0x0) {
      lVar2 = *plVar1;
      (*(code *)PTR_free_01769a00)(plVar1[7]);
      (*(code *)PTR_free_01769a00)(plVar1[5]);
      (*(code *)PTR_free_01769a00)(plVar1[3]);
                    /* try { // try from 00a32efc to 00b32f2b has its CatchHandler @ 00a32e50 */
      (*(code *)PTR_free_01769a00)(plVar1[4]);
      (*(code *)PTR_free_01769a00)(plVar1[1]);
      (*(code *)PTR_free_01769a00)(plVar1[2]);
      (*(code *)PTR_free_01769a00)(plVar1[10]);
                    /* try { // try from 00a32f2c to 00b32f3f has its CatchHandler @ 00a32f80 */
      (*(code *)PTR_free_01769a00)(plVar1[9]);
      (*(code *)PTR_free_01769a00)(plVar1);
                    /* try { // try from 00a32f40 to 00b32f9b has its CatchHandler @ 00a32e50 */
      plVar1 = (long *)lVar2;
    }
    *param_1 = 0;
    param_1[3] = 0;
  }
  return;
}

