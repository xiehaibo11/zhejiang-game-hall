
void DTLS_RECORD_LAYER_clear(long param_1)

{
  pitem *ppVar1;
  void *__s;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  __s = *(void **)(param_1 + 0xd88);
  ppVar1 = pqueue_pop(*(pqueue *)((long)__s + 0x30));
  while (ppVar1 != (pitem *)0x0) {
    CRYPTO_free(*(void **)((long)ppVar1->data + 0x10));
    CRYPTO_free(ppVar1->data);
    pitem_free(ppVar1);
    ppVar1 = pqueue_pop(*(pqueue *)((long)__s + 0x30));
  }
  ppVar1 = pqueue_pop(*(pqueue *)((long)__s + 0x40));
  while (ppVar1 != (pitem *)0x0) {
    CRYPTO_free(*(void **)((long)ppVar1->data + 0x10));
    CRYPTO_free(ppVar1->data);
    pitem_free(ppVar1);
    ppVar1 = pqueue_pop(*(pqueue *)((long)__s + 0x40));
  }
  ppVar1 = pqueue_pop(*(pqueue *)((long)__s + 0x50));
                    /* try { // try from 00ab7dfc to 00bb7e23 has its CatchHandler @ 00ab7e34 */
  while (ppVar1 != (pitem *)0x0) {
    CRYPTO_free(*(void **)((long)ppVar1->data + 0x10));
    CRYPTO_free(ppVar1->data);
    pitem_free(ppVar1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ab7dfc with catch @ 00ab7e34
                        */
    ppVar1 = pqueue_pop(*(pqueue *)((long)__s + 0x50));
  }
  uVar2 = *(undefined8 *)((long)__s + 0x30);
  uVar3 = *(undefined8 *)((long)__s + 0x40);
  uVar4 = *(undefined8 *)((long)__s + 0x50);
  memset(__s,0,0x80);
  *(undefined8 *)((long)__s + 0x30) = uVar2;
  *(undefined8 *)((long)__s + 0x40) = uVar3;
  *(undefined8 *)((long)__s + 0x50) = uVar4;
                    /* try { // try from 00ab7e74 to 00bb7e9b has its CatchHandler @ 00ab7eb4 */
  return;
}

