
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void uv__inotify_fork(long param_1,long *param_2)

{
  long ****pppplVar1;
  long ****pppplVar2;
  int iVar3;
  long ****pppplVar4;
  long *plVar5;
  long ***ppplVar6;
  long *plVar7;
  long ***ppplVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long ***local_60;
  long ***local_58;
  long ***local_30;
  long ***local_28;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 != (long *)0x0) {
    *(long **)(param_1 + 0x340) = param_2;
    local_30 = (long ***)&local_30;
    local_28 = (long ***)&local_30;
    do {
      plVar5 = param_2;
      param_2 = (long *)*plVar5;
    } while ((long *)*plVar5 != (long *)0x0);
    plVar10 = (long *)plVar5[1];
    if ((long *)plVar5[1] != (long *)0x0) goto LAB_00bf7ef4;
    do {
      plVar11 = (long *)plVar5[2];
      plVar9 = plVar5;
      if ((plVar11 == (long *)0x0) || (plVar5 != (long *)*plVar11)) {
        for (; (plVar11 != (long *)0x0 && (plVar5 == (long *)plVar11[1]));
            plVar11 = (long *)plVar11[2]) {
          plVar5 = plVar11;
        }
      }
      while( true ) {
        plVar5 = plVar11;
        pppplVar4 = (long ****)plVar9[4];
        pppplVar1 = (long ****)(plVar9 + 4);
        *(undefined4 *)(plVar9 + 6) = 1;
        local_60 = (long ***)&local_60;
        local_58 = (long ***)&local_60;
        if (pppplVar1 != pppplVar4) {
          local_58 = (long ***)plVar9[5];
          *local_58 = (long **)&local_60;
          ppplVar6 = pppplVar4[1];
          plVar9[5] = (long)ppplVar6;
          *ppplVar6 = (long **)pppplVar1;
          pppplVar4[1] = (long ***)&local_60;
          while (local_60 = (long ***)pppplVar4, pppplVar4 != &local_60) {
            ppplVar6 = (long ***)uv__strdup(pppplVar4[-2]);
            *pppplVar4[1] = (long **)*pppplVar4;
            (*pppplVar4)[1] = (long **)pppplVar4[1];
            *pppplVar4 = (long ***)pppplVar1;
            ppplVar8 = (long ***)plVar9[5];
            pppplVar4[1] = ppplVar8;
            *ppplVar8 = (long **)pppplVar4;
            plVar9[5] = (long)pppplVar4;
            uv_fs_event_stop(pppplVar4 + -0xe);
            *pppplVar4 = (long ***)&local_30;
            pppplVar4[1] = local_28;
            *local_28 = (long **)pppplVar4;
            local_28 = (long ***)pppplVar4;
            pppplVar4[-2] = ppplVar6;
            pppplVar4 = (long ****)local_60;
          }
          pppplVar4 = (long ****)plVar9[4];
        }
        *(undefined4 *)(plVar9 + 6) = 0;
        pppplVar2 = (long ****)local_30;
        if (pppplVar1 == pppplVar4) {
          FUN_00bf71d0(plVar9,param_1);
          pppplVar2 = (long ****)local_30;
        }
        local_30 = (long ***)pppplVar2;
        if (plVar5 == (long *)0x0) {
          if (pppplVar2 == &local_30) {
            local_60 = (long ***)&local_60;
            local_58 = (long ***)&local_60;
          }
          else {
            local_58 = local_28;
            *local_28 = (long **)&local_60;
            local_60 = (long ***)pppplVar2;
            local_28 = pppplVar2[1];
            *pppplVar2[1] = (long **)&local_30;
            pppplVar2[1] = (long ***)&local_60;
          }
          goto LAB_00bf8088;
        }
        plVar10 = (long *)plVar5[1];
        if ((long *)plVar5[1] == (long *)0x0) break;
LAB_00bf7ef4:
        do {
          plVar7 = (long *)*plVar10;
          plVar9 = plVar5;
          plVar11 = plVar10;
          plVar10 = plVar7;
        } while (plVar7 != (long *)0x0);
      }
    } while( true );
  }
LAB_00bf8090:
  iVar3 = 0;
LAB_00bf8094:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3);
  while( true ) {
    pppplVar4 = (long ****)(local_60 + -0xe);
    *local_60[1] = (long *)*local_60;
    (*local_60)[1] = (long *)local_60[1];
    ppplVar6 = (long ***)local_60[-2];
    pppplVar1 = (long ****)(local_60 + -1);
    local_60[-2] = (long **)0x0;
    iVar3 = uv_fs_event_start(pppplVar4,*pppplVar1,ppplVar6,0);
    uv__free(ppplVar6);
    if (iVar3 != 0) break;
LAB_00bf8088:
    if ((long ****)local_60 == &local_60) goto LAB_00bf8090;
  }
  goto LAB_00bf8094;
}

