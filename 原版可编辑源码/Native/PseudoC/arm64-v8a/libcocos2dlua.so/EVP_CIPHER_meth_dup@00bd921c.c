
undefined4 * EVP_CIPHER_meth_dup(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *__dest;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  __dest = (undefined4 *)CRYPTO_zalloc(0x58,"crypto/evp/cmeth_lib.c",0x12);
  if (__dest != (undefined4 *)0x0) {
    *__dest = uVar1;
    __dest[1] = uVar2;
    __dest[2] = uVar3;
    memcpy(__dest,param_1,0x58);
  }
  return __dest;
}

