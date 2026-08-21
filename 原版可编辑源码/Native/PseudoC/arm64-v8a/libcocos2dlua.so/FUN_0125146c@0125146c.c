
void FUN_0125146c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1251470);
  (*pcVar1)();
}

