
undefined8 tls_construct_new_session_ticket(long param_1)

{
  uchar *__dest;
  uchar *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uchar *in;
  EVP_CIPHER_CTX *ctx;
  HMAC_CTX *ctx_00;
  SSL_SESSION *in_00;
  EVP_CIPHER *cipher;
  EVP_MD *md;
  uchar uVar5;
  long lVar6;
  undefined8 local_90;
  undefined8 uStack_88;
  uchar auStack_78 [16];
  uint local_68;
  int local_64;
  uchar *local_60;
  uchar *local_58;
  
  lVar6 = *(long *)(param_1 + 0x2d0);
  iVar2 = i2d_SSL_SESSION(*(SSL_SESSION **)(param_1 + 0x178),(uchar **)0x0);
  if ((iVar2 == 0) || (0xff00 < iVar2)) goto LAB_00ae6df0;
                    /* try { // try from 00ae6c98 to 00be6cff has its CatchHandler @ 00ae6d84 */
  in = CRYPTO_malloc(iVar2,"ssl/statem/statem_srvr.c",0xbc2);
  if (in == (uchar *)0x0) goto LAB_00ae6df0;
  ctx = EVP_CIPHER_CTX_new();
  ctx_00 = (HMAC_CTX *)HMAC_CTX_new();
  if ((ctx == (EVP_CIPHER_CTX *)0x0) || (ctx_00 == (HMAC_CTX *)0x0)) {
    ERR_put_error(0x14,0x1ac,0x41,"ssl/statem/statem_srvr.c",0xbcb);
  }
  else {
    local_58 = in;
    iVar3 = i2d_SSL_SESSION(*(SSL_SESSION **)(param_1 + 0x178),&local_58);
    if ((iVar3 != 0) &&
       (local_60 = in, in_00 = d2i_SSL_SESSION((SSL_SESSION **)0x0,&local_60,(long)iVar2),
       in_00 != (SSL_SESSION *)0x0)) {
      in_00->master_key[0x24] = '\0';
      in_00->master_key[0x25] = '\0';
      in_00->master_key[0x26] = '\0';
      in_00->master_key[0x27] = '\0';
      iVar3 = i2d_SSL_SESSION(in_00,(uchar **)0x0);
                    /* try { // try from 00ae6d00 to 00be6dd7 has its CatchHandler @ 00ae6c18 */
      if ((iVar3 == 0) || (iVar2 < iVar3)) {
        SSL_SESSION_free(in_00);
      }
      else {
        local_58 = in;
        iVar2 = i2d_SSL_SESSION(in_00,&local_58);
        SSL_SESSION_free(in_00);
        if ((iVar2 != 0) &&
           (iVar2 = BUF_MEM_grow(*(BUF_MEM **)(param_1 + 0x78),
                                 (ulong)(*(int *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x6c) +
                                        6) + (long)iVar3 + 0x80), iVar2 != 0)) {
          local_58 = (uchar *)(*(long *)(*(long *)(param_1 + 0x78) + 8) +
                              (ulong)*(uint *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x6c));
          if (*(code **)(lVar6 + 0x220) == (code *)0x0) {
            cipher = EVP_aes_256_cbc();
            iVar2 = EVP_CIPHER_iv_length(cipher);
            iVar4 = RAND_bytes(auStack_78,iVar2);
            if ((0 < iVar4) &&
               (iVar4 = EVP_EncryptInit_ex(ctx,cipher,(ENGINE *)0x0,(uchar *)(lVar6 + 0x200),
                                           auStack_78), iVar4 != 0)) {
              md = EVP_sha256();
                    /* try { // try from 00ae6e80 to 00be6e8b has its CatchHandler @ 00ae6ef8 */
              iVar4 = HMAC_Init_ex(ctx_00,(void *)(lVar6 + 0x1e0),0x20,md,(ENGINE *)0x0);
              if (iVar4 != 0) {
                uStack_88 = *(undefined8 *)(lVar6 + 0x1d8);
                local_90 = *(undefined8 *)(lVar6 + 0x1d0);
                    /* try { // try from 00ae6e8c to 00be6f2f has its CatchHandler @ 00ae6dd8 */
                if (*(int *)(param_1 + 0xb0) != 0) goto LAB_00ae6e98;
LAB_00ae6f58:
                uVar5 = *(uchar *)(*(long *)(param_1 + 0x178) + 0xc3);
                goto LAB_00ae6f60;
              }
            }
          }
          else {
                    /* catch() { ... } // from try @ 00ae6c98 with catch @ 00ae6d84 */
            iVar2 = (**(code **)(lVar6 + 0x220))(param_1,&local_90,auStack_78,ctx,ctx_00,1);
            if (iVar2 == 0) {
              *local_58 = '\0';
              local_58[1] = '\0';
              local_58[2] = '\0';
              local_58[3] = '\0';
              local_58[4] = '\0';
              local_58[5] = '\0';
                    /* catch() { ... } // from try @ 00ae6e80 with catch @ 00ae6ef8 */
              local_58 = local_58 + 6;
              lVar6 = *(long *)(*(long *)(param_1 + 8) + 0xc0);
              iVar2 = (**(code **)(lVar6 + 0x70))
                                (param_1,4,
                                 (long)local_58 -
                                 (*(long *)(*(long *)(param_1 + 0x78) + 8) +
                                 (ulong)*(uint *)(lVar6 + 0x6c)));
              if (iVar2 != 0) {
                    /* try { // try from 00ae6f30 to 00be6fa3 has its CatchHandler @ 00ae6f30
                       catch() { ... } // from try @ 00ae6f30 with catch @ 00ae6f30
                       catch() { ... } // from try @ 00ae6fcc with catch @ 00ae6f30 */
                CRYPTO_free(in);
                EVP_CIPHER_CTX_free(ctx);
                HMAC_CTX_free(ctx_00);
                return 1;
              }
            }
            else if (-1 < iVar2) {
              iVar2 = EVP_CIPHER_CTX_iv_length(ctx);
              if (*(int *)(param_1 + 0xb0) == 0) goto LAB_00ae6f58;
LAB_00ae6e98:
              uVar5 = '\0';
LAB_00ae6f60:
              puVar1 = local_58;
              *local_58 = uVar5;
              if (*(int *)(param_1 + 0xb0) == 0) {
                uVar5 = *(uchar *)(*(long *)(param_1 + 0x178) + 0xc2);
              }
              else {
                uVar5 = '\0';
              }
              local_58[1] = uVar5;
              if (*(int *)(param_1 + 0xb0) == 0) {
                uVar5 = *(uchar *)(*(long *)(param_1 + 0x178) + 0xc1);
              }
              else {
                uVar5 = '\0';
                    /* try { // try from 00ae6fa4 to 00be6fcb has its CatchHandler @ 00ae701c */
              }
              local_58[2] = uVar5;
              if (*(int *)(param_1 + 0xb0) == 0) {
                uVar5 = *(uchar *)(*(long *)(param_1 + 0x178) + 0xc0);
              }
              else {
                uVar5 = '\0';
                    /* try { // try from 00ae6fcc to 00be7037 has its CatchHandler @ 00ae6f30 */
              }
              local_58[3] = uVar5;
              __dest = local_58 + 0x16;
              *(undefined8 *)(local_58 + 0xe) = uStack_88;
              *(undefined8 *)(local_58 + 6) = local_90;
              local_58 = local_58 + 4;
              memcpy(__dest,auStack_78,(long)iVar2);
              local_58 = __dest + iVar2;
                    /* catch() { ... } // from try @ 00ae6fa4 with catch @ 00ae701c */
              iVar2 = EVP_EncryptUpdate(ctx,local_58,&local_64,in,iVar3);
              if (iVar2 != 0) {
                local_58 = local_58 + local_64;
                iVar2 = EVP_EncryptFinal(ctx,local_58,&local_64);
                if (iVar2 != 0) {
                  local_58 = local_58 + local_64;
                  iVar2 = HMAC_Update(ctx_00,puVar1 + 6,(long)local_58 - (long)(puVar1 + 6));
                  if ((iVar2 != 0) && (iVar2 = HMAC_Final(ctx_00,local_58,&local_68), iVar2 != 0)) {
                    EVP_CIPHER_CTX_free(ctx);
                    HMAC_CTX_free(ctx_00);
                    lVar6 = *(long *)(*(long *)(param_1 + 0x78) + 8) +
                            (ulong)*(uint *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x6c);
                    local_64 = ((int)local_58 + local_68) - (int)lVar6;
                    *(char *)(lVar6 + 4) = (char)((uint)(local_64 + 0xfffa) >> 8);
                    *(char *)(lVar6 + 5) = (char)local_64 + -6;
                    local_58 = (uchar *)(lVar6 + 6);
                    iVar2 = (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x70))
                                      (param_1,4,(long)local_64);
                    if (iVar2 != 0) {
                      CRYPTO_free(in);
                      return 1;
                    }
                    ctx_00 = (HMAC_CTX *)0x0;
                    ctx = (EVP_CIPHER_CTX *)0x0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* try { // try from 00ae6dd8 to 00be6e7f has its CatchHandler @ 00ae6dd8
                       catch() { ... } // from try @ 00ae6dd8 with catch @ 00ae6dd8
                       catch() { ... } // from try @ 00ae6e8c with catch @ 00ae6dd8 */
  CRYPTO_free(in);
  EVP_CIPHER_CTX_free(ctx);
  HMAC_CTX_free(ctx_00);
LAB_00ae6df0:
  ossl_statem_set_error(param_1);
  return 0;
}

