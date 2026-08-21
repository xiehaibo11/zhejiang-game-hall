
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void lockFile(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  time_t tVar3;
  int *piVar4;
  char *pcVar5;
  bool bVar6;
  int local_90 [2];
  int local_20;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar6 = param_1 == (char *)0x0 || param_2 < 1;
  if (param_1 == (char *)0x0 || param_2 < 1) {
    bVar6 = false;
    goto LAB_0011273c;
  }
  log2Console(4,"CrashReport-Native","Try to lock file: %s",param_1);
  iVar2 = access(param_1,0);
  if (iVar2 == 0) {
    iVar2 = stat(param_1,(stat *)&stack0xffffffffffffff78);
    if (iVar2 < 0) {
      piVar4 = (int *)__errno();
      pcVar5 = strerror(*piVar4);
      log2Console(5,"CrashReport-Native","Failed to read size of file for: %s.",pcVar5);
      goto LAB_0011273c;
    }
    tVar3 = time((time_t *)local_90);
    if (tVar3 < 0) {
      piVar4 = (int *)__errno();
      pcVar5 = strerror(*piVar4);
      log2Console(5,"CrashReport-Native","Failed to get current time for: %s.",pcVar5);
      goto LAB_0011273c;
    }
    if (local_90[0] - local_20 <= param_2) {
      log2Console(4,"CrashReport-Native","Some one holds the lock file.");
      goto LAB_0011273c;
    }
    log2Console(4,"CrashReport-Native","Lock file is expired, unlock it.");
    cVar1 = unlockFile(param_1);
    if (cVar1 == '\0') {
      log2Console(5,"CrashReport-Native","Failed to unlock expired lock file.");
      goto LAB_0011273c;
    }
  }
  iVar2 = open(param_1,0x241,0x180);
  if (iVar2 < 0) {
    piVar4 = (int *)__errno();
    pcVar5 = strerror(*piVar4);
    log2Console(5,"CrashReport-Native","Failed to create lock file for: %s.",pcVar5);
  }
  else {
    bVar6 = true;
    write(iVar2,"",1);
    close(iVar2);
    log2Console(4,"CrashReport-Native","Successfully locked file: %s",param_1);
  }
LAB_0011273c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar6);
}

