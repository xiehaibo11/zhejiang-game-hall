
void X509_CRL_get0_signature(long param_1,long *param_2,long *param_3)

{
  if (param_2 != (long *)0x0) {
    *param_2 = param_1 + 0x68;
  }
  if (param_3 != (long *)0x0) {
    *param_3 = param_1 + 0x58;
  }
  return;
}

