
int BN_num_bits_word(ulong param_1)

{
  if (param_1 >> 0x20 == 0) {
    if ((param_1 & 0xffff0000) == 0) {
      if ((param_1 & 0xff00) != 0) {
        return (byte)(&DAT_018aa7e8)[(int)(param_1 >> 8)] + 8;
      }
      return (int)(byte)(&DAT_018aa7e8)[(int)param_1];
    }
    if ((param_1 & 0xff000000) != 0) {
                    /* catch() { ... } // from try @ 00afa114 with catch @ 00afa17c */
      return (byte)(&DAT_018aa7e8)[(int)(param_1 >> 0x18)] + 0x18;
    }
    return (byte)(&DAT_018aa7e8)[(int)(param_1 >> 0x10)] + 0x10;
  }
  if (param_1 >> 0x30 == 0) {
    if ((param_1 & 0xff0000000000) != 0) {
                    /* try { // try from 00afa198 to 00bfa297 has its CatchHandler @ 00afa198
                       catch() { ... } // from try @ 00afa198 with catch @ 00afa198
                       catch() { ... } // from try @ 00afa2c8 with catch @ 00afa198 */
      return (byte)(&DAT_018aa7e8)[param_1 >> 0x28] + 0x28;
    }
    return (byte)(&DAT_018aa7e8)[param_1 >> 0x20] + 0x20;
  }
  if (param_1 >> 0x38 != 0) {
                    /* try { // try from 00afa144 to 00bfa197 has its CatchHandler @ 00afa014 */
    return (byte)(&DAT_018aa7e8)[param_1 >> 0x38] + 0x38;
  }
  return (byte)(&DAT_018aa7e8)[param_1 >> 0x30] + 0x30;
}

