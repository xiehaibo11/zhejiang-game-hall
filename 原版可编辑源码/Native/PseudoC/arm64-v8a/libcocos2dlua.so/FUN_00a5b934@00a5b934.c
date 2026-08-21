
void FUN_00a5b934(undefined8 *param_1)

{
  (*(code *)PTR_free_01769a00)(*param_1);
  *param_1 = 0;
  (*(code *)PTR_free_01769a00)(param_1[1]);
  param_1[1] = 0;
                    /* try { // try from 00a5b96c to 00b5b987 has its CatchHandler @ 00a5bc98 */
  (*(code *)PTR_free_01769a00)(param_1[2]);
  param_1[2] = 0;
  (*(code *)PTR_free_01769a00)(param_1[4]);
  param_1[4] = 0;
  (*(code *)PTR_free_01769a00)(param_1[5]);
  param_1[5] = 0;
                    /* try { // try from 00a5b9a0 to 00b5b9af has its CatchHandler @ 00a5bc88 */
  (*(code *)PTR_free_01769a00)(param_1[6]);
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
                    /* try { // try from 00a5b9b8 to 00b5b9cb has its CatchHandler @ 00a5bc84 */
  return;
}

