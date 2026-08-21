
undefined8 FUN_00a5a004(long *param_1)

{
  long lVar1;
  
                    /* try { // try from 00a5a00c to 00b5a03f has its CatchHandler @ 00a5a14c */
  lVar1 = *(long *)(*param_1 + 0x218);
  (*(code *)PTR_free_01769a00)(param_1[0xc5]);
  param_1[0xc5] = 0;
  (*(code *)PTR_free_01769a00)(param_1[200]);
  param_1[200] = 0;
  if (lVar1 != 0) {
                    /* try { // try from 00a5a050 to 00b5a083 has its CatchHandler @ 00a5a140 */
    (*(code *)PTR_free_01769a00)(*(undefined8 *)(lVar1 + 8));
    *(undefined8 *)(lVar1 + 8) = 0;
  }
  return 0;
}

