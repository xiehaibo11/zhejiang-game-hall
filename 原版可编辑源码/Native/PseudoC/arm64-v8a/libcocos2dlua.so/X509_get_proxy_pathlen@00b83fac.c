
undefined8 X509_get_proxy_pathlen(long param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0xd0);
  if ((uVar2 >> 8 & 1) == 0) {
    CRYPTO_THREAD_write_lock(*(undefined8 *)(param_1 + 0x140));
    FUN_00b8305c(param_1);
    CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x140));
    uVar2 = *(uint *)(param_1 + 0xd0);
  }
  if ((uVar2 >> 10 & 1) == 0) {
    uVar1 = 0xffffffffffffffff;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 200);
  }
  return uVar1;
}

