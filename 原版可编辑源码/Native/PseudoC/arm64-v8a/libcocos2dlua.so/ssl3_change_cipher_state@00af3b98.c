
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
  
  lVar7 = *(long *)(param_1 + 0x90);
  md = *(EVP_MD **)(lVar7 + 0x270);
  if (md == (EVP_MD *)0x0) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: m","ssl/s3_enc.c",0x7a);
  }
  cipher = *(EVP_CIPHER **)(lVar7 + 0x268);
  if (*(long *)(lVar7 + 0x280) == 0) {
    meth = (COMP_METHOD *)0x0;
    if ((param_2 & 1) != 0) goto LAB_00af3bf4;
LAB_00af3bdc:
    pEVar8 = *(EVP_CIPHER_CTX **)(param_1 + 0x138);
    if (pEVar8 == (EVP_CIPHER_CTX *)0x0) {
      pEVar8 = EVP_CIPHER_CTX_new();
      *(EVP_CIPHER_CTX **)(param_1 + 0x138) = pEVar8;
      if (pEVar8 != (EVP_CIPHER_CTX *)0x0) {
        EVP_CIPHER_CTX_reset();
        pEVar8 = *(EVP_CIPHER_CTX **)(param_1 + 0x138);
        bVar1 = false;
        goto LAB_00af3c1c;
      }
LAB_00af3d50:
      iVar2 = 0x41;
      iVar4 = 0xfb;
    }
    else {
      bVar1 = true;
LAB_00af3c1c:
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
            goto LAB_00af3e30;
          }
        }
        RECORD_LAYER_reset_write_sequence(param_1 + 0x3a0);
        lVar7 = *(long *)(param_1 + 0x90);
        __dest = (void *)(lVar7 + 0x50);
        if (bVar1) {
LAB_00af3cc0:
          EVP_CIPHER_CTX_reset(pEVar8);
          lVar7 = *(long *)(param_1 + 0x90);
        }
        goto LAB_00af3ccc;
      }
      iVar2 = 0x44;
      iVar4 = 0xad;
    }
  }
  else {
    meth = *(COMP_METHOD **)(*(long *)(lVar7 + 0x280) + 0x10);
    if ((param_2 & 1) == 0) goto LAB_00af3bdc;
LAB_00af3bf4:
    pEVar8 = *(EVP_CIPHER_CTX **)(param_1 + 0x118);
    if (pEVar8 == (EVP_CIPHER_CTX *)0x0) {
      pEVar8 = EVP_CIPHER_CTX_new();
      *(EVP_CIPHER_CTX **)(param_1 + 0x118) = pEVar8;
      if (pEVar8 != (EVP_CIPHER_CTX *)0x0) {
        EVP_CIPHER_CTX_reset();
        pEVar8 = *(EVP_CIPHER_CTX **)(param_1 + 0x118);
        bVar1 = false;
        goto LAB_00af3c7c;
      }
      goto LAB_00af3d50;
    }
    bVar1 = true;
LAB_00af3c7c:
    lVar7 = ssl_replace_hash(param_1 + 0x120,md);
    if (lVar7 == 0) {
      iVar2 = 0x44;
      iVar4 = 0x8f;
      goto LAB_00af3e30;
    }
    COMP_CTX_free(*(COMP_CTX **)(param_1 + 0x130));
    *(undefined8 *)(param_1 + 0x130) = 0;
    if (meth != (COMP_METHOD *)0x0) {
      pCVar5 = COMP_CTX_new(meth);
      *(COMP_CTX **)(param_1 + 0x130) = pCVar5;
      if (pCVar5 == (COMP_CTX *)0x0) {
        iVar2 = 0x8e;
        iVar4 = 0x9a;
        goto LAB_00af3e30;
      }
    }
    RECORD_LAYER_reset_read_sequence(param_1 + 0x3a0);
    lVar7 = *(long *)(param_1 + 0x90);
    __dest = (void *)(lVar7 + 0xc);
    if (bVar1) goto LAB_00af3cc0;
LAB_00af3ccc:
    pvVar9 = *(void **)(lVar7 + 0x260);
    iVar2 = EVP_MD_size(md);
    if (iVar2 < 0) goto LAB_00af3e34;
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
      EVP_CipherInit_ex(pEVar8,cipher,(ENGINE *)0x0,(uchar *)((long)pvVar9 + (long)iVar6),
                        (uchar *)((long)pvVar9 + (long)iVar3),param_2 & 2);
      OPENSSL_cleanse(auStack_90,0x40);
      OPENSSL_cleanse(auStack_a0,0x10);
      return 1;
    }
    iVar2 = 0x44;
    iVar4 = 0xde;
  }
LAB_00af3e30:
  ERR_put_error(0x14,0x81,iVar2,"ssl/s3_enc.c",iVar4);
LAB_00af3e34:
  OPENSSL_cleanse(auStack_90,0x40);
  OPENSSL_cleanse(auStack_a0,0x10);
  return 0;
}

