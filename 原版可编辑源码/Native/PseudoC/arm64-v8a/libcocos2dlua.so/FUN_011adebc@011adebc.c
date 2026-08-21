
void FUN_011adebc(long param_1)

{
  uint uVar1;
  long lVar2;
  ssize_t sVar3;
  char *pcVar4;
  int *piVar5;
  long ***ppplVar6;
  long *plVar7;
  int *__s;
  byte bVar8;
  long ****pppplVar9;
  long ***local_1078;
  long ***local_1070;
  int local_1068 [1024];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  do {
    do {
      while (sVar3 = read(*(int *)(param_1 + 0x348),local_1068,0x1000), sVar3 == -1) {
        piVar5 = (int *)__errno();
        if (*piVar5 != 4) {
          if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
      }
    } while (sVar3 < 1);
    piVar5 = local_1068;
    do {
      uVar1 = piVar5[1];
      plVar7 = *(long **)(param_1 + 0x340);
      bVar8 = 0;
      if ((uVar1 & 6) != 0) {
        bVar8 = 2;
      }
      if (plVar7 != (long *)0x0) {
LAB_011adf78:
        if (*piVar5 < (int)plVar7[8]) goto LAB_011adf8c;
        if ((int)plVar7[8] < *piVar5) {
          plVar7 = plVar7 + 1;
          goto LAB_011adf8c;
        }
        if (piVar5[3] == 0) {
          __s = (int *)plVar7[7];
          pcVar4 = strrchr((char *)__s,0x2f);
          if (pcVar4 != (char *)0x0) {
            __s = (int *)(pcVar4 + 1);
          }
        }
        else {
          __s = piVar5 + 4;
        }
        pppplVar9 = (long ****)(plVar7 + 4);
        local_1078 = *pppplVar9;
        *(undefined4 *)(plVar7 + 6) = 1;
        if (pppplVar9 == (long ****)local_1078) {
          local_1078 = (long ***)&local_1078;
          local_1070 = (long ***)&local_1078;
        }
        else {
          local_1070 = (long ***)plVar7[5];
          *local_1070 = (long **)&local_1078;
          ppplVar6 = (long ***)local_1078[1];
          plVar7[5] = (long)ppplVar6;
          *ppplVar6 = (long **)pppplVar9;
          local_1078[1] = (long **)&local_1078;
          while (&local_1078 != (long ****)local_1078) {
            *local_1078[1] = (long *)*local_1078;
            (*local_1078)[1] = (long *)local_1078[1];
            *local_1078 = (long **)pppplVar9;
            ppplVar6 = (long ***)plVar7[5];
            local_1078[1] = (long **)ppplVar6;
            *ppplVar6 = (long **)local_1078;
            plVar7[5] = (long)local_1078;
            (*(code *)local_1078[-1])(local_1078 + -0xe,__s,bVar8 | (uVar1 & 0xfffffff9) != 0,0);
          }
        }
        *(undefined4 *)(plVar7 + 6) = 0;
        FUN_011ad530(plVar7,param_1);
      }
LAB_011ae058:
      piVar5 = (int *)((long)piVar5 + (ulong)(uint)piVar5[3] + 0x10);
    } while (piVar5 < (int *)((long)local_1068 + sVar3));
  } while( true );
LAB_011adf8c:
  plVar7 = (long *)*plVar7;
  if (plVar7 == (long *)0x0) goto LAB_011ae058;
  goto LAB_011adf78;
}

