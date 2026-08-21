
long getJavaThreadByName(long *param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  void *__ptr;
  void *__base;
  long lVar9;
  char *pcVar10;
  size_t sVar11;
  undefined8 uVar12;
  char *pcVar13;
  long local_98;
  int local_7c;
  
  if (param_1 == (long *)0x0) {
    return 0;
  }
  log2Console(4,"eup","Try to find Java thread by Name: %s",param_3);
  lVar6 = (**(code **)(*param_1 + 0x30))(param_1,"java/lang/Thread");
  lVar7 = (**(code **)(*param_1 + 0x78))(param_1);
  if (lVar7 == 0) {
    if (lVar6 != 0) {
      lVar7 = getJavaStaticMethodID
                        (param_1,"java/lang/Thread","getAllStackTraces","()Ljava/util/Map;");
      if (lVar7 == 0) {
        return 0;
      }
      lVar6 = (**(code **)(*param_1 + 0x390))(param_1,lVar6,lVar7);
      lVar7 = (**(code **)(*param_1 + 0x78))(param_1);
      if (lVar7 == 0) {
        if (lVar6 != 0) {
          lVar7 = getKeySetArrayOfMap(param_1,lVar6);
          if (lVar7 == 0) {
            pcVar10 = "Failed to get keySet array of map!";
          }
          else {
            iVar1 = (**(code **)(*param_1 + 0x558))(param_1,lVar7);
            lVar8 = (**(code **)(*param_1 + 0x78))(param_1);
            if (lVar8 == 0) {
              __ptr = calloc((long)iVar1,4);
              __base = calloc((long)iVar1,4);
              iVar2 = getSameNameThreadIdArray(param_3,__ptr,iVar1,1);
              if (iVar2 < 2) {
                local_98 = 0;
              }
              else {
                log2Console(4,"eup","Found multiple Linux threads (%d) matched the name: %s",iVar2,
                            param_3);
                iVar3 = getIndexOfIntArray(param_2,__ptr,iVar2);
                log2Console(4,"eup","Index of Linux thread ID array: %d",iVar3);
                local_98 = (long)iVar3;
              }
              if (iVar1 < 1) {
                local_7c = 0;
              }
              else {
                iVar3 = 0;
                local_7c = 0;
                do {
                  lVar8 = (**(code **)(*param_1 + 0x568))(param_1,lVar7,iVar3);
                  lVar9 = (**(code **)(*param_1 + 0x78))(param_1);
                  if (lVar9 != 0) {
                    log2Console(5,"eup","A Java exception has been caught.");
                    (**(code **)(*param_1 + 0x80))(param_1);
                    (**(code **)(*param_1 + 0x88))(param_1);
LAB_00113764:
                    log2Console(6,"eup","Failed to get array element.");
                    break;
                  }
                  if (lVar8 == 0) goto LAB_00113764;
                  pcVar10 = (char *)getJavaThreadName(param_1,lVar8);
                  if (pcVar10 == (char *)0x0) {
                    log2Console(5,"eup","Failed to get thread name.");
                  }
                  else {
                    lVar9 = getJavaMethodID(param_1,"java/lang/Thread","getId",&DAT_001279d7);
                    if (lVar9 == 0) {
LAB_0011363c:
                      uVar4 = 0xffffffff;
                    }
                    else {
                      uVar4 = (**(code **)(*param_1 + 0x1a0))(param_1,lVar8,lVar9);
                      lVar9 = (**(code **)(*param_1 + 0x78))(param_1);
                      if (lVar9 != 0) {
                        log2Console(5,"eup","A Java exception has been caught.");
                        (**(code **)(*param_1 + 0x80))(param_1);
                        (**(code **)(*param_1 + 0x88))(param_1);
                        log2Console(6,"eup","Failed to call: %s","getId");
                        goto LAB_0011363c;
                      }
                    }
                    log2Console(4,"eup",&DAT_00127d6e,uVar4,pcVar10);
                    sVar11 = strlen(pcVar10);
                    iVar5 = strncmp(pcVar10,param_3,0xf);
                    if (sVar11 < 0x10) {
                      if (iVar5 == 0) {
                        log2Console(4,"eup","Found the matched Java thread: %s",pcVar10);
                        goto LAB_00113a64;
                      }
                    }
                    else if (iVar5 == 0) {
                      log2Console(4,"eup","Found a matched Java thread: %s",pcVar10);
                      *(undefined4 *)((long)__base + (long)local_7c * 4) = uVar4;
                      local_7c = local_7c + 1;
                    }
                    (**(code **)(*param_1 + 0xb8))(param_1,lVar8);
                    lVar8 = (**(code **)(*param_1 + 0x78))(param_1);
                    if (lVar8 != 0) {
                      log2Console(5,"eup","A Java exception has been caught.");
                      (**(code **)(*param_1 + 0x80))(param_1);
                      (**(code **)(*param_1 + 0x88))(param_1);
                      log2Console(6,"eup","Failed to delete local reference.");
                      break;
                    }
                  }
                  iVar3 = iVar3 + 1;
                } while (iVar3 < iVar1);
              }
              log2Console(3,"eup","Length of matched Java thread ID array: %d",local_7c);
              lVar8 = 0;
              if ((0 < local_7c) && (local_7c == iVar2)) {
                if (1 < iVar2) {
                  qsort(__base,(long)iVar2,4,intArrayCompare);
                }
                iVar2 = *(int *)((long)__base + local_98 * 4);
                log2Console(3,"eup","ID of Java thread matched Linux thread (%d): %d",param_2,iVar2)
                ;
                if (0 < iVar1) {
                  iVar3 = 0;
                  do {
                    lVar8 = (**(code **)(*param_1 + 0x568))(param_1,lVar7,iVar3);
                    lVar9 = (**(code **)(*param_1 + 0x78))(param_1);
                    if (lVar9 != 0) {
                      log2Console(5,"eup","A Java exception has been caught.");
                      (**(code **)(*param_1 + 0x80))(param_1);
                      (**(code **)(*param_1 + 0x88))(param_1);
LAB_001139cc:
                      pcVar10 = "Failed to get array element.";
LAB_00113a5c:
                      log2Console(6,"eup",pcVar10);
                      break;
                    }
                    if (lVar8 == 0) goto LAB_001139cc;
                    lVar9 = getJavaMethodID(param_1,"java/lang/Thread","getId",&DAT_001279d7);
                    if (lVar9 == 0) {
LAB_0011394c:
                      iVar5 = -1;
                    }
                    else {
                      iVar5 = (**(code **)(*param_1 + 0x1a0))(param_1,lVar8,lVar9);
                      lVar9 = (**(code **)(*param_1 + 0x78))(param_1);
                      if (lVar9 != 0) {
                        log2Console(5,"eup","A Java exception has been caught.");
                        (**(code **)(*param_1 + 0x80))(param_1);
                        (**(code **)(*param_1 + 0x88))(param_1);
                        log2Console(6,"eup","Failed to call: %s","getId");
                        goto LAB_0011394c;
                      }
                    }
                    if (iVar5 == iVar2) {
                      uVar12 = getJavaThreadName(param_1,lVar8);
                      log2Console(3,"eup","Java thread matched is: %s",uVar12);
                      goto LAB_00113a64;
                    }
                    (**(code **)(*param_1 + 0xb8))(param_1,lVar8);
                    lVar8 = (**(code **)(*param_1 + 0x78))(param_1);
                    if (lVar8 != 0) {
                      log2Console(5,"eup","A Java exception has been caught.");
                      (**(code **)(*param_1 + 0x80))(param_1);
                      (**(code **)(*param_1 + 0x88))(param_1);
                      pcVar10 = "Failed to delete local reference.";
                      goto LAB_00113a5c;
                    }
                    iVar3 = iVar3 + 1;
                  } while (iVar3 < iVar1);
                }
                lVar8 = 0;
              }
LAB_00113a64:
              (**(code **)(*param_1 + 0xb8))(param_1,lVar7);
              lVar7 = (**(code **)(*param_1 + 0x78))(param_1);
              if (lVar7 != 0) {
                log2Console(5,"eup","A Java exception has been caught.");
                (**(code **)(*param_1 + 0x80))(param_1);
                (**(code **)(*param_1 + 0x88))(param_1);
                log2Console(6,"eup","Failed to delete local reference: keySetArray");
              }
              (**(code **)(*param_1 + 0xb8))(param_1,lVar6);
              lVar6 = (**(code **)(*param_1 + 0x78))(param_1);
              if (lVar6 != 0) {
                log2Console(5,"eup","A Java exception has been caught.");
                (**(code **)(*param_1 + 0x80))(param_1);
                (**(code **)(*param_1 + 0x88))(param_1);
                log2Console(6,"eup","Failed to delete local reference: map");
              }
              free(__base);
              free(__ptr);
              return lVar8;
            }
            log2Console(5,"eup","A Java exception has been caught.");
            (**(code **)(*param_1 + 0x80))(param_1);
            (**(code **)(*param_1 + 0x88))(param_1);
            pcVar10 = "Failed to get array length.";
          }
          log2Console(6,"eup",pcVar10);
          return 0;
        }
      }
      else {
        log2Console(5,"eup","A Java exception has been caught.");
        (**(code **)(*param_1 + 0x80))(param_1);
        (**(code **)(*param_1 + 0x88))(param_1);
      }
      pcVar10 = "Failed to call: %s";
      pcVar13 = "getAllStackTraces";
      goto LAB_001132f8;
    }
  }
  else {
    log2Console(5,"eup","A Java exception has been caught.");
    (**(code **)(*param_1 + 0x80))(param_1);
    (**(code **)(*param_1 + 0x88))(param_1);
  }
  pcVar10 = "Failed to find class: %s";
  pcVar13 = "java/lang/Thread";
LAB_001132f8:
  log2Console(6,"eup",pcVar10,pcVar13);
  return 0;
}

