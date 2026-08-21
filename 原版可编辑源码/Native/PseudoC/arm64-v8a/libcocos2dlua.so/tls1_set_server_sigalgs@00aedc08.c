
undefined4 tls1_set_server_sigalgs(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  
  CRYPTO_free(*(void **)(*(long *)(param_1 + 0x148) + 0x168));
  lVar3 = *(long *)(param_1 + 0x148);
  *(undefined8 *)(lVar3 + 0x168) = 0;
  *(undefined8 *)(lVar3 + 0x170) = 0;
  *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x2d8) = 0;
  lVar3 = *(long *)(param_1 + 0x90);
  *(undefined4 *)(lVar3 + 0x310) = 0;
  *(undefined8 *)(lVar3 + 0x2e0) = 0;
  lVar3 = *(long *)(param_1 + 0x90);
  *(undefined4 *)(lVar3 + 0x314) = 0;
  *(undefined8 *)(lVar3 + 0x2e8) = 0;
                    /* catch() { ... } // from try @ 00aedb68 with catch @ 00aedc5c
                       catch() { ... } // from try @ 00aedb84 with catch @ 00aedc5c */
  lVar3 = *(long *)(param_1 + 0x90);
                    /* catch() { ... } // from try @ 00aedaf8 with catch @ 00aedc60 */
  *(undefined4 *)(lVar3 + 0x318) = 0;
                    /* catch() { ... } // from try @ 00aedbcc with catch @ 00aedc64 */
  *(undefined8 *)(lVar3 + 0x2f0) = 0;
  lVar3 = *(long *)(param_1 + 0x90);
  *(undefined4 *)(lVar3 + 0x31c) = 0;
  *(undefined8 *)(lVar3 + 0x2f8) = 0;
  lVar3 = *(long *)(param_1 + 0x90);
  *(undefined4 *)(lVar3 + 800) = 0;
  *(undefined8 *)(lVar3 + 0x300) = 0;
  lVar3 = *(long *)(param_1 + 0x90);
  *(undefined4 *)(lVar3 + 0x324) = 0;
  *(undefined8 *)(lVar3 + 0x308) = 0;
  lVar3 = *(long *)(param_1 + 0x90);
  *(undefined4 *)(lVar3 + 0x328) = 0;
  if (*(long *)(lVar3 + 0x2c0) == 0) {
    uVar4 = 1;
    uVar2 = ssl_md(1);
    *(undefined8 *)(lVar3 + 0x2e8) = uVar2;
    uVar2 = ssl_md((*(uint *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x68) & 2) << 2 ^ 9);
    *(undefined8 *)(lVar3 + 0x2e0) = uVar2;
    *(undefined8 *)(lVar3 + 0x2d8) = uVar2;
    uVar2 = ssl_md(1);
    *(undefined8 *)(lVar3 + 0x2f0) = uVar2;
    uVar2 = ssl_md(2);
    *(undefined8 *)(lVar3 + 0x2f8) = uVar2;
    uVar2 = ssl_md(6);
    *(undefined8 *)(lVar3 + 0x300) = uVar2;
    uVar2 = ssl_md(8);
    *(undefined8 *)(lVar3 + 0x308) = uVar2;
  }
  else {
    iVar1 = tls1_process_sigalgs(param_1);
    if (iVar1 == 0) {
      ERR_put_error(0x14,0x14f,0x41,"ssl/t1_lib.c",0xaee);
      uVar2 = 0x50;
    }
    else {
      if (*(long *)(*(long *)(param_1 + 0x148) + 0x168) != 0) {
        return 1;
      }
      ERR_put_error(0x14,0x14f,0x178,"ssl/t1_lib.c",0xaf5);
      uVar2 = 0x2f;
    }
    ssl3_send_alert(param_1,2,uVar2);
    uVar4 = 0;
  }
  return uVar4;
}

