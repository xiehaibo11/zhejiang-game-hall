
void FUN_00a1d354(long *param_1)

{
  long lVar1;
  
  while (param_1 != (long *)0x0) {
    lVar1 = *param_1;
    (*(code *)PTR_free_01d1b748)(param_1[7]);
    (*(code *)PTR_free_01d1b748)(param_1[5]);
    (*(code *)PTR_free_01d1b748)(param_1[3]);
    (*(code *)PTR_free_01d1b748)(param_1[4]);
    (*(code *)PTR_free_01d1b748)(param_1[1]);
    (*(code *)PTR_free_01d1b748)(param_1[2]);
    (*(code *)PTR_free_01d1b748)(param_1[10]);
    (*(code *)PTR_free_01d1b748)(param_1[9]);
                    /* try { // try from 00a1d3d8 to 00b1d3df has its CatchHandler @ 00a1d3f8 */
                    /* try { // try from 00a1d3e0 to 00b1d3e7 has its CatchHandler @ 00a1d3e8 */
    (*(code *)PTR_free_01d1b748)(param_1);
                    /* catch() { ... } // from try @ 00a1d2c4 with catch @ 00a1d3e8
                       catch() { ... } // from try @ 00a1d3e0 with catch @ 00a1d3e8
                       try { // try from 00a1d3e8 to 00b1d483 has its CatchHandler @ 00a1d190 */
    param_1 = (long *)lVar1;
  }
                    /* catch() { ... } // from try @ 00a1d23c with catch @ 00a1d3f8
                       catch() { ... } // from try @ 00a1d3d8 with catch @ 00a1d3f8 */
  return;
}

