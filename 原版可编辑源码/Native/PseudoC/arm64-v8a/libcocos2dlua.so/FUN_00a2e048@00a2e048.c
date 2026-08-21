
void FUN_00a2e048(long param_1)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
                    /* try { // try from 00a2e05c to 00b2e06f has its CatchHandler @ 00a2e0f4 */
  piVar1 = (int *)(param_1 + 0x8e40);
  if (*piVar1 != 0) {
    plVar2 = (long *)(param_1 + 0x8e48);
                    /* try { // try from 00a2e074 to 00b2e0a7 has its CatchHandler @ 00a2e0f8 */
    if (0 < *piVar1) {
      lVar3 = 0;
      do {
        lVar4 = lVar3 * 8;
        FUN_00a2c624(*(undefined8 *)(*plVar2 + lVar4));
        lVar3 = lVar3 + 1;
        *(undefined8 *)(*plVar2 + lVar4) = 0;
      } while (lVar3 < *piVar1);
    }
                    /* try { // try from 00a2e0a8 to 00b2e143 has its CatchHandler @ 00a2df58 */
    (*(code *)PTR_free_01769a00)(*plVar2);
    *plVar2 = 0;
    *piVar1 = 0;
  }
  return;
}

