
long ssl3_ctx_ctrl(long param_1,int param_2,ulong param_3,dh_st *param_4)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  EVP_PKEY *pkey;
  EC_GROUP *group;
  size_t sVar4;
  void *__dest;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  int line;
  BIGNUM *pBVar8;
  int local_24;
  
  lVar3 = 0;
  iVar2 = (int)param_3;
  switch(param_2) {
  case 3:
    if (param_4 == (dh_st *)0x0) {
      iVar2 = 0x43;
      line = 0xcb7;
    }
    else {
      pkey = EVP_PKEY_new();
      iVar2 = EVP_PKEY_set1_DH(pkey,param_4);
      if (iVar2 < 1) {
        EVP_PKEY_free(pkey);
      }
      else if (pkey != (EVP_PKEY *)0x0) {
        uVar1 = EVP_PKEY_security_bits(pkey);
        iVar2 = ssl_ctx_security(param_1,0x40007,uVar1,0,pkey);
        if (iVar2 == 0) {
          ERR_put_error(0x14,0x85,0x18a,"ssl/s3_lib.c",0xcc1);
          EVP_PKEY_free(pkey);
          return 1;
        }
        EVP_PKEY_free(*(EVP_PKEY **)(*(long *)(param_1 + 0x120) + 8));
        *(EVP_PKEY **)(*(long *)(param_1 + 0x120) + 8) = pkey;
        return 1;
      }
      iVar2 = 0x41;
      line = 0xcbc;
    }
    goto LAB_00abf7fc;
  case 4:
    if (param_4 == (dh_st *)0x0) {
      iVar2 = 0x43;
      line = 0xcdc;
      goto LAB_00abf7fc;
    }
    group = EC_KEY_get0_group((EC_KEY *)param_4);
    if (group == (EC_GROUP *)0x0) {
      iVar2 = 0x7c;
      line = 0xce1;
      goto LAB_00abf7fc;
    }
    local_24 = EC_GROUP_get_curve_name(group);
    if (local_24 == 0) {
      return 0;
    }
    iVar2 = tls1_set_curves(param_1 + 0x350,param_1 + 0x348,&local_24,1);
    break;
  default:
    goto switchD_00abf2dc_caseD_5;
  case 6:
    iVar2 = 0x42;
    line = 0xcce;
    goto LAB_00abf7fc;
  case 0xe:
    lVar3 = *(long *)(param_1 + 0xe8);
    if (lVar3 == 0) {
      lVar3 = OPENSSL_sk_new_null();
      *(long *)(param_1 + 0xe8) = lVar3;
      if (lVar3 == 0) {
        iVar2 = 0x41;
        line = 0xd6e;
        goto LAB_00abf7fc;
      }
    }
    iVar2 = OPENSSL_sk_push(lVar3,param_4);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = 0x41;
    line = 0xd73;
    goto LAB_00abf7fc;
  case 0x36:
    *(dh_st **)(param_1 + 0x1c8) = param_4;
    return 1;
  case 0x3a:
  case 0x3b:
    if (param_4 == (dh_st *)0x0) {
      return 0x50;
    }
    if (param_3 == 0x50) {
      if (param_2 != 0x3b) {
        uVar5 = *(undefined8 *)(param_1 + 0x1d0);
        param_4->p = *(BIGNUM **)(param_1 + 0x1d8);
        param_4->pad = (int)uVar5;
        param_4->version = (int)((ulong)uVar5 >> 0x20);
        pBVar8 = *(BIGNUM **)(param_1 + 0x1f0);
        param_4->priv_key = *(BIGNUM **)(param_1 + 0x1f8);
        param_4->pub_key = pBVar8;
        pBVar8 = *(BIGNUM **)(param_1 + 0x1e0);
        param_4->length = *(long *)(param_1 + 0x1e8);
        param_4->g = pBVar8;
        pBVar8 = *(BIGNUM **)(param_1 + 0x210);
        param_4->j = *(BIGNUM **)(param_1 + 0x218);
        param_4->q = pBVar8;
        uVar5 = *(undefined8 *)(param_1 + 0x200);
        param_4->method_mont_p = *(BN_MONT_CTX **)(param_1 + 0x208);
        *(undefined8 *)&param_4->flags = uVar5;
        return 1;
      }
      uVar5 = *(undefined8 *)param_4;
      *(BIGNUM **)(param_1 + 0x1d8) = param_4->p;
      *(undefined8 *)(param_1 + 0x1d0) = uVar5;
      pBVar8 = param_4->pub_key;
      *(BIGNUM **)(param_1 + 0x1f8) = param_4->priv_key;
      *(BIGNUM **)(param_1 + 0x1f0) = pBVar8;
      pBVar8 = param_4->g;
      *(long *)(param_1 + 0x1e8) = param_4->length;
      *(BIGNUM **)(param_1 + 0x1e0) = pBVar8;
      pBVar8 = param_4->q;
      *(BIGNUM **)(param_1 + 0x218) = param_4->j;
      *(BIGNUM **)(param_1 + 0x210) = pBVar8;
                    /* try { // try from 00abf31c to 00bbf323 has its CatchHandler @ 00abf42c */
      uVar5 = *(undefined8 *)&param_4->flags;
      *(BN_MONT_CTX **)(param_1 + 0x208) = param_4->method_mont_p;
      *(undefined8 *)(param_1 + 0x200) = uVar5;
      return 1;
                    /* try { // try from 00abf324 to 00bbf467 has its CatchHandler @ 00abf0fc */
    }
    iVar2 = 0x145;
    line = 0xcfa;
    goto LAB_00abf7fc;
  case 0x40:
    *(dh_st **)(param_1 + 0x230) = param_4;
    return 1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00abf31c with catch @ 00abf42c
                        */
  case 0x41:
    *(int *)(param_1 + 0x358) = iVar2;
    return 1;
  case 0x4e:
    *(dh_st **)(param_1 + 0x248) = param_4;
    *(ulong *)(param_1 + 0x2c0) = *(ulong *)(param_1 + 0x2c0) | 0x20;
    return 1;
  case 0x4f:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00abf154 with catch @ 00abf464
                        */
                    /* try { // try from 00abf468 to 00bbf4ff has its CatchHandler @ 00abf468
                       catch() { ... } // from try @ 00abf468 with catch @ 00abf468
                       catch() { ... } // from try @ 00abf508 with catch @ 00abf468
                       catch() { ... } // from try @ 00abf55c with catch @ 00abf468 */
    *(ulong *)(param_1 + 0x2c0) = *(ulong *)(param_1 + 0x2c0) | 0x20;
    CRYPTO_free(*(void **)(param_1 + 0x268));
    *(undefined8 *)(param_1 + 0x268) = 0;
    if (param_4 == (dh_st *)0x0) {
      return 1;
    }
    sVar4 = strlen((char *)param_4);
    if (sVar4 - 1 < 0xff) {
      pcVar6 = CRYPTO_strdup((char *)param_4,"ssl/s3_lib.c",0xd33);
      *(char **)(param_1 + 0x268) = pcVar6;
      if (pcVar6 != (char *)0x0) {
        return 1;
      }
      iVar2 = 0x44;
      line = 0xd34;
    }
    else {
      iVar2 = 0x165;
      line = 0xd30;
    }
LAB_00abf7fc:
    ERR_put_error(0x14,0x85,iVar2,"ssl/s3_lib.c",line);
    return 0;
  case 0x50:
    *(int *)(param_1 + 0x2b8) = iVar2;
    return 1;
  case 0x51:
    *(dh_st **)(param_1 + 0x2b0) = param_4;
    *(undefined1 **)(param_1 + 0x260) = &LAB_00abf840;
    return 1;
  case 0x52:
    lVar3 = *(long *)(param_1 + 0xe8);
    if ((param_3 == 0) && (lVar3 == 0)) goto switchD_00abf2dc_caseD_73;
    goto LAB_00abf6a0;
  case 0x53:
    OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0xe8),X509_free);
    *(undefined8 *)(param_1 + 0xe8) = 0;
    return 1;
                    /* try { // try from 00abf500 to 00bbf507 has its CatchHandler @ 00abf55c */
  case 0x58:
                    /* try { // try from 00abf508 to 00bbf557 has its CatchHandler @ 00abf468 */
    if (param_3 == 0) {
      iVar2 = ssl_cert_set0_chain(0,param_1,param_4);
    }
    else {
      iVar2 = ssl_cert_set1_chain(0,param_1,param_4);
    }
    break;
  case 0x59:
    if (param_3 == 0) {
      iVar2 = ssl_cert_add0_chain_cert(0,param_1,param_4);
    }
    else {
      iVar2 = ssl_cert_add1_chain_cert(0,param_1,param_4);
    }
    break;
  case 0x5b:
    iVar2 = tls1_set_curves(param_1 + 0x350,param_1 + 0x348,param_4,param_3);
    break;
  case 0x5c:
                    /* try { // try from 00abf558 to 00bbf55b has its CatchHandler @ 00abf55c */
                    /* catch() { ... } // from try @ 00abf500 with catch @ 00abf55c
                       catch() { ... } // from try @ 00abf558 with catch @ 00abf55c
                       try { // try from 00abf55c to 00bbf573 has its CatchHandler @ 00abf468 */
    iVar2 = tls1_set_curves_list(param_1 + 0x350,param_1 + 0x348,param_4);
    break;
  case 0x61:
    iVar2 = tls1_set_sigalgs(*(undefined8 *)(param_1 + 0x120),param_4,param_3,0);
    break;
  case 0x62:
    iVar2 = tls1_set_sigalgs_list(*(undefined8 *)(param_1 + 0x120),param_4,0);
    break;
  case 0x65:
    iVar2 = tls1_set_sigalgs(*(undefined8 *)(param_1 + 0x120),param_4,param_3,1);
    break;
  case 0x66:
    iVar2 = tls1_set_sigalgs_list(*(undefined8 *)(param_1 + 0x120),param_4,1);
    break;
  case 0x68:
    lVar3 = *(long *)(param_1 + 0x120);
    CRYPTO_free(*(void **)(lVar3 + 0x138));
    *(undefined8 *)(lVar3 + 0x138) = 0;
    if (param_3 == 0) {
      return 1;
    }
    if (param_4 == (dh_st *)0x0) {
      return 1;
    }
    if (0xff < param_3) {
      return 0;
    }
    __dest = CRYPTO_malloc(iVar2,"ssl/s3_lib.c",0xeae);
    *(void **)(lVar3 + 0x138) = __dest;
    if (__dest != (void *)0x0) {
      memcpy(__dest,param_4,param_3);
      *(ulong *)(lVar3 + 0x140) = param_3;
      return 1;
    }
    return 0;
  case 0x69:
    iVar2 = ssl_build_cert_chain(0,param_1,param_3 & 0xffffffff);
    break;
  case 0x6a:
    uVar5 = *(undefined8 *)(param_1 + 0x120);
    uVar7 = 0;
    goto LAB_00abf650;
  case 0x6b:
    uVar5 = *(undefined8 *)(param_1 + 0x120);
    uVar7 = 1;
