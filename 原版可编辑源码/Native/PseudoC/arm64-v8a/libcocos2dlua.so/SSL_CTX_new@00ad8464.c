
SSL_CTX * SSL_CTX_new(SSL_METHOD *meth)

{
  int iVar1;
  SSL_CTX *ptr;
  ssl_method_st *psVar2;
  stack_st_SSL_COMP *psVar3;
  ulong uVar4;
  lhash_st_SSL_SESSION *plVar5;
  X509_STORE *pXVar6;
  X509_VERIFY_PARAM *pXVar7;
  long lVar8;
  EVP_MD *pEVar9;
  int iVar10;
  
                    /* catch() { ... } // from try @ 00ad8424 with catch @ 00ad8468 */
  if (meth == (SSL_METHOD *)0x0) {
    iVar1 = 0xc4;
    iVar10 = 0x92a;
LAB_00ad84d4:
    ERR_put_error(0x14,0xa9,iVar1,"ssl/ssl_lib.c",iVar10);
    return (SSL_CTX *)0x0;
  }
                    /* try { // try from 00ad8484 to 00bd84eb has its CatchHandler @ 00ad8484
                       catch() { ... } // from try @ 00ad8484 with catch @ 00ad8484
                       catch() { ... } // from try @ 00ad84f4 with catch @ 00ad8484 */
  iVar1 = OPENSSL_init_ssl(0x200000,0);
  if (iVar1 == 0) {
    return (SSL_CTX *)0x0;
  }
  iVar1 = FIPS_mode();
  if ((iVar1 != 0) && (meth->version < 0x301)) {
    iVar1 = 0x8f;
    iVar10 = 0x932;
    goto LAB_00ad84d4;
  }
  iVar1 = SSL_get_ex_data_X509_STORE_CTX_idx();
  if (iVar1 < 0) {
    ERR_put_error(0x14,0xa9,0x10d,"ssl/ssl_lib.c",0x937);
    ptr = (SSL_CTX *)0x0;
  }
  else {
                    /* try { // try from 00ad84ec to 00bd84f3 has its CatchHandler @ 00ad8530 */
                    /* try { // try from 00ad84f4 to 00bd854b has its CatchHandler @ 00ad8484 */
    ptr = (SSL_CTX *)CRYPTO_zalloc(0x368,"ssl/ssl_lib.c",0x93a);
    if (ptr != (SSL_CTX *)0x0) {
      ptr->method = meth;
      ptr->client_CA = (stack_st_X509_NAME *)0x0;
      ptr->session_cache_mode = 2;
      ptr->session_cache_size = 0x5000;
      psVar2 = (*meth->get_ssl_method)((int)ptr);
      ptr->session_timeout = (long)psVar2;
      ptr->references = 1;
      psVar3 = (stack_st_SSL_COMP *)CRYPTO_THREAD_lock_new();
                    /* catch() { ... } // from try @ 00ad84ec with catch @ 00ad8530 */
      ptr[1].comp_methods = psVar3;
      if (psVar3 == (stack_st_SSL_COMP *)0x0) {
        ERR_put_error(0x14,0xa9,0x41,"ssl/ssl_lib.c",0x948);
        CRYPTO_free(ptr);
        return (SSL_CTX *)0x0;
      }
      ptr->options = 0x19000;
      *(undefined4 *)&ptr->msg_callback = 0;
      uVar4 = ssl_cert_new();
                    /* try { // try from 00ad854c to 00bd85b3 has its CatchHandler @ 00ad854c
                       catch() { ... } // from try @ 00ad854c with catch @ 00ad854c
                       catch() { ... } // from try @ 00ad85bc with catch @ 00ad854c */
      ptr->mode = uVar4;
      if (uVar4 != 0) {
        plVar5 = (lhash_st_SSL_SESSION *)OPENSSL_LH_new(&LAB_00ad8784,&LAB_00ad87a8);
        ptr->sessions = plVar5;
        if (plVar5 != (lhash_st_SSL_SESSION *)0x0) {
          pXVar6 = X509_STORE_new();
          ptr->cert_store = pXVar6;
          if (pXVar6 != (X509_STORE *)0x0) {
            pXVar7 = (X509_VERIFY_PARAM *)CTLOG_STORE_new();
            ptr->param = pXVar7;
            if (pXVar7 != (X509_VERIFY_PARAM *)0x0) {
              lVar8 = ssl_create_cipher_list
                                (ptr->method,&ptr->cipher_list,&ptr->cipher_list_by_id,
                                 "ALL:!COMPLEMENTOFDEFAULT:!eNULL",ptr->mode);
                    /* try { // try from 00ad85b4 to 00bd85bb has its CatchHandler @ 00ad85f8 */
              if ((lVar8 == 0) || (iVar1 = OPENSSL_sk_num(ptr->cipher_list), iVar1 < 1)) {
                iVar1 = 0xa1;
                iVar10 = 0x960;
                goto LAB_00ad86d8;
              }
                    /* try { // try from 00ad85bc to 00bd8613 has its CatchHandler @ 00ad854c */
              pXVar7 = X509_VERIFY_PARAM_new();
              ptr->default_verify_callback = (_func_3096 *)pXVar7;
              if (pXVar7 != (X509_VERIFY_PARAM *)0x0) {
                pEVar9 = EVP_get_digestbyname("ssl3-md5");
                *(EVP_MD **)&(ptr->ex_data).dummy = pEVar9;
                if (pEVar9 == (EVP_MD *)0x0) {
                  iVar1 = 0xf2;
                  iVar10 = 0x969;
                  goto LAB_00ad86d8;
                }
                pEVar9 = EVP_get_digestbyname("ssl3-sha1");
                ptr->rsa_md5 = pEVar9;
                if (pEVar9 == (EVP_MD *)0x0) {
                  iVar1 = 0xf3;
                  iVar10 = 0x96d;
                  goto LAB_00ad86d8;
                }
                psVar3 = (stack_st_SSL_COMP *)OPENSSL_sk_new_null();
                ptr->comp_methods = psVar3;
                    /* catch() { ... } // from try @ 00ad85b4 with catch @ 00ad85f8 */
                if ((psVar3 != (stack_st_SSL_COMP *)0x0) &&
                   (iVar1 = CRYPTO_new_ex_data(1,ptr,&ptr->ex_data), iVar1 != 0)) {
                    /* try { // try from 00ad8614 to 00bd866b has its CatchHandler @ 00ad8614
                       catch() { ... } // from try @ 00ad8614 with catch @ 00ad8614
                       catch() { ... } // from try @ 00ad8674 with catch @ 00ad8614 */
                  if (((byte)meth->get_timeout[0x68] >> 3 & 1) == 0) {
                    pEVar9 = (EVP_MD *)SSL_COMP_get_compression_methods();
                    ptr->sha1 = pEVar9;
                  }
                  ptr->tlsext_servername_callback = (_func_3097 *)0x400000004000;
                  iVar1 = RAND_bytes(ptr->tlsext_tick_aes_key,0x10);
                  if (((iVar1 < 1) ||
                      (iVar1 = RAND_bytes((uchar *)&ptr->tlsext_ticket_key_cb,0x20), iVar1 < 1)) ||
                     (iVar1 = RAND_bytes((uchar *)&ptr->tlsext_opaque_prf_input_callback_arg,0x20),
                     iVar1 < 1)) {
                    /* try { // try from 00ad866c to 00bd8673 has its CatchHandler @ 00ad86c4 */
                    *(uint *)&ptr->info_callback = *(uint *)&ptr->info_callback | 0x4000;
                  }
                    /* try { // try from 00ad8674 to 00bd86e3 has its CatchHandler @ 00ad8614 */
                  iVar1 = SSL_CTX_SRP_CTX_init(ptr);
                  if (iVar1 != 0) {
                    *(uint *)&ptr->info_callback = *(uint *)&ptr->info_callback | 0x20004;
                    *(undefined4 *)&ptr[1].extra_certs = 0xffffffff;
                    return ptr;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* catch() { ... } // from try @ 00ad866c with catch @ 00ad86c4 */
  iVar1 = 0x41;
  iVar10 = 0x9ae;
LAB_00ad86d8:
  ERR_put_error(0x14,0xa9,iVar1,"ssl/ssl_lib.c",iVar10);
  SSL_CTX_free(ptr);
  return (SSL_CTX *)0x0;
}

