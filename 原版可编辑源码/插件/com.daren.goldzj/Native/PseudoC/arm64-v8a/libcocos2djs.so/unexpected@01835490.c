
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::unexpected() */

undefined * std::unexpected(void)

{
  FUN_01835478(__cxa_unexpected_handler);
  return __cxa_terminate_handler;
}