LAB_00abf650:
    iVar2 = ssl_cert_set_cert_store(uVar5,param_4,uVar7,param_3 & 0xffffffff);
    break;
  case 0x73:
switchD_00abf2dc_caseD_73:
    lVar3 = *(long *)(**(long **)(param_1 + 0x120) + 0x10);
    goto LAB_00abf6a0;
  case 0x74:
    iVar2 = ssl_cert_select_current(*(undefined8 *)(param_1 + 0x120),param_4);
    break;
  case 0x75:
    iVar2 = ssl_cert_set_current(*(undefined8 *)(param_1 + 0x120),param_3);
    break;
  case 0x76:
    *(int *)(*(long *)(param_1 + 0x120) + 0x18) = iVar2;
    return 1;
  case 0x7f:
    return (long)*(int *)(param_1 + 0x358);
  case 0x80:
    lVar3 = *(long *)(param_1 + 0x228);
    goto LAB_00abf6a0;
  case 0x81:
    lVar3 = *(long *)(param_1 + 0x230);
LAB_00abf6a0:
    param_4->pad = (int)lVar3;
    param_4->version = (int)((ulong)lVar3 >> 0x20);
    lVar3 = 1;
    goto switchD_00abf2dc_caseD_5;
  }
  lVar3 = (long)iVar2;
switchD_00abf2dc_caseD_5:
  return lVar3;
}

