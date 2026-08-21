
uint X509_get_extension_flags(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xd0);
  if ((uVar1 >> 8 & 1) == 0) {
    CRYPTO_THREAD_write_lock(*(undefined8 *)(param_1 + 0x140));
    FUN_00b73bdc(param_1);
    CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x140));
    uVar1 = *(uint *)(param_1 + 0xd0);
  }
  return uVar1;
}

