
void miniBacktraceStackWithLibUnwind(int param_1,char *param_2,long param_3)

{
  long lVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  undefined8 uVar6;
  char *pcVar7;
  ulong uVar8;
  undefined8 local_488;
  ulong local_480;
  char acStack_474 [1028];
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  log2Console(4,"eup","miniBacktraceStackWithLibUnwind.");
  pvVar2 = DAT_0013fdc0;
  if (DAT_0013fdc0 == (void *)0x0) {
    log2Console(5,"eup","Failed to allocate memory for %s","mini_backtrace_context_");
    uVar6 = 0;
  }
  else {
    memcpy((void *)((long)DAT_0013fdc0 + 0xb0),(void *)(param_3 + 0xb0),0x1120);
    iVar3 = _Uaarch64_init_local(DAT_0013fdc8,pvVar2);
    log2Console(4,"eup","Initialization of unwind finished.");
    if (iVar3 < 0) {
      log2Console(5,"eup","Failed to init unwind: %d.",iVar3);
      uVar6 = 0;
    }
    else {
      memset(acStack_474,0,0x402);
      iVar3 = 0;
      do {
        iVar4 = _Uaarch64_get_reg(DAT_0013fdc8,0x1e,&local_480);
        if (iVar4 < 0) {
          pcVar7 = "Failed to read IP with res: %d";
LAB_0010bc1c:
          log2Console(5,"eup",pcVar7,iVar4);
          break;
        }
        if (local_480 < 0xff) {
          log2Console(5,"eup","pc may illegal: %p");
          break;
        }
        iVar4 = _Uaarch64_get_reg(DAT_0013fdc8,0x1f,&local_488);
        if (iVar4 < 0) {
          pcVar7 = "Failed to read SP with res: %d";
          goto LAB_0010bc1c;
        }
        log2Console(3,"eup","pc = %p, sp = %p",local_480,local_488);
        FUN_0010bd28(iVar3,1,local_480,acStack_474);
        if (0 < param_1) {
          log2Report(param_1,0,&DAT_00125f79,acStack_474);
        }
        sVar5 = strlen(acStack_474);
        (acStack_474 + sVar5)[0] = '\n';
        (acStack_474 + sVar5)[1] = '\0';
        sVar5 = strlen(param_2);
        uVar8 = (long)(0x140000000000 - (sVar5 << 0x20)) >> 0x20;
        sVar5 = strlen(acStack_474);
        if (uVar8 <= sVar5) {
          log2Console(5,"eup","Stack is over limit. Drop this frame and return.");
          break;
        }
        iVar3 = iVar3 + 1;
        strncat(param_2,acStack_474,uVar8);
        log2Console(3,"eup","Append to native stack.");
        iVar4 = _Uaarch64_step(DAT_0013fdc8);
      } while (0 < iVar4);
      sVar5 = strlen(param_2);
      if (((sVar5 < 5) && (*(long *)(param_3 + 0x1a8) != 0)) &&
         (uVar8 = FUN_0010bd28(0,0,*(long *)(param_3 + 0x1a8) + 4,acStack_474), (uVar8 & 1) != 0)) {
        if (0 < param_1) {
          log2Report(param_1,0,&DAT_00125f79,acStack_474);
        }
        sVar5 = strlen(acStack_474);
        (acStack_474 + sVar5)[0] = '\n';
        (acStack_474 + sVar5)[1] = '\0';
        sVar5 = strlen(acStack_474);
        strncat(param_2,acStack_474,sVar5);
        log2Console(3,"eup","Append to native stack.");
      }
      free(DAT_0013fdc8);
      free(DAT_0013fdc0);
      uVar6 = 1;
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}

