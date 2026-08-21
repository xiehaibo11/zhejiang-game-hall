
bool CRYPTO_secure_allocated(ulong param_1)

{
  bool bVar1;
  
  if (DAT_01784990 == '\x01') {
    CRYPTO_THREAD_write_lock(DAT_017849a0);
    bVar1 = DAT_017849c0 <= param_1 && param_1 < DAT_017849c0 + DAT_017849c8;
    CRYPTO_THREAD_unlock(DAT_017849a0);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

