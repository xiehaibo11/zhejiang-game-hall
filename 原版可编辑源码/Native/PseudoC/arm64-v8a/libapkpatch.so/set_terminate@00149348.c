
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::set_terminate(void (*)()) */

void std::set_terminate(_func_void *param_1)

{
  code *pcVar1;
  
  pcVar1 = FUN_001491d4;
  if (param_1 != (_func_void *)0x0) {
    pcVar1 = param_1;
  }
  FUN_001654f0(pcVar1,&__cxa_terminate_handler);
  return;
}

