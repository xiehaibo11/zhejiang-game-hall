
int PEM_X509_INFO_write_bio
              (BIO *bp,X509_INFO *xi,EVP_CIPHER *enc,uchar *kstr,int klen,undefined1 *cd,void *u)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  RSA *x;
  uchar *data;
  char local_460 [1024];
  
  if (enc != (EVP_CIPHER *)0x0) {
    iVar1 = EVP_CIPHER_nid(enc);
    pcVar3 = OBJ_nid2sn(iVar1);
    if (pcVar3 != (char *)0x0) goto LAB_00bce6d8;
    iVar1 = 0x71;
    iVar2 = 0x104;
    goto LAB_00bce82c;
  }
LAB_00bce6d8:
  if (xi->x_pkey == (X509_PKEY *)0x0) {
LAB_00bce7bc:
    if ((xi->x509 == (X509 *)0x0) || (iVar1 = PEM_write_bio_X509(bp,xi->x509), 0 < iVar1)) {
      iVar1 = 1;
      goto LAB_00bce834;
    }
  }
  else {
    data = (uchar *)xi->enc_data;
    if ((data == (uchar *)0x0) || (iVar1 = xi->enc_len, iVar1 < 1)) {
      x = (RSA *)EVP_PKEY_get0_RSA(xi->x_pkey->dec_pkey);
      iVar1 = PEM_write_bio_RSAPrivateKey(bp,x,enc,kstr,klen,cd,u);
joined_r0x00bce784:
      if (0 < iVar1) goto LAB_00bce7bc;
    }
    else {
      if (enc == (EVP_CIPHER *)0x0) {
        iVar1 = 0x7f;
        iVar2 = 0x111;
      }
      else {
        iVar2 = EVP_CIPHER_nid((xi->enc_cipher).cipher);
        pcVar3 = OBJ_nid2sn(iVar2);
        if (pcVar3 != (char *)0x0) {
          sVar4 = strlen(pcVar3);
          iVar2 = EVP_CIPHER_iv_length(enc);
          if (0x400 < sVar4 + (long)(iVar2 << 1) + 0x24) {
                    /* WARNING: Subroutine does not return */
            OPENSSL_die("assertion failed: strlen(objstr) + 23 + 2 * EVP_CIPHER_iv_length(enc) + 13 <= sizeof buf"
                        ,"crypto/pem/pem_info.c",0x129);
          }
          local_460[0] = '\0';
          PEM_proc_type(local_460,10);
          iVar2 = EVP_CIPHER_iv_length(enc);
          PEM_dek_info(local_460,pcVar3,iVar2,(char *)(xi->enc_cipher).iv);
          iVar1 = PEM_write_bio(bp,"RSA PRIVATE KEY",local_460,data,(long)iVar1);
          goto joined_r0x00bce784;
        }
        iVar1 = 0x71;
        iVar2 = 0x122;
      }
LAB_00bce82c:
      ERR_put_error(9,0x75,iVar1,"crypto/pem/pem_info.c",iVar2);
    }
  }
  iVar1 = 0;
LAB_00bce834:
  OPENSSL_cleanse(local_460,0x400);
  return iVar1;
}

