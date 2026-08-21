
undefined8 backtraceStackMini(undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  log2Console(4,"CrashReport-Native","init_dl_iterate_phdr_wrapper.");
  init_dl_iterate_phdr_wrapper();
  cVar1 = miniBacktraceStackWithLibUnwind(param_1,*(undefined8 *)(param_2 + 0x4a8),param_4);
  if (cVar1 == '\0') {
    log2Console(3,"CrashReport-Native","Failed to mini dump stack by libUnwind.");
    return 0;
  }
  log2Console(3,"CrashReport-Native","mini backtrace: Stack is succesfully dumped by libUnwind.");
  log2Console(3,"CrashReport-Native","mini backtrace:Native stack: \n%s",
              *(undefined8 *)(param_2 + 0x4a8));
  return 0;
}

