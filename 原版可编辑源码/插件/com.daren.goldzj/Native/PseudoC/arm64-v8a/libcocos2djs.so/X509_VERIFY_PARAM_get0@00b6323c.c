
undefined ** X509_VERIFY_PARAM_get0(int param_1)

{
  undefined **ppuVar1;
  
  if (param_1 < 5) {
    return &PTR_s_default_018c5788_8_01c859b8 + (long)param_1 * 0xe;
  }
  ppuVar1 = (undefined **)OPENSSL_sk_value(DAT_01d3b218,param_1 + -5);
  return ppuVar1;
}

