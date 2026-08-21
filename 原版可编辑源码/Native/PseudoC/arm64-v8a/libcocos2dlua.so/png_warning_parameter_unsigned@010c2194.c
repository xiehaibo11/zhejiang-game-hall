
void png_warning_parameter_unsigned(long param_1,int param_2)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  char cVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pcVar2 = (char *)png_format_number(auStack_50,&local_38);
  if ((param_2 - 1U < 8) && (lVar3 = (long)(int)(param_2 - 1U), param_1 + lVar3 * 0x20 != 0)) {
    if ((pcVar2 == (char *)0x0) || (cVar4 = *pcVar2, cVar4 == '\0')) {
      uVar5 = 0;
    }
    else {
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
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

