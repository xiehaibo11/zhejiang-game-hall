
bool CRYPTO_secure_allocated(ulong param_1)

{
  bool bVar1;
  
  if (DAT_01d3ac10 == '\x01') {
    CRYPTO_THREAD_write_lock(DAT_01d3ac20);
    bVar1 = DAT_01d3ac40 <= param_1 && param_1 < DAT_01d3ac40 + DAT_01d3ac48;
    CRYPTO_THREAD_unlock(DAT_01d3ac20);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

