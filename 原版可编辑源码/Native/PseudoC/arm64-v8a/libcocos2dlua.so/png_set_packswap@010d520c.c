
void png_set_packswap(long param_1)

{
                    /* catch() { ... } // from try @ 010d4704 with catch @ 010d520c */
                    /* catch() { ... } // from try @ 010d468c with catch @ 010d5210 */
                    /* catch() { ... } // from try @ 010d4614 with catch @ 010d5214 */
                    /* catch() { ... } // from try @ 010d459c with catch @ 010d5218 */
  if ((param_1 != 0) && (*(byte *)(param_1 + 0x2b0) < 8)) {
                    /* catch() { ... } // from try @ 010d4524 with catch @ 010d521c */
                    /* catch() { ... } // from try @ 010d44b4 with catch @ 010d5220 */
                    /* catch() { ... } // from try @ 010d443c with catch @ 010d5224 */
    *(uint *)(param_1 + 0x16c) = *(uint *)(param_1 + 0x16c) | 0x10000;
  }
                    /* catch() { ... } // from try @ 010d43d4 with catch @ 010d5228 */
  return;
}

