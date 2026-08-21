
undefined8 dtls1_buffer_message(int *param_1,int param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  int num;
  undefined1 *data;
  void *__dest;
  pitem *item;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long local_38;
  
  if (param_1[0x23] != 0) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: s->init_off == 0","ssl/statem/statem_dtls.c",0x3e9);
  }
  num = param_1[0x22];
  data = CRYPTO_malloc(0x68,"ssl/statem/statem_dtls.c",0x3f);
  if (data == (undefined1 *)0x0) {
    return 0;
  }
  if (num == 0) {
    __dest = (void *)0x0;
  }
  else {
    __dest = CRYPTO_malloc(num,"ssl/statem/statem_dtls.c",0x44);
    if (__dest == (void *)0x0) goto LAB_00ae3558;
  }
  *(void **)(data + 0x58) = __dest;
  *(undefined8 *)(data + 0x60) = 0;
  memcpy(__dest,*(void **)(*(long *)(param_1 + 0x1e) + 8),(long)param_1[0x22]);
  lVar4 = *(long *)(param_1 + 0x26);
  lVar3 = *(long *)(lVar4 + 0x130);
  if (param_2 == 0) {
    if (lVar3 + 0xcU != (ulong)(uint)param_1[0x22]) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: s->d1->w_msg_hdr.msg_len + DTLS1_HM_HEADER_LENGTH == (unsigned int)s->init_num"
                  ,"ssl/statem/statem_dtls.c",0x3f9);
    }
  }
  else {
    lVar5 = 3;
    if (*param_1 != 0x100) {
      lVar5 = 1;
    }
    if (lVar5 + lVar3 != (ulong)(uint)param_1[0x22]) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: s->d1->w_msg_hdr.msg_len + ((s->version == DTLS1_BAD_VER) ? 3 : DTLS1_CCS_HEADER_LENGTH) == (unsigned int)s->init_num"
                  ,"ssl/statem/statem_dtls.c",0x3f6);
    }
  }
  *(long *)(data + 8) = lVar3;
  uVar2 = *(ushort *)(lVar4 + 0x138);
  *(ushort *)(data + 0x10) = uVar2;
  uVar1 = *(undefined1 *)(lVar4 + 0x128);
  *(undefined8 *)(data + 0x18) = 0;
  *(long *)(data + 0x20) = lVar3;
  *(int *)(data + 0x28) = param_2;
  *data = uVar1;
  uVar6 = *(undefined8 *)(param_1 + 0x4e);
  param_2 = (uint)uVar2 * 2 - param_2;
  *(undefined8 *)(data + 0x38) = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(data + 0x30) = uVar6;
  *(undefined8 *)(data + 0x40) = *(undefined8 *)(param_1 + 0x4a);
  *(undefined8 *)(data + 0x48) = *(undefined8 *)(param_1 + 0x5e);
  *(undefined2 *)(data + 0x50) = *(undefined2 *)(*(long *)(param_1 + 0x44a) + 2);
  local_38 = (ulong)CONCAT11((char)param_2,(char)((uint)param_2 >> 8)) << 0x30;
  item = pitem_new((uchar *)&local_38,data);
  if (item != (pitem *)0x0) {
    pqueue_insert(*(pqueue *)(*(long *)(param_1 + 0x26) + 0x118),item);
    return 1;
  }
  if (*(int *)(data + 0x28) != 0) {
    EVP_CIPHER_CTX_free(*(EVP_CIPHER_CTX **)(data + 0x30));
    EVP_MD_CTX_free(*(undefined8 *)(data + 0x38));
  }
  CRYPTO_free(*(void **)(data + 0x58));
  CRYPTO_free(*(void **)(data + 0x60));
LAB_00ae3558:
  CRYPTO_free(data);
  return 0;
}

