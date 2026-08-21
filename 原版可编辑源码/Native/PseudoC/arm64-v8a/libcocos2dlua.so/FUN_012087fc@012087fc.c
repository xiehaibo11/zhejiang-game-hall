
void FUN_012087fc(char *param_1,char *param_2,undefined4 *param_3,int param_4)

{
  char cVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  ulonglong uVar6;
  char *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((param_1 != param_2) &&
     ((cVar1 = *param_1, cVar1 != '-' || (param_1 = param_1 + 1, param_1 != param_2)))) {
    piVar5 = (int *)__errno();
    iVar3 = *piVar5;
    *piVar5 = 0;
    if (((DAT_017942d8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_017942d8), iVar4 != 0)) {
      DAT_017942d0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      __cxa_guard_release(&DAT_017942d8);
    }
    uVar6 = strtoull_l(param_1,&local_70,param_4,DAT_017942d0);
    iVar4 = *piVar5;
    if (iVar4 == 0) {
      *piVar5 = iVar3;
    }
    if (local_70 == param_2) {
      if ((uVar6 >> 0x10 == 0) && (iVar4 != 0x22)) {
        iVar3 = -(int)uVar6;
        if (cVar1 != '-') {
          iVar3 = (int)uVar6;
        }
      }
      else {
        *param_3 = 4;
        iVar3 = 0xffff;
      }
      goto LAB_012088b4;
    }
  }
  *param_3 = 4;
  iVar3 = 0;
LAB_012088b4:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar3);
  }
  return;
}

