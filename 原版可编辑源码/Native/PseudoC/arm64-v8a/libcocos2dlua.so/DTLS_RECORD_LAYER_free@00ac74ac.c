
void DTLS_RECORD_LAYER_free(long param_1)

{
  DTLS_RECORD_LAYER_clear();
                    /* catch() { ... } // from try @ 00ac7450 with catch @ 00ac74c4 */
  pqueue_free(*(pqueue *)(*(long *)(param_1 + 0xd88) + 0x30));
  pqueue_free(*(pqueue *)(*(long *)(param_1 + 0xd88) + 0x40));
                    /* try { // try from 00ac74e0 to 00bc7517 has its CatchHandler @ 00ac74e0
                       catch() { ... } // from try @ 00ac74e0 with catch @ 00ac74e0
                       catch() { ... } // from try @ 00ac7528 with catch @ 00ac74e0 */
  pqueue_free(*(pqueue *)(*(long *)(param_1 + 0xd88) + 0x50));
  CRYPTO_free(*(void **)(param_1 + 0xd88));
  *(undefined8 *)(param_1 + 0xd88) = 0;
  return;
}

