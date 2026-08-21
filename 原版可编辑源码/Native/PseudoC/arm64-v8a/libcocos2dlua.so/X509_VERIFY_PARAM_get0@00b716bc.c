
undefined ** X509_VERIFY_PARAM_get0(int param_1)

{
  undefined **ppuVar1;
  
  if (param_1 < 5) {
    return &PTR_s_default_013f3c58_8_016c0908 + (long)param_1 * 0xe;
  }
  ppuVar1 = (undefined **)OPENSSL_sk_value(DAT_01784f98,param_1 + -5);
  return ppuVar1;
}

