
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00a2d374(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *(undefined1 *)((long)param_2 + 9) = *(undefined1 *)((long)param_1 + 9);
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 1);
  *param_2 = *param_1;
  if (param_1[3] == 0) {
    param_2[3] = 0;
    lVar1 = param_1[2];
  }
  else {
    lVar1 = (*(code *)PTR_strdup_01769a10)();
    param_2[3] = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
    lVar1 = param_1[2];
                    /* try { // try from 00a2d3c4 to 00b2d3c7 has its CatchHandler @ 00a2d42c */
  }
  if (lVar1 == 0) {
    param_2[2] = 0;
    lVar1 = param_1[7];
  }
  else {
                    /* try { // try from 00a2d3c8 to 00b2d447 has its CatchHandler @ 00a2d36c */
    lVar1 = (*(code *)PTR_strdup_01769a10)();
    param_2[2] = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
    lVar1 = param_1[7];
  }
  if (lVar1 == 0) {
    param_2[7] = 0;
    lVar1 = param_1[6];
  }
  else {
    lVar1 = (*(code *)PTR_strdup_01769a10)();
    param_2[7] = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
    lVar1 = param_1[6];
  }
  if (lVar1 == 0) {
    param_2[6] = 0;
    lVar1 = param_1[5];
  }
  else {
    lVar1 = (*(code *)PTR_strdup_01769a10)();
    param_2[6] = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
    lVar1 = param_1[5];
  }
  if (lVar1 == 0) {
                    /* try { // try from 00a2d494 to 00b2d497 has its CatchHandler @ 00a2d4cc */
    param_2[5] = 0;
                    /* try { // try from 00a2d498 to 00b2d4df has its CatchHandler @ 00a2d448 */
    lVar1 = param_1[4];
  }
  else {
                    /* catch() { ... } // from try @ 00a2d3c4 with catch @ 00a2d42c */
    lVar1 = (*(code *)PTR_strdup_01769a10)();
    param_2[5] = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
    lVar1 = param_1[4];
  }
  if (lVar1 == 0) {
    param_2[4] = 0;
  }
  else {
                    /* try { // try from 00a2d448 to 00b2d493 has its CatchHandler @ 00a2d448
                       catch() { ... } // from try @ 00a2d448 with catch @ 00a2d448
                       catch() { ... } // from try @ 00a2d498 with catch @ 00a2d448 */
    lVar1 = (*(code *)PTR_strdup_01769a10)();
    param_2[4] = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

