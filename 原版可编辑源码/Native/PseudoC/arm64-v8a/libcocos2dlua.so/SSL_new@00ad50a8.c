
SSL * SSL_new(SSL_CTX *ctx)

{
  uchar *puVar1;
  ENGINE *pEVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  SSL *s;
  SSL_SESSION *pSVar6;
  _func_3151 *p_Var7;
  X509_VERIFY_PARAM *to;
  stack_st_SRTP_PROTECTION_PROFILE *psVar8;
  long lVar9;
  void *pvVar10;
  int line;
  ulong uVar11;
  SSL_METHOD *pSVar12;
  _func_3094 *p_Var13;
  cert_st *pcVar14;
  undefined8 uVar15;
  undefined1 *puVar16;
  _func_3103 *p_Var17;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  
  if (ctx == (SSL_CTX *)0x0) {
    iVar5 = 0xc3;
    line = 0x20d;
    goto LAB_00ad53ec;
  }
  if (ctx->method == (SSL_METHOD *)0x0) {
    iVar5 = 0xe4;
    line = 0x211;
    goto LAB_00ad53ec;
  }
  s = (SSL *)CRYPTO_zalloc(0x1158,"ssl/ssl_lib.c",0x215);
  if (s != (SSL *)0x0) {
    pSVar6 = (SSL_SESSION *)CRYPTO_THREAD_lock_new();
    s[6].session = pSVar6;
    if (pSVar6 == (SSL_SESSION *)0x0) {
      ERR_put_error(0x14,0xba,0x41,"ssl/ssl_lib.c",0x21b);
      CRYPTO_free(s);
      return (SSL *)0x0;
    }
    RECORD_LAYER_init(&s[1].write_hash,s);
    s->compress = (COMP_CTX *)ctx[1].app_gen_cookie_cb;
    p_Var13 = ctx->info_callback;
    *(stack_st_X509_NAME **)((long)&s->tlsext_hostname + 4) = ctx->client_CA;
    *(_func_3094 **)((long)&s->tlsext_debug_arg + 4) = p_Var13;
    uVar11 = ctx->options;
    *(undefined4 *)&s->tlsext_debug_arg = 1;
    *(ulong *)&s->tlsext_status_expected = uVar11;
    p_Var7 = (_func_3151 *)ssl_cert_dup(ctx->mode);
    s->verify_callback = p_Var7;
    if (p_Var7 != (_func_3151 *)0x0) {
      *(int *)&s[1].compress = (int)ctx->max_cert_list;
      uVar4 = *(undefined4 *)&ctx->field_0x13c;
      pcVar14 = ctx->cert;
      s->hit = ctx->read_ahead;
      *(undefined4 *)&s->field_0xac = uVar4;
      s->msg_callback_arg = pcVar14;
      *(undefined4 *)&s->verify_result = *(undefined4 *)&ctx->msg_callback;
      s[1].enc_write_ctx = (EVP_CIPHER_CTX *)ctx[1].ex_data.sk;
      uVar3 = *(uint *)((long)&ctx->msg_callback + 4);
      *(uint *)&s->info_callback = uVar3;
      if (0x20 < uVar3) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: s->sid_ctx_length <= sizeof s->sid_ctx","ssl/ssl_lib.c",0x23d
                   );
      }
      uVar15 = *(undefined8 *)ctx->sid_ctx;
      *(undefined8 *)((long)&s->psk_client_callback + 4) = *(undefined8 *)(ctx->sid_ctx + 8);
      *(undefined8 *)((long)&s->kssl_ctx + 4) = uVar15;
      pvVar10 = ctx->msg_callback_arg;
      *(undefined8 *)&s->error_code = *(undefined8 *)&ctx->verify_mode;
      *(void **)((long)&s->info_callback + 4) = pvVar10;
      (s->ex_data).sk = *(stack_st_void **)(ctx->sid_ctx + 0x10);
      *(undefined8 *)&s->debug = *(undefined8 *)(ctx->sid_ctx + 0x18);
      to = X509_VERIFY_PARAM_new();
      s->cipher_list = (stack_st_SSL_CIPHER *)to;
      if (to != (X509_VERIFY_PARAM *)0x0) {
        X509_VERIFY_PARAM_inherit(to,(X509_VERIFY_PARAM *)ctx->default_verify_callback);
        s->quiet_shutdown = *(int *)&ctx->generate_session_id;
        *(undefined4 *)((long)&s->tlsext_ocsp_exts + 4) =
             *(undefined4 *)((long)&ctx->tlsext_servername_callback + 4);
        *(undefined4 *)&s->tlsext_ocsp_exts = *(undefined4 *)&ctx->tlsext_servername_callback;
        uVar3 = *(uint *)&ctx->tlsext_servername_arg;
        *(uint *)&s->tlsext_ocsp_resp = uVar3;
        if (1 < uVar3) {
          *(undefined4 *)&s[1].compress = 1;
        }
        if (*(long *)ctx->tlsext_tick_key_name != 0) {
          SSL_set_default_read_buffer_len(s);
        }
        CRYPTO_atomic_add(&ctx->references,1,auStack_28,ctx[1].comp_methods);
        s->mode = (ulong)ctx;
        *(undefined4 *)((long)&s->next_proto_negotiated + 4) = 0;
        s->tlsext_ecpointformatlist_length = 0;
        s->tlsext_ocsp_resplen = 0;
        s->tlsext_ticket_expected = 0;
        uVar4 = *(undefined4 *)&ctx[1].extra_certs;
        *(undefined4 *)&s->tls_session_ticket_ext_cb_arg = 0;
        s->initial_ctx = (SSL_CTX *)0x0;
        *(undefined4 *)((long)&s->tlsext_ellipticcurvelist_length + 4) = uVar4;
        s->tls_session_secret_cb_arg = (void *)0x0;
        s->tls_session_secret_cb = (tls_session_secret_cb_fn)0x0;
        *(undefined4 *)&s->next_proto_negotiated = 0xffffffff;
        CRYPTO_atomic_add(&ctx->references,1,auStack_24,ctx[1].comp_methods);
        s[1].bbio = (BIO *)ctx;
        if (ctx[1].rsa_md5 != (EVP_MD *)0x0) {
          psVar8 = (stack_st_SRTP_PROTECTION_PROFILE *)
                   CRYPTO_memdup(ctx[1].rsa_md5,*(undefined8 *)&ctx[1].ex_data.dummy,"ssl/ssl_lib.c"
                                 ,0x260);
          s->srtp_profiles = psVar8;
          if (psVar8 == (stack_st_SRTP_PROTECTION_PROFILE *)0x0) goto LAB_00ad5394;
          *(undefined8 *)&s->next_proto_negotiated_len = *(undefined8 *)&ctx[1].ex_data.dummy;
        }
        if (ctx[1].sha1 != (EVP_MD *)0x0) {
          lVar9 = CRYPTO_memdup(ctx[1].sha1,ctx[1].md5,"ssl/ssl_lib.c",0x269);
          s->tlsext_heartbeat = (int)lVar9;
          s->tlsext_hb_pending = (int)((ulong)lVar9 >> 0x20);
          if (lVar9 == 0) goto LAB_00ad5394;
          s->srtp_profile = (SRTP_PROTECTION_PROFILE *)ctx[1].md5;
        }
        uVar11 = s->mode;
        s[1].rwstate = 0;
        s[1].in_handshake = 0;
        if (*(long *)(uVar11 + 0x2f8) != 0) {
          pvVar10 = CRYPTO_malloc(*(int *)(uVar11 + 0x300),"ssl/ssl_lib.c",0x276);
          s[1].init_msg = pvVar10;
          if (pvVar10 == (void *)0x0) goto LAB_00ad5394;
          memcpy(pvVar10,*(void **)(s->mode + 0x2f8),(ulong)*(uint *)(s->mode + 0x300));
          s[1].init_num = *(int *)(s->mode + 0x300);
        }
        s->max_cert_list = 0;
        s->first_packet = 0;
        s->client_version = 0;
        puVar16 = ctx->default_passwd_callback;
        *(void **)(s[6].sid_ctx + 0xc) = ctx->default_passwd_callback_userdata;
        *(undefined1 **)(s[6].sid_ctx + 4) = puVar16;
        pSVar12 = ctx->method;
        s->method = pSVar12;
        iVar5 = (*pSVar12->ssl_clear)(s);
        if (iVar5 != 0) {
          s->server = (uint)(ctx->method->ssl_connect != ssl_undefined_function);
          iVar5 = SSL_clear(s);
          if ((iVar5 != 0) &&
             (iVar5 = CRYPTO_new_ex_data(0,s,(CRYPTO_EX_DATA *)&s->max_send_fragment), iVar5 != 0))
          {
            p_Var17 = ctx->next_protos_advertised_cb;
            s->options = (ulong)ctx->next_protos_advertised_cb_arg;
            *(_func_3103 **)&s->references = p_Var17;
            s[6].sid_ctx[0x14] = '\0';
            s[6].sid_ctx[0x15] = '\0';
            s[6].sid_ctx[0x16] = '\0';
            s[6].sid_ctx[0x17] = '\0';
            s[6].sid_ctx[0x18] = '\0';
            s[6].sid_ctx[0x19] = '\0';
            s[6].sid_ctx[0x1a] = '\0';
            s[6].sid_ctx[0x1b] = '\0';
            puVar1 = *(uchar **)&ctx->quiet_shutdown;
            pEVar2 = ctx->client_cert_engine;
            if (puVar1 == (uchar *)0x0) {
LAB_00ad545c:
              s->tlsext_ellipticcurvelist = puVar1;
              s->tlsext_opaque_prf_input = pEVar2;
              return s;
            }
            iVar5 = SSL_CTX_has_client_custom_ext(s->mode,0x12);
            if (iVar5 == 0) {
              lVar9 = (*s->method->ssl_ctrl)(s,0x41,1,(void *)0x0);
              if (lVar9 != 0) goto LAB_00ad545c;
            }
            else {
              ERR_put_error(0x14,399,0xce,"ssl/ssl_lib.c",0xff3);
            }
          }
        }
      }
    }
  }
LAB_00ad5394:
  SSL_free(s);
  iVar5 = 0x41;
  line = 0x2a1;
LAB_00ad53ec:
  ERR_put_error(0x14,0xba,iVar5,"ssl/ssl_lib.c",line);
  return (SSL *)0x0;
}

