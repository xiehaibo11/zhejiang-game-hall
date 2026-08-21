
void png_warning_parameter_signed(long param_1,int param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  char cVar4;
  ulong uVar5;
  ulong uVar6;
  char acStack_60 [24];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 010c2270 to 011c2277 has its CatchHandler @ 010c23d4 */
  lVar3 = -(long)param_4;
  if (-1 < param_4) {
    lVar3 = (long)param_4;
  }
  pcVar2 = (char *)png_format_number(acStack_60,&local_48,param_3,lVar3);
  if ((param_4 < 0) && (acStack_60 < pcVar2)) {
    pcVar2 = pcVar2 + -1;
    *pcVar2 = '-';
  }
  if ((param_2 - 1U < 8) && (lVar3 = (long)(int)(param_2 - 1U), param_1 + lVar3 * 0x20 != 0)) {
    if ((pcVar2 == (char *)0x0) || (cVar4 = *pcVar2, cVar4 == '\0')) {
      uVar5 = 0;
    }
    else {
                    /* try { // try from 010c22d4 to 011c22db has its CatchHandler @ 010c23bc */
                    /* try { // try from 010c22dc to 011c23eb has its CatchHandler @ 010c20c0 */
      uVar6 = 0;
      do {
        uVar5 = uVar6 + 1;
        *(char *)(param_1 + lVar3 * 0x20 + uVar6) = cVar4;
        if (0x1e < uVar5) break;
        cVar4 = pcVar2[uVar6 + 1];
        uVar6 = uVar5;
      } while (cVar4 != '\0');
    }
    *(undefined1 *)(param_1 + lVar3 * 0x20 + uVar5) = 0;
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

