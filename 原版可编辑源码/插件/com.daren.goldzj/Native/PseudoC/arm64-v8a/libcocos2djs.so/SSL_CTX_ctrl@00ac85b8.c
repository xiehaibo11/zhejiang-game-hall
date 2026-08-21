
long SSL_CTX_ctrl(SSL_CTX *ctx,int cmd,long larg,void *parg)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  stack_st_X509_NAME **ppsVar6;
  SSL_METHOD *pSVar7;
  
  if (ctx == (SSL_CTX *)0x0) {
    if ((cmd == 0x66) || (cmd == 0x62)) {
      iVar2 = tls1_set_sigalgs_list(0,parg,0);
    }
    else {
      if (cmd != 0x5c) {
        return 0;
      }
      iVar2 = tls1_set_curves_list(0,0,parg);
    }
    goto LAB_00ac8634;
  }
  uVar5 = (uint)larg;
  switch(cmd) {
  case 0x10:
    *(void **)&ctx->read_ahead = parg;
    return 1;
  default:
                    /* WARNING: Could not recover jumptable at 0x00ac86ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar4 = (*ctx->method->ssl_ctx_ctrl)(ctx,cmd,larg,parg);
    return lVar4;
  case 0x14:
    lVar4 = OPENSSL_LH_num_items(ctx->sessions);
    return lVar4;
  case 0x15:
    return (long)(ctx->stats).sess_connect;
  case 0x16:
    return (long)(ctx->stats).sess_connect_good;
  case 0x17:
    return (long)(ctx->stats).sess_connect_renegotiate;
  case 0x18:
    return (long)(ctx->stats).sess_accept;
  case 0x19:
    return (long)(ctx->stats).sess_accept_good;
  case 0x1a:
    return (long)(ctx->stats).sess_accept_renegotiate;
  case 0x1b:
    return (long)(ctx->stats).sess_hit;
  case 0x1c:
    return (long)(ctx->stats).sess_cb_hit;
  case 0x1d:
    return (long)(ctx->stats).sess_miss;
  case 0x1e:
    return (long)(ctx->stats).sess_timeout;
  case 0x1f:
    return (long)(ctx->stats).sess_cache_full;
  case 0x21:
    uVar1 = *(uint *)((long)&ctx->info_callback + 4);
    *(uint *)((long)&ctx->info_callback + 4) = uVar1 | uVar5;
    return (ulong)uVar1 | larg & 0xffffffffU;
  case 0x28:
    return (long)(int)ctx->max_cert_list;
  case 0x29:
    lVar4 = ctx->max_cert_list;
    *(uint *)&ctx->max_cert_list = uVar5;
    return (long)(int)lVar4;
  case 0x2a:
    uVar3 = ctx->session_cache_size;
    ctx->session_cache_size = larg;
    return uVar3;
  case 0x2b:
    return ctx->session_cache_size;
  case 0x2c:
    uVar1 = ctx->session_cache_mode;
    ctx->session_cache_mode = uVar5;
    return (ulong)uVar1;
  case 0x2d:
    return (ulong)(uint)ctx->session_cache_mode;
  case 0x32:
    return ctx->options;
  case 0x33:
    uVar3 = ctx->options;
    ctx->options = larg;
    return uVar3;
  case 0x34:
    if (0x3e00 < larg - 0x200U) {
      return 0;
    }
    uVar1 = *(uint *)&ctx->tlsext_servername_callback;
    *(uint *)((long)&ctx->tlsext_servername_callback + 4) = uVar5;
    if (uVar1 <= uVar5) {
      return 1;
    }
    goto LAB_00ac884c;
  case 0x4e:
    uVar5 = ~uVar5 & *(uint *)((long)&ctx->info_callback + 4);
    *(uint *)((long)&ctx->info_callback + 4) = uVar5;
    return (ulong)uVar5;
  case 99:
    uVar1 = *(uint *)(ctx->mode + 0x1c);
    *(uint *)(ctx->mode + 0x1c) = uVar1 | uVar5;
    return (ulong)uVar1 | larg & 0xffffffffU;
  case 100:
    uVar5 = ~uVar5 & *(uint *)(ctx->mode + 0x1c);
    *(uint *)(ctx->mode + 0x1c) = uVar5;
    return (ulong)uVar5;
  case 0x7b:
    pSVar7 = ctx->method;
    ppsVar6 = &ctx->client_CA;
    break;
  case 0x7c:
    pSVar7 = ctx->method;
    ppsVar6 = (stack_st_X509_NAME **)((long)&ctx->client_CA + 4);
    break;
  case 0x7d:
    if ((larg == 0) || (*(uint *)((long)&ctx->tlsext_servername_callback + 4) < uVar5)) {
      return 0;
    }
LAB_00ac884c:
    *(uint *)&ctx->tlsext_servername_callback = uVar5;
    return 1;
  case 0x7e:
    if (larg - 1U < 0x20) {
      *(uint *)&ctx->tlsext_servername_arg = uVar5;
      return 1;
    }
    return 0;
  }
  iVar2 = ssl_set_version_bound(pSVar7->version,larg & 0xffffffff,ppsVar6);
LAB_00ac8634:
  return (long)iVar2;
}

