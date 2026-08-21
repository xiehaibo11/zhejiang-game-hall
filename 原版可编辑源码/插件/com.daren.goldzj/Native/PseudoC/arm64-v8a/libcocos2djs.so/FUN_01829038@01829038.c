
void FUN_01829038(char *param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  long lVar2;
  double dVar3;
  int iVar4;
  int *piVar5;
  double dVar6;
  char *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_1 == param_2) {
    dVar6 = 0.0;
    *param_3 = 4;
  }
  else {
    piVar5 = (int *)__errno();
    iVar1 = *piVar5;
    *piVar5 = 0;
    if (((DAT_01d52dc8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_01d52dc8), iVar4 != 0)) {
      DAT_01d52dc0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      __cxa_guard_release(&DAT_01d52dc8);
    }
    dVar6 = strtod(param_1,&local_50);
    iVar4 = *piVar5;
    if (iVar4 == 0) {
      *piVar5 = iVar1;
    }
    dVar3 = 0.0;
    if ((local_50 != param_2) || (dVar3 = dVar6, iVar4 == 0x22)) {
      dVar6 = dVar3;
      *param_3 = 4;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(dVar6);
}

