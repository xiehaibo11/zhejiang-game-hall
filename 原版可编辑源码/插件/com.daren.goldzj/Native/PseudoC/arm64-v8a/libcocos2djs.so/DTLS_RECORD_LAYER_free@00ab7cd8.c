
void DTLS_RECORD_LAYER_free(long param_1)

{
  DTLS_RECORD_LAYER_clear();
  pqueue_free(*(pqueue *)(*(long *)(param_1 + 0xd88) + 0x30));
  pqueue_free(*(pqueue *)(*(long *)(param_1 + 0xd88) + 0x40));
  pqueue_free(*(pqueue *)(*(long *)(param_1 + 0xd88) + 0x50));
  CRYPTO_free(*(void **)(param_1 + 0xd88));
  *(undefined8 *)(param_1 + 0xd88) = 0;
  return;
}

