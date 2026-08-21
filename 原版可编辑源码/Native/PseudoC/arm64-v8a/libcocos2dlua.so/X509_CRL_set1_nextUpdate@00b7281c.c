
void X509_CRL_set1_nextUpdate(long param_1)

{
  if (param_1 != 0) {
    x509_set1_time(param_1 + 0x28);
    return;
  }
  return;
}

