
void FUN_00a3953c(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  do {
                    /* try { // try from 00a39560 to 00b3956b has its CatchHandler @ 00a395a0 */
    (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x670 + lVar1));
                    /* try { // try from 00a3956c to 00b395b3 has its CatchHandler @ 00a394ec */
    *(undefined8 *)(param_1 + 0x670 + lVar1) = 0;
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x1e8);
  if (*(char *)(param_1 + 0x920) != '\0') {
    (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x918));
    *(undefined8 *)(param_1 + 0x918) = 0;
    *(undefined1 *)(param_1 + 0x920) = 0;
  }
  *(undefined8 *)(param_1 + 0x918) = 0;
                    /* catch() { ... } // from try @ 00a39560 with catch @ 00a395a0 */
  if (*(char *)(param_1 + 0x910) != '\0') {
    (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x908));
    *(undefined8 *)(param_1 + 0x908) = 0;
    *(undefined1 *)(param_1 + 0x910) = 0;
  }
  *(undefined8 *)(param_1 + 0x908) = 0;
  return;
}

