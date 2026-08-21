
long getJavaThreadByName(long *param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  void *__ptr;
  void *__base;
  long lVar9;
  char *__s;
  size_t sVar10;
  undefined8 uVar11;
  int iVar12;
  int local_38;
  uint local_18;
  
  if (param_1 != (long *)0x0) {
    log2Console(4,"CrashReport-Native","Try to find Java thread by Name: %s",param_3);
    lVar6 = (**(code **)(*param_1 + 0x30))(param_1,"java/lang/Thread");
    lVar7 = checkJavaException(param_1);
    if ((lVar7 != 0) || (lVar6 == 0)) {
      log2Console(6,"CrashReport-Native","Failed to find class: %s","java/lang/Thread");
      return 0;
    }
    lVar7 = getJavaStaticMethodID
                      (param_1,"java/lang/Thread","getAllStackTraces","()Ljava/util/Map;");
    if (lVar7 != 0) {
      lVar6 = (**(code **)(*param_1 + 0x390))(param_1,lVar6,lVar7);
      lVar7 = checkJavaException(param_1);
      if ((lVar7 != 0) || (lVar6 == 0)) {
        log2Console(6,"CrashReport-Native","Failed to call: %s","getAllStackTraces");
        return 0;
      }
      lVar7 = getKeySetArrayOfMap(param_1,lVar6);
      if (lVar7 == 0) {
        log2Console(6,"CrashReport-Native","Failed to get keySet array of map!");
      }
      else {
        iVar2 = (**(code **)(*param_1 + 0x558))(param_1,lVar7);
        lVar8 = checkJavaException(param_1);
        if (lVar8 == 0) {
          local_38 = 0;
          __ptr = calloc((long)iVar2,4);
          __base = calloc((long)iVar2,4);
          uVar3 = getSameNameThreadIdArray(param_3,__ptr,iVar2,1);
          if (1 < (int)uVar3) {
            log2Console(4,"CrashReport-Native",
                        "Found multiple Linux threads (%d) matched the name: %s",uVar3,param_3);
            local_38 = getIndexOfIntArray(param_2,__ptr,uVar3);
            log2Console(4,"CrashReport-Native","Index of Linux thread ID array: %d",local_38);
          }
          if (iVar2 < 1) {
            lVar8 = 0;
            log2Console(3,"CrashReport-Native","Length of matched Java thread ID array: %d",0);
          }
          else {
            iVar12 = 0;
            local_18 = 0;
            do {
              lVar8 = (**(code **)(*param_1 + 0x568))(param_1,lVar7,iVar12);
              lVar9 = checkJavaException(param_1);
              if ((lVar9 != 0) || (lVar8 == 0)) {
                log2Console(6,"CrashReport-Native","Failed to get array element.");
                break;
              }
              __s = (char *)getJavaThreadName(param_1,lVar8);
              if (__s == (char *)0x0) {
                log2Console(5,"CrashReport-Native","Failed to get thread name.");
              }
              else {
                uVar4 = getJavaThreadId(param_1,lVar8);
                log2Console(4,"CrashReport-Native",&DAT_001257f0,uVar4,__s);
                sVar10 = strlen(__s);
                if (sVar10 < 0x10) {
                  iVar5 = strncmp(__s,param_3,0xf);
                  if (iVar5 == 0) {
                    log2Console(4,"CrashReport-Native","Found the matched Java thread: %s",__s);
                    goto LAB_0010f5e0;
                  }
                }
                else {
                  iVar5 = strncmp(__s,param_3,0xf);
                  if (iVar5 == 0) {
                    log2Console(4,"CrashReport-Native","Found a matched Java thread: %s",__s);
                    *(undefined4 *)((long)__base + (long)(int)local_18 * 4) = uVar4;
                    local_18 = local_18 + 1;
                  }
                }
                (**(code **)(*param_1 + 0xb8))(param_1,lVar8);
                lVar8 = checkJavaException(param_1);
                if (lVar8 != 0) {
                  log2Console(6,"CrashReport-Native","Failed to delete local reference.");
                  break;
                }
              }
              iVar12 = iVar12 + 1;
            } while (iVar12 != iVar2);
            log2Console(3,"CrashReport-Native","Length of matched Java thread ID array: %d",local_18
                       );
            if ((local_18 == uVar3) && (0 < (int)local_18)) {
              if (local_18 != 1) {
                qsort(__base,(ulong)local_18,4,intArrayCompare);
              }
              iVar12 = *(int *)((long)__base + (long)local_38 * 4);
              log2Console(3,"CrashReport-Native","ID of Java thread matched Linux thread (%d): %d",
                          param_2,iVar12);
              iVar5 = 0;
              do {
                iVar1 = iVar5 + 1;
                lVar8 = (**(code **)(*param_1 + 0x568))(param_1,lVar7,iVar5);
                lVar9 = checkJavaException(param_1);
                if ((lVar9 != 0) || (lVar8 == 0)) {
                  lVar8 = 0;
                  log2Console(6,"CrashReport-Native","Failed to get array element.");
                  goto LAB_0010f5e0;
                }
                iVar5 = getJavaThreadId(param_1,lVar8);
                if (iVar5 == iVar12) {
                  uVar11 = getJavaThreadName();
                  log2Console(3,"CrashReport-Native","Java thread matched is: %s",uVar11);
                  goto LAB_0010f5e0;
                }
                (**(code **)(*param_1 + 0xb8))(param_1,lVar8);
                lVar8 = checkJavaException(param_1);
                if (lVar8 != 0) {
                  lVar8 = 0;
                  log2Console(6,"CrashReport-Native","Failed to delete local reference.");
                  goto LAB_0010f5e0;
                }
                iVar5 = iVar1;
              } while (iVar1 != iVar2);
            }
            lVar8 = 0;
          }
LAB_0010f5e0:
          (**(code **)(*param_1 + 0xb8))(param_1,lVar7);
          lVar7 = checkJavaException(param_1);
          if (lVar7 != 0) {
            log2Console(6,"CrashReport-Native","Failed to delete local reference: keySetArray");
          }
          (**(code **)(*param_1 + 0xb8))(param_1,lVar6);
          lVar6 = checkJavaException(param_1);
          if (lVar6 != 0) {
            log2Console(6,"CrashReport-Native","Failed to delete local reference: map");
          }
          free(__base);
          free(__ptr);
          return lVar8;
        }
        log2Console(6,"CrashReport-Native","Failed to get array length.");
      }
    }
  }
  return 0;
}

