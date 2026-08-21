
EVP_PKEY_CTX * EVP_PKEY_CTX_dup(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  EVP_PKEY_CTX *ptr;
  undefined8 uVar2;
  code *pcVar3;
  
  if ((*(long *)ctx != 0) && (*(long *)(*(long *)ctx + 0x10) != 0)) {
    if ((*(ENGINE **)(ctx + 8) == (ENGINE *)0x0) ||
       (iVar1 = ENGINE_init(*(ENGINE **)(ctx + 8)), iVar1 != 0)) {
      ptr = CRYPTO_malloc(0x50,"crypto/evp/pmeth_lib.c",0xeb);
      if (ptr == (EVP_PKEY_CTX *)0x0) {
        return (EVP_PKEY_CTX *)0x0;
      }
      uVar2 = *(undefined8 *)ctx;
      *(undefined8 *)(ptr + 8) = *(undefined8 *)(ctx + 8);
      *(undefined8 *)ptr = uVar2;
      uVar2 = 0;
      if (*(long *)(ctx + 0x10) != 0) {
        EVP_PKEY_up_ref();
        uVar2 = *(undefined8 *)(ctx + 0x10);
      }
      *(undefined8 *)(ptr + 0x10) = uVar2;
      uVar2 = 0;
      if (*(long *)(ctx + 0x18) != 0) {
        EVP_PKEY_up_ref();
        uVar2 = *(undefined8 *)(ctx + 0x18);
      }
      *(undefined8 *)(ptr + 0x18) = uVar2;
      *(undefined8 *)(ptr + 0x28) = 0;
      *(undefined8 *)(ptr + 0x30) = 0;
      *(undefined4 *)(ptr + 0x20) = *(undefined4 *)(ctx + 0x20);
      iVar1 = (**(code **)(*(long *)ctx + 0x10))(ptr,ctx);
      if (0 < iVar1) {
        return ptr;
      }
      if ((*(long *)ptr != 0) && (pcVar3 = *(code **)(*(long *)ptr + 0x18), pcVar3 != (code *)0x0))
      {
        (*pcVar3)(ptr);
      }
      EVP_PKEY_free(*(EVP_PKEY **)(ptr + 0x10));
      EVP_PKEY_free(*(EVP_PKEY **)(ptr + 0x18));
      ENGINE_finish(*(ENGINE **)(ptr + 8));
      CRYPTO_free(ptr);
    }
    else {
      ERR_put_error(6,0x9c,0x26,"crypto/evp/pmeth_lib.c",0xe7);
    }
  }
  return (EVP_PKEY_CTX *)0x0;
}

