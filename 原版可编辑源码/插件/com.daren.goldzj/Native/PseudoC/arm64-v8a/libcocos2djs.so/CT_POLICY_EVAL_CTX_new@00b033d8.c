
long CT_POLICY_EVAL_CTX_new(void)

{
  long lVar1;
  
  lVar1 = CRYPTO_zalloc(0x18,"crypto/ct/ct_policy.c",0x15);
  if (lVar1 != 0) {
    return lVar1;
  }
  ERR_put_error(0x32,0x85,0x41,"crypto/ct/ct_policy.c",0x18);
  return 0;
}

