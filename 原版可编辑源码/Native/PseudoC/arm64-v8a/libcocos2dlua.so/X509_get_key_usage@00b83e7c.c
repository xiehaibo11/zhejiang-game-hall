
undefined4 X509_get_key_usage(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0xd0);
  if ((uVar2 >> 8 & 1) == 0) {
    CRYPTO_THREAD_write_lock(*(undefined8 *)(param_1 + 0x140));
    FUN_00b8305c(param_1);
    CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x140));
    uVar2 = *(uint *)(param_1 + 0xd0);
  }
  if ((uVar2 >> 1 & 1) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xd4);
  }
  return uVar1;
}

