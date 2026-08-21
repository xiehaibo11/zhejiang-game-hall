
void FUN_01836760(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1836764);
  (*pcVar1)();
}

