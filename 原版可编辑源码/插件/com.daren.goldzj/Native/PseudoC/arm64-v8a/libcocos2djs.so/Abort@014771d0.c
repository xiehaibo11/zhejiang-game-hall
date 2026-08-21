
/* v8::base::OS::Abort() */

void v8::base::OS::Abort(void)

{
  code *pcVar1;
  
  if (DAT_01d460e4 == '\0') {
                    /* WARNING: Subroutine does not return */
    abort();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x14771ec);
  (*pcVar1)();
}

