
undefined4 ssl3_setup_key_block(long param_1)

{
  uchar *md;
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  EVP_MD_CTX *ctx;
  EVP_MD_CTX *ctx_00;
  EVP_MD *pEVar6;
  long lVar7;
  undefined4 uVar8;
  long lVar9;
  size_t __n;
  uint num;
  undefined8 local_a0;
  EVP_MD *local_98;
  EVP_CIPHER *local_90;
  uchar auStack_84 [20];
  undefined1 auStack_70 [16];
  
  if (*(int *)(*(long *)(param_1 + 0x90) + 600) != 0) {
    return 1;
  }
  iVar2 = ssl_cipher_get_evp(*(undefined8 *)(param_1 + 0x178),&local_90,&local_98,0,0,&local_a0,0);
  if (iVar2 == 0) {
    iVar2 = 0x8a;
    iVar4 = 0x10f;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x90);
    *(EVP_CIPHER **)(lVar7 + 0x268) = local_90;
    *(EVP_MD **)(lVar7 + 0x270) = local_98;
    *(undefined8 *)(lVar7 + 0x280) = local_a0;
    iVar2 = EVP_MD_size(local_98);
    if (iVar2 < 0) {
      return 0;
    }
    iVar3 = EVP_CIPHER_key_length(local_90);
    iVar4 = EVP_CIPHER_iv_length(local_90);
    iVar4 = iVar3 + iVar2 + iVar4;
    num = iVar4 * 2;
    CRYPTO_clear_free(*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x260),
                      (long)*(int *)(*(long *)(param_1 + 0x90) + 600),"ssl/s3_enc.c",0x147);
    lVar7 = *(long *)(param_1 + 0x90);
                    /* try { // try from 00ae5098 to 00be509f has its CatchHandler @ 00ae62cc */
    lVar9 = (long)(int)num;
                    /* try { // try from 00ae50a0 to 00be51db has its CatchHandler @ 00ae4dc4 */
    *(undefined8 *)(lVar7 + 0x260) = 0;
    *(undefined4 *)(lVar7 + 600) = 0;
    pvVar5 = CRYPTO_malloc(num,"ssl/s3_enc.c",0x124);
    if (pvVar5 != (void *)0x0) {
      lVar7 = *(long *)(param_1 + 0x90);
      *(uint *)(lVar7 + 600) = num;
      *(void **)(lVar7 + 0x260) = pvVar5;
      ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
      ctx_00 = (EVP_MD_CTX *)EVP_MD_CTX_new();
      if ((ctx == (EVP_MD_CTX *)0x0) || (ctx_00 == (EVP_MD_CTX *)0x0)) {
        ERR_put_error(0x14,0xee,0x41,"ssl/s3_enc.c",0x3a);
LAB_00ae52d4:
        uVar8 = 0;
      }
      else {
        EVP_MD_CTX_set_flags(ctx,8);
        if (0 < iVar4) {
          lVar7 = 0;
          __n = 0;
          iVar2 = 0x41;
          do {
            if (0xf < __n) {
              ERR_put_error(0x14,0xee,0x44,"ssl/s3_enc.c",0x42);
              uVar8 = 0;
              bVar1 = *(byte *)(param_1 + 0x1e5);
              goto joined_r0x00ae5348;
            }
            __n = __n + 1;
            memset(auStack_70,iVar2,__n);
            pEVar6 = EVP_sha1();
            iVar4 = EVP_DigestInit_ex(ctx_00,pEVar6,(ENGINE *)0x0);
            if (((((iVar4 == 0) || (iVar4 = EVP_DigestUpdate(ctx_00,auStack_70,__n), iVar4 == 0)) ||
                 (iVar4 = EVP_DigestUpdate(ctx_00,(void *)(*(long *)(param_1 + 0x178) + 8),
                                           (long)*(int *)(*(long *)(param_1 + 0x178) + 4)),
                 iVar4 == 0)) ||
                ((iVar4 = EVP_DigestUpdate(ctx_00,(void *)(*(long *)(param_1 + 0x90) + 0x90),0x20),
                 iVar4 == 0 ||
                 (iVar4 = EVP_DigestUpdate(ctx_00,(void *)(*(long *)(param_1 + 0x90) + 0xb0),0x20),
                 iVar4 == 0)))) ||
               (iVar4 = EVP_DigestFinal_ex(ctx_00,auStack_84,(uint *)0x0), iVar4 == 0))
            goto LAB_00ae52d4;
            pEVar6 = EVP_md5();
            iVar4 = EVP_DigestInit_ex(ctx,pEVar6,(ENGINE *)0x0);
                    /* try { // try from 00ae51dc to 00be51e3 has its CatchHandler @ 00ae6380 */
            if (((iVar4 == 0) ||
                (iVar4 = EVP_DigestUpdate(ctx,(void *)(*(long *)(param_1 + 0x178) + 8),
                                          (long)*(int *)(*(long *)(param_1 + 0x178) + 4)),
                iVar4 == 0)) || (iVar4 = EVP_DigestUpdate(ctx,auStack_84,0x14), iVar4 == 0))
            goto LAB_00ae52d4;
            md = (uchar *)((long)pvVar5 + lVar7);
            lVar7 = lVar7 + 0x10;
            if (lVar9 < lVar7) {
              iVar4 = EVP_DigestFinal_ex(ctx,auStack_84,(uint *)0x0);
              if (iVar4 == 0) goto LAB_00ae52d4;
              memcpy(md,auStack_84,(ulong)num);
            }
            else {
              iVar4 = EVP_DigestFinal_ex(ctx,md,(uint *)0x0);
              if (iVar4 == 0) goto LAB_00ae52d4;
            }
            iVar2 = iVar2 + 1;
            num = num - 0x10;
          } while (lVar7 < lVar9);
        }
        OPENSSL_cleanse(auStack_84,0x14);
        uVar8 = 1;
      }
      EVP_MD_CTX_free(ctx);
      EVP_MD_CTX_free(ctx_00);
      bVar1 = *(byte *)(param_1 + 0x1e5);
joined_r0x00ae5348:
      if ((bVar1 >> 3 & 1) != 0) {
        return uVar8;
      }
      lVar7 = *(long *)(param_1 + 0x90);
      *(undefined4 *)(lVar7 + 0xd0) = 1;
      lVar9 = *(long *)(*(long *)(param_1 + 0x178) + 0xd8);
      if (lVar9 != 0) {
        iVar2 = *(int *)(lVar9 + 0x1c);
        if ((iVar2 != 4) && (iVar2 != 0x20)) {
          return uVar8;
        }
        *(undefined4 *)(lVar7 + 0xd0) = 0;
        return uVar8;
      }
      return uVar8;
    }
    iVar2 = 0x41;
    iVar4 = 0x141;
  }
  ERR_put_error(0x14,0x9d,iVar2,"ssl/s3_enc.c",iVar4);
                    /* try { // try from 00ae52a4 to 00be52ab has its CatchHandler @ 00ae62f0 */
                    /* try { // try from 00ae52ac to 00be53f3 has its CatchHandler @ 00ae4dc4 */
  return 0;
}

