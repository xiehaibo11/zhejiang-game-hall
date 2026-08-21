
/* v8::base::OS::DebugBreak() */

void v8::base::OS::DebugBreak(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0,0x14771f0);
  (*pcVar1)();
}

