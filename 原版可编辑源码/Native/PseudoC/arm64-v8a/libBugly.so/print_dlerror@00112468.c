
void print_dlerror(void)

{
  long lVar1;
  
  lVar1 = dlerror();
  if (lVar1 != 0) {
    log2Console(5,"CrashReport-Native","Dynamic linking error: %s",lVar1);
    return;
  }
  return;
}

