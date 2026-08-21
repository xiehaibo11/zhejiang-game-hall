
undefined8 suspendAllThread(void)

{
  uint __pid;
  uint uVar1;
  int iVar2;
  __pid_t _Var3;
  char *pcVar4;
  DIR *__dirp;
  dirent *pdVar5;
  int *piVar6;
  long lVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  prctl(4,1,0,0,0);
  log2Console(4,"eup","Trying to suspend all threads...");
  uVar1 = getpid();
  pcVar4 = calloc(1,0x100);
  if ((pcVar4 == (char *)0x0) ||
     (iVar2 = snprintf(pcVar4,0x100,"/proc/%d/task",(ulong)uVar1), 0 < iVar2)) {
    __dirp = opendir(pcVar4);
    if (__dirp != (DIR *)0x0) {
      uVar1 = gettid();
      pdVar5 = readdir(__dirp);
      if (pdVar5 != (dirent *)0x0) {
        uVar11 = 0xffffffff;
        do {
          pcVar4 = pdVar5->d_name;
          iVar2 = strcmp(pcVar4,".");
          if (((iVar2 != 0) && (iVar2 = strcmp(pcVar4,".."), iVar2 != 0)) &&
             (uVar9 = (uint)(byte)*pcVar4, *pcVar4 != 0)) {
            pcVar4 = pdVar5->d_name;
            uVar10 = 0;
            do {
              pcVar4 = pcVar4 + 1;
              if ((9 < (uVar9 - 0x30 & 0xff)) ||
                 (__pid = (uVar10 * 10 + uVar9) - 0x30, (int)__pid < (int)uVar10))
              goto LAB_00114db0;
              uVar9 = (uint)(byte)*pcVar4;
              uVar10 = __pid;
            } while (uVar9 != 0);
            if ((uVar11 != __pid) && (uVar1 != __pid)) {
              log2Console(4,"eup","Suspend thread: %d",__pid);
              piVar6 = (int *)__errno();
              *piVar6 = 0;
              lVar7 = ptrace(PTRACE_ATTACH,(ulong)__pid,0,0);
              if ((lVar7 == 0) || (*piVar6 == 0)) {
                do {
                  _Var3 = waitpid(__pid,(int *)0x0,0x40000000);
                  if (-1 < _Var3) {
                    pcVar4 = "Successfully suspended thread: %d";
                    goto LAB_00114da4;
                  }
                } while (*piVar6 == 4);
                ptrace(PTRACE_DETACH,(ulong)__pid,0,0);
              }
              else {
                pcVar4 = strerror(*piVar6);
                log2Console(4,"eup","Failed to attach thread \'%d\' by ptrace for %s",__pid,pcVar4);
              }
              pcVar4 = "Failed to suspend thread: %d";
LAB_00114da4:
              log2Console(4,"eup",pcVar4,__pid);
              uVar11 = __pid;
            }
          }
LAB_00114db0:
          pdVar5 = readdir(__dirp);
        } while (pdVar5 != (dirent *)0x0);
      }
      closedir(__dirp);
      return 1;
    }
    piVar6 = (int *)__errno();
    pcVar8 = strerror(*piVar6);
    log2Console(5,"eup","Failed to open task path \'%s\' for: %s",pcVar4,pcVar8);
  }
  else {
    piVar6 = (int *)__errno();
    pcVar4 = strerror(*piVar6);
    log2Console(5,"eup","Failed to construct task path of pid \'%d\' for: %s",(ulong)uVar1,pcVar4);
  }
  return 0;
}

