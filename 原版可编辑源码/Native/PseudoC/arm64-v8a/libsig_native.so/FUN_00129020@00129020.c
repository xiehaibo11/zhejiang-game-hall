
void FUN_00129020(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x129024);
  (*pcVar1)();
}

