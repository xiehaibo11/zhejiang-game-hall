
undefined8 unzGetOffset(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
                    /* catch() { ... } // from try @ 00a0c7e0 with catch @ 00a0c968
                       try { // try from 00a0c968 to 00b0c9eb has its CatchHandler @ 00a0c3c8 */
                    /* catch() { ... } // from try @ 00a0c5dc with catch @ 00a0c96c
                       catch() { ... } // from try @ 00a0c958 with catch @ 00a0c96c */
    return 0xffffffffffffff9a;
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar1 = *(long *)(param_1 + 0x48);
                    /* try { // try from 00a0c950 to 00b0c957 has its CatchHandler @ 00a0c97c */
                    /* try { // try from 00a0c958 to 00b0c967 has its CatchHandler @ 00a0c96c */
    if (((lVar1 != 0) && (lVar1 != 0xffff)) && (*(long *)(param_1 + 0x60) == lVar1)) {
      return 0;
    }
                    /* catch() { ... } // from try @ 00a0c754 with catch @ 00a0c970 */
                    /* catch() { ... } // from try @ 00a0c844 with catch @ 00a0c974 */
    return *(undefined8 *)(param_1 + 0x68);
  }
                    /* catch() { ... } // from try @ 00a0c7fc with catch @ 00a0c978 */
                    /* catch() { ... } // from try @ 00a0c688 with catch @ 00a0c97c
                       catch() { ... } // from try @ 00a0c950 with catch @ 00a0c97c */
  return 0;
}

