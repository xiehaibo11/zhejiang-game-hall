
undefined8 X509_get_pathlen(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *(uint *)(param_1 + 0xd0);
  if ((uVar1 >> 8 & 1) == 0) {
    CRYPTO_THREAD_write_lock(*(undefined8 *)(param_1 + 0x140));
    FUN_00b73bdc(param_1);
    CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x140));
    uVar1 = *(uint *)(param_1 + 0xd0);
  }
  if ((uVar1 & 1) == 0) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0xc0);
  }
  return uVar2;
}

