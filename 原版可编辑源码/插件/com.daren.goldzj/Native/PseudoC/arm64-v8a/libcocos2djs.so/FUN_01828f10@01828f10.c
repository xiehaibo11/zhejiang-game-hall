
void FUN_01828f10(char *param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  long lVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  float fVar6;
  char *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_1 == param_2) {
    fVar6 = 0.0;
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
    fVar6 = strtof(param_1,&local_50);
    iVar4 = *piVar5;
    if (iVar4 == 0) {
      *piVar5 = iVar1;
    }
    fVar3 = 0.0;
    if ((local_50 != param_2) || (fVar3 = fVar6, iVar4 == 0x22)) {
      fVar6 = fVar3;
      *param_3 = 4;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar6);
}

