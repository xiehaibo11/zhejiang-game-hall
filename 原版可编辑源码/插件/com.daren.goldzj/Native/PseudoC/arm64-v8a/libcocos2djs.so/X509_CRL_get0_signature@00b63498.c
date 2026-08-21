
void X509_CRL_get0_signature(long param_1,long *param_2,long *param_3)

{
                    /* catch() { ... } // from try @ 00b6317c with catch @ 00b63498 */
  if (param_2 != (long *)0x0) {
                    /* catch() { ... } // from try @ 00b63148 with catch @ 00b6349c */
                    /* catch() { ... } // from try @ 00b630f0 with catch @ 00b634a0 */
    *param_2 = param_1 + 0x68;
  }
  if (param_3 != (long *)0x0) {
    *param_3 = param_1 + 0x58;
  }
  return;
}

