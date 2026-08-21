
bool ossl_ecdsa_sign(undefined8 param_1,uchar *param_2,int param_3,uchar *param_4,int *param_5,
                    BIGNUM *param_6,BIGNUM *param_7,EC_KEY *param_8)

{
  int iVar1;
  ECDSA_SIG *sig;
  uchar *local_48;
  
  local_48 = param_4;
  RAND_seed(param_2,param_3);
  sig = ECDSA_do_sign_ex(param_2,param_3,param_6,param_7,param_8);
  if (sig == (ECDSA_SIG *)0x0) {
    *param_5 = 0;
  }
  else {
    iVar1 = i2d_ECDSA_SIG(sig,&local_48);
    *param_5 = iVar1;
    ECDSA_SIG_free(sig);
  }
  return sig != (ECDSA_SIG *)0x0;
}

