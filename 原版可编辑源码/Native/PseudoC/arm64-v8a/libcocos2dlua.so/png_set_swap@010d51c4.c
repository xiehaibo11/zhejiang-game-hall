
void png_set_swap(long param_1)

{
                    /* catch() { ... } // from try @ 010d4e64 with catch @ 010d51c4 */
                    /* catch() { ... } // from try @ 010d4dec with catch @ 010d51c8 */
                    /* catch() { ... } // from try @ 010d4d7c with catch @ 010d51cc */
                    /* catch() { ... } // from try @ 010d4d04 with catch @ 010d51d0 */
  if ((param_1 != 0) && (*(char *)(param_1 + 0x2b0) == '\x10')) {
                    /* catch() { ... } // from try @ 010d4cb0 with catch @ 010d51d4 */
                    /* catch() { ... } // from try @ 010d4c5c with catch @ 010d51d8 */
                    /* catch() { ... } // from try @ 010d4c08 with catch @ 010d51dc */
    *(uint *)(param_1 + 0x16c) = *(uint *)(param_1 + 0x16c) | 0x10;
  }
                    /* catch() { ... } // from try @ 010d4bb4 with catch @ 010d51e0 */
  return;
}

