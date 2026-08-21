
DSA * DSA_new_method(ENGINE *engine)

{
  int iVar1;
  DSA *r;
  stack_st_void *psVar2;
  BN_MONT_CTX *pBVar3;
  int line;
  code *pcVar4;
  
  r = (DSA *)CRYPTO_zalloc(0x70,"crypto/dsa/dsa_lib.c",0x42);
  if (r == (DSA *)0x0) {
    ERR_put_error(10,0x67,0x41,"crypto/dsa/dsa_lib.c",0x45);
    return (DSA *)0x0;
  }
  *(undefined4 *)&r->r = 1;
  psVar2 = (stack_st_void *)CRYPTO_THREAD_lock_new();
  (r->ex_data).sk = psVar2;
  if (psVar2 == (stack_st_void *)0x0) {
    ERR_put_error(10,0x67,0x41,"crypto/dsa/dsa_lib.c",0x4c);
    CRYPTO_free(r);
    return (DSA *)0x0;
  }
  if (DAT_01782e68 == (BN_MONT_CTX *)0x0) {
    DAT_01782e68 = (BN_MONT_CTX *)DSA_OpenSSL();
  }
  pBVar3 = DAT_01782e68;
  r->method_mont_p = DAT_01782e68;
  *(uint *)&r->priv_key = (pBVar3->Ni).top & 0xfffffbff;
  if (engine == (ENGINE *)0x0) {
    engine = ENGINE_get_default_DSA();
    *(ENGINE **)&r->references = engine;
    if (engine != (ENGINE *)0x0) goto LAB_00b17514;
    pBVar3 = r->method_mont_p;
LAB_00b17560:
    *(uint *)&r->priv_key = (pBVar3->Ni).top & 0xfffffbff;
    iVar1 = CRYPTO_new_ex_data(7,r,(CRYPTO_EX_DATA *)&r->flags);
    if (iVar1 == 0) goto LAB_00b175b4;
    pcVar4 = *(code **)&(r->method_mont_p->N).neg;
    if (pcVar4 == (code *)0x0) {
      return r;
    }
    iVar1 = (*pcVar4)(r);
    if (iVar1 != 0) {
      return r;
    }
    iVar1 = 0x46;
    line = 0x6b;
  }
  else {
    iVar1 = ENGINE_init(engine);
    if (iVar1 == 0) {
      iVar1 = 0x26;
      line = 0x56;
    }
    else {
      *(ENGINE **)&r->references = engine;
LAB_00b17514:
      pBVar3 = (BN_MONT_CTX *)ENGINE_get_DSA(engine);
      r->method_mont_p = pBVar3;
      if (pBVar3 != (BN_MONT_CTX *)0x0) goto LAB_00b17560;
      iVar1 = 0x26;
      line = 0x5f;
    }
  }
  ERR_put_error(10,0x67,iVar1,"crypto/dsa/dsa_lib.c",line);
LAB_00b175b4:
  DSA_free(r);
  return (DSA *)0x0;
}

