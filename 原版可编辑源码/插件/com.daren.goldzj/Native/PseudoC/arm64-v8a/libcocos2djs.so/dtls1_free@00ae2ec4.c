
void dtls1_free(long param_1)

{
  pitem *ppVar1;
  
  DTLS_RECORD_LAYER_free(param_1 + 0x3a0);
  ssl3_free(param_1);
  while (ppVar1 = pqueue_pop(*(pqueue *)(*(long *)(param_1 + 0x98) + 0x110)), ppVar1 != (pitem *)0x0
        ) {
    dtls1_hm_fragment_free(ppVar1->data);
    pitem_free(ppVar1);
  }
  while (ppVar1 = pqueue_pop(*(pqueue *)(*(long *)(param_1 + 0x98) + 0x118)), ppVar1 != (pitem *)0x0
        ) {
    dtls1_hm_fragment_free(ppVar1->data);
    pitem_free(ppVar1);
  }
  pqueue_free(*(pqueue *)(*(long *)(param_1 + 0x98) + 0x110));
  pqueue_free(*(pqueue *)(*(long *)(param_1 + 0x98) + 0x118));
  CRYPTO_free(*(void **)(param_1 + 0x98));
                    /* try { // try from 00ae2f60 to 00be2f6f has its CatchHandler @ 00ae3670 */
  *(undefined8 *)(param_1 + 0x98) = 0;
  return;
}

