
int getSameNameThreadIdArray(char *param_1,void *param_2,int param_3,char param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  DIR *__dirp;
  dirent *pdVar8;
  long lVar9;
  int *piVar10;
  char *pcVar11;
  bool bVar12;
  
  if ((param_2 != (void *)0x0 && 0 < param_3) && (param_1 != (char *)0x0)) {
    log2Console(4,"CrashReport-Native","Get ID array of thread whose name is same with: %s",param_1)
    ;
    uVar4 = getpid();
    pcVar7 = calloc(1,0x100);
    if ((pcVar7 == (char *)0x0) ||
       (iVar5 = snprintf(pcVar7,0x100,"/proc/%d/task",(ulong)uVar4), 0 < iVar5)) {
      iVar5 = 0;
      __dirp = opendir(pcVar7);
      if (__dirp != (DIR *)0x0) {
LAB_001121d8:
        do {
          do {
            pdVar8 = readdir(__dirp);
            if (pdVar8 == (dirent *)0x0) {
              if ((1 < iVar5) && (param_4 != '\0')) {
                qsort(param_2,(long)iVar5,4,intArrayCompare);
              }
              closedir(__dirp);
              return iVar5;
            }
            pcVar7 = pdVar8->d_name;
            iVar6 = strcmp(pcVar7,".");
          } while ((((iVar6 == 0) || (iVar6 = strcmp(pcVar7,".."), iVar6 == 0)) ||
                   ((byte)pdVar8->d_name[0] == 0)) ||
                  (uVar4 = (byte)pdVar8->d_name[0] - 0x30, 9 < (uVar4 & 0xff)));
          while( true ) {
            pcVar7 = pcVar7 + 1;
            uVar3 = (byte)*pcVar7 - 0x30;
            uVar2 = uVar4 * 10 + uVar3;
            if ((byte)*pcVar7 == 0) break;
            if ((9 < (uVar3 & 0xff)) || (bVar12 = (int)uVar2 < (int)uVar4, uVar4 = uVar2, bVar12))
            goto LAB_001121d8;
          }
          pcVar7 = (char *)getThreadName(uVar4);
          iVar6 = strncmp(param_1,pcVar7,0xf);
          if (iVar6 == 0) {
            if (iVar5 == 0) {
              bVar12 = false;
            }
            else {
              lVar9 = 0;
              bVar12 = false;
              do {
                lVar1 = lVar9 * 4;
                lVar9 = lVar9 + 1;
                if (uVar4 == *(uint *)((long)param_2 + lVar1)) {
                  bVar12 = true;
                }
              } while ((int)lVar9 < iVar5);
            }
            log2Console(3,"CrashReport-Native","Found a thread with same name and its ID is: %d",
                        uVar4);
            if (bVar12 < (iVar5 < param_3)) {
              *(uint *)((long)param_2 + (long)iVar5 * 4) = uVar4;
              iVar5 = iVar5 + 1;
            }
          }
        } while( true );
      }
      piVar10 = (int *)__errno();
      pcVar11 = strerror(*piVar10);
      log2Console(5,"CrashReport-Native","Failed to open task path \'%s\' for: %s",pcVar7,pcVar11);
    }
    else {
      piVar10 = (int *)__errno();
      pcVar7 = strerror(*piVar10);
      log2Console(5,"CrashReport-Native","Failed to construct task path of pid \'%d\' for: %s",
                  (ulong)uVar4,pcVar7);
    }
  }
  return 0;
}

