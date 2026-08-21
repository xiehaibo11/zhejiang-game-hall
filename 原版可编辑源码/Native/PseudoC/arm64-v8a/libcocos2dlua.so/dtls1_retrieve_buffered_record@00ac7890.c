
bool dtls1_retrieve_buffered_record(long param_1,long param_2)

{
  pitem *item;
  long lVar1;
  long *plVar2;
  
  item = pqueue_pop(*(pqueue *)(param_2 + 8));
  if (item != (pitem *)0x0) {
    plVar2 = item->data;
    SSL3_BUFFER_release((long *)(param_1 + 0x3b8));
    *(long *)(param_1 + 0x10d8) = *plVar2;
    *(int *)(param_1 + 0x10e0) = (int)plVar2[1];
    lVar1 = plVar2[4];
    *(long *)(param_1 + 0x3d0) = plVar2[5];
    *(long *)(param_1 + 0x3c8) = lVar1;
    lVar1 = plVar2[2];
    *(long *)(param_1 + 0x3c0) = plVar2[3];
    *(long *)(param_1 + 0x3b8) = lVar1;
    memcpy((void *)(param_1 + 0x7d8),plVar2 + 6,0x48);
    lVar1 = *plVar2;
    *(undefined4 *)(param_1 + 0x1112) = *(undefined4 *)(lVar1 + 5);
    *(undefined2 *)(param_1 + 0x1116) = *(undefined2 *)(lVar1 + 9);
    CRYPTO_free(item->data);
    pitem_free(item);
  }
  return item != (pitem *)0x0;
}

