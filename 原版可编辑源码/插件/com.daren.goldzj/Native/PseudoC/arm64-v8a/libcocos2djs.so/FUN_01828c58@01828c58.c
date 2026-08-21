
void FUN_01828c58(char *param_1,char *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  char *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if ((param_1 != param_2) &&
     ((cVar2 = *param_1, cVar2 != '-' || (param_1 = param_1 + 1, param_1 != param_2)))) {
    piVar5 = (int *)__errno();
    iVar1 = *piVar5;
    *piVar5 = 0;
    if (((DAT_01d52dc8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_01d52dc8), iVar4 != 0)) {
      DAT_01d52dc0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      __cxa_guard_release(&DAT_01d52dc8);
    }
    uVar6 = strtoull_l(param_1,&local_60,param_4,DAT_01d52dc0);
    iVar4 = *piVar5;
    if (iVar4 == 0) {
      *piVar5 = iVar1;
    }
    if (local_60 == param_2) {
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
      goto LAB_01828d0c;
    }
  }
  *param_3 = 4;
  uVar7 = 0;
LAB_01828d0c:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}

