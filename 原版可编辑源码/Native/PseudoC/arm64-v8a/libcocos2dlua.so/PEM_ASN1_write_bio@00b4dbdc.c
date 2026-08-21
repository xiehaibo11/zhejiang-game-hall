
int PEM_ASN1_write_bio(undefined1 *i2d,char *name,BIO *bp,void *x,EVP_CIPHER *enc,uchar *kstr,
                      int klen,undefined1 *cb,void *u)

{
  int iVar1;
  int iVar2;
  char *__s;
  EVP_MD *md;
  size_t sVar3;
  int line;
  uchar *out;
  uint uVar4;
  EVP_CIPHER_CTX *ctx;
  uchar auStack_4c0 [16];
  uchar auStack_4b0 [64];
  uchar local_470 [1024];
  uchar *local_70;
  int local_68 [2];
  
  local_68[0] = 0;
  local_68[1] = 0;
  if (enc == (EVP_CIPHER *)0x0) {
    __s = (char *)0x0;
LAB_00b4dc64:
    iVar1 = (*(code *)i2d)(x,0);
    if (-1 < iVar1) {
      out = CRYPTO_malloc(iVar1 + 0x14,"crypto/pem/pem_lib.c",0x141);
      if (out == (uchar *)0x0) {
        iVar2 = 0x41;
        line = 0x143;
LAB_00b4dd1c:
        ERR_put_error(9,0x69,iVar2,"crypto/pem/pem_lib.c",line);
        goto LAB_00b4dedc;
      }
      local_70 = out;
      iVar2 = (*(code *)i2d)(x,&local_70);
      local_68[1] = iVar2;
      if (enc == (EVP_CIPHER *)0x0) {
        ctx = (EVP_CIPHER_CTX *)0x0;
        local_470[0] = '\0';
LAB_00b4dd2c:
        iVar2 = PEM_write_bio(bp,name,(char *)local_470,out,(long)iVar2);
        uVar4 = (uint)(0 < iVar2);
        local_68[1] = iVar2;
        goto LAB_00b4dee4;
      }
      if (kstr == (uchar *)0x0) {
        if (cb == (undefined1 *)0x0) {
          klen = PEM_def_callback((char *)local_470,0x400,1,u);
        }
        else {
          klen = (*(code *)cb)();
        }
        if (klen < 1) {
          iVar2 = 0x6f;
          line = 0x150;
          goto LAB_00b4dd1c;
        }
        iVar2 = local_68[1];
        kstr = local_470;
      }
      RAND_add(out,iVar2,0.0);
      iVar2 = EVP_CIPHER_iv_length(enc);
      if (0x10 < iVar2) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: EVP_CIPHER_iv_length(enc) <= (int)sizeof(iv)",
                    "crypto/pem/pem_lib.c",0x15a);
      }
      iVar2 = EVP_CIPHER_iv_length(enc);
      iVar2 = RAND_bytes(auStack_4c0,iVar2);
      if (iVar2 < 1) {
LAB_00b4dedc:
        ctx = (EVP_CIPHER_CTX *)0x0;
      }
      else {
        md = EVP_md5();
        iVar2 = EVP_BytesToKey(enc,md,auStack_4c0,kstr,klen,1,auStack_4b0,(uchar *)0x0);
        if (iVar2 == 0) goto LAB_00b4dedc;
        if (kstr == local_470) {
          OPENSSL_cleanse(local_470,0x400);
        }
        sVar3 = strlen(__s);
        iVar2 = EVP_CIPHER_iv_length(enc);
        if (0x400 < sVar3 + (long)(iVar2 << 1) + 0x24) {
                    /* WARNING: Subroutine does not return */
          OPENSSL_die("assertion failed: strlen(objstr) + 23 + 2 * EVP_CIPHER_iv_length(enc) + 13 <= sizeof buf"
                      ,"crypto/pem/pem_lib.c",0x168);
        }
        local_470[0] = '\0';
        OPENSSL_strlcat(local_470,"Proc-Type: 4,",0x400);
        OPENSSL_strlcat(local_470,"ENCRYPTED",0x400);
        OPENSSL_strlcat(local_470,&DAT_013c61e6,0x400);
        iVar2 = EVP_CIPHER_iv_length(enc);
        PEM_dek_info((char *)local_470,__s,iVar2,(char *)auStack_4c0);
        ctx = EVP_CIPHER_CTX_new();
        if ((((ctx != (EVP_CIPHER_CTX *)0x0) &&
             (iVar2 = EVP_EncryptInit_ex(ctx,enc,(ENGINE *)0x0,auStack_4b0,auStack_4c0), iVar2 != 0)
             ) && (iVar2 = EVP_EncryptUpdate(ctx,out,local_68,out,local_68[1]), iVar2 != 0)) &&
           (iVar2 = EVP_EncryptFinal_ex(ctx,out + local_68[0],local_68 + 1), iVar2 != 0)) {
          iVar2 = local_68[1] + local_68[0];
          local_68[1] = iVar2;
          goto LAB_00b4dd2c;
        }
      }
      uVar4 = 0;
      goto LAB_00b4dee4;
    }
    iVar1 = 0xd;
    iVar2 = 0x13b;
  }
  else {
    iVar1 = EVP_CIPHER_nid(enc);
    __s = OBJ_nid2sn(iVar1);
    if ((__s != (char *)0x0) && (iVar1 = EVP_CIPHER_iv_length(enc), iVar1 != 0)) goto LAB_00b4dc64;
    iVar1 = 0x71;
    iVar2 = 0x135;
  }
  ERR_put_error(9,0x69,iVar1,"crypto/pem/pem_lib.c",iVar2);
  ctx = (EVP_CIPHER_CTX *)0x0;
  iVar1 = 0;
  uVar4 = 0;
  out = (uchar *)0x0;
LAB_00b4dee4:
  OPENSSL_cleanse(auStack_4b0,0x40);
  OPENSSL_cleanse(auStack_4c0,0x10);
  EVP_CIPHER_CTX_free(ctx);
  OPENSSL_cleanse(local_470,0x400);
  CRYPTO_clear_free(out,iVar1,"crypto/pem/pem_lib.c",0x184);
  return uVar4;
}

