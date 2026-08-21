
void FUN_012126f0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x12126f4);
  (*pcVar1)();
}

