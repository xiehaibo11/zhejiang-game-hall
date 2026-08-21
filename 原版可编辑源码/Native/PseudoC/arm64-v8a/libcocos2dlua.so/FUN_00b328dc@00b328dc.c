
undefined8 FUN_00b328dc(EVP_CIPHER_CTX *param_1,uchar *param_2)

{
  int len;
  long lVar1;
  int *piVar2;
  
  lVar1 = EVP_CIPHER_CTX_get_cipher_data();
  len = EVP_CIPHER_CTX_key_length(param_1);
  piVar2 = (int *)EVP_CIPHER_CTX_get_cipher_data(param_1);
  RC2_set_key((RC2_KEY *)(lVar1 + 4),len,param_2,*piVar2);
  return 1;
}

