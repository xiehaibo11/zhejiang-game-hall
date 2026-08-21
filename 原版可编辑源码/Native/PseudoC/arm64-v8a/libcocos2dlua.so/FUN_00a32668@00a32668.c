
void FUN_00a32668(long *param_1)

{
  long *plVar1;
  long lVar2;
  
                    /* try { // try from 00a3266c to 00b32683 has its CatchHandler @ 00a32734 */
  if (param_1 == (long *)0x0) {
                    /* catch() { ... } // from try @ 00a32690 with catch @ 00a32730 */
                    /* catch() { ... } // from try @ 00a3266c with catch @ 00a32734
                       catch() { ... } // from try @ 00a326dc with catch @ 00a32734 */
    return;
  }
                    /* try { // try from 00a32690 to 00b326a7 has its CatchHandler @ 00a32730 */
  (*(code *)PTR_free_01769a00)(param_1[1]);
  plVar1 = (long *)*param_1;
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
                    /* try { // try from 00a326a8 to 00b326db has its CatchHandler @ 00a3261c */
    (*(code *)PTR_free_01769a00)(plVar1[7]);
    (*(code *)PTR_free_01769a00)(plVar1[5]);
    (*(code *)PTR_free_01769a00)(plVar1[3]);
    (*(code *)PTR_free_01769a00)(plVar1[4]);
    (*(code *)PTR_free_01769a00)(plVar1[1]);
                    /* try { // try from 00a326dc to 00b326ef has its CatchHandler @ 00a32734 */
    (*(code *)PTR_free_01769a00)(plVar1[2]);
                    /* try { // try from 00a326f0 to 00b3274f has its CatchHandler @ 00a3261c */
    (*(code *)PTR_free_01769a00)(plVar1[10]);
    (*(code *)PTR_free_01769a00)(plVar1[9]);
    (*(code *)PTR_free_01769a00)(plVar1);
    plVar1 = (long *)lVar2;
  }
  (*(code *)PTR_free_01769a00)(param_1);
  return;
}

