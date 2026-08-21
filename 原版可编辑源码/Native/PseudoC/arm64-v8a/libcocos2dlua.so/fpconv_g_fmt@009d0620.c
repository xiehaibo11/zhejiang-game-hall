
void fpconv_g_fmt(char *param_1,int param_2)

{
  char cVar1;
  char cVar2;
  long lVar3;
  char cVar4;
  ulong uVar5;
  char *pcVar6;
  undefined2 local_60;
  char local_5e;
  char acStack_58 [32];
  long local_38;
  
  cVar1 = DAT_017696e0;
  lVar3 = tpidr_el0;
                    /* try { // try from 009d0640 to 00ad06ab has its CatchHandler @ 009d8168 */
  local_38 = *(long *)(lVar3 + 0x28);
  cVar4 = (char)(param_2 / 10);
  local_60 = 0x2e25;
  if (param_2 + 9U < 0x13) {
    uVar5 = 2;
  }
  else {
    local_5e = cVar4 + '0';
    uVar5 = 3;
  }
  pcVar6 = (char *)(uVar5 | (ulong)&local_60);
  *pcVar6 = (char)param_2 + cVar4 * -10 + '0';
  pcVar6[1] = 'g';
  pcVar6[2] = '\0';
  if (cVar1 == '.') {
    FUN_009d0728(param_1,0xffffffffffffffff,0x20,&local_60);
  }
  else {
    FUN_009d0728(acStack_58,0x20,0x20,&local_60);
    cVar4 = DAT_017696e0;
    pcVar6 = acStack_58;
    do {
      cVar2 = *pcVar6;
      cVar1 = '.';
      if (cVar2 != cVar4) {
        cVar1 = cVar2;
      }
      *param_1 = cVar1;
      param_1 = param_1 + 1;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

