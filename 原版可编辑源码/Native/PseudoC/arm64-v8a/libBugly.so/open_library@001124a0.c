
long open_library(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    log2Console(4,"CrashReport-Native","Try to open library: %s",param_1);
    lVar1 = dlopen(param_1,1);
    if (lVar1 == 0) {
      log2Console(5,"CrashReport-Native","Can not open library: %s",param_1);
      print_dlerror();
      lVar1 = 0;
    }
    else {
      log2Console(4,"CrashReport-Native","Library \'%s\' is opened.",param_1);
    }
  }
  return lVar1;
}

