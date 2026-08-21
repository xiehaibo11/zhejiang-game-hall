
SSL * SSL_dup(SSL *ssl)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_w0;
  int iVar5;
  int iVar6;
  SSL *s;
  _func_3151 *p_Var7;
  long lVar8;
  undefined1 *puVar9;
  BIO *bp;
  X509_VERIFY_PARAM *to;
  cert_st *pcVar10;
  _func_3155 *p_Var11;
  X509_NAME *xn;
  X509_NAME *pXVar12;
  _func_3058 **pp_Var13;
  COMP_CTX *pCVar14;
  stack_st_void *psVar15;
  ulong uVar16;
  SSL_METHOD *pSVar17;
  SSL_METHOD *pSVar18;
  _func_3058 *p_Var19;
  void *pvVar20;
  undefined8 uVar21;
  int local_34;
  
  iVar4 = SSL_in_init();
  if ((iVar4 == 0) || (iVar4 = SSL_in_before(ssl), iVar4 == 0)) {
    CRYPTO_atomic_add(&ssl->tlsext_debug_arg,1,&local_34,ssl[6].session);
    return ssl;
  }
  s = SSL_new((SSL_CTX *)ssl->mode);
  if (s == (SSL *)0x0) {
    return (SSL *)0x0;
  }
  if (ssl->ctx == (SSL_CTX *)0x0) {
    pSVar17 = ssl->method;
    pSVar18 = s->method;
    if (pSVar18 != pSVar17) {
      p_Var19 = (_func_3058 *)s->handshake_func;
      if (pSVar18->version == pSVar17->version) {
        s->method = pSVar17;
        iVar4 = 1;
      }
      else {
        (*pSVar18->ssl_accept)(s);
        s->method = pSVar17;
        iVar4 = (*pSVar17->ssl_clear)(s);
      }
      if (p_Var19 == pSVar18->ssl_read) {
                    /* try { // try from 00ad9208 to 00bd929f has its CatchHandler @ 00ad9208
                       catch() { ... } // from try @ 00ad9208 with catch @ 00ad9208
                       catch() { ... } // from try @ 00ad92a8 with catch @ 00ad9208 */
        pp_Var13 = &pSVar17->ssl_read;
LAB_00ad920c:
        s->handshake_func = (_func_3149 *)*pp_Var13;
      }
      else if (p_Var19 == (_func_3058 *)pSVar18->ssl_connect) {
        pp_Var13 = (_func_3058 **)&pSVar17->ssl_connect;
        goto LAB_00ad920c;
      }
      if (iVar4 == 0) goto LAB_00ad9524;
    }
    if (ssl->verify_callback != (_func_3151 *)0x0) {
      ssl_cert_free(s->verify_callback);
      p_Var7 = (_func_3151 *)ssl_cert_dup(ssl->verify_callback);
      s->verify_callback = p_Var7;
      if (p_Var7 == (_func_3151 *)0x0) goto LAB_00ad9524;
    }
    uVar2 = *(uint *)&ssl->info_callback;
    if (0x20 < uVar2) {
      ERR_put_error(0x14,0xda,0x111,"ssl/ssl_lib.c",0x2c9);
      goto LAB_00ad9524;
    }
    *(uint *)&s->info_callback = uVar2;
    memcpy((void *)((long)&s->info_callback + 4),(void *)((long)&ssl->info_callback + 4),
           (ulong)uVar2);
  }
  else {
    SSL_copy_session_id(s,ssl);
    if (extraout_w0 == 0) goto LAB_00ad9524;
  }
  iVar4 = OPENSSL_sk_num(*(undefined8 *)&ssl->mac_flags);
  if (0 < iVar4) {
    OPENSSL_sk_pop_free(*(undefined8 *)&s->mac_flags,FUN_00ada4dc);
    *(undefined8 *)&s->mac_flags = 0;
                    /* try { // try from 00ad92a0 to 00bd92a7 has its CatchHandler @ 00ad9300 */
    OPENSSL_sk_pop_free(s->enc_read_ctx,X509_free);
                    /* try { // try from 00ad92a8 to 00bd931b has its CatchHandler @ 00ad9208 */
    s->enc_read_ctx = (EVP_CIPHER_CTX *)0x0;
    X509_free((X509 *)s->expand);
    s->read_hash = (EVP_MD_CTX *)0x0;
    s->expand = (COMP_CTX *)0x0;
    uVar16 = s->mode;
    *(undefined8 *)((long)&s->enc_write_ctx + 4) = 0xffffffffffffffff;
    pCVar14 = ssl->compress;
    s->cipher_list_by_id = (stack_st_SSL_CIPHER *)(uVar16 + 0x308);
    s->compress = pCVar14;
    lVar8 = OPENSSL_sk_new_null();
    *(long *)&s->mac_flags = lVar8;
    if (lVar8 == 0) {
      ERR_put_error(0x14,0x193,0x41,"ssl/ssl_lib.c",199);
                    /* catch() { ... } // from try @ 00ad93b4 with catch @ 00ad9414 */
      goto LAB_00ad9524;
    }
    iVar4 = OPENSSL_sk_num(*(undefined8 *)&ssl->mac_flags);
    if (0 < iVar4) {
      iVar6 = 0;
      do {
                    /* catch() { ... } // from try @ 00ad92a0 with catch @ 00ad9300 */
        puVar9 = (undefined1 *)OPENSSL_sk_value(*(undefined8 *)&ssl->mac_flags,iVar6);
        iVar5 = SSL_dane_tlsa_add(s,*puVar9,puVar9[1],puVar9[2],*(undefined8 *)(puVar9 + 8),
                                  *(undefined8 *)(puVar9 + 0x10));
                    /* try { // try from 00ad931c to 00bd93b3 has its CatchHandler @ 00ad931c
                       catch() { ... } // from try @ 00ad931c with catch @ 00ad931c
                       catch() { ... } // from try @ 00ad93bc with catch @ 00ad931c */
        if (iVar5 < 1) goto LAB_00ad9524;
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar4);
    }
  }
  s->version = ssl->version;
  *(undefined4 *)((long)&s->tlsext_debug_arg + 4) =
       *(undefined4 *)((long)&ssl->tlsext_debug_arg + 4);
  *(undefined4 *)&s->tlsext_hostname = *(undefined4 *)&ssl->tlsext_hostname;
  uVar3 = *(undefined4 *)&ssl->field_0x1fc;
  s->tlsext_status_expected = ssl->tlsext_status_expected;
  *(undefined4 *)&s->field_0x1fc = uVar3;
  *(undefined4 *)&s[1].compress = *(undefined4 *)&ssl[1].compress;
  uVar3 = *(undefined4 *)&ssl->field_0xac;
  pvVar20 = ssl->msg_callback_arg;
  s->hit = ssl->hit;
  *(undefined4 *)&s->field_0xac = uVar3;
  s->msg_callback_arg = pvVar20;
  psVar15 = (ssl->ex_data).sk;
  *(int *)&s->verify_result = (int)ssl->verify_result;
  if (psVar15 != (stack_st_void *)0x0) {
    (s->ex_data).sk = psVar15;
  }
  iVar4 = X509_VERIFY_PARAM_get_depth((X509_VERIFY_PARAM *)ssl->cipher_list);
  X509_VERIFY_PARAM_set_depth((X509_VERIFY_PARAM *)s->cipher_list,iVar4);
  uVar3 = *(undefined4 *)&ssl->field_0x184;
  s->debug = ssl->debug;
  *(undefined4 *)&s->field_0x184 = uVar3;
  uVar3 = *(undefined4 *)&(ssl->ex_data).field_0xc;
  (s->ex_data).dummy = (ssl->ex_data).dummy;
  *(undefined4 *)&(s->ex_data).field_0xc = uVar3;
  iVar4 = CRYPTO_dup_ex_data(0,(CRYPTO_EX_DATA *)&s->max_send_fragment,
                             (CRYPTO_EX_DATA *)&ssl->max_send_fragment);
                    /* try { // try from 00ad93b4 to 00bd93bb has its CatchHandler @ 00ad9414 */
                    /* try { // try from 00ad93bc to 00bd942f has its CatchHandler @ 00ad931c */
  if ((iVar4 != 0) &&
     ((ssl->rbio == (BIO *)0x0 || (lVar8 = BIO_ctrl(ssl->rbio,0xc,0,&s->rbio), lVar8 != 0)))) {
    bp = ssl->wbio;
    if (bp != (BIO *)0x0) {
      if (bp == ssl->rbio) {
        BIO_up_ref(s->rbio);
        s->wbio = s->rbio;
      }
      else {
        lVar8 = BIO_ctrl(bp,0xc,0,&s->wbio);
        if (lVar8 == 0) goto LAB_00ad9524;
      }
    }
    s->server = ssl->server;
                    /* try { // try from 00ad9430 to 00bd947b has its CatchHandler @ 00ad9430
                       catch() { ... } // from try @ 00ad9430 with catch @ 00ad9430
                       catch() { ... } // from try @ 00ad94d4 with catch @ 00ad9430 */
    if (ssl->handshake_func != (_func_3149 *)0x0) {
      if (ssl->server == 0) {
        SSL_set_connect_state(s);
      }
      else {
        SSL_set_accept_state(s);
      }
    }
    to = (X509_VERIFY_PARAM *)s->cipher_list;
    s->shutdown = ssl->shutdown;
    *(undefined4 *)&s->param = *(undefined4 *)&ssl->param;
    uVar21 = *(undefined8 *)(ssl[6].sid_ctx + 4);
    *(undefined8 *)(s[6].sid_ctx + 0xc) = *(undefined8 *)(ssl[6].sid_ctx + 0xc);
    *(undefined8 *)(s[6].sid_ctx + 4) = uVar21;
    X509_VERIFY_PARAM_inherit(to,(X509_VERIFY_PARAM *)ssl->cipher_list);
                    /* try { // try from 00ad947c to 00bd94af has its CatchHandler @ 00ad9598 */
    if (ssl->cert != (cert_st *)0x0) {
      pcVar10 = (cert_st *)OPENSSL_sk_dup();
      s->cert = pcVar10;
      if (pcVar10 == (cert_st *)0x0) goto LAB_00ad9524;
    }
    lVar8._0_4_ = ssl->sid_ctx_length;
    lVar8._4_1_ = ssl->sid_ctx[0];
    lVar8._5_1_ = ssl->sid_ctx[1];
    lVar8._6_1_ = ssl->sid_ctx[2];
    lVar8._7_1_ = ssl->sid_ctx[3];
    if (lVar8 != 0) {
      lVar8 = OPENSSL_sk_dup();
      s->sid_ctx_length = (int)lVar8;
      s->sid_ctx[0] = (char)((ulong)lVar8 >> 0x20);
      s->sid_ctx[1] = (char)((ulong)lVar8 >> 0x28);
      s->sid_ctx[2] = (char)((ulong)lVar8 >> 0x30);
      s->sid_ctx[3] = (char)((ulong)lVar8 >> 0x38);
      if (lVar8 == 0) goto LAB_00ad9524;
    }
    if (ssl->tlsext_debug_cb == (_func_3155 *)0x0) {
      return s;
    }
    p_Var11 = (_func_3155 *)OPENSSL_sk_dup();
    if (p_Var11 != (_func_3155 *)0x0) {
      s->tlsext_debug_cb = p_Var11;
      local_34 = 0;
                    /* try { // try from 00ad94c0 to 00bd94d3 has its CatchHandler @ 00ad9544 */
      iVar4 = OPENSSL_sk_num(p_Var11);
      if (iVar4 < 1) {
        return s;
      }
      iVar4 = 1;
      while( true ) {
                    /* try { // try from 00ad94d4 to 00bd95c3 has its CatchHandler @ 00ad9430 */
        xn = (X509_NAME *)OPENSSL_sk_value(p_Var11,iVar4 + -1);
        pXVar12 = X509_NAME_dup(xn);
        lVar8 = OPENSSL_sk_set(p_Var11,iVar4 + -1,pXVar12);
        if (lVar8 == 0) break;
        local_34 = iVar4;
        iVar6 = OPENSSL_sk_num(p_Var11);
        bVar1 = iVar6 <= iVar4;
        iVar4 = iVar4 + 1;
        if (bVar1) {
          return s;
        }
      }
      X509_NAME_free(xn);
    }
  }
LAB_00ad9524:
  SSL_free(s);
                    /* catch() { ... } // from try @ 00ad94c0 with catch @ 00ad9544 */
  return (SSL *)0x0;
}

