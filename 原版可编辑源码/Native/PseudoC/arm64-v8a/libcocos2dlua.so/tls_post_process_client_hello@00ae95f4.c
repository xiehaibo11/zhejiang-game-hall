
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
  if (param_2 == 4) {
LAB_00ae966c:
    local_24 = 0x70;
    if (((*(byte *)(*(long *)(*(long *)&param_1->read_ahead + 0x228) + 0x14) >> 5 & 1) == 0) ||
       (*(long *)&param_1[1].packet_length == 0)) {
LAB_00ae96d0:
      param_1[1].init_off = 2;
      return 1;
    }
    if (param_1[1].d1 == (dtls1_state_st *)0x0) {
      local_24 = 0x73;
    }
    else {
      iVar2 = SSL_srp_server_param_with_username(param_1,&local_24);
      if (iVar2 < 0) {
        param_1->rwstate = 4;
        return 4;
      }
      if (iVar2 == 0) goto LAB_00ae96d0;
      if (local_24 != 0x73) {
                    /* try { // try from 00ae96bc to 00be96c7 has its CatchHandler @ 00ae975c */
        iVar2 = 0xe2;
                    /* try { // try from 00ae96c8 to 00be970f has its CatchHandler @ 00ae95d8 */
        line = 0x5cd;
        goto LAB_00ae97f4;
      }
    }
                    /* catch() { ... } // from try @ 00ae9a8c with catch @ 00ae9770
                       catch() { ... } // from try @ 00ae9fcc with catch @ 00ae9770
                       catch() { ... } // from try @ 00aea0cc with catch @ 00ae9770 */
    iVar2 = 0xdf;
    line = 0x5d0;
  }
  else {
    if (param_2 != 3) goto LAB_00ae96d0;
    if (*(int *)&param_1->param != 0) {
      *(undefined8 *)(*(long *)&param_1->read_ahead + 0x228) =
           *(undefined8 *)&(param_1->ctx->ex_data).dummy;
      goto LAB_00ae9638;
    }
    pcVar5 = *(code **)(param_1->verify_callback + 0x178);
    if (pcVar5 == (code *)0x0) {
LAB_00ae9708:
                    /* try { // try from 00ae9710 to 00be971b has its CatchHandler @ 00ae975c */
      pEVar6 = param_1->ctx->md5;
      psVar3 = SSL_get_ciphers(param_1);
                    /* try { // try from 00ae971c to 00be976f has its CatchHandler @ 00ae95d8 */
      lVar4 = ssl3_choose_cipher(param_1,pEVar6,psVar3);
      if (lVar4 == 0) {
        iVar2 = 0xc1;
        line = 0x58e;
      }
      else {
        *(long *)(*(long *)&param_1->read_ahead + 0x228) = lVar4;
        if (param_1[1].enc_write_ctx == (EVP_CIPHER_CTX *)0x0) {
          if ((param_1->ctx->stats).sess_cb_hit == 0) goto LAB_00ae9638;
LAB_00ae9840:
          *(undefined4 *)((long)&param_1->next_proto_negotiated + 4) = 0;
                    /* try { // try from 00ae9844 to 00be984f has its CatchHandler @ 00aea0fc */
          bVar1 = (byte)param_1->verify_result;
        }
        else {
          iVar2 = (*(code *)param_1[1].enc_write_ctx)(param_1,(*(uint *)(lVar4 + 0x14) & 6) != 0);
          (param_1->ctx->stats).sess_cb_hit = iVar2;
          if (iVar2 != 0) goto LAB_00ae9840;
LAB_00ae9638:
          bVar1 = (byte)param_1->verify_result;
        }
        if (((bVar1 & 1) == 0) && (iVar2 = ssl3_digest_cached_records(param_1,0), iVar2 == 0)) {
          local_24 = 0x50;
          goto LAB_00ae97f8;
        }
        if ((param_1->version < 0x300) ||
           (iVar2 = ssl_check_clienthello_tlsext_late(param_1,&local_24), iVar2 != 0))
        goto LAB_00ae966c;
        iVar2 = 0xe2;
        line = 0x5b5;
      }
    }
    else {
      iVar2 = (*pcVar5)(param_1,*(undefined8 *)(param_1->verify_callback + 0x180));
      if (iVar2 != 0) {
        if (iVar2 < 0) {
          param_1->rwstate = 4;
          return 3;
        }
        param_1->rwstate = 1;
        goto LAB_00ae9708;
      }
      iVar2 = 0x179;
      line = 0x580;
      local_24 = 0x50;
    }
  }
LAB_00ae97f4:
  ERR_put_error(0x14,0x17a,iVar2,"ssl/statem/statem_srvr.c",line);
LAB_00ae97f8:
  ssl3_send_alert(param_1,2,local_24);
  ossl_statem_set_error(param_1);
  return 0;
}

