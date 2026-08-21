
void SSL_set1_host(long param_1,undefined8 param_2)

{
  X509_VERIFY_PARAM_set1_host(*(undefined8 *)(param_1 + 0xb8),param_2,0);
  return;
}

