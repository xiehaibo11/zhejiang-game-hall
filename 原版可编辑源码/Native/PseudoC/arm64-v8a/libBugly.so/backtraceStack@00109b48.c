
undefined8 backtraceStack(undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  init_dl_iterate_phdr_wrapper();
  cVar1 = backtraceStackWithLibUnwind(param_1,*(undefined8 *)(param_2 + 0x4a8),param_4);
  if (cVar1 == '\0') {
    log2Console(4,"CrashReport-Native","Failed to dump stack by libUnwind.");
    return 0;
  }
  log2Console(4,"CrashReport-Native","Stack is succesfully dumped by libUnwind.");
  log2Console(3,"CrashReport-Native","Native stack: \n%s",*(undefined8 *)(param_2 + 0x4a8));
  log2Console(4,"CrashReport-Native","Record map file of thread: %d",*(undefined4 *)(param_2 + 8));
  recordAllMapInfo(*(undefined4 *)(param_2 + 8));
  return 0;
}

