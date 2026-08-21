
void png_set_bgr(long param_1)

{
                    /* catch() { ... } // from try @ 010d509c with catch @ 010d51b0 */
  if (param_1 != 0) {
                    /* catch() { ... } // from try @ 010d502c with catch @ 010d51b4 */
                    /* catch() { ... } // from try @ 010d4fc4 with catch @ 010d51b8 */
                    /* catch() { ... } // from try @ 010d4f54 with catch @ 010d51bc */
    *(uint *)(param_1 + 0x16c) = *(uint *)(param_1 + 0x16c) | 1;
  }
                    /* catch() { ... } // from try @ 010d4edc with catch @ 010d51c0 */
  return;
}

