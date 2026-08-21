
long FUN_00ba9488(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  int line;
  undefined8 uVar3;
  
                    /* try { // try from 00ba9488 to 00ca95af has its CatchHandler @ 00ba90e4 */
  if ((param_1 == 0) || (param_2 == 0)) {
    iVar1 = 0x43;
    line = 0xa4;
                    /* catch() { ... } // from try @ 00ba939c with catch @ 00ba9538 */
  }
  else {
    iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 8));
    if (iVar1 < 1) {
                    /* catch() { ... } // from try @ 00ba9468 with catch @ 00ba953c */
                    /* catch() { ... } // from try @ 00ba92e0 with catch @ 00ba9540 */
      iVar1 = 0x69;
                    /* catch() { ... } // from try @ 00ba9260 with catch @ 00ba9550 */
      line = 0xa8;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 8);
      iVar1 = OPENSSL_sk_num(uVar3);
      lVar2 = OPENSSL_sk_value(uVar3,iVar1 + -1);
      if (lVar2 != 0) {
        lVar2 = dlsym(lVar2,param_2);
        if (lVar2 == 0) {
                    /* catch() { ... } // from try @ 00ba940c with catch @ 00ba94dc */
                    /* catch() { ... } // from try @ 00ba930c with catch @ 00ba94e0 */
          ERR_put_error(0x25,100,0x6a,"crypto/dso/dso_dlfcn.c",0xb2);
          uVar3 = dlerror();
                    /* catch() { ... } // from try @ 00ba93b8 with catch @ 00ba9500 */
          ERR_add_error_data(4,"symname(",param_2,&DAT_013f47d8,uVar3);
          return 0;
        }
        return lVar2;
      }
                    /* catch() { ... } // from try @ 00ba9130 with catch @ 00ba9568 */
      iVar1 = 0x68;
      line = 0xad;
    }
  }
  ERR_put_error(0x25,100,iVar1,"crypto/dso/dso_dlfcn.c",line);
  return 0;
}

