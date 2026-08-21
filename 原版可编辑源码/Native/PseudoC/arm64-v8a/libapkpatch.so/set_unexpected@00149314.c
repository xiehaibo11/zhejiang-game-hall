
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::set_unexpected(void (*)()) */

void std::set_unexpected(_func_void *param_1)

{
  code *pcVar1;
  
  pcVar1 = FUN_001492f4;
  if (param_1 != (_func_void *)0x0) {
    pcVar1 = param_1;
  }
  FUN_001654f0(pcVar1,&__cxa_unexpected_handler);
  return;
}

