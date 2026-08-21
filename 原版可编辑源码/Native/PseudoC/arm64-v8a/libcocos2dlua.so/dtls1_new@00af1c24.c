
undefined8 dtls1_new(long param_1)

{
  undefined8 uVar1;
  void *ptr;
  pqueue p_Var2;
  
  uVar1 = DTLS_RECORD_LAYER_new(param_1 + 0x3a0);
  if (((int)uVar1 != 0) && (uVar1 = ssl3_new(param_1), (int)uVar1 != 0)) {
                    /* try { // try from 00af1c58 to 00bf1c7b has its CatchHandler @ 00af2090 */
    ptr = (void *)CRYPTO_zalloc(0x200,"ssl/d1_lib.c",0x58);
    if (ptr != (void *)0x0) {
      p_Var2 = pqueue_new();
      *(pqueue *)((long)ptr + 0x110) = p_Var2;
      p_Var2 = pqueue_new();
      *(pqueue *)((long)ptr + 0x118) = p_Var2;
      if (*(int *)(param_1 + 0x38) != 0) {
                    /* try { // try from 00af1c80 to 00bf1c8f has its CatchHandler @ 00af208c */
        *(undefined4 *)((long)ptr + 0x100) = 0x100;
      }
      *(undefined8 *)((long)ptr + 0x120) = 0;
                    /* try { // try from 00af1c90 to 00bf1cc7 has its CatchHandler @ 00af20a4 */
      if ((*(pqueue *)((long)ptr + 0x110) != (pqueue)0x0) && (p_Var2 != (pqueue)0x0)) {
        *(void **)(param_1 + 0x98) = ptr;
        (**(code **)(*(long *)(param_1 + 8) + 0x18))(param_1);
        return 1;
      }
      pqueue_free(*(pqueue *)((long)ptr + 0x110));
      pqueue_free(*(pqueue *)((long)ptr + 0x118));
                    /* try { // try from 00af1cd4 to 00bf1cdf has its CatchHandler @ 00af204c */
      CRYPTO_free(ptr);
    }
    ssl3_free(param_1);
                    /* try { // try from 00af1ce0 to 00bf1d0f has its CatchHandler @ 00af2068 */
    uVar1 = 0;
  }
  return uVar1;
}

