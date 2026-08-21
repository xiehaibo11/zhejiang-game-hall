
undefined8 X509_get0_subject_key_id(long param_1)

{
  if ((*(byte *)(param_1 + 0xd1) & 1) == 0) {
    CRYPTO_THREAD_write_lock(*(undefined8 *)(param_1 + 0x140));
    FUN_00b73bdc(param_1);
    CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x140));
  }
  return *(undefined8 *)(param_1 + 0xe0);
}

