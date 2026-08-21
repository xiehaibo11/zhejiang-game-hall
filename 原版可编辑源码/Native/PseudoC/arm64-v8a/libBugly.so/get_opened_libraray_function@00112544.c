
long get_opened_libraray_function(long param_1,long param_2)

{
  long lVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    log2Console(4,"CrashReport-Native","Try to find function: \'%s\'",param_2);
    lVar1 = dlsym(param_1,param_2);
    if (lVar1 == 0) {
      log2Console(5,"CrashReport-Native","Can not locate function: \'%s\'",param_2);
      print_dlerror();
      lVar1 = 0;
    }
    else {
      log2Console(4,"CrashReport-Native","Address of function \'%s\': %p",param_2,lVar1);
    }
    return lVar1;
  }
  return 0;
}

