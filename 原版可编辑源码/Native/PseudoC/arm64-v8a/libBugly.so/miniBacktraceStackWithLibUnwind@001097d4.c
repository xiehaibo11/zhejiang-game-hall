
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void miniBacktraceStackWithLibUnwind(int param_1,char *param_2,long param_3)

{
  char *pcVar1;
  void *pvVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  ulong uVar7;
  undefined8 uVar8;
  size_t sVar9;
  ulong local_420;
  undefined8 local_418;
  char acStack_410 [1032];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  log2Console(4,"CrashReport-Native","miniBacktraceStackWithLibUnwind.");
  pvVar2 = DAT_0013ed60;
  if (DAT_0013ed60 == (void *)0x0) {
    log2Console(5,"CrashReport-Native","Failed to allocate memory for %s","mini_backtrace_context_")
    ;
    uVar8 = 0;
  }
  else {
    memcpy((void *)((long)DAT_0013ed60 + 0xb0),(void *)(param_3 + 0xb0),0x1120);
    iVar4 = _Uaarch64_init_local(DAT_0013ed68,pvVar2);
    log2Console(4,"CrashReport-Native","Initialization of unwind finished.");
    if (iVar4 < 0) {
      log2Console(5,"CrashReport-Native","Failed to init unwind: %d.",iVar4);
      uVar8 = 0;
    }
    else {
      memset(acStack_410,0,0x402);
      iVar4 = 0;
      do {
        iVar5 = _Uaarch64_get_reg(DAT_0013ed68,0x1e,&local_420);
        if (iVar5 < 0) {
          log2Console(5,"CrashReport-Native","Failed to read IP with res: %d",iVar5);
          break;
        }
        if (local_420 < 0xff) break;
        iVar5 = _Uaarch64_get_reg(DAT_0013ed68,0x1f,&local_418);
        if (iVar5 < 0) {
          log2Console(5,"CrashReport-Native","Failed to read SP with res: %d",iVar5);
          uVar7 = strlen(param_2);
          goto joined_r0x00109ad0;
        }
        log2Console(3,"CrashReport-Native","pc = %p, sp = %p",local_420,local_418);
        FUN_001091b8(iVar4,1,local_420,acStack_410);
        if (0 < param_1) {
          log2Report(param_1,0,&DAT_00124108,acStack_410);
        }
        sVar9 = strlen(acStack_410);
        pcVar1 = acStack_410 + sVar9;
        pcVar1[0] = '\n';
        pcVar1[1] = '\0';
        sVar6 = strlen(param_2);
        sVar6 = (size_t)(0x1400 - (int)sVar6);
        if (sVar6 <= sVar9 + 1) {
          log2Console(5,"CrashReport-Native","Stack is over limit. Drop this frame and return.");
          sVar9 = strlen(param_2);
          if (4 < sVar9) goto LAB_001099d0;
          goto LAB_00109a20;
        }
        strncat(param_2,acStack_410,sVar6);
        log2Console(3,"CrashReport-Native","Append to native stack.");
        iVar5 = _Uaarch64_step(DAT_0013ed68);
        iVar4 = iVar4 + 1;
      } while (0 < iVar5);
      uVar7 = strlen(param_2);
joined_r0x00109ad0:
      if (uVar7 < 5) {
LAB_00109a20:
        if ((*(long *)(param_3 + 0x1a8) != 0) &&
           (cVar3 = FUN_001091b8(0,0,*(long *)(param_3 + 0x1a8) + 4,acStack_410), cVar3 != '\0')) {
          if (0 < param_1) {
            log2Report(param_1,0,&DAT_00124108,acStack_410);
          }
          sVar9 = strlen(acStack_410);
          pcVar1 = acStack_410 + sVar9;
          pcVar1[0] = '\n';
          pcVar1[1] = '\0';
          strncat(param_2,acStack_410,sVar9 + 1);
          log2Console(3,"CrashReport-Native","Append to native stack.");
        }
      }
LAB_001099d0:
      free(DAT_0013ed68);
      free(DAT_0013ed60);
      uVar8 = 1;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}

