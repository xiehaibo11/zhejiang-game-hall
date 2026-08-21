
void FUN_01829160(char *param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  double dVar5;
  char *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_1 == param_2) {
LAB_018291e4:
    dVar5 = 0.0;
  }
  else {
    piVar4 = (int *)__errno();
    iVar1 = *piVar4;
    *piVar4 = 0;
    if (((DAT_01d52dc8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_01d52dc8), iVar3 != 0)) {
      DAT_01d52dc0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      __cxa_guard_release(&DAT_01d52dc8);
    }
    dVar5 = strtold_l(param_1,&local_50,DAT_01d52dc0);
    iVar3 = *piVar4;
    if (iVar3 == 0) {
      *piVar4 = iVar1;
    }
    if (local_50 != param_2) goto LAB_018291e4;
    if (iVar3 != 0x22) goto LAB_018291f4;
  }
  *param_3 = 4;
LAB_018291f4:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(dVar5);
  }
  return;
}

