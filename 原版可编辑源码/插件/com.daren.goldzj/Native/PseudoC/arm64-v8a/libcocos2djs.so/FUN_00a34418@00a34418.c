
void FUN_00a34418(long param_1,long *param_2)

{
                    /* catch() { ... } // from try @ 00a34370 with catch @ 00a3443c */
  (*(code *)PTR_free_01d1b748)(param_2[1]);
  param_2[1] = 0;
  if (*param_2 != 0) {
                    /* catch() { ... } // from try @ 00a34388 with catch @ 00a34454 */
                    /* catch() { ... } // from try @ 00a34348 with catch @ 00a34458 */
    (**(code **)(param_1 + 0x18))();
                    /* catch() { ... } // from try @ 00a34390 with catch @ 00a3445c */
    *param_2 = 0;
  }
  param_2[2] = 0;
                    /* catch() { ... } // from try @ 00a34378 with catch @ 00a3446c */
  (*(code *)PTR_free_01d1b748)(param_2);
  return;
}

