
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void saveEupInfo2File(long param_1)

{
  char cVar1;
  int iVar2;
  char acStack_70 [104];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  log2Console(4,"CrashReport-Native","Record EupInfo");
  if (param_1 == 0) {
    log2Console(6,"CrashReport-Native","save eupinfo fail!");
    goto LAB_0010a0d0;
  }
  if (DAT_0013ed88 == (FILE *)0x0) {
    DAT_0013ed88 = fopen(DAT_0013ed90,"a");
  }
  iVar2 = snprintf(acStack_70,100,
                   "ep:%d,et:%d,sig:%d,sino:%d,sico:%d,spd:%d,sud:%d,ets:%lu,etms:%lu",
                   (ulong)*(uint *)(param_1 + 4),(ulong)*(uint *)(param_1 + 8),
                   (ulong)*(uint *)(param_1 + 0xc),(ulong)*(uint *)(param_1 + 0x10),
                   (ulong)*(uint *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                   *(undefined4 *)(param_1 + 0x1c),*(undefined8 *)(param_1 + 0x28),
                   *(undefined8 *)(param_1 + 0x30));
  if (0 < iVar2) {
    recordProperty(DAT_0013ed88,"intStateStr",acStack_70);
  }
  if (*(char *)(param_1 + 0xe8) == '\0') {
    if (*(char *)(param_1 + 0x38) != '\0') goto LAB_0010a118;
LAB_0010a05c:
    if (*(char *)(param_1 + 0x128) != '\0') goto LAB_0010a134;
LAB_0010a064:
    if (*(char *)(param_1 + 0xd0) != '\0') goto LAB_0010a150;
LAB_0010a06c:
    cVar1 = *(char *)(param_1 + 0x50);
  }
  else {
    recordProperty(DAT_0013ed88,"errorAddr",param_1 + 0xe8);
    if (*(char *)(param_1 + 0x38) == '\0') goto LAB_0010a05c;
LAB_0010a118:
    recordProperty(DAT_0013ed88,"codeMsg",param_1 + 0x38);
    if (*(char *)(param_1 + 0x128) == '\0') goto LAB_0010a064;
LAB_0010a134:
    recordProperty(DAT_0013ed88,"tombPath",param_1 + 0x128);
    if (*(char *)(param_1 + 0xd0) == '\0') goto LAB_0010a06c;
LAB_0010a150:
    recordProperty(DAT_0013ed88,"signalName",param_1 + 0xd0);
    cVar1 = *(char *)(param_1 + 0x50);
  }
  if (cVar1 != '\0') {
    recordProperty(DAT_0013ed88,"errnoMsg",param_1 + 0x50);
  }
  if (*(long *)(param_1 + 0x4a8) != 0) {
    recordProperty(DAT_0013ed88,"stack");
  }
  if ((*(char *)(param_1 + 0x428) != '\0') &&
     (iVar2 = recordProperty(DAT_0013ed88,"threadName",param_1 + 0x428), iVar2 < 1)) {
    log2Console(6,"CrashReport-Native","Failed to record java thread name.");
  }
  if (*(char *)(param_1 + 0x228) != '\0') {
    recordProperty(DAT_0013ed88,"processName",param_1 + 0x228);
  }
  recordProperty(DAT_0013ed88,"soVersion","3.9.2");
  log2Console(4,"CrashReport-Native","EupInfo has been recorded.");
  closeCrashRecordFile();
LAB_0010a0d0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

