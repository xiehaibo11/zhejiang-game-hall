
long FUN_00b9ac88(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  int line;
  undefined8 uVar3;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    iVar1 = 0x43;
    line = 0xa4;
  }
  else {
    iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 8));
    if (iVar1 < 1) {
      iVar1 = 0x69;
      line = 0xa8;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 8);
      iVar1 = OPENSSL_sk_num(uVar3);
      lVar2 = OPENSSL_sk_value(uVar3,iVar1 + -1);
      if (lVar2 != 0) {
        lVar2 = dlsym(lVar2,param_2);
        if (lVar2 == 0) {
          ERR_put_error(0x25,100,0x6a,"crypto/dso/dso_dlfcn.c",0xb2);
          uVar3 = dlerror();
          ERR_add_error_data(4,"symname(",param_2,"): ",uVar3);
          return 0;
        }
        return lVar2;
      }
      iVar1 = 0x68;
      line = 0xad;
    }
  }
  ERR_put_error(0x25,100,iVar1,"crypto/dso/dso_dlfcn.c",line);
  return 0;
}

