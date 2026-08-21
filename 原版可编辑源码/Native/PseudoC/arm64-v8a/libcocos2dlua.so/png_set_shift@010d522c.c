
void png_set_shift(long param_1,undefined4 *param_2)

{
                    /* catch() { ... } // from try @ 010d4364 with catch @ 010d522c */
  if (param_1 != 0) {
                    /* catch() { ... } // from try @ 010d42ec with catch @ 010d5230 */
                    /* catch() { ... } // from try @ 010d4274 with catch @ 010d5234 */
    *(uint *)(param_1 + 0x16c) = *(uint *)(param_1 + 0x16c) | 8;
    *(undefined1 *)(param_1 + 0x329) = *(undefined1 *)(param_2 + 1);
    *(undefined4 *)(param_1 + 0x325) = *param_2;
  }
  return;
}

