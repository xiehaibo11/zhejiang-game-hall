
void SSL_CTX_set0_ctlog_store(long param_1,undefined8 param_2)

{
  CTLOG_STORE_free(*(undefined8 *)(param_1 + 0x188));
  *(undefined8 *)(param_1 + 0x188) = param_2;
  return;
}

