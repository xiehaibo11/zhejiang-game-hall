
uint FUN_00b32b18(EVP_CIPHER_CTX *param_1,ASN1_TYPE *param_2)

{
  uint max_len;
  uint uVar1;
  int iVar2;
  uchar auStack_40 [16];
  long local_28;
  
  local_28 = 0;
  if (param_2 == (ASN1_TYPE *)0x0) {
    return 0;
  }
  max_len = EVP_CIPHER_CTX_iv_length(param_1);
  if (max_len < 0x11) {
    uVar1 = ASN1_TYPE_get_int_octetstring(param_2,&local_28,auStack_40,max_len);
    if (uVar1 == max_len) {
      if ((int)local_28 == 0x3a) {
        uVar1 = 0x80;
      }
      else if ((int)local_28 == 0xa0) {
        uVar1 = 0x28;
      }
      else {
        if ((int)local_28 != 0x78) {
          ERR_put_error(6,0x6d,0x6c,"crypto/evp/e_rc2.c",0x73);
          return 0xffffffff;
        }
        uVar1 = 0x40;
      }
      if (((int)max_len < 1) ||
         (iVar2 = EVP_CipherInit_ex(param_1,(EVP_CIPHER *)0x0,(ENGINE *)0x0,(uchar *)0x0,auStack_40,
                                    -1), iVar2 != 0)) {
        EVP_CIPHER_CTX_ctrl(param_1,3,uVar1,(void *)0x0);
        iVar2 = EVP_CIPHER_CTX_set_key_length(param_1,uVar1 >> 3);
        if (0 < iVar2) {
          return max_len;
        }
      }
    }
    return 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  OPENSSL_die("assertion failed: l <= sizeof(iv)","crypto/evp/e_rc2.c",0x82);
}

