
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
                    /* try { // try from 00acf97c to 00bcfad7 has its CatchHandler @ 00acf97c
                       catch() { ... } // from try @ 00acf97c with catch @ 00acf97c
                       catch() { ... } // from try @ 00acfae4 with catch @ 00acf97c
                       catch() { ... } // from try @ 00acfba0 with catch @ 00acf97c */
      ssl3_send_alert(param_1,2,0x50);
      ERR_put_error(0x14,0x162,0x41,"ssl/statem/statem_clnt.c",0xa08);
      lVar5 = 0;
    }
    else {
      iVar2 = ssl_generate_master_secret(param_1,lVar5,uVar4,1);
      if (iVar2 != 0) {
        return 1;
      }
      ssl3_send_alert(param_1,2,0x50);
      ERR_put_error(0x14,0x162,0x44,"ssl/statem/statem_clnt.c",0xa0d);
      lVar5 = 0;
      uVar4 = 0;
    }
  }
  else {
    iVar2 = srp_generate_client_master_secret(param_1);
    if (iVar2 != 0) {
      return 1;
    }
    ERR_put_error(0x14,0x162,0x44,"ssl/statem/statem_clnt.c",0x9ff);
  }
  CRYPTO_clear_free(lVar5,uVar4,"ssl/statem/statem_clnt.c",0xa2e);
  *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x2a0) = 0;
  return 0;
}

