
undefined8 ossl_statem_client_construct_message(long param_1)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong __n;
  undefined2 *puVar6;
  
  switch(*(undefined4 *)(param_1 + 0x5c)) {
  case 0xc:
    uVar4 = tls_construct_client_hello(param_1);
    return uVar4;
  case 0xd:
    if (*(int *)(*(long *)(param_1 + 0x90) + 0x238) == 2) {
      uVar4 = 0;
    }
    else {
      uVar4 = **(undefined8 **)(param_1 + 0x148);
    }
    lVar5 = ssl3_output_cert_chain(param_1,uVar4);
    if (lVar5 != 0) {
      return 1;
    }
                    /* catch() { ... } // from try @ 00acfad8 with catch @ 00acfbf0 */
    ERR_put_error(0x14,0x163,0x44,"ssl/statem/statem_clnt.c",0xae2);
    ssl3_send_alert(param_1,2,0x50);
    ossl_statem_set_error(param_1);
  default:
    uVar4 = 0;
    break;
  case 0xe:
                    /* try { // try from 00acfad8 to 00bcfae3 has its CatchHandler @ 00acfbf0 */
    uVar4 = tls_construct_client_key_exchange(param_1);
    return uVar4;
  case 0xf:
                    /* try { // try from 00acfae4 to 00bcfb93 has its CatchHandler @ 00acf97c */
    uVar4 = tls_construct_client_verify(param_1);
    return uVar4;
  case 0x10:
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x68) >> 3 & 1) == 0) {
      uVar4 = tls_construct_change_cipher_spec(param_1);
      return uVar4;
    }
                    /* catch() { ... } // from try @ 00acfb94 with catch @ 00acfbd8 */
    uVar4 = dtls_construct_change_cipher_spec(param_1);
    return uVar4;
  case 0x11:
    bVar2 = *(byte *)(param_1 + 0x2e0);
    __n = (ulong)bVar2;
    puVar6 = *(undefined2 **)(*(long *)(param_1 + 0x78) + 8);
    *(byte *)(puVar6 + 2) = bVar2;
    uVar3 = 0x20 - (bVar2 + 2 & 0x1f);
    memcpy((void *)((long)puVar6 + 5),*(void **)(param_1 + 0x2d8),__n);
    *(char *)((long)puVar6 + __n + 5) = (char)uVar3;
    memset((void *)((long)puVar6 + __n + 6),0,(ulong)uVar3);
    *puVar6 = 0x43;
    iVar1 = bVar2 + uVar3 + 2;
    *(char *)((long)puVar6 + 3) = (char)iVar1;
    *(char *)(puVar6 + 1) = (char)((uint)iVar1 >> 8);
    *(uint *)(param_1 + 0x88) = bVar2 + uVar3 + 6;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    uVar4 = 1;
    break;
  case 0x12:
                    /* try { // try from 00acfb94 to 00bcfb9f has its CatchHandler @ 00acfbd8 */
    lVar5 = *(long *)(*(long *)(param_1 + 8) + 0xc0);
                    /* try { // try from 00acfba0 to 00bcfc13 has its CatchHandler @ 00acf97c */
    uVar4 = tls_construct_finished
                      (param_1,*(undefined8 *)(lVar5 + 0x38),*(undefined4 *)(lVar5 + 0x40));
    return uVar4;
  }
  return uVar4;
}

