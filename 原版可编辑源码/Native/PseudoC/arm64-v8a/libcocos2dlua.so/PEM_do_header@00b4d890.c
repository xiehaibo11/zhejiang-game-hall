
int PEM_do_header(EVP_CIPHER_INFO *cipher,uchar *data,long *len,undefined1 *callback,void *u)

{
  char *prompt;
  int iVar1;
  size_t sVar2;
  EVP_MD *md;
  EVP_CIPHER_CTX *ctx;
  char *pcVar3;
  int line;
  EVP_CIPHER *type;
  uchar auStack_490 [1024];
  uchar auStack_90 [64];
  int local_44;
  
  local_44 = (int)*len;
  if (0x7fffffff < *len) {
    iVar1 = 0x80;
    line = 0x196;
    goto LAB_00b4dad0;
  }
  if (cipher->cipher == (EVP_CIPHER *)0x0) {
    return 1;
  }
  if (callback == (undefined1 *)0x0) {
    if (u != (void *)0x0) {
      sVar2 = strlen(u);
      iVar1 = (int)sVar2;
      if (0x3ff < iVar1) {
        iVar1 = 0x400;
      }
      memcpy(auStack_490,u,(long)iVar1);
      goto joined_r0x00b4dab4;
    }
    pcVar3 = EVP_get_pw_prompt();
    prompt = "Enter PEM pass phrase:";
    if (pcVar3 != (char *)0x0) {
      prompt = pcVar3;
    }
    iVar1 = EVP_read_pw_string_min((char *)auStack_490,0,0x400,prompt,0);
    if (iVar1 == 0) {
      sVar2 = strlen((char *)auStack_490);
      iVar1 = (int)sVar2;
      goto joined_r0x00b4dab4;
    }
    ERR_put_error(9,100,0x6d,"crypto/pem/pem_lib.c",0x40);
    memset(auStack_490,0,0x400);
  }
  else {
    iVar1 = (*(code *)callback)(auStack_490,0x400,0,u);
joined_r0x00b4dab4:
    if (0 < iVar1) {
      type = cipher->cipher;
      md = EVP_md5();
      iVar1 = EVP_BytesToKey(type,md,cipher->iv,auStack_490,iVar1,1,auStack_90,(uchar *)0x0);
      if (iVar1 == 0) {
        return 0;
      }
      ctx = EVP_CIPHER_CTX_new();
      if (ctx == (EVP_CIPHER_CTX *)0x0) {
        return 0;
      }
      iVar1 = EVP_DecryptInit_ex(ctx,cipher->cipher,(ENGINE *)0x0,auStack_90,cipher->iv);
      if ((iVar1 != 0) && (iVar1 = EVP_DecryptUpdate(ctx,data,&local_44,data,local_44), iVar1 != 0))
      {
        *len = (long)local_44;
        iVar1 = EVP_DecryptFinal_ex(ctx,data + local_44,&local_44);
        if (iVar1 != 0) {
          *len = *len + (long)local_44;
          goto LAB_00b4da24;
        }
      }
      ERR_put_error(9,0x6a,0x65,"crypto/pem/pem_lib.c",0x1bd);
      iVar1 = 0;
LAB_00b4da24:
      EVP_CIPHER_CTX_free(ctx);
      OPENSSL_cleanse(auStack_490,0x400);
      OPENSSL_cleanse(auStack_90,0x40);
      return iVar1;
    }
  }
  iVar1 = 0x68;
  line = 0x1a2;
LAB_00b4dad0:
  ERR_put_error(9,0x6a,iVar1,"crypto/pem/pem_lib.c",line);
  return 0;
}

