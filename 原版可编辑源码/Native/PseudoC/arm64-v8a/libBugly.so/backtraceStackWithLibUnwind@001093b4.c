
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void backtraceStackWithLibUnwind(int param_1,char *param_2,long param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  void *__ptr;
  void *__ptr_00;
  size_t sVar5;
  ulong uVar6;
  undefined8 uVar7;
  size_t sVar8;
  ulong local_420;
  undefined8 local_418;
  char acStack_410 [1032];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  param_2[0] = '\0';
  param_2[1] = '\0';
  param_2[2] = '\0';
  param_2[3] = '\0';
  param_2[4] = '\0';
  param_2[5] = '\0';
  param_2[6] = '\0';
  param_2[7] = '\0';
  __ptr = calloc(1,0x11d0);
  if (__ptr == (void *)0x0) {
    log2Console(5,"CrashReport-Native","Failed to allocate memory for %s","context_");
    uVar7 = 0;
    goto LAB_001095f4;
  }
  __ptr_00 = calloc(1,0x8000);
  if (__ptr_00 == (void *)0x0) {
    log2Console(5,"CrashReport-Native","Failed to allocate memory for %s","cursor");
    uVar7 = 0;
    goto LAB_001095f4;
  }
  memcpy((void *)((long)__ptr + 0xb0),(void *)(param_3 + 0xb0),0x1120);
  initLocalMapInfoList();
  log2Console(4,"CrashReport-Native","Got unwind context.");
  iVar3 = _Uaarch64_init_local(__ptr_00,__ptr);
  log2Console(4,"CrashReport-Native","Initialization of unwind finished.");
  if (iVar3 < 0) {
    log2Console(5,"CrashReport-Native","Failed to init unwind: %d.",iVar3);
    uVar7 = 0;
    goto LAB_001095f4;
  }
  memset(acStack_410,0,0x402);
  iVar3 = 0;
  do {
    iVar4 = _Uaarch64_get_reg(__ptr_00,0x1e,&local_420);
    if (iVar4 < 0) {
      log2Console(5,"CrashReport-Native","Failed to read IP with res: %d",iVar4);
      break;
    }
    if (local_420 < 0xff) break;
    iVar4 = _Uaarch64_get_reg(__ptr_00,0x1f,&local_418);
    if (iVar4 < 0) {
      log2Console(5,"CrashReport-Native","Failed to read SP with res: %d",iVar4);
      uVar6 = strlen(param_2);
      goto joined_r0x001096a0;
    }
    log2Console(3,"CrashReport-Native","pc = %p, sp = %p",local_420,local_418);
    FUN_00108e64(iVar3,1,local_420,acStack_410);
    if (0 < param_1) {
      log2Report(param_1,0,&DAT_00124108,acStack_410);
    }
    sVar8 = strlen(acStack_410);
    pcVar1 = acStack_410 + sVar8;
    pcVar1[0] = '\n';
    pcVar1[1] = '\0';
    sVar5 = strlen(param_2);
    sVar5 = (size_t)(0x1400 - (int)sVar5);
    if (sVar5 <= sVar8 + 1) {
      log2Console(5,"CrashReport-Native","Stack is over limit. Drop this frame and return.");
      sVar8 = strlen(param_2);
      if (4 < sVar8) goto LAB_001095cc;
      goto LAB_0010962c;
    }
    strncat(param_2,acStack_410,sVar5);
    log2Console(3,"CrashReport-Native","Append to native stack.");
    iVar4 = _Uaarch64_step(__ptr_00);
    iVar3 = iVar3 + 1;
  } while (0 < iVar4);
  uVar6 = strlen(param_2);
joined_r0x001096a0:
  if (uVar6 < 5) {
LAB_0010962c:
    if (*(long *)(param_3 + 0x1a8) != 0) {
      cVar2 = FUN_00108e64(0,0,*(long *)(param_3 + 0x1a8) + 4,acStack_410);
      if (cVar2 != '\0') {
        if (0 < param_1) {
          log2Report(param_1,0,&DAT_00124108,acStack_410);
        }
        sVar8 = strlen(acStack_410);
        pcVar1 = acStack_410 + sVar8;
        pcVar1[0] = '\n';
        pcVar1[1] = '\0';
        strncat(param_2,acStack_410,sVar8 + 1);
        log2Console(3,"CrashReport-Native","Append to native stack.");
      }
      sVar8 = strlen(param_2);
      if (4 < sVar8) goto LAB_001095cc;
    }
    snprintf(param_2,0x1400,"%s\n","[empty stack]");
    free(__ptr_00);
    free(__ptr);
  }
  else {
LAB_001095cc:
    free(__ptr_00);
    free(__ptr);
  }
  if (localMapInfoList == 0) {
    uVar7 = 1;
  }
  else {
    freeMapInfoList();
    uVar7 = 1;
  }
LAB_001095f4:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}

