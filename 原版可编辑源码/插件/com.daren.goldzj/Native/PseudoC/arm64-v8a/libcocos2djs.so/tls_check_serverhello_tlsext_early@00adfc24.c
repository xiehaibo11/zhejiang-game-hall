
undefined4
tls_check_serverhello_tlsext_early
          (int *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  uchar *data;
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  HMAC_CTX *ctx;
  EVP_CIPHER_CTX *ctx_00;
  EVP_MD *md;
  EVP_CIPHER *cipher;
  uchar *out;
  SSL_SESSION *pSVar8;
  undefined4 uVar9;
  void *__src;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  uchar *puVar16;
  uchar auStack_b0 [64];
  int local_70;
  int local_6c;
  uchar *local_68;
  
  lVar11 = *param_2;
  uVar13 = param_2[1];
  if ((*(byte *)((long)param_1 + 0x1e5) >> 6 & 1) == 0) {
    iVar3 = ssl_security(param_1,10,0,0,0);
  }
  else {
    iVar3 = 0;
  }
  *param_4 = 0;
  param_1[0xa1] = 0;
  uVar15 = uVar13 - 2;
  **(ulong **)(param_1 + 0x24) = **(ulong **)(param_1 + 0x24) & 0xfffffffffffffdff;
  if (uVar13 < 2) {
    return 0;
  }
  if (*param_1 < 0x301) {
    return 0;
  }
  if (uVar15 < 4) {
    bVar2 = false;
    uVar9 = 0xffffffff;
LAB_00ae012c:
    uVar7 = 0;
    if (bVar2) {
      uVar7 = uVar9;
    }
    return uVar7;
  }
  bVar2 = false;
  uVar9 = 0xffffffff;
  uVar13 = uVar15;
  puVar16 = (uchar *)(lVar11 + 2);
LAB_00ae00c8:
  if (iVar3 != 0) {
    do {
      if ((uVar13 & 0xfffffffffffffffe) == 2) {
        return 0xffffffff;
      }
      uVar1 = (uint)CONCAT11(puVar16[2],puVar16[3]);
      uVar14 = (ulong)uVar1;
      uVar12 = uVar13 - 4;
      uVar13 = uVar12 - uVar14;
      if (uVar12 < uVar14) {
        return 0;
      }
      data = puVar16 + 4;
      if (CONCAT11(*puVar16,puVar16[1]) == 0x17) {
        **(ulong **)(param_1 + 0x24) = **(ulong **)(param_1 + 0x24) | 0x200;
LAB_00adfd3c:
        puVar16 = data + uVar14;
      }
      else {
        if (CONCAT11(*puVar16,puVar16[1]) != 0x23) goto LAB_00adfd3c;
        if (bVar2) {
          return 0xffffffff;
        }
        if (uVar1 == 0) {
          uVar9 = 1;
          param_1[0xa1] = 1;
        }
        else {
          if (*(long *)(param_1 + 0xb0) == 0) goto LAB_00adfd7c;
          uVar9 = 2;
        }
        bVar2 = true;
        uVar13 = uVar12;
        puVar16 = data;
      }
      if (uVar13 < 4) goto LAB_00ae012c;
    } while( true );
  }
  do {
    if ((uVar15 & 0xfffffffffffffffe) == 2) {
      return 0xffffffff;
    }
                    /* try { // try from 00ae00d8 to 00be029b has its CatchHandler @ 00ae04fc */
    uVar13 = (ulong)CONCAT11(puVar16[2],puVar16[3]);
    uVar12 = uVar15 - 4;
    uVar15 = uVar12 - uVar13;
    if (uVar12 < uVar13) {
      return 0;
    }
    if (CONCAT11(*puVar16,puVar16[1]) == 0x17) {
      **(ulong **)(param_1 + 0x24) = **(ulong **)(param_1 + 0x24) | 0x200;
    }
    bVar2 = false;
    puVar16 = puVar16 + uVar13 + 4;
    uVar9 = 0xffffffff;
  } while (3 < uVar15);
  goto LAB_00ae012c;
LAB_00adfd7c:
  __src = (void *)*param_3;
  uVar10 = param_3[1];
  lVar11 = *(long *)(param_1 + 0xb4);
  ctx = (HMAC_CTX *)HMAC_CTX_new();
  if (ctx == (HMAC_CTX *)0x0) {
LAB_00ae0080:
    uVar9 = 0xffffffff;
    goto LAB_00ae0084;
  }
  ctx_00 = EVP_CIPHER_CTX_new();
  if (ctx_00 == (EVP_CIPHER_CTX *)0x0) {
    iVar4 = -2;
LAB_00adff20:
    EVP_CIPHER_CTX_free(ctx_00);
    HMAC_CTX_free(ctx);
LAB_00adff30:
    if (iVar4 == 4) {
      param_1[0xa1] = 1;
    }
    else if (iVar4 != 3) {
                    /* try { // try from 00adff44 to 00bdff4f has its CatchHandler @ 00ae04e8 */
      if (iVar4 != 2) goto LAB_00ae0080;
      goto LAB_00adff4c;
    }
    uVar9 = 3;
  }
  else {
    if (*(code **)(lVar11 + 0x220) == (code *)0x0) {
      iVar4 = memcmp(data,(void *)(lVar11 + 0x1d0),0x10);
      if (iVar4 != 0) goto LAB_00adff18;
      md = EVP_sha256();
      iVar4 = HMAC_Init_ex(ctx,(void *)(lVar11 + 0x1e0),0x20,md,(ENGINE *)0x0);
      if (0 < iVar4) {
        cipher = EVP_aes_256_cbc();
        iVar4 = EVP_DecryptInit_ex(ctx_00,cipher,(ENGINE *)0x0,(uchar *)(lVar11 + 0x200),
                                   puVar16 + 0x14);
        if (0 < iVar4) goto LAB_00adfe6c;
      }
LAB_00adff0c:
      iVar4 = -1;
      goto LAB_00adff20;
    }
    iVar4 = (**(code **)(lVar11 + 0x220))(param_1,data,puVar16 + 0x14,ctx_00,ctx,0);
    if (iVar4 < 0) goto LAB_00adff0c;
    if (iVar4 == 0) {
LAB_00adff18:
      iVar4 = 2;
      goto LAB_00adff20;
    }
    if (iVar4 == 2) {
      bVar2 = true;
    }
    else {
LAB_00adfe6c:
      bVar2 = false;
    }
    iVar4 = HMAC_size(ctx);
    local_70 = iVar4;
    if (iVar4 < 0) goto LAB_00adff0c;
    iVar5 = EVP_CIPHER_CTX_iv_length(ctx_00);
    if ((int)uVar1 <= iVar4 + iVar5 + 0x10) goto LAB_00adff18;
    iVar5 = uVar1 - iVar4;
    iVar6 = HMAC_Update(ctx,data,(long)iVar5);
                    /* catch() { ... } // from try @ 00ae0074 with catch @ 00adfed4
                       catch() { ... } // from try @ 00ae0458 with catch @ 00adfed4
                       catch() { ... } // from try @ 00ae0480 with catch @ 00adfed4 */
    if ((iVar6 < 1) || (iVar6 = HMAC_Final(ctx,auStack_b0,(uint *)0x0), iVar6 < 1))
    goto LAB_00adff0c;
    HMAC_CTX_free(ctx);
    iVar4 = CRYPTO_memcmp(auStack_b0,data + iVar5,(long)iVar4);
    if (iVar4 != 0) {
      EVP_CIPHER_CTX_free(ctx_00);
      goto LAB_00adff4c;
    }
    iVar6 = EVP_CIPHER_CTX_iv_length(ctx_00);
    local_68 = puVar16 + (long)iVar6 + 0x14;
    iVar4 = EVP_CIPHER_CTX_iv_length(ctx_00);
    iVar4 = (iVar5 + -0x10) - iVar4;
    out = CRYPTO_malloc(iVar4,"ssl/t1_lib.c",0xc82);
                    /* try { // try from 00adffc8 to 00be0007 has its CatchHandler @ 00ae04f4 */
    if ((out == (uchar *)0x0) ||
       (iVar4 = EVP_DecryptUpdate(ctx_00,out,&local_6c,puVar16 + (long)iVar6 + 0x14,iVar4),
       iVar4 < 1)) {
      EVP_CIPHER_CTX_free(ctx_00);
                    /* try { // try from 00ae006c to 00be0073 has its CatchHandler @ 00ae0488 */
                    /* try { // try from 00ae0074 to 00be00d7 has its CatchHandler @ 00adfed4 */
      CRYPTO_free(out);
      goto LAB_00ae0080;
    }
    iVar4 = EVP_DecryptFinal(ctx_00,out + local_6c,&local_70);
    if (0 < iVar4) {
      local_6c = local_6c + local_70;
      EVP_CIPHER_CTX_free(ctx_00);
      local_68 = out;
      pSVar8 = d2i_SSL_SESSION((SSL_SESSION **)0x0,&local_68,(long)local_6c);
      CRYPTO_free(out);
      if (pSVar8 == (SSL_SESSION *)0x0) {
        ERR_clear_error();
        goto LAB_00adff4c;
      }
      iVar4 = (int)uVar10;
      if (iVar4 != 0) {
        memcpy(pSVar8->master_key + 0x28,__src,(long)iVar4);
      }
      *(int *)(pSVar8->master_key + 0x24) = iVar4;
      *param_4 = pSVar8;
      iVar4 = 3;
      if (bVar2) {
        iVar4 = 4;
      }
      goto LAB_00adff30;
    }
    EVP_CIPHER_CTX_free(ctx_00);
    CRYPTO_free(out);
LAB_00adff4c:
    param_1[0xa1] = 1;
    uVar9 = 2;
  }
LAB_00ae0084:
  bVar2 = true;
  puVar16 = data + uVar14;
  if (uVar13 < 4) goto LAB_00ae012c;
  goto LAB_00ae00c8;
}

