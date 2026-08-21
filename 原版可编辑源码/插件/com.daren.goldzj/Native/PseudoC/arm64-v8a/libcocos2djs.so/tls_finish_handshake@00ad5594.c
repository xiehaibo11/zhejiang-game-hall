
undefined8 tls_finish_handshake(long param_1)

{
  long lVar1;
  code *pcVar2;
  
  ssl3_cleanup_key_block();
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x68) >> 3 & 1) == 0) {
    BUF_MEM_free(*(BUF_MEM **)(param_1 + 0x78));
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  ssl_free_wbio_buffer(param_1);
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(int *)(param_1 + 0x38) == 0) {
    *(undefined4 *)(param_1 + 0x314) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    ssl_update_cache(param_1,1);
    lVar1 = *(long *)(param_1 + 0x1b8);
    if (*(int *)(param_1 + 0xb0) != 0) {
      *(int *)(lVar1 + 0x8c) = *(int *)(lVar1 + 0x8c) + 1;
    }
    *(code **)(param_1 + 0x30) = ossl_statem_connect;
    *(int *)(lVar1 + 0x70) = *(int *)(lVar1 + 0x70) + 1;
    pcVar2 = *(code **)(param_1 + 0x198);
  }
  else {
    if (*(int *)(param_1 + 0x314) != 2) {
      return 1;
    }
    *(undefined4 *)(param_1 + 0x314) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    ssl_update_cache(param_1,2);
    lVar1 = *(long *)(param_1 + 0x1b8);
    *(int *)(lVar1 + 0x7c) = *(int *)(lVar1 + 0x7c) + 1;
    *(code **)(param_1 + 0x30) = ossl_statem_accept;
    pcVar2 = *(code **)(param_1 + 0x198);
  }
  if ((pcVar2 != (code *)0x0) || (pcVar2 = *(code **)(lVar1 + 0xf8), pcVar2 != (code *)0x0)) {
    (*pcVar2)(param_1,0x20,1);
  }
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x68) >> 3 & 1) != 0) {
    lVar1 = *(long *)(param_1 + 0x98);
    *(undefined2 *)(lVar1 + 0x10c) = 0;
    *(undefined4 *)(lVar1 + 0x108) = 0;
    dtls1_clear_received_buffer(param_1);
  }
  return 1;
}

