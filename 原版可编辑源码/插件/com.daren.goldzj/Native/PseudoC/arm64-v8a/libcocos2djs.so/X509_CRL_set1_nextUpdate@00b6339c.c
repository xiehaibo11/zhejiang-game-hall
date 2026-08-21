
void X509_CRL_set1_nextUpdate(long param_1)

{
                    /* try { // try from 00b6339c to 00c633af has its CatchHandler @ 00b63464 */
  if (param_1 != 0) {
    x509_set1_time(param_1 + 0x28);
    return;
  }
  return;
}

