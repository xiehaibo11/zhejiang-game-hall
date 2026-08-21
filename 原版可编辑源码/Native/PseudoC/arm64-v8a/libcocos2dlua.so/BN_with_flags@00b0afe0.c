
void BN_with_flags(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
                    /* catch() { ... } // from try @ 00b0af84 with catch @ 00b0aff4 */
  *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)((long)param_2 + 0xc);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
                    /* try { // try from 00b0b00c to 00c0b0e7 has its CatchHandler @ 00b0b00c
                       catch() { ... } // from try @ 00b0b00c with catch @ 00b0b00c
                       catch() { ... } // from try @ 00b0b11c with catch @ 00b0b00c */
  *(uint *)((long)param_1 + 0x14) =
       *(uint *)((long)param_1 + 0x14) & 1 | param_3 | *(uint *)((long)param_2 + 0x14) & 0xfffffffc
       | 2;
  return;
}

