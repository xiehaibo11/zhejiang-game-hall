
void engine_table_unregister(long *param_1,undefined8 param_2)

{
  CRYPTO_THREAD_write_lock(global_engine_lock);
  if (*param_1 != 0) {
    OPENSSL_LH_doall_arg(*param_1,FUN_00bd7528,param_2);
  }
  CRYPTO_THREAD_unlock(global_engine_lock);
  return;
}

