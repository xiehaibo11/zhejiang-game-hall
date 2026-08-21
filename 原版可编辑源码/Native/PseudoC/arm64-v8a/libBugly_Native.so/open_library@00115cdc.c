
long open_library(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    log2Console(4,"eup","Try to open library: %s",param_1);
    lVar1 = dlopen(param_1,1);
    if (lVar1 != 0) {
      log2Console(4,"eup","Library \'%s\' is opened.",param_1);
      return lVar1;
    }
    log2Console(5,"eup","Can not open library: %s",param_1);
    lVar1 = dlerror();
    if (lVar1 != 0) {
      log2Console(5,"eup","Dynamic linking error: %s",lVar1);
    }
  }
  return 0;
}

