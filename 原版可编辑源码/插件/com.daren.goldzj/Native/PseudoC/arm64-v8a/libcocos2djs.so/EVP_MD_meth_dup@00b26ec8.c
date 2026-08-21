
undefined4 * EVP_MD_meth_dup(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *__dest;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  __dest = (undefined4 *)CRYPTO_zalloc(0x50,"crypto/evp/evp_lib.c",0x13d);
  if (__dest != (undefined4 *)0x0) {
    *__dest = uVar1;
    __dest[1] = uVar2;
    memcpy(__dest,param_1,0x50);
  }
  return __dest;
}

