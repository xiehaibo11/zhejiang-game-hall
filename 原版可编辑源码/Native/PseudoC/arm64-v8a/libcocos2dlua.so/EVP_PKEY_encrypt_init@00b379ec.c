
int EVP_PKEY_encrypt_init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  long lVar2;
  
  if (((ctx == (EVP_PKEY_CTX *)0x0) || (lVar2 = *(long *)ctx, lVar2 == 0)) ||
     (*(long *)(lVar2 + 0x98) == 0)) {
    ERR_put_error(6,0x8b,0x96,"crypto/evp/pmeth_fn.c",0x8b);
    iVar1 = -2;
  }
  else {
    *(undefined4 *)(ctx + 0x20) = 0x100;
    if (*(code **)(lVar2 + 0x90) == (code *)0x0) {
      iVar1 = 1;
    }
    else {
      iVar1 = (**(code **)(lVar2 + 0x90))(ctx);
      if (iVar1 < 1) {
        *(undefined4 *)(ctx + 0x20) = 0;
      }
    }
  }
  return iVar1;
}

