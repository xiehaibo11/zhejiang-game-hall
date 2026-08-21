
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::set_unexpected(void (*)()) */

undefined * std::set_unexpected(_func_void *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  
  pcVar1 = FUN_018386e4;
  if (param_1 != (_func_void *)0x0) {
    pcVar1 = param_1;
  }
  do {
    puVar4 = __cxa_unexpected_handler;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(&__cxa_unexpected_handler,0x10);
    if (bVar3) {
      cVar2 = ExclusiveMonitorsStatus();
      __cxa_unexpected_handler = pcVar1;
    }
  } while (cVar2 != '\0');
  return puVar4;
}

