
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::uncaught_exceptions() */

void std::uncaught_exceptions(void)

{
  __cxa_uncaught_exceptions();
  return;
}

