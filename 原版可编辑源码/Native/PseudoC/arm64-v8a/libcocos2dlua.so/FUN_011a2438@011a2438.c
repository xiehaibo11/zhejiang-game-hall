
void FUN_011a2438(long param_1,long param_2)

{
  long ****pppplVar1;
  long ****pppplVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ssize_t sVar6;
  int *piVar7;
  long ***ppplVar8;
  long ***local_458;
  long ***local_450;
  undefined1 local_448 [1024];
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  do {
    do {
      sVar6 = read(*(int *)(param_2 + 0x30),local_448,0x400);
    } while (sVar6 == 0x400);
    if (sVar6 != -1) goto LAB_011a249c;
    piVar7 = (int *)__errno();
  } while (*piVar7 == 4);
  if (*piVar7 != 0xb) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
LAB_011a249c:
  local_458 = *(long ****)(param_1 + 0x1b0);
  pppplVar1 = (long ****)(param_1 + 0x1b0);
  if (pppplVar1 == (long ****)local_458) {
    local_458 = (long ***)&local_458;
    local_450 = (long ***)&local_458;
  }
  else {
    local_450 = *(long ****)(param_1 + 0x1b8);
    *local_450 = (long **)&local_458;
    ppplVar8 = (long ***)local_458[1];
    *(long ****)(param_1 + 0x1b8) = ppplVar8;
    *ppplVar8 = (long **)pppplVar1;
    local_458[1] = (long **)&local_458;
    if (&local_458 != (long ****)local_458) {
LAB_011a24e0:
      do {
        *local_458[1] = (long *)*local_458;
        (*local_458)[1] = (long *)local_458[1];
        *local_458 = (long **)pppplVar1;
        ppplVar8 = *(long ****)(param_1 + 0x1b8);
        pppplVar2 = (long ****)(local_458 + 2);
        local_458[1] = (long **)ppplVar8;
        *ppplVar8 = (long **)local_458;
        *(long ****)(param_1 + 0x1b8) = local_458;
        do {
          if (*(int *)pppplVar2 != 1) {
            ClearExclusiveLocal();
            if (*(int *)pppplVar2 == 0) goto LAB_011a2548;
            break;
          }
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppplVar2,0x10);
          if (bVar4) {
            *(undefined4 *)pppplVar2 = 0;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((long ***)local_458[-1] == (long ***)0x0) {
LAB_011a2548:
          if (&local_458 == (long ****)local_458) break;
          goto LAB_011a24e0;
        }
        (*(code *)local_458[-1])(local_458 + -0xd);
      } while (&local_458 != (long ****)local_458);
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

