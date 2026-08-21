
long get_opened_libraray_function(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    log2Console(4,"eup","Try to find function: \'%s\'",param_2);
    lVar1 = dlsym(param_1,param_2);
    if (lVar1 == 0) {
      log2Console(5,"eup","Can not locate function: \'%s\'",param_2);
      lVar1 = dlerror();
      if (lVar1 != 0) {
        log2Console(5,"eup","Dynamic linking error: %s",lVar1);
      }
      lVar1 = 0;
    }
    else {
      log2Console(4,"eup","Address of function \'%s\': %p",param_2,lVar1);
    }
  }
  return lVar1;
}

