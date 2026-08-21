
void SSL_CTX_set0_ctlog_store(long param_1,undefined8 param_2)

{
                    /* try { // try from 00acafd0 to 00bcb013 has its CatchHandler @ 00acadbc */
  CTLOG_STORE_free(*(undefined8 *)(param_1 + 0x188));
  *(undefined8 *)(param_1 + 0x188) = param_2;
  return;
}

