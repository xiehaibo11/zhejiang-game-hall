
void FUN_01348e90(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0,0x1348e94);
  (*pcVar1)();
}

