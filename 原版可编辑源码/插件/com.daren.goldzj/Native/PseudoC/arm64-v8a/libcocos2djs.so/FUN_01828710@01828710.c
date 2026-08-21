
void FUN_01828710(char *param_1,char *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  char *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (param_1 != param_2) {
    piVar4 = (int *)__errno();
    iVar1 = *piVar4;
    *piVar4 = 0;
    if (((DAT_01d52dc8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_01d52dc8), iVar3 != 0)) {
      DAT_01d52dc0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      __cxa_guard_release(&DAT_01d52dc8);
    }
    lVar5 = strtoll_l(param_1,&local_60,param_4,DAT_01d52dc0);
    iVar3 = *piVar4;
    if (iVar3 == 0) {
      *piVar4 = iVar1;
    }
    if (local_60 == param_2) {
      lVar6 = lVar5;
      if (iVar3 == 0x22) {
        *param_3 = 4;
        lVar6 = 0x7fffffffffffffff;
        if (lVar5 < 1) {
          lVar6 = -0x8000000000000000;
        }
      }
      goto LAB_018287ac;
    }
  }
  *param_3 = 4;
  lVar6 = 0;
LAB_018287ac:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar6);
  }
  return;
}

