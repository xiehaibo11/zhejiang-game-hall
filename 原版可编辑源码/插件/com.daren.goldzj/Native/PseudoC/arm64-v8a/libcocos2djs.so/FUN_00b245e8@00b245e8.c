
int FUN_00b245e8(EVP_CIPHER_CTX *param_1,ASN1_TYPE *param_2)

{
  int iVar1;
  uchar *data;
  long num;
  int local_34;
  
  if (param_2 == (ASN1_TYPE *)0x0) {
    iVar1 = 0;
  }
  else {
    EVP_CIPHER_CTX_ctrl(param_1,2,0,&local_34);
    if (local_34 == 0x28) {
      num = 0xa0;
    }
    else if (local_34 == 0x80) {
      num = 0x3a;
    }
    else if (local_34 == 0x40) {
      num = 0x78;
    }
    else {
      num = 0;
    }
    iVar1 = EVP_CIPHER_CTX_iv_length(param_1);
    data = (uchar *)EVP_CIPHER_CTX_original_iv(param_1);
    iVar1 = ASN1_TYPE_set_int_octetstring(param_2,num,data,iVar1);
  }
  return iVar1;
}

