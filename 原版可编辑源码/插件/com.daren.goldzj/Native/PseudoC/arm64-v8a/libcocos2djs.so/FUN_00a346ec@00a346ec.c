
void FUN_00a346ec(long *param_1)

{
  long lVar1;
  long lVar2;
  
                    /* try { // try from 00a34700 to 00b34753 has its CatchHandler @ 00a34700
                       catch() { ... } // from try @ 00a34700 with catch @ 00a34700
                       catch() { ... } // from try @ 00a348b8 with catch @ 00a34700 */
  if (0 < (int)param_1[4]) {
    lVar1 = 0;
    do {
      lVar2 = lVar1 * 8;
      FUN_00a34128(*(undefined8 *)(*param_1 + lVar2),param_1);
      lVar1 = lVar1 + 1;
      *(undefined8 *)(*param_1 + lVar2) = 0;
    } while (lVar1 < (int)param_1[4]);
  }
  (*(code *)PTR_free_01d1b748)(*param_1);
  *param_1 = 0;
                    /* try { // try from 00a34754 to 00b3476b has its CatchHandler @ 00a34934 */
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

