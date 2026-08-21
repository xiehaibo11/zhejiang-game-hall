
void FUN_01208c2c(char *param_1,char *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  char *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if ((param_1 != param_2) &&
     ((cVar2 = *param_1, cVar2 != '-' || (param_1 = param_1 + 1, param_1 != param_2)))) {
    piVar5 = (int *)__errno();
    iVar1 = *piVar5;
    *piVar5 = 0;
    if (((DAT_017942d8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_017942d8), iVar4 != 0)) {
      DAT_017942d0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      __cxa_guard_release(&DAT_017942d8);
    }
    uVar6 = strtoull_l(param_1,&local_70,param_4,DAT_017942d0);
    iVar4 = *piVar5;
    if (iVar4 == 0) {
      *piVar5 = iVar1;
    }
    if (local_70 == param_2) {
      if (iVar4 == 0x22) {
        *param_3 = 4;
        uVar7 = 0xffffffffffffffff;
      }
      else {
        uVar7 = -uVar6;
        if (cVar2 != '-') {
          uVar7 = uVar6;
        }
      }
      goto LAB_01208ce4;
    }
  }
  *param_3 = 4;
  uVar7 = 0;
LAB_01208ce4:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}

