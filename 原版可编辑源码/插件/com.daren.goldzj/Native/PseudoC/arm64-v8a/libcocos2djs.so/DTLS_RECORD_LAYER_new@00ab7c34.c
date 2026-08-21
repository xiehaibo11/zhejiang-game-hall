
undefined8 DTLS_RECORD_LAYER_new(long param_1)

{
  void *ptr;
  pqueue p_Var1;
  undefined8 uVar2;
  
  ptr = CRYPTO_malloc(0x80,"ssl/record/rec_layer_d1.c",0x16);
  uVar2 = 0;
  if (ptr != (void *)0x0) {
    *(void **)(param_1 + 0xd88) = ptr;
    p_Var1 = pqueue_new();
    *(pqueue *)((long)ptr + 0x30) = p_Var1;
    p_Var1 = pqueue_new();
    *(pqueue *)((long)ptr + 0x40) = p_Var1;
    p_Var1 = pqueue_new();
    *(pqueue *)((long)ptr + 0x50) = p_Var1;
    if (((*(pqueue *)((long)ptr + 0x30) == (pqueue)0x0) || (p_Var1 == (pqueue)0x0)) ||
       (*(long *)((long)ptr + 0x40) == 0)) {
      pqueue_free(*(pqueue *)((long)ptr + 0x30));
      pqueue_free(*(pqueue *)((long)ptr + 0x40));
      pqueue_free(*(pqueue *)((long)ptr + 0x50));
      CRYPTO_free(ptr);
      uVar2 = 0;
      *(undefined8 *)(param_1 + 0xd88) = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

