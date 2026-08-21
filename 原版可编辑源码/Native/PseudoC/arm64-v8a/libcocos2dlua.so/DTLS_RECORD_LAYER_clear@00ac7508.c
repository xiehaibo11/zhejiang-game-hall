
void DTLS_RECORD_LAYER_clear(long param_1)

{
  pitem *ppVar1;
  void *__s;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  __s = *(void **)(param_1 + 0xd88);
                    /* try { // try from 00ac7518 to 00bc7527 has its CatchHandler @ 00ac758c */
  ppVar1 = pqueue_pop(*(pqueue *)((long)__s + 0x30));
                    /* try { // try from 00ac7528 to 00bc75a7 has its CatchHandler @ 00ac74e0 */
  while (ppVar1 != (pitem *)0x0) {
    CRYPTO_free(*(void **)((long)ppVar1->data + 0x10));
    CRYPTO_free(ppVar1->data);
    pitem_free(ppVar1);
    ppVar1 = pqueue_pop(*(pqueue *)((long)__s + 0x30));
  }
  ppVar1 = pqueue_pop(*(pqueue *)((long)__s + 0x40));
  while (ppVar1 != (pitem *)0x0) {
                    /* catch() { ... } // from try @ 00ac7518 with catch @ 00ac758c */
    CRYPTO_free(*(void **)((long)ppVar1->data + 0x10));
                    /* try { // try from 00ac75a8 to 00bc761f has its CatchHandler @ 00ac75a8
                       catch() { ... } // from try @ 00ac75a8 with catch @ 00ac75a8
                       catch() { ... } // from try @ 00ac7634 with catch @ 00ac75a8
                       catch() { ... } // from try @ 00ac76b8 with catch @ 00ac75a8 */
    CRYPTO_free(ppVar1->data);
    pitem_free(ppVar1);
    ppVar1 = pqueue_pop(*(pqueue *)((long)__s + 0x40));
  }
  ppVar1 = pqueue_pop(*(pqueue *)((long)__s + 0x50));
  while (ppVar1 != (pitem *)0x0) {
    CRYPTO_free(*(void **)((long)ppVar1->data + 0x10));
    CRYPTO_free(ppVar1->data);
    pitem_free(ppVar1);
    ppVar1 = pqueue_pop(*(pqueue *)((long)__s + 0x50));
  }
  uVar2 = *(undefined8 *)((long)__s + 0x30);
  uVar3 = *(undefined8 *)((long)__s + 0x40);
                    /* try { // try from 00ac7620 to 00bc7633 has its CatchHandler @ 00ac77a0 */
  uVar4 = *(undefined8 *)((long)__s + 0x50);
  memset(__s,0,0x80);
                    /* try { // try from 00ac7634 to 00bc76a7 has its CatchHandler @ 00ac75a8 */
  *(undefined8 *)((long)__s + 0x30) = uVar2;
  *(undefined8 *)((long)__s + 0x40) = uVar3;
  *(undefined8 *)((long)__s + 0x50) = uVar4;
  return;
}

