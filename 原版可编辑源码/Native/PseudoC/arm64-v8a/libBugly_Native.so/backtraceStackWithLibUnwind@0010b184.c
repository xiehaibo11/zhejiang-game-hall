
void backtraceStackWithLibUnwind(int param_1,char *param_2,long param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  void *__ptr;
  void *__ptr_00;
  size_t sVar4;
  undefined8 uVar5;
  char *pcVar6;
  ulong uVar7;
  undefined8 local_488;
  ulong local_480;
  char acStack_474 [1028];
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
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
    pcVar6 = "context_";
  }
  else {
    __ptr_00 = calloc(1,0x8000);
    if (__ptr_00 != (void *)0x0) {
      memcpy((void *)((long)__ptr + 0xb0),(void *)(param_3 + 0xb0),0x1120);
      if (localMapInfoList == 0) {
        localMapInfoList = initCurrentMapInfoList(0,1);
      }
      log2Console(4,"eup","Got unwind context.");
      iVar2 = _Uaarch64_init_local(__ptr_00,__ptr);
      log2Console(4,"eup","Initialization of unwind finished.");
      if (iVar2 < 0) {
        log2Console(5,"eup","Failed to init unwind: %d.",iVar2);
        uVar5 = 0;
      }
      else {
        memset(acStack_474,0,0x402);
        iVar2 = 0;
        do {
          iVar3 = _Uaarch64_get_reg(__ptr_00,0x1e,&local_480);
          if (iVar3 < 0) {
            pcVar6 = "Failed to read IP with res: %d";
LAB_0010b420:
            log2Console(5,"eup",pcVar6,iVar3);
            break;
          }
          if (local_480 < 0xff) {
            log2Console(5,"eup","pc may illegal: %p");
            break;
          }
          iVar3 = _Uaarch64_get_reg(__ptr_00,0x1f,&local_488);
          if (iVar3 < 0) {
            pcVar6 = "Failed to read SP with res: %d";
            goto LAB_0010b420;
          }
          log2Console(3,"eup","pc = %p, sp = %p",local_480,local_488);
          FUN_0010b564(iVar2,1,local_480,acStack_474);
          if (0 < param_1) {
            log2Report(param_1,0,&DAT_00125f79,acStack_474);
          }
          sVar4 = strlen(acStack_474);
          (acStack_474 + sVar4)[0] = '\n';
          (acStack_474 + sVar4)[1] = '\0';
          sVar4 = strlen(param_2);
          uVar7 = (long)(0x140000000000 - (sVar4 << 0x20)) >> 0x20;
          sVar4 = strlen(acStack_474);
          if (uVar7 <= sVar4) {
            log2Console(5,"eup","Stack is over limit. Drop this frame and return.");
            break;
          }
          iVar2 = iVar2 + 1;
          strncat(param_2,acStack_474,uVar7);
          log2Console(3,"eup","Append to native stack.");
          iVar3 = _Uaarch64_step(__ptr_00);
        } while (0 < iVar3);
        sVar4 = strlen(param_2);
        if (((sVar4 < 5) && (*(long *)(param_3 + 0x1a8) != 0)) &&
           (uVar7 = FUN_0010b564(0,0,*(long *)(param_3 + 0x1a8) + 4,acStack_474), (uVar7 & 1) != 0))
        {
          if (0 < param_1) {
            log2Report(param_1,0,&DAT_00125f79,acStack_474);
          }
          sVar4 = strlen(acStack_474);
          (acStack_474 + sVar4)[0] = '\n';
          (acStack_474 + sVar4)[1] = '\0';
          sVar4 = strlen(acStack_474);
          strncat(param_2,acStack_474,sVar4);
          log2Console(3,"eup","Append to native stack.");
        }
        sVar4 = strlen(param_2);
        if (sVar4 < 5) {
          snprintf(param_2,0x1400,"%s\n","[empty stack]");
        }
        free(__ptr_00);
        free(__ptr);
        if (localMapInfoList != 0) {
          freeMapInfoList();
        }
        uVar5 = 1;
      }
      goto LAB_0010b530;
    }
    pcVar6 = "cursor";
  }
  log2Console(5,"eup","Failed to allocate memory for %s",pcVar6);
  uVar5 = 0;
LAB_0010b530:
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

