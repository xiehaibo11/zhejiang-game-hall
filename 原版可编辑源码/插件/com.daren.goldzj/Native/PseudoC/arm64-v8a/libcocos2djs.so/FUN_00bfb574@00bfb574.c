
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bfb574(long param_1,long param_2)

{
  long ****pppplVar1;
  long ****pppplVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long ****pppplVar6;
  ssize_t sVar7;
  int *piVar8;
  long ***ppplVar9;
  long ***local_418;
  long ***local_410;
  undefined1 local_408 [1024];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  while( true ) {
    do {
      sVar7 = read(*(int *)(param_2 + 0x30),local_408,0x400);
    } while (sVar7 == 0x400);
    if (((sVar7 != -1) || (piVar8 = (int *)__errno(), *piVar8 == 0xb)) || (*piVar8 == 0xb)) break;
    if (*piVar8 != 4) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  local_418 = *(long ****)(param_1 + 0x1b0);
  pppplVar1 = (long ****)(param_1 + 0x1b0);
  if (pppplVar1 == (long ****)local_418) {
    local_418 = (long ***)&local_418;
    local_410 = (long ***)&local_418;
  }
  else {
    local_410 = (long ***)*(long *****)(param_1 + 0x1b8);
    **(long *****)(param_1 + 0x1b8) = (long ***)&local_418;
    ppplVar9 = (long ***)local_418[1];
    *(long ****)(param_1 + 0x1b8) = ppplVar9;
    *ppplVar9 = (long **)pppplVar1;
    local_418[1] = (long **)&local_418;
  }
  do {
    pppplVar6 = (long ****)local_418;
    local_418 = (long ***)pppplVar6;
    if (pppplVar6 == &local_418) {
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pppplVar2 = pppplVar6 + 2;
    *pppplVar6[1] = (long **)*pppplVar6;
    (*pppplVar6)[1] = (long **)pppplVar6[1];
    *pppplVar6 = (long ***)pppplVar1;
    ppplVar9 = *(long ****)(param_1 + 0x1b8);
    pppplVar6[1] = ppplVar9;
    *ppplVar9 = (long **)pppplVar6;
    *(long *****)(param_1 + 0x1b8) = pppplVar6;
    do {
      iVar3 = *(int *)pppplVar2;
      if (iVar3 != 1) break;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppplVar2,0x10);
      if (bVar5) {
        *(undefined4 *)pppplVar2 = 0;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 != 0) {
      if (pppplVar6[-1] != (long ***)0x0) {
        (*(code *)pppplVar6[-1])(pppplVar6 + -0xd);
      }
    }
  } while( true );
}

