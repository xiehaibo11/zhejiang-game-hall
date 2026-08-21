
undefined8 FUN_00be5bc4(long param_1)

{
  void *ptr;
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_1 != 0) && (ptr = (void *)BIO_get_data(param_1), uVar1 = 0, ptr != (void *)0x0)) {
    EVP_ENCODE_CTX_free(*(undefined8 *)((long)ptr + 0x20));
    CRYPTO_free(ptr);
    BIO_set_data(param_1,0);
    BIO_set_init(param_1,0);
    uVar1 = 1;
  }
  return uVar1;
}

