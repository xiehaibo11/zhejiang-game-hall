
void FUN_0183328c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1833290);
  (*pcVar1)();
}

