
undefined2 FUN_010b906c(long param_1,uint param_2)

{
                    /* catch() { ... } // from try @ 010b8ee4 with catch @ 010b9074 */
  if (param_2 < *(uint *)(param_1 + 0x18)) {
    return 0;
  }
  if (param_2 < *(int *)(param_1 + 0x1c) + *(uint *)(param_1 + 0x18)) {
                    /* catch() { ... } // from try @ 010b8eb4 with catch @ 010b9094 */
    return *(undefined2 *)(*(long *)(param_1 + 0x20) + (ulong)param_2 * 2);
  }
  return 0;
}

