
void FUN_01348e98(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0,0x1348e9c);
  (*pcVar1)();
}

