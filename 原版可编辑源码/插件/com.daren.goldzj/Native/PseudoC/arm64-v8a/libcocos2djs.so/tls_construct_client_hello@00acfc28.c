
undefined4 tls_construct_client_hello(SSL *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  stack_st_SSL_CIPHER *psVar5;
  SSL_CIPHER *cipher;
  undefined4 *puVar6;
  _func_3076 *p_Var7;
  long lVar8;
  SSL_CTX *pSVar9;
  undefined1 *__dest;
  ulong uVar10;
  uchar *puVar11;
  uchar *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined4 local_64;
  
  local_64 = 0;
  pSVar9 = param_1->ctx;
  lVar13 = *(long *)&param_1->s2->escape;
  iVar2 = ssl_set_client_hello_version();
  if (iVar2 == 0) {
    if (((((pSVar9 == (SSL_CTX *)0x0) ||
          (iVar2 = ssl_version_supported(param_1,*(undefined4 *)&pSVar9->method), iVar2 == 0)) ||
         ((*(int *)&pSVar9->session_cache_tail == 0 && (pSVar9->cert == (cert_st *)0x0)))) ||
        ((pSVar9->stats).sess_cb_hit != 0)) && (iVar2 = ssl_get_new_session(param_1,0), iVar2 == 0))
    goto LAB_00acfc84;
    lVar8 = *(long *)&param_1->read_ahead;
    p_Var7 = param_1->method->get_timeout;
                    /* try { // try from 00acfdf0 to 00bcfdfb has its CatchHandler @ 00acfe14 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00acfdf0 with catch @ 00acfe14
                        */
    if ((((byte)p_Var7[0x68] >> 3 & 1) == 0) ||
       (((((((*(char *)(lVar8 + 0xb0) == '\0' && (*(char *)(lVar8 + 0xb1) == '\0')) &&
            (*(char *)(lVar8 + 0xb2) == '\0')) &&
           ((*(char *)(lVar8 + 0xb3) == '\0' && (*(char *)(lVar8 + 0xb4) == '\0')))) &&
          (((*(char *)(lVar8 + 0xb5) == '\0' &&
            ((*(char *)(lVar8 + 0xb6) == '\0' && (*(char *)(lVar8 + 0xb7) == '\0')))) &&
           (*(char *)(lVar8 + 0xb8) == '\0')))) &&
         ((((*(char *)(lVar8 + 0xb9) == '\0' && (*(char *)(lVar8 + 0xba) == '\0')) &&
           (*(char *)(lVar8 + 0xbb) == '\0')) &&
          ((*(char *)(lVar8 + 0xbc) == '\0' && (*(char *)(lVar8 + 0xbd) == '\0')))))) &&
        (((*(char *)(lVar8 + 0xbe) == '\0' &&
          ((*(char *)(lVar8 + 0xbf) == '\0' && (*(char *)(lVar8 + 0xc0) == '\0')))) &&
         (((*(char *)(lVar8 + 0xc1) == '\0' &&
           (((*(char *)(lVar8 + 0xc2) == '\0' && (*(char *)(lVar8 + 0xc3) == '\0')) &&
            (*(char *)(lVar8 + 0xc4) == '\0')))) &&
          (((((*(char *)(lVar8 + 0xc5) == '\0' && (*(char *)(lVar8 + 0xc6) == '\0')) &&
             ((*(char *)(lVar8 + 199) == '\0' &&
              ((*(char *)(lVar8 + 200) == '\0' && (*(char *)(lVar8 + 0xc9) == '\0')))))) &&
            (*(char *)(lVar8 + 0xca) == '\0')) &&
           ((((*(char *)(lVar8 + 0xcb) == '\0' && (*(char *)(lVar8 + 0xcc) == '\0')) &&
             (*(char *)(lVar8 + 0xcd) == '\0')) &&
            ((*(char *)(lVar8 + 0xce) == '\0' && (*(char *)(lVar8 + 0xcf) == '\0')))))))))))))) {
      iVar2 = ssl_fill_hello_random(param_1,0,(char *)(lVar8 + 0xb0),0x20);
      if (iVar2 < 1) goto LAB_00acfc84;
      p_Var7 = param_1->method->get_timeout;
    }
    puVar1 = (undefined1 *)(*(long *)&param_1->s2->escape + (ulong)*(uint *)(p_Var7 + 0x6c));
    *puVar1 = (char)((uint)*(undefined4 *)((long)&param_1->tlsext_ocsp_ids + 4) >> 8);
    puVar1[1] = (char)*(undefined4 *)((long)&param_1->tlsext_ocsp_ids + 4);
                    /* try { // try from 00acfe54 to 00bcfe5f has its CatchHandler @ 00acfe80 */
    lVar8 = *(long *)&param_1->read_ahead;
    uVar14 = *(undefined8 *)(lVar8 + 0xc0);
    *(undefined8 *)(puVar1 + 0x1a) = *(undefined8 *)(lVar8 + 200);
    *(undefined8 *)(puVar1 + 0x12) = uVar14;
    uVar14 = *(undefined8 *)(lVar8 + 0xb0);
    *(undefined8 *)(puVar1 + 10) = *(undefined8 *)(lVar8 + 0xb8);
    *(undefined8 *)(puVar1 + 2) = uVar14;
    if (param_1->new_session == 0) {
      iVar2 = *(int *)&param_1->ctx->session_cache_tail;
      __dest = puVar1 + 0x23;
      puVar1[0x22] = (char)iVar2;
      if (iVar2 != 0) {
        if (0x20 < iVar2) {
          iVar2 = 0x44;
          iVar3 = 0x31a;
          goto LAB_00acfc80;
        }
        memcpy(__dest,(void *)((long)&param_1->ctx->session_cache_tail + 4),(long)iVar2);
        __dest = __dest + iVar2;
      }
    }
    else {
      __dest = puVar1 + 0x23;
      puVar1[0x22] = 0;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00acfe54 with catch @ 00acfe80
                        */
    if (((byte)param_1->method->get_timeout[0x68] >> 3 & 1) != 0) {
      if (0x100 < *(uint *)(param_1->msg_callback + 0x100)) {
        iVar2 = 0x44;
        iVar3 = 0x324;
        goto LAB_00acfc80;
      }
      *__dest = (char)*(uint *)(param_1->msg_callback + 0x100);
      memcpy(__dest + 1,param_1->msg_callback,(ulong)*(uint *)(param_1->msg_callback + 0x100));
      __dest = __dest + 1 + *(uint *)(param_1->msg_callback + 0x100);
    }
    psVar5 = SSL_get_ciphers(param_1);
    iVar2 = param_1[1].init_off;
    ssl_set_client_disabled(param_1);
    if (psVar5 != (stack_st_SSL_CIPHER *)0x0) {
      puVar11 = __dest + 2;
      iVar3 = OPENSSL_sk_num(psVar5);
      puVar12 = puVar11;
      if (iVar3 < 1) {
LAB_00acfff4:
        iVar2 = (int)puVar12 - (int)puVar11;
      }
      else {
        iVar3 = 0;
        lVar8 = 2;
        do {
          cipher = (SSL_CIPHER *)OPENSSL_sk_value(psVar5,iVar3);
          iVar4 = ssl_cipher_disabled(param_1,cipher,0x10001);
          if (iVar4 == 0) {
            iVar4 = (*param_1->method->put_cipher_by_char)(cipher,__dest + lVar8);
            lVar8 = lVar8 + iVar4;
          }
          iVar3 = iVar3 + 1;
          iVar4 = OPENSSL_sk_num(psVar5);
        } while (iVar3 < iVar4);
        if (lVar8 == 2) goto LAB_00acfff4;
        puVar12 = __dest + lVar8;
        if (iVar2 == 0) {
          iVar2 = (*param_1->method->put_cipher_by_char)((SSL_CIPHER *)&DAT_01d1e270,puVar12);
          puVar12 = puVar12 + iVar2;
        }
        if (-1 < *(char *)&param_1->tlsext_hostname) goto LAB_00acfff4;
        iVar2 = (*param_1->method->put_cipher_by_char)((SSL_CIPHER *)&DAT_01d1e2b8,puVar12);
        iVar2 = ((int)puVar12 + iVar2) - (int)puVar11;
      }
      if (iVar2 != 0) {
        __dest[1] = (char)iVar2;
        *__dest = (char)((uint)iVar2 >> 8);
        puVar11 = puVar11 + iVar2;
        iVar3 = ssl_allow_compression(param_1);
        if ((iVar3 == 0) || (*(long *)(param_1->mode + 0xf0) == 0)) {
          puVar12 = puVar11 + 1;
          *puVar11 = '\x01';
        }
        else {
          iVar3 = OPENSSL_sk_num();
          puVar12 = puVar11 + 1;
          *puVar11 = (char)iVar3 + '\x01';
          if (0 < iVar3) {
            lVar8 = (long)iVar2 + (ulong)(iVar3 - 1);
            uVar10 = 0;
            do {
              puVar6 = (undefined4 *)
                       OPENSSL_sk_value(*(undefined8 *)(param_1->mode + 0xf0),uVar10 & 0xffffffff);
              puVar12[uVar10] = (uchar)*puVar6;
              uVar10 = uVar10 + 1;
            } while (iVar3 != (int)uVar10);
            puVar11 = __dest + lVar8 + 3;
            puVar12 = __dest + lVar8 + 4;
          }
        }
        *puVar12 = '\0';
        iVar2 = ssl_prepare_clienthello_tlsext(param_1);
        if (iVar2 < 1) {
          iVar2 = 0xe2;
          iVar3 = 0x352;
        }
        else {
          lVar13 = ssl_add_clienthello_tlsext(param_1,puVar11 + 2,lVar13 + 0x4000,&local_64);
          if (lVar13 == 0) {
            ssl3_send_alert(param_1,2,local_64);
            iVar2 = 0x44;
            iVar3 = 0x359;
          }
          else {
            iVar2 = (**(code **)(param_1->method->get_timeout + 0x70))
                              (param_1,1,lVar13 - (long)puVar1);
            if (iVar2 != 0) {
              return 1;
            }
            ssl3_send_alert(param_1,2,0x28);
            iVar2 = 0x44;
            iVar3 = 0x360;
          }
        }
        goto LAB_00acfc80;
      }
    }
    iVar2 = 0xb5;
    iVar3 = 0x32f;
  }
  else {
    iVar3 = 0x2c5;
  }
LAB_00acfc80:
  ERR_put_error(0x14,0x164,iVar2,"ssl/statem/statem_clnt.c",iVar3);
LAB_00acfc84:
  ossl_statem_set_error(param_1);
  return 0;
}

