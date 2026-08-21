
undefined4 lockFile(char *param_1,int param_2)

{
  long lVar1;
  int iVar2;
  time_t tVar3;
  ulong uVar4;
  undefined8 uVar5;
  int *piVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 uVar9;
  int local_c0 [28];
  int local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar9 = 0;
  if ((param_1 == (char *)0x0) || (param_2 < 1)) goto LAB_001160e0;
  log2Console(4,"eup","Try to lock file: %s",param_1);
  iVar2 = access(param_1,0);
  if (iVar2 == 0) {
    iVar2 = stat(param_1,(stat *)(local_c0 + 2));
    if (iVar2 < 0) {
      piVar6 = (int *)__errno();
      pcVar7 = strerror(*piVar6);
      pcVar8 = "Failed to read size of file for: %s.";
      goto LAB_001160d4;
    }
    tVar3 = time((time_t *)local_c0);
    if (tVar3 < 0) {
      piVar6 = (int *)__errno();
      pcVar7 = strerror(*piVar6);
      pcVar8 = "Failed to get current time for: %s.";
      goto LAB_001160d4;
    }
    if (param_2 < local_c0[0] - local_50) {
      log2Console(4,"eup","Lock file is expired, unlock it.");
      uVar4 = unlockFile(param_1);
      if ((uVar4 & 1) != 0) goto LAB_00115fac;
      pcVar8 = "Failed to unlock expired lock file.";
      uVar5 = 5;
    }
    else {
      pcVar8 = "Some one holds the lock file.";
      uVar5 = 4;
    }
    log2Console(uVar5,"eup",pcVar8);
  }
  else {
LAB_00115fac:
    iVar2 = open(param_1,0x241,0x180);
    if (-1 < iVar2) {
      uVar9 = 1;
      write(iVar2,&DAT_001281ae,1);
      close(iVar2);
      log2Console(4,"eup","Successfully locked file: %s",param_1);
      goto LAB_001160e0;
    }
    piVar6 = (int *)__errno();
    pcVar7 = strerror(*piVar6);
    pcVar8 = "Failed to create lock file for: %s.";
LAB_001160d4:
    log2Console(5,"eup",pcVar8,pcVar7);
  }
  uVar9 = 0;
LAB_001160e0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

