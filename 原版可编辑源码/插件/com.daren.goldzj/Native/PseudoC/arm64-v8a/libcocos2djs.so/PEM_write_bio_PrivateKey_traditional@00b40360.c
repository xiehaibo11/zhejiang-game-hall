
int PEM_write_bio_PrivateKey_traditional
              (BIO *param_1,void *param_2,EVP_CIPHER *param_3,uchar *param_4,int param_5,
              undefined1 *param_6,void *param_7)

{
  int iVar1;
  char acStack_a0 [80];
  
  BIO_snprintf(acStack_a0,0x50,"%s PRIVATE KEY",
               *(undefined8 *)(*(long *)((long)param_2 + 0x10) + 0x10));
  iVar1 = PEM_ASN1_write_bio(i2d_PrivateKey,acStack_a0,param_1,param_2,param_3,param_4,param_5,
                             param_6,param_7);
  return iVar1;
}

