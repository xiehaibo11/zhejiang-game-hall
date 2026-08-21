
undefined8 FUN_00a0eda4(ulong param_1)

{
  bool bVar1;
  int iVar2;
  
                    /* catch() { ... } // from try @ 00a0ec18 with catch @ 00a0eda8 */
                    /* catch() { ... } // from try @ 00a0ece0 with catch @ 00a0edac */
  iVar2 = DAT_01d38bb0 + 1;
  bVar1 = DAT_01d38bb0 == 0;
  DAT_01d38bb0 = iVar2;
  if (bVar1) {
                    /* catch() { ... } // from try @ 00a0eba0 with catch @ 00a0edf0 */
                    /* catch() { ... } // from try @ 00a0ec98 with catch @ 00a0edf8 */
    PTR_malloc_01d1b740 = malloc;
                    /* catch() { ... } // from try @ 00a0ec84 with catch @ 00a0ee08 */
    PTR_free_01d1b748 = free;
                    /* catch() { ... } // from try @ 00a0ebbc with catch @ 00a0ee0c */
    PTR_realloc_01d1b750 = realloc;
    PTR_strdup_01d1b758 = strdup;
                    /* catch() { ... } // from try @ 00a0ebb0 with catch @ 00a0ee14 */
    PTR_calloc_01d1b760 = calloc;
                    /* catch() { ... } // from try @ 00a0ebd4 with catch @ 00a0ee1c
                       catch() { ... } // from try @ 00a0ec40 with catch @ 00a0ee1c */
    if (((param_1 & 1) != 0) && (iVar2 = FUN_00a17b58(), iVar2 == 0)) {
      return 2;
    }
    FUN_00a156a4();
    if (((uint)param_1 >> 2 & 1) != 0) {
      DAT_01d38bc0 = 1;
    }
    DAT_01d38bb8 = param_1;
                    /* try { // try from 00a0ee40 to 00b0ee8b has its CatchHandler @ 00a0ee40
                       catch() { ... } // from try @ 00a0ee40 with catch @ 00a0ee40
                       catch() { ... } // from try @ 00a0f03c with catch @ 00a0ee40 */
    FUN_00a0d1a0();
  }
  return 0;
}

