
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bf769c(long param_1)

{
  long ****pppplVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  long lVar5;
  char *pcVar6;
  long ****pppplVar7;
  long ***ppplVar8;
  long *plVar9;
  int *piVar10;
  uint uVar11;
  int *__s;
  long ***local_1018;
  long ***local_1010;
  int local_1008 [1024];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  piVar4 = (int *)__errno();
LAB_00bf76f4:
  do {
    lVar5 = read(*(int *)(param_1 + 0x348),local_1008,0x1000);
    while (lVar5 != -1) {
      piVar2 = (int *)((long)local_1008 + lVar5);
      piVar10 = local_1008;
      if (piVar2 <= local_1008) goto LAB_00bf76f4;
LAB_00bf7720:
      do {
        plVar9 = *(long **)(param_1 + 0x340);
        uVar11 = 0;
        if ((piVar10[1] & 6U) != 0) {
          uVar11 = 2;
        }
        uVar3 = uVar11 | 1;
        if ((piVar10[1] & 0xfffffff9U) == 0) {
          uVar3 = uVar11;
        }
joined_r0x00bf7740:
        if (plVar9 == (long *)0x0) goto LAB_00bf7758;
        if (*piVar10 < *(int *)(plVar9 + 8)) {
          plVar9 = (long *)*plVar9;
          goto joined_r0x00bf7740;
        }
        if (*(int *)(plVar9 + 8) < *piVar10) {
          plVar9 = (long *)plVar9[1];
          goto joined_r0x00bf7740;
        }
        __s = piVar10 + 4;
        if (piVar10[3] == 0) {
          __s = (int *)plVar9[7];
          pcVar6 = strrchr((char *)__s,0x2f);
          if (pcVar6 != (char *)0x0) {
            __s = (int *)(pcVar6 + 1);
          }
        }
        pppplVar7 = (long ****)plVar9[4];
        pppplVar1 = (long ****)(plVar9 + 4);
        *(undefined4 *)(plVar9 + 6) = 1;
        local_1018 = (long ***)&local_1018;
        local_1010 = (long ***)&local_1018;
        if (pppplVar1 != pppplVar7) {
          local_1010 = (long ***)plVar9[5];
          *local_1010 = (long **)&local_1018;
          ppplVar8 = pppplVar7[1];
          plVar9[5] = (long)ppplVar8;
          *ppplVar8 = (long **)pppplVar1;
          pppplVar7[1] = (long ***)&local_1018;
          local_1018 = (long ***)pppplVar7;
          while ((long ****)local_1018 != &local_1018) {
            *local_1018[1] = (long *)*local_1018;
            (*local_1018)[1] = (long *)local_1018[1];
            *local_1018 = (long **)pppplVar1;
            ppplVar8 = (long ***)plVar9[5];
            local_1018[1] = (long **)ppplVar8;
            *ppplVar8 = (long **)local_1018;
            plVar9[5] = (long)local_1018;
            (*(code *)local_1018[-1])(local_1018 + -0xe,__s,uVar3,0);
          }
          pppplVar7 = (long ****)plVar9[4];
        }
        *(undefined4 *)(plVar9 + 6) = 0;
        if (pppplVar1 == pppplVar7) {
          FUN_00bf71d0(plVar9,param_1);
          piVar10 = (int *)((long)piVar10 + (ulong)(uint)piVar10[3] + 0x10);
          if (piVar2 <= piVar10) break;
          goto LAB_00bf7720;
        }
LAB_00bf7758:
        piVar10 = (int *)((long)piVar10 + (ulong)(uint)piVar10[3] + 0x10);
      } while (piVar10 < piVar2);
      lVar5 = read(*(int *)(param_1 + 0x348),local_1008,0x1000);
    }
    if (*piVar4 != 4) {
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}

