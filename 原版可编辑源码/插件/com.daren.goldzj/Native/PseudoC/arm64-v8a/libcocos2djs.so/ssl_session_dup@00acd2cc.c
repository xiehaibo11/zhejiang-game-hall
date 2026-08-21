
SSL_SESSION * ssl_session_dup(void *param_1,int param_2)

{
  int iVar1;
  SSL_SESSION *ses;
  long lVar2;
  char *pcVar3;
  uchar *puVar4;
  uchar *puVar5;
  uchar *puVar6;
  
  ses = CRYPTO_malloc(0x160,"ssl/ssl_sess.c",0x75);
  if (ses != (SSL_SESSION *)0x0) {
    memcpy(ses,param_1,0x160);
    puVar5 = ses->krb5_client_princ + 0x58;
    ses->krb5_client_princ[0x60] = '\0';
    ses->krb5_client_princ[0x61] = '\0';
    ses->krb5_client_princ[0x62] = '\0';
    ses->krb5_client_princ[99] = '\0';
    ses->krb5_client_princ[100] = '\0';
    ses->krb5_client_princ[0x65] = '\0';
    ses->krb5_client_princ[0x66] = '\0';
    ses->krb5_client_princ[0x67] = '\0';
    puVar5[0] = '\0';
    puVar5[1] = '\0';
    puVar5[2] = '\0';
    puVar5[3] = '\0';
    puVar5[4] = '\0';
    puVar5[5] = '\0';
    puVar5[6] = '\0';
    puVar5[7] = '\0';
    puVar6 = ses->sid_ctx + 0x14;
    *(undefined8 *)(ses->sid_ctx + 0x1c) = 0;
    puVar6[0] = '\0';
    puVar6[1] = '\0';
    puVar6[2] = '\0';
    puVar6[3] = '\0';
    puVar6[4] = '\0';
    puVar6[5] = '\0';
    puVar6[6] = '\0';
    puVar6[7] = '\0';
    ses->krb5_client_princ[0x88] = '\0';
    ses->krb5_client_princ[0x89] = '\0';
    ses->krb5_client_princ[0x8a] = '\0';
    ses->krb5_client_princ[0x8b] = '\0';
    ses->krb5_client_princ[0x8c] = '\0';
    ses->krb5_client_princ[0x8d] = '\0';
    ses->krb5_client_princ[0x8e] = '\0';
    ses->krb5_client_princ[0x8f] = '\0';
    puVar4 = ses->krb5_client_princ + 0x98;
    puVar4[0] = '\0';
    puVar4[1] = '\0';
    puVar4[2] = '\0';
    puVar4[3] = '\0';
    puVar4[4] = '\0';
    puVar4[5] = '\0';
    puVar4[6] = '\0';
    puVar4[7] = '\0';
    ses->krb5_client_princ[0xb8] = '\0';
    ses->krb5_client_princ[0xb9] = '\0';
    ses->krb5_client_princ[0xba] = '\0';
    ses->krb5_client_princ[0xbb] = '\0';
    ses->krb5_client_princ[0xbc] = '\0';
    ses->krb5_client_princ[0xbd] = '\0';
    ses->krb5_client_princ[0xbe] = '\0';
    ses->krb5_client_princ[0xbf] = '\0';
    ses->krb5_client_princ[0x78] = '\0';
    ses->krb5_client_princ[0x79] = '\0';
    ses->krb5_client_princ[0x7a] = '\0';
    ses->krb5_client_princ[0x7b] = '\0';
    ses->krb5_client_princ[0x7c] = '\0';
    ses->krb5_client_princ[0x7d] = '\0';
    ses->krb5_client_princ[0x7e] = '\0';
    ses->krb5_client_princ[0x7f] = '\0';
    ses->krb5_client_princ[0x70] = '\0';
    ses->krb5_client_princ[0x71] = '\0';
    ses->krb5_client_princ[0x72] = '\0';
    ses->krb5_client_princ[0x73] = '\0';
    ses->krb5_client_princ[0x74] = '\0';
    ses->krb5_client_princ[0x75] = '\0';
    ses->krb5_client_princ[0x76] = '\0';
    ses->krb5_client_princ[0x77] = '\0';
    ses->krb5_client_princ[0x68] = '\0';
    ses->krb5_client_princ[0x69] = '\0';
    ses->krb5_client_princ[0x6a] = '\0';
    ses->krb5_client_princ[0x6b] = '\0';
    ses->krb5_client_princ[0x6c] = '\0';
    ses->krb5_client_princ[0x6d] = '\0';
    ses->krb5_client_princ[0x6e] = '\0';
    ses->krb5_client_princ[0x6f] = '\0';
                    /* catch() { ... } // from try @ 00acd280 with catch @ 00acd344 */
    ses->krb5_client_princ[0xa0] = '\0';
    ses->krb5_client_princ[0xa1] = '\0';
    ses->krb5_client_princ[0xa2] = '\0';
    ses->krb5_client_princ[0xa3] = '\0';
    ses->krb5_client_princ[0xa4] = '\0';
    ses->krb5_client_princ[0xa5] = '\0';
    ses->krb5_client_princ[0xa6] = '\0';
    ses->krb5_client_princ[0xa7] = '\0';
    ses->krb5_client_princ[0x28] = '\x01';
    ses->krb5_client_princ[0x29] = '\0';
    ses->krb5_client_princ[0x2a] = '\0';
    ses->krb5_client_princ[0x2b] = '\0';
    lVar2 = CRYPTO_THREAD_lock_new();
    *(long *)(ses->krb5_client_princ + 200) = lVar2;
    if (lVar2 != 0) {
      if (*(long *)((long)param_1 + 0x98) != 0) {
        X509_up_ref();
      }
                    /* try { // try from 00acd364 to 00bcd57f has its CatchHandler @ 00acd364
                       catch() { ... } // from try @ 00acd364 with catch @ 00acd364
                       catch() { ... } // from try @ 00acd588 with catch @ 00acd364 */
      if (*(long *)((long)param_1 + 0xa8) != 0) {
        lVar2 = X509_chain_up_ref();
        *(long *)(ses->krb5_client_princ + 0x18) = lVar2;
        if (lVar2 == 0) goto LAB_00acd490;
      }
      if (*(char **)((long)param_1 + 0x80) != (char *)0x0) {
        pcVar3 = CRYPTO_strdup(*(char **)((long)param_1 + 0x80),"ssl/ssl_sess.c",0xa3);
        *(char **)puVar6 = pcVar3;
        if (pcVar3 == (char *)0x0) goto LAB_00acd490;
      }
      if (*(char **)((long)param_1 + 0x88) != (char *)0x0) {
        pcVar3 = CRYPTO_strdup(*(char **)((long)param_1 + 0x88),"ssl/ssl_sess.c",0xa9);
        *(char **)(ses->sid_ctx + 0x1c) = pcVar3;
        if (pcVar3 == (char *)0x0) goto LAB_00acd490;
      }
      if (*(long *)((long)param_1 + 0xe8) != 0) {
        lVar2 = OPENSSL_sk_dup();
        *(long *)puVar5 = lVar2;
        if (lVar2 == 0) goto LAB_00acd490;
      }
      iVar1 = CRYPTO_dup_ex_data(2,(CRYPTO_EX_DATA *)(ses->krb5_client_princ + 0x60),
                                 (CRYPTO_EX_DATA *)((long)param_1 + 0xf0));
      if (iVar1 != 0) {
        if (*(char **)((long)param_1 + 0x108) != (char *)0x0) {
          pcVar3 = CRYPTO_strdup(*(char **)((long)param_1 + 0x108),"ssl/ssl_sess.c",0xbc);
          *(char **)(ses->krb5_client_princ + 0x78) = pcVar3;
          if (pcVar3 == (char *)0x0) goto LAB_00acd490;
        }
        if (*(long *)((long)param_1 + 0x118) != 0) {
          lVar2 = CRYPTO_memdup(*(long *)((long)param_1 + 0x118),
                                *(undefined8 *)((long)param_1 + 0x110),"ssl/ssl_sess.c",0xc5);
          *(long *)(ses->krb5_client_princ + 0x88) = lVar2;
          if (lVar2 == 0) goto LAB_00acd490;
        }
        if (*(long *)((long)param_1 + 0x128) != 0) {
          lVar2 = CRYPTO_memdup(*(long *)((long)param_1 + 0x128),
                                *(undefined8 *)((long)param_1 + 0x120),"ssl/ssl_sess.c",0xcc);
          *(long *)puVar4 = lVar2;
          if (lVar2 == 0) goto LAB_00acd490;
        }
        if (param_2 == 0) {
          ses->krb5_client_princ[0xa8] = '\0';
          ses->krb5_client_princ[0xa9] = '\0';
          ses->krb5_client_princ[0xaa] = '\0';
          ses->krb5_client_princ[0xab] = '\0';
          ses->krb5_client_princ[0xac] = '\0';
          ses->krb5_client_princ[0xad] = '\0';
          ses->krb5_client_princ[0xae] = '\0';
          ses->krb5_client_princ[0xaf] = '\0';
          ses->krb5_client_princ[0xb0] = '\0';
          ses->krb5_client_princ[0xb1] = '\0';
          ses->krb5_client_princ[0xb2] = '\0';
          ses->krb5_client_princ[0xb3] = '\0';
          ses->krb5_client_princ[0xb4] = '\0';
          ses->krb5_client_princ[0xb5] = '\0';
          ses->krb5_client_princ[0xb6] = '\0';
          ses->krb5_client_princ[0xb7] = '\0';
        }
        else {
          lVar2 = CRYPTO_memdup(*(undefined8 *)((long)param_1 + 0x130),
                                *(undefined8 *)((long)param_1 + 0x138),"ssl/ssl_sess.c",0xd4);
          *(long *)(ses->krb5_client_princ + 0xa0) = lVar2;
          if (lVar2 == 0) goto LAB_00acd490;
        }
        if (*(char **)((long)param_1 + 0x148) == (char *)0x0) {
          return ses;
        }
        pcVar3 = CRYPTO_strdup(*(char **)((long)param_1 + 0x148),"ssl/ssl_sess.c",0xde);
        *(char **)(ses->krb5_client_princ + 0xb8) = pcVar3;
        if (pcVar3 != (char *)0x0) {
          return ses;
        }
      }
    }
  }
LAB_00acd490:
  ERR_put_error(0x14,0x15c,0x41,"ssl/ssl_sess.c",0xe7);
  SSL_SESSION_free(ses);
  return (SSL_SESSION *)0x0;
}

