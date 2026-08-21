
undefined4 tls_client_key_exchange_post_work(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar3 = *(long *)(param_1 + 0x90);
  lVar5 = *(long *)(lVar3 + 0x2a0);
  uVar4 = *(undefined8 *)(lVar3 + 0x2a8);
  uVar1 = *(uint *)(*(long *)(lVar3 + 0x228) + 0x14);
  if ((uVar1 >> 5 & 1) == 0) {
    if ((lVar5 == 0) && ((uVar1 >> 3 & 1) == 0)) {
                    /* try { // try from 00ade834 to 00bde847 has its CatchHandler @ 00ade8ec */
      ssl3_send_alert(param_1,2,0x50);
                    /* try { // try from 00ade848 to 00bde863 has its CatchHandler @ 00ade7d0 */
      ERR_put_error(0x14,0x162,0x41,"ssl/statem/statem_clnt.c",0xa08);
      lVar5 = 0;
    }
    else {
      iVar2 = ssl_generate_master_secret(param_1,lVar5,uVar4,1);
      if (iVar2 != 0) {
        return 1;
      }
                    /* try { // try from 00ade89c to 00bde907 has its CatchHandler @ 00ade7d0 */
      ssl3_send_alert(param_1,2,0x50);
      ERR_put_error(0x14,0x162,0x44,"ssl/statem/statem_clnt.c",0xa0d);
      lVar5 = 0;
      uVar4 = 0;
    }
  }
  else {
                    /* try { // try from 00ade864 to 00bde89b has its CatchHandler @ 00ade8ec */
    iVar2 = srp_generate_client_master_secret(param_1);
    if (iVar2 != 0) {
      return 1;
    }
    ERR_put_error(0x14,0x162,0x44,"ssl/statem/statem_clnt.c",0x9ff);
  }
                    /* catch() { ... } // from try @ 00ade834 with catch @ 00ade8ec
                       catch() { ... } // from try @ 00ade864 with catch @ 00ade8ec */
  CRYPTO_clear_free(lVar5,uVar4,"ssl/statem/statem_clnt.c",0xa2e);
  *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x2a0) = 0;
                    /* try { // try from 00ade908 to 00bde96b has its CatchHandler @ 00ade908
                       catch() { ... } // from try @ 00ade908 with catch @ 00ade908
                       catch() { ... } // from try @ 00ade980 with catch @ 00ade908
                       catch() { ... } // from try @ 00ade9d4 with catch @ 00ade908 */
  return 0;
}

