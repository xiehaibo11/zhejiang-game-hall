
undefined8 ssl3_change_cipher_state(long param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  COMP_CTX *pCVar5;
  void *__src;
  int iVar6;
  long lVar7;
  EVP_CIPHER *cipher;
  EVP_CIPHER_CTX *pEVar8;
  EVP_MD *md;
  COMP_METHOD *meth;
  void *__dest;
  void *pvVar9;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [64];
  
                    /* catch() { ... } // from try @ 00ae4bc4 with catch @ 00ae4cf4 */
  lVar7 = *(long *)(param_1 + 0x90);
  md = *(EVP_MD **)(lVar7 + 0x270);
  if (md == (EVP_MD *)0x0) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: m","ssl/s3_enc.c",0x7a);
  }
  cipher = *(EVP_CIPHER **)(lVar7 + 0x268);
  if (*(long *)(lVar7 + 0x280) == 0) {
    meth = (COMP_METHOD *)0x0;
    if ((param_2 & 1) != 0) goto LAB_00ae4d40;
LAB_00ae4d28:
    pEVar8 = *(EVP_CIPHER_CTX **)(param_1 + 0x138);
    if (pEVar8 == (EVP_CIPHER_CTX *)0x0) {
      pEVar8 = EVP_CIPHER_CTX_new();
      *(EVP_CIPHER_CTX **)(param_1 + 0x138) = pEVar8;
      if (pEVar8 != (EVP_CIPHER_CTX *)0x0) {
        EVP_CIPHER_CTX_reset();
        pEVar8 = *(EVP_CIPHER_CTX **)(param_1 + 0x138);
        bVar1 = false;
        goto LAB_00ae4d68;
      }
LAB_00ae4e9c:
      iVar2 = 0x41;
      iVar4 = 0xfb;
    }
    else {
      bVar1 = true;
LAB_00ae4d68:
      lVar7 = ssl_replace_hash(param_1 + 0x140,md);
      if (lVar7 != 0) {
        COMP_CTX_free(*(COMP_CTX **)(param_1 + 0x128));
        *(undefined8 *)(param_1 + 0x128) = 0;
        if (meth != (COMP_METHOD *)0x0) {
          pCVar5 = COMP_CTX_new(meth);
          *(COMP_CTX **)(param_1 + 0x128) = pCVar5;
          if (pCVar5 == (COMP_CTX *)0x0) {
            iVar2 = 0x8e;
            iVar4 = 0xb8;
            goto LAB_00ae4f7c;
          }
        }
        RECORD_LAYER_reset_write_sequence(param_1 + 0x3a0);
        lVar7 = *(long *)(param_1 + 0x90);
        __dest = (void *)(lVar7 + 0x50);
        if (bVar1) {
LAB_00ae4e0c:
          EVP_CIPHER_CTX_reset(pEVar8);
          lVar7 = *(long *)(param_1 + 0x90);
        }
        goto LAB_00ae4e18;
      }
      iVar2 = 0x44;
      iVar4 = 0xad;
    }
  }
  else {
    meth = *(COMP_METHOD **)(*(long *)(lVar7 + 0x280) + 0x10);
    if ((param_2 & 1) == 0) goto LAB_00ae4d28;
LAB_00ae4d40:
    pEVar8 = *(EVP_CIPHER_CTX **)(param_1 + 0x118);
    if (pEVar8 == (EVP_CIPHER_CTX *)0x0) {
      pEVar8 = EVP_CIPHER_CTX_new();
      *(EVP_CIPHER_CTX **)(param_1 + 0x118) = pEVar8;
      if (pEVar8 != (EVP_CIPHER_CTX *)0x0) {
        EVP_CIPHER_CTX_reset();
        pEVar8 = *(EVP_CIPHER_CTX **)(param_1 + 0x118);
                    /* try { // try from 00ae4dc4 to 00be4f23 has its CatchHandler @ 00ae4dc4
                       catch() { ... } // from try @ 00ae4dc4 with catch @ 00ae4dc4
                       catch() { ... } // from try @ 00ae4f2c with catch @ 00ae4dc4
                       catch() { ... } // from try @ 00ae50a0 with catch @ 00ae4dc4
                       catch() { ... } // from try @ 00ae52ac with catch @ 00ae4dc4
                       catch() { ... } // from try @ 00ae5750 with catch @ 00ae4dc4
                       catch() { ... } // from try @ 00ae58c8 with catch @ 00ae4dc4
                       catch() { ... } // from try @ 00ae59b0 with catch @ 00ae4dc4
                       catch() { ... } // from try @ 00ae5abc with catch @ 00ae4dc4
                       catch() { ... } // from try @ 00ae5bcc with catch @ 00ae4dc4
                       catch() { ... } // from try @ 00ae5dd8 with catch @ 00ae4dc4
                       catch() { ... } // from try @ 00ae5ef0 with catch @ 00ae4dc4
                       catch() { ... } // from try @ 00ae5f78 with catch @ 00ae4dc4
                       catch() { ... } // from try @ 00ae6018 with catch @ 00ae4dc4
                       catch() { ... } // from try @ 00ae60fc with catch @ 00ae4dc4
                       catch() { ... } // from try @ 00ae6168 with catch @ 00ae4dc4
                       catch() { ... } // from try @ 00ae61f0 with catch @ 00ae4dc4
                       catch() { ... } // from try @ 00ae62a4 with catch @ 00ae4dc4 */
        bVar1 = false;
        goto LAB_00ae4dc8;
      }
      goto LAB_00ae4e9c;
    }
    bVar1 = true;
LAB_00ae4dc8:
    lVar7 = ssl_replace_hash(param_1 + 0x120,md);
    if (lVar7 == 0) {
      iVar2 = 0x44;
      iVar4 = 0x8f;
      goto LAB_00ae4f7c;
    }
    COMP_CTX_free(*(COMP_CTX **)(param_1 + 0x130));
    *(undefined8 *)(param_1 + 0x130) = 0;
    if (meth != (COMP_METHOD *)0x0) {
      pCVar5 = COMP_CTX_new(meth);
      *(COMP_CTX **)(param_1 + 0x130) = pCVar5;
      if (pCVar5 == (COMP_CTX *)0x0) {
        iVar2 = 0x8e;
        iVar4 = 0x9a;
        goto LAB_00ae4f7c;
      }
    }
    RECORD_LAYER_reset_read_sequence(param_1 + 0x3a0);
    lVar7 = *(long *)(param_1 + 0x90);
    __dest = (void *)(lVar7 + 0xc);
    if (bVar1) goto LAB_00ae4e0c;
LAB_00ae4e18:
    pvVar9 = *(void **)(lVar7 + 0x260);
    iVar2 = EVP_MD_size(md);
    if (iVar2 < 0) goto LAB_00ae4f80;
    iVar3 = EVP_CIPHER_key_length(cipher);
    iVar4 = EVP_CIPHER_iv_length(cipher);
    if ((param_2 == 0x21) || (param_2 == 0x12)) {
      iVar6 = iVar2 * 2;
      iVar3 = iVar6 + iVar3 * 2;
      iVar4 = iVar3 + iVar4 * 2;
      __src = pvVar9;
    }
    else {
      iVar6 = iVar3 + iVar2 * 2;
      iVar3 = iVar4 + iVar3 + iVar6;
      __src = (void *)((long)pvVar9 + (long)iVar2);
      iVar4 = iVar3 + iVar4;
    }
    if (iVar4 <= *(int *)(*(long *)(param_1 + 0x90) + 600)) {
      memcpy(__dest,__src,(long)iVar2);
                    /* try { // try from 00ae4f24 to 00be4f2b has its CatchHandler @ 00ae6398 */
      EVP_CipherInit_ex(pEVar8,cipher,(ENGINE *)0x0,(uchar *)((long)pvVar9 + (long)iVar6),
                        (uchar *)((long)pvVar9 + (long)iVar3),param_2 & 2);
                    /* try { // try from 00ae4f2c to 00be4fa7 has its CatchHandler @ 00ae4dc4 */
      OPENSSL_cleanse(auStack_90,0x40);
      OPENSSL_cleanse(auStack_a0,0x10);
      return 1;
    }
    iVar2 = 0x44;
    iVar4 = 0xde;
  }
LAB_00ae4f7c:
  ERR_put_error(0x14,0x81,iVar2,"ssl/s3_enc.c",iVar4);
LAB_00ae4f80:
  OPENSSL_cleanse(auStack_90,0x40);
  OPENSSL_cleanse(auStack_a0,0x10);
                    /* try { // try from 00ae4fa8 to 00be4fbb has its CatchHandler @ 00ae6384 */
  return 0;
}

