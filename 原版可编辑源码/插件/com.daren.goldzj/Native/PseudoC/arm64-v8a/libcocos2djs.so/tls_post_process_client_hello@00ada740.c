
undefined8 tls_post_process_client_hello(SSL *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  stack_st_SSL_CIPHER *psVar3;
  long lVar4;
  int line;
  code *pcVar5;
  EVP_MD *pEVar6;
  int local_24;
  
  local_24 = 0x28;
                    /* try { // try from 00ada760 to 00bda767 has its CatchHandler @ 00ada920 */
  if (param_2 == 4) {
LAB_00ada7b8:
    local_24 = 0x70;
    if (((*(byte *)(*(long *)(*(long *)&param_1->read_ahead + 0x228) + 0x14) >> 5 & 1) == 0) ||
       (*(long *)&param_1[1].packet_length == 0)) {
LAB_00ada81c:
      param_1[1].init_off = 2;
      return 1;
    }
    if (param_1[1].d1 == (dtls1_state_st *)0x0) {
      local_24 = 0x73;
    }
    else {
                    /* try { // try from 00ada7e8 to 00bda7ef has its CatchHandler @ 00ada910 */
      iVar2 = SSL_srp_server_param_with_username(param_1,&local_24);
      if (iVar2 < 0) {
                    /* try { // try from 00ada8f8 to 00bda8ff has its CatchHandler @ 00ada930 */
        param_1->rwstate = 4;
        return 4;
                    /* try { // try from 00ada900 to 00bda907 has its CatchHandler @ 00ada920 */
      }
                    /* try { // try from 00ada7f0 to 00bda813 has its CatchHandler @ 00ada4fc */
      if (iVar2 == 0) goto LAB_00ada81c;
      if (local_24 != 0x73) {
        iVar2 = 0xe2;
                    /* try { // try from 00ada814 to 00bda837 has its CatchHandler @ 00ada950 */
        line = 0x5cd;
        goto LAB_00ada940;
      }
    }
    iVar2 = 0xdf;
    line = 0x5d0;
  }
  else {
                    /* try { // try from 00ada768 to 00bda7e7 has its CatchHandler @ 00ada4fc */
    if (param_2 != 3) goto LAB_00ada81c;
    if (*(int *)&param_1->param != 0) {
      *(undefined8 *)(*(long *)&param_1->read_ahead + 0x228) =
           *(undefined8 *)&(param_1->ctx->ex_data).dummy;
      goto LAB_00ada784;
    }
    pcVar5 = *(code **)(param_1->verify_callback + 0x178);
    if (pcVar5 == (code *)0x0) {
LAB_00ada854:
      pEVar6 = param_1->ctx->md5;
      psVar3 = SSL_get_ciphers(param_1);
      lVar4 = ssl3_choose_cipher(param_1,pEVar6,psVar3);
      if (lVar4 == 0) {
                    /* catch() { ... } // from try @ 00ada6d8 with catch @ 00ada930
                       catch() { ... } // from try @ 00ada8f8 with catch @ 00ada930 */
        iVar2 = 0xc1;
        line = 0x58e;
      }
      else {
        *(long *)(*(long *)&param_1->read_ahead + 0x228) = lVar4;
        if (param_1[1].enc_write_ctx == (EVP_CIPHER_CTX *)0x0) {
          if ((param_1->ctx->stats).sess_cb_hit == 0) goto LAB_00ada784;
LAB_00ada98c:
          *(undefined4 *)((long)&param_1->next_proto_negotiated + 4) = 0;
          bVar1 = (byte)param_1->verify_result;
        }
        else {
          iVar2 = (*(code *)param_1[1].enc_write_ctx)(param_1,(*(uint *)(lVar4 + 0x14) & 6) != 0);
          (param_1->ctx->stats).sess_cb_hit = iVar2;
          if (iVar2 != 0) goto LAB_00ada98c;
LAB_00ada784:
          bVar1 = (byte)param_1->verify_result;
        }
        if (((bVar1 & 1) == 0) && (iVar2 = ssl3_digest_cached_records(param_1,0), iVar2 == 0)) {
          local_24 = 0x50;
          goto LAB_00ada944;
        }
        if ((param_1->version < 0x300) ||
           (iVar2 = ssl_check_clienthello_tlsext_late(param_1,&local_24), iVar2 != 0))
        goto LAB_00ada7b8;
        iVar2 = 0xe2;
                    /* try { // try from 00ada8f0 to 00bda8f7 has its CatchHandler @ 00ada940 */
        line = 0x5b5;
      }
    }
    else {
                    /* try { // try from 00ada838 to 00bda8ef has its CatchHandler @ 00ada4fc */
      iVar2 = (*pcVar5)(param_1,*(undefined8 *)(param_1->verify_callback + 0x180));
      if (iVar2 != 0) {
        if (iVar2 < 0) {
          param_1->rwstate = 4;
          return 3;
        }
        param_1->rwstate = 1;
        goto LAB_00ada854;
      }
                    /* try { // try from 00ada908 to 00bda90f has its CatchHandler @ 00ada910 */
                    /* catch() { ... } // from try @ 00ada7e8 with catch @ 00ada910
                       catch() { ... } // from try @ 00ada908 with catch @ 00ada910
                       try { // try from 00ada910 to 00bda9f7 has its CatchHandler @ 00ada4fc */
      iVar2 = 0x179;
      line = 0x580;
                    /* catch() { ... } // from try @ 00ada760 with catch @ 00ada920
                       catch() { ... } // from try @ 00ada900 with catch @ 00ada920 */
      local_24 = 0x50;
    }
  }
LAB_00ada940:
                    /* catch() { ... } // from try @ 00ada650 with catch @ 00ada940
                       catch() { ... } // from try @ 00ada8f0 with catch @ 00ada940 */
  ERR_put_error(0x14,0x17a,iVar2,"ssl/statem/statem_srvr.c",line);
LAB_00ada944:
                    /* catch() { ... } // from try @ 00ada814 with catch @ 00ada950 */
  ssl3_send_alert(param_1,2,local_24);
  ossl_statem_set_error(param_1);
  return 0;
}

