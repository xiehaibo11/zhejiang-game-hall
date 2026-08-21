
undefined8 ssl3_release_write_buffer(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
                    /* try { // try from 00acad74 to 00bcad7b has its CatchHandler @ 00acadbc */
                    /* try { // try from 00acad7c to 00bcad9f has its CatchHandler @ 00acac4c */
  iVar1 = *(int *)(param_1 + 0x3b4);
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)(param_1 + (ulong)(iVar1 - 1) * 0x20 + 0x3d8);
    do {
                    /* try { // try from 00acada0 to 00bcada3 has its CatchHandler @ 00acadc4 */
                    /* try { // try from 00acada4 to 00bcae03 has its CatchHandler @ 00acac4c */
      CRYPTO_free((void *)*puVar2);
      iVar1 = iVar1 + -1;
      *puVar2 = 0;
      puVar2 = puVar2 + -4;
    } while (iVar1 != 0);
  }
                    /* catch() { ... } // from try @ 00acad74 with catch @ 00acadbc */
  *(undefined4 *)(param_1 + 0x3b4) = 0;
                    /* catch() { ... } // from try @ 00acada0 with catch @ 00acadc4 */
                    /* catch() { ... } // from try @ 00acacac with catch @ 00acadc8 */
  return 1;
}

