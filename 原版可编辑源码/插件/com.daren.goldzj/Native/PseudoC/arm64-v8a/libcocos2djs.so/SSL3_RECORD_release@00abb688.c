
void SSL3_RECORD_release(long param_1,uint param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  
                    /* try { // try from 00abb688 to 00bbb6c7 has its CatchHandler @ 00abb688
                       catch() { ... } // from try @ 00abb688 with catch @ 00abb688
                       catch() { ... } // from try @ 00abb6d4 with catch @ 00abb688 */
  if (param_2 != 0) {
    uVar1 = (ulong)param_2;
    puVar2 = (undefined8 *)(param_1 + 0x28);
    do {
      CRYPTO_free((void *)*puVar2);
      uVar1 = uVar1 - 1;
      *puVar2 = 0;
      puVar2 = puVar2 + 9;
    } while (uVar1 != 0);
  }
                    /* try { // try from 00abb6c8 to 00bbb6d3 has its CatchHandler @ 00abb6ec */
                    /* try { // try from 00abb6d4 to 00bbb707 has its CatchHandler @ 00abb688 */
  return;
}

