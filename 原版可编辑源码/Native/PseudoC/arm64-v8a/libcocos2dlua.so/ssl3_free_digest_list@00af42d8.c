
void ssl3_free_digest_list(long param_1)

{
  long lVar1;
  
  BIO_free(*(BIO **)(*(long *)(param_1 + 0x90) + 0xd8));
  lVar1 = *(long *)(param_1 + 0x90);
  *(undefined8 *)(lVar1 + 0xd8) = 0;
  EVP_MD_CTX_free(*(undefined8 *)(lVar1 + 0xe0));
  *(undefined8 *)(*(long *)(param_1 + 0x90) + 0xe0) = 0;
  return;
}

