
void saveEupInfo2File(long param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  size_t sVar4;
  ulong uVar5;
  char acStack_9c [100];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  log2Console(4,"eup","Record EupInfo");
  if (param_1 == 0) {
    uVar5 = log2Console(6,"eup","save eupinfo fail!");
  }
  else {
    if (DAT_0013fde0 == (FILE *)0x0) {
      DAT_0013fde0 = fopen(DAT_0013fde8,"a");
    }
    iVar2 = snprintf(acStack_9c,100,
                     "ep:%d,et:%d,sig:%d,sino:%d,sico:%d,spd:%d,sud:%d,ets:%lu,etms:%lu",
                     (ulong)*(uint *)(param_1 + 4),(ulong)*(uint *)(param_1 + 8),
                     (ulong)*(uint *)(param_1 + 0xc),(ulong)*(uint *)(param_1 + 0x10),
                     (ulong)*(uint *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                     *(undefined4 *)(param_1 + 0x1c),*(undefined8 *)(param_1 + 0x28),
                     *(undefined8 *)(param_1 + 0x30));
    if (0 < iVar2) {
      recordProperty(DAT_0013fde0,"intStateStr",acStack_9c);
    }
    sVar4 = strlen((char *)(param_1 + 0xe8));
    if (sVar4 != 0) {
      recordProperty(DAT_0013fde0,"errorAddr",(char *)(param_1 + 0xe8));
    }
    sVar4 = strlen((char *)(param_1 + 0x38));
    if (sVar4 != 0) {
      recordProperty(DAT_0013fde0,"codeMsg",(char *)(param_1 + 0x38));
    }
    sVar4 = strlen((char *)(param_1 + 0x128));
    if (sVar4 != 0) {
      recordProperty(DAT_0013fde0,"tombPath",(char *)(param_1 + 0x128));
    }
    sVar4 = strlen((char *)(param_1 + 0xd0));
    if (sVar4 != 0) {
      recordProperty(DAT_0013fde0,"signalName",(char *)(param_1 + 0xd0));
    }
    sVar4 = strlen((char *)(param_1 + 0x50));
    if (sVar4 != 0) {
      recordProperty(DAT_0013fde0,"errnoMsg",(char *)(param_1 + 0x50));
    }
    if (*(long *)(param_1 + 0x4a8) != 0) {
      recordProperty(DAT_0013fde0,"stack");
    }
    sVar4 = strlen((char *)(param_1 + 0x428));
    if ((sVar4 != 0) &&
       (iVar2 = recordProperty(DAT_0013fde0,"threadName",(char *)(param_1 + 0x428)), iVar2 < 1)) {
      log2Console(6,"eup","Failed to record java thread name.");
    }
    sVar4 = strlen((char *)(param_1 + 0x228));
    if (sVar4 != 0) {
      recordProperty(DAT_0013fde0,"processName",(char *)(param_1 + 0x228));
    }
    recordProperty(DAT_0013fde0,"soVersion","4.1.9.2");
    log2Console(4,"eup","EupInfo has been recorded.");
    uVar5 = 0;
    if (DAT_0013fde0 != (FILE *)0x0) {
      uVar3 = fclose(DAT_0013fde0);
      uVar5 = (ulong)uVar3;
      DAT_0013fde0 = (FILE *)0x0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

