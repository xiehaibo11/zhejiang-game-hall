
undefined8 backtraceStack(undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  
  log2Console(3,"eup","backtraceStack");
  init_dl_iterate_phdr_wrapper();
  uVar1 = backtraceStackWithLibUnwind(param_1,*(undefined8 *)(param_2 + 0x4a8),param_4);
  if ((uVar1 & 1) == 0) {
    log2Console(4,"eup","Failed to dump stack by libUnwind.");
  }
  else {
    log2Console(4,"eup","Stack is succesfully dumped by libUnwind.");
    log2Console(3,"eup","Native stack: \n%s",*(undefined8 *)(param_2 + 0x4a8));
    log2Console(4,"eup","Record map file of thread: %d",*(undefined4 *)(param_2 + 8));
    recordAllMapInfo(*(undefined4 *)(param_2 + 8));
  }
  return 0;
}

