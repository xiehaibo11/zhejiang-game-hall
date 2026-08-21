
undefined8 dtls1_new(long param_1)

{
  undefined8 uVar1;
  void *ptr;
  pqueue p_Var2;
  
  uVar1 = DTLS_RECORD_LAYER_new(param_1 + 0x3a0);
  if (((int)uVar1 != 0) && (uVar1 = ssl3_new(param_1), (int)uVar1 != 0)) {
    ptr = (void *)CRYPTO_zalloc(0x200,"ssl/d1_lib.c",0x58);
    if (ptr != (void *)0x0) {
      p_Var2 = pqueue_new();
      *(pqueue *)((long)ptr + 0x110) = p_Var2;
      p_Var2 = pqueue_new();
      *(pqueue *)((long)ptr + 0x118) = p_Var2;
      if (*(int *)(param_1 + 0x38) != 0) {
        *(undefined4 *)((long)ptr + 0x100) = 0x100;
      }
      *(undefined8 *)((long)ptr + 0x120) = 0;
      if ((*(pqueue *)((long)ptr + 0x110) != (pqueue)0x0) && (p_Var2 != (pqueue)0x0)) {
        *(void **)(param_1 + 0x98) = ptr;
                    /* try { // try from 00ae2dec to 00be2df3 has its CatchHandler @ 00ae35e4 */
                    /* try { // try from 00ae2df4 to 00be2f5f has its CatchHandler @ 00ae2754 */
        (**(code **)(*(long *)(param_1 + 8) + 0x18))(param_1);
        return 1;
      }
      pqueue_free(*(pqueue *)((long)ptr + 0x110));
      pqueue_free(*(pqueue *)((long)ptr + 0x118));
      CRYPTO_free(ptr);
    }
    ssl3_free(param_1);
    uVar1 = 0;
  }
  return uVar1;
}

