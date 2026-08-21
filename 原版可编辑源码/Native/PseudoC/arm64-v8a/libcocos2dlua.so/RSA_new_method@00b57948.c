
RSA * RSA_new_method(ENGINE *engine)

{
  int iVar1;
  RSA *rsa;
  BN_BLINDING *pBVar2;
  RSA_METHOD *pRVar3;
  int line;
  _func_1624 *p_Var4;
  
  rsa = (RSA *)CRYPTO_zalloc(0xa8,"crypto/rsa/rsa_lib.c",0x48);
  if (rsa == (RSA *)0x0) {
    ERR_put_error(4,0x6a,0x41,"crypto/rsa/rsa_lib.c",0x4b);
    return (RSA *)0x0;
  }
  (rsa->ex_data).dummy = 1;
  pBVar2 = (BN_BLINDING *)CRYPTO_THREAD_lock_new();
  rsa->mt_blinding = pBVar2;
  if (pBVar2 == (BN_BLINDING *)0x0) {
    ERR_put_error(4,0x6a,0x41,"crypto/rsa/rsa_lib.c",0x52);
    CRYPTO_free(rsa);
    return (RSA *)0x0;
  }
  if (DAT_01784a50 == (RSA_METHOD *)0x0) {
    DAT_01784a50 = (RSA_METHOD *)RSA_PKCS1_OpenSSL();
  }
  pRVar3 = DAT_01784a50;
  rsa->meth = DAT_01784a50;
  *(uint *)&(rsa->ex_data).field_0xc = pRVar3->flags & 0xfffffbff;
  if (engine == (ENGINE *)0x0) {
    engine = ENGINE_get_default_RSA();
    rsa->engine = engine;
    if (engine != (ENGINE *)0x0) goto LAB_00b57a2c;
    pRVar3 = rsa->meth;
LAB_00b57a78:
    *(uint *)&(rsa->ex_data).field_0xc = pRVar3->flags & 0xfffffbff;
    iVar1 = CRYPTO_new_ex_data(9,rsa,&rsa->ex_data);
    if (iVar1 == 0) goto LAB_00b57acc;
    p_Var4 = rsa->meth->init;
    if (p_Var4 == (_func_1624 *)0x0) {
      return rsa;
    }
    iVar1 = (*p_Var4)(rsa);
    if (iVar1 != 0) {
      return rsa;
    }
    iVar1 = 0x46;
    line = 0x71;
  }
  else {
    iVar1 = ENGINE_init(engine);
    if (iVar1 == 0) {
      iVar1 = 0x26;
      line = 0x5c;
    }
    else {
      rsa->engine = engine;
LAB_00b57a2c:
      pRVar3 = ENGINE_get_RSA(engine);
      rsa->meth = pRVar3;
      if (pRVar3 != (RSA_METHOD *)0x0) goto LAB_00b57a78;
      iVar1 = 0x26;
      line = 0x65;
    }
  }
  ERR_put_error(4,0x6a,iVar1,"crypto/rsa/rsa_lib.c",line);
LAB_00b57acc:
  RSA_free(rsa);
  return (RSA *)0x0;
}

