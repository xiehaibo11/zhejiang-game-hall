
void FUN_00a72254(void *param_1)

{
                    /* catch() { ... } // from try @ 00a72088 with catch @ 00a72254 */
                    /* catch() { ... } // from try @ 00a720c0 with catch @ 00a72264
                       catch() { ... } // from try @ 00a72130 with catch @ 00a72264 */
  if ((*(byte *)((long)param_1 + 0x18) & 1) != 0) {
    operator_delete(*(void **)((long)param_1 + 0x28));
  }
  operator_delete(param_1);
  return;
}

