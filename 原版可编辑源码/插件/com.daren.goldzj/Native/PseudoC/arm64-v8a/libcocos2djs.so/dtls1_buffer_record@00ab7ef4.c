
undefined8 dtls1_buffer_record(long param_1,long param_2,uchar *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *data;
  pitem *item;
  pitem *ppVar3;
  
  iVar1 = pqueue_size(*(pqueue *)(param_2 + 8));
  if (iVar1 < 100) {
    data = CRYPTO_malloc(0x78,"ssl/record/rec_layer_d1.c",0x99);
    item = pitem_new(param_3,data);
    if ((data == (undefined8 *)0x0) || (item == (pitem *)0x0)) {
      CRYPTO_free(data);
      pitem_free(item);
      ERR_put_error(0x14,0xf7,0x44,"ssl/record/rec_layer_d1.c",0x9e);
    }
    else {
      *data = *(undefined8 *)(param_1 + 0x10d8);
                    /* catch() { ... } // from try @ 00ab8038 with catch @ 00ab7f80 */
      *(undefined4 *)(data + 1) = *(undefined4 *)(param_1 + 0x10e0);
      uVar2 = *(undefined8 *)(param_1 + 0x3c8);
      data[5] = *(undefined8 *)(param_1 + 0x3d0);
      data[4] = uVar2;
      uVar2 = *(undefined8 *)(param_1 + 0x3b8);
      data[3] = *(undefined8 *)(param_1 + 0x3c0);
      data[2] = uVar2;
      memcpy(data + 6,(void *)(param_1 + 0x7d8),0x48);
      item->data = data;
                    /* try { // try from 00ab7fb4 to 00bb8037 has its CatchHandler @ 00ab8048 */
      *(undefined8 *)(param_1 + 0x3c0) = 0;
      *(undefined8 *)(param_1 + 0x3b8) = 0;
      *(undefined8 *)(param_1 + 0x3d0) = 0;
      *(undefined8 *)(param_1 + 0x3c8) = 0;
      memset((void *)(param_1 + 0x7d8),0,0x90c);
      iVar1 = ssl3_setup_buffers(param_1);
      if (iVar1 == 0) {
                    /* try { // try from 00ab8038 to 00bb809f has its CatchHandler @ 00ab7f80 */
        ERR_put_error(0x14,0xf7,0x44,"ssl/record/rec_layer_d1.c",0xb9);
                    /* catch() { ... } // from try @ 00ab7fb4 with catch @ 00ab8048 */
        CRYPTO_free((void *)data[2]);
      }
      else {
        ppVar3 = pqueue_insert(*(pqueue *)(param_2 + 8),item);
        if (ppVar3 != (pitem *)0x0) {
          return 1;
        }
        ERR_put_error(0x14,0xf7,0x44,"ssl/record/rec_layer_d1.c",0xc2);
        CRYPTO_free((void *)data[2]);
      }
      CRYPTO_free(data);
      pitem_free(item);
    }
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

