
DH * DH_new_method(ENGINE *engine)

{
  int iVar1;
  DH *dh;
  ENGINE *pEVar2;
  DH_METHOD *pDVar3;
  int line;
  code *pcVar4;
  
  dh = (DH *)CRYPTO_zalloc(0x90,"crypto/dh/dh_lib.c",0x39);
  if (dh == (DH *)0x0) {
    ERR_put_error(5,0x69,0x41,"crypto/dh/dh_lib.c",0x3c);
    return (DH *)0x0;
  }
  dh->references = 1;
  pEVar2 = (ENGINE *)CRYPTO_THREAD_lock_new();
  dh->engine = pEVar2;
  if (pEVar2 == (ENGINE *)0x0) {
    ERR_put_error(5,0x69,0x41,"crypto/dh/dh_lib.c",0x43);
    CRYPTO_free(dh);
    return (DH *)0x0;
  }
  if (DAT_01782e60 == (DH_METHOD *)0x0) {
    DAT_01782e60 = DH_OpenSSL();
  }
  pDVar3 = DAT_01782e60;
  *(DH_METHOD **)&(dh->ex_data).dummy = DAT_01782e60;
  dh->flags = pDVar3->flags;
  if (engine == (ENGINE *)0x0) {
    engine = ENGINE_get_default_DH();
    dh->meth = (DH_METHOD *)engine;
    if ((DH_METHOD *)engine != (DH_METHOD *)0x0) goto LAB_00b15e1c;
    pDVar3 = *(DH_METHOD **)&(dh->ex_data).dummy;
LAB_00b15e68:
    dh->flags = pDVar3->flags;
    iVar1 = CRYPTO_new_ex_data(6,dh,&dh->ex_data);
    if (iVar1 == 0) goto LAB_00b15eb8;
    pcVar4 = *(code **)(*(long *)&(dh->ex_data).dummy + 0x20);
    if (pcVar4 == (code *)0x0) {
      return dh;
    }
    iVar1 = (*pcVar4)(dh);
    if (iVar1 != 0) {
      return dh;
    }
    iVar1 = 0x46;
    line = 0x62;
  }
  else {
    iVar1 = ENGINE_init(engine);
    if (iVar1 == 0) {
      iVar1 = 0x26;
      line = 0x4d;
    }
    else {
      dh->meth = (DH_METHOD *)engine;
LAB_00b15e1c:
      pDVar3 = ENGINE_get_DH(engine);
      *(DH_METHOD **)&(dh->ex_data).dummy = pDVar3;
      if (pDVar3 != (DH_METHOD *)0x0) goto LAB_00b15e68;
      iVar1 = 0x26;
      line = 0x56;
    }
  }
  ERR_put_error(5,0x69,iVar1,"crypto/dh/dh_lib.c",line);
LAB_00b15eb8:
  DH_free(dh);
  return (DH *)0x0;
}

