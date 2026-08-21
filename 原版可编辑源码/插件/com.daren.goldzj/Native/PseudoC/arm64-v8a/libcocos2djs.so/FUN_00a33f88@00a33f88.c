
void FUN_00a33f88(undefined8 param_1)

{
  undefined8 *puVar1;
  
                    /* try { // try from 00a33f90 to 00b33fe3 has its CatchHandler @ 00a33f90
                       catch() { ... } // from try @ 00a33f90 with catch @ 00a33f90
                       catch() { ... } // from try @ 00a34218 with catch @ 00a33f90 */
  puVar1 = (undefined8 *)(*(code *)PTR_malloc_01d1b740)(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = param_1;
    puVar1[3] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  return;
}

