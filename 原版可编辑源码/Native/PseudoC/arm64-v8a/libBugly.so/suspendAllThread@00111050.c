
undefined8 suspendAllThread(void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  __pid_t _Var7;
  char *pcVar8;
  DIR *__dirp;
  dirent *pdVar9;
  int *piVar10;
  long lVar11;
  undefined8 uVar12;
  char *pcVar13;
  uint __pid;
  
  prctl(4,1,0,0,0);
  log2Console(4,"CrashReport-Native","Trying to suspend all threads...");
  uVar4 = getpid();
  pcVar8 = calloc(1,0x100);
  if ((pcVar8 == (char *)0x0) ||
     (iVar5 = snprintf(pcVar8,0x100,"/proc/%d/task",(ulong)uVar4), 0 < iVar5)) {
    __dirp = opendir(pcVar8);
    if (__dirp == (DIR *)0x0) {
      piVar10 = (int *)__errno();
      pcVar13 = strerror(*piVar10);
      log2Console(5,"CrashReport-Native","Failed to open task path \'%s\' for: %s",pcVar8,pcVar13);
      uVar12 = 0;
    }
    else {
      uVar6 = gettid();
      uVar4 = 0xffffffff;
LAB_0011110c:
      pdVar9 = readdir(__dirp);
      if (pdVar9 != (dirent *)0x0) {
        while( true ) {
          pcVar8 = pdVar9->d_name;
          iVar5 = strcmp(pcVar8,".");
          if ((((iVar5 == 0) || (iVar5 = strcmp(pcVar8,".."), iVar5 == 0)) ||
              ((byte)pdVar9->d_name[0] == 0)) ||
             (__pid = (byte)pdVar9->d_name[0] - 0x30, 9 < (__pid & 0xff))) goto LAB_0011110c;
          while( true ) {
            pcVar8 = pcVar8 + 1;
            uVar3 = (byte)*pcVar8 - 0x30;
            uVar2 = __pid * 10 + uVar3;
            if ((byte)*pcVar8 == 0) break;
            if ((9 < (uVar3 & 0xff)) || (bVar1 = (int)uVar2 < (int)__pid, __pid = uVar2, bVar1))
            goto LAB_0011110c;
          }
          if ((uVar4 == __pid) || (uVar6 == __pid)) goto LAB_0011110c;
          log2Console(4,"CrashReport-Native","Suspend thread: %d",__pid);
          piVar10 = (int *)__errno();
          *piVar10 = 0;
          lVar11 = ptrace(PTRACE_ATTACH,(ulong)__pid,0,0);
          uVar4 = __pid;
          if ((lVar11 != 0) && (*piVar10 != 0)) break;
          while (_Var7 = waitpid(__pid,(int *)0x0,0x40000000), _Var7 < 0) {
            if (*piVar10 != 4) {
              ptrace(PTRACE_DETACH,(ulong)__pid,0,0);
              goto LAB_00111290;
            }
          }
          log2Console(4,"CrashReport-Native","Successfully suspended thread: %d",__pid);
          pdVar9 = readdir(__dirp);
          if (pdVar9 == (dirent *)0x0) goto LAB_00111254;
        }
        pcVar8 = strerror(*piVar10);
        log2Console(4,"CrashReport-Native","Failed to attach thread \'%d\' by ptrace for %s",__pid,
                    pcVar8);
LAB_00111290:
        log2Console(4,"CrashReport-Native","Failed to suspend thread: %d",__pid);
        goto LAB_0011110c;
      }
LAB_00111254:
      closedir(__dirp);
      uVar12 = 1;
    }
  }
  else {
    piVar10 = (int *)__errno();
    pcVar8 = strerror(*piVar10);
    log2Console(5,"CrashReport-Native","Failed to construct task path of pid \'%d\' for: %s",
                (ulong)uVar4,pcVar8);
    uVar12 = 0;
  }
  return uVar12;
}

