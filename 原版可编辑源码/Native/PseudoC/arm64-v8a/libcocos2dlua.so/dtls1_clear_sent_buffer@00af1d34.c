
void dtls1_clear_sent_buffer(long param_1)

{
  pitem *item;
  
  while (item = pqueue_pop(*(pqueue *)(*(long *)(param_1 + 0x98) + 0x118)), item != (pitem *)0x0) {
                    /* try { // try from 00af1d48 to 00bf1d57 has its CatchHandler @ 00af206c */
    dtls1_hm_fragment_free(item->data);
    pitem_free(item);
  }
  return;
}

