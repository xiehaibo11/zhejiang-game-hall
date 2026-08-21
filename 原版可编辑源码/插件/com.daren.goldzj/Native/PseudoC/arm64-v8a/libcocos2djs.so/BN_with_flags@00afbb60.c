
void BN_with_flags(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
                    /* catch() { ... } // from try @ 00afbaf8 with catch @ 00afbb64 */
  *param_1 = *param_2;
                    /* catch() { ... } // from try @ 00afbab8 with catch @ 00afbb68 */
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)((long)param_2 + 0xc);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(uint *)((long)param_1 + 0x14) =
       *(uint *)((long)param_1 + 0x14) & 1 | param_3 | *(uint *)((long)param_2 + 0x14) & 0xfffffffc
       | 2;
  return;
}

