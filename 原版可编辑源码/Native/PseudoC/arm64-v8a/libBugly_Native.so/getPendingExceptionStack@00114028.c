
/* WARNING: Type propagation algorithm not settling */

char * getPendingExceptionStack(long *param_1,long param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  bool bVar3;
  undefined *__src;
  bool bVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  size_t sVar9;
  undefined8 uVar10;
  char *pcVar11;
  char *__dest;
  long lVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  
  if ((param_1 == (long *)0x0) || (param_3 < 1)) {
    pcVar11 = "env == NULL || maxLen <= 0, return!";
  }
  else {
    if (param_2 == 0) {
      log2Console(3,"eup","Pending exception is NULL.");
      return (char *)0x0;
    }
    log2Console(3,"eup","Begin to get stack of pending exception.");
    lVar7 = (**(code **)(*param_1 + 0x110))(param_1,param_2,jm_throwable_getStackTrace);
    lVar8 = (**(code **)(*param_1 + 0x78))(param_1);
    if (lVar8 == 0) {
      if (lVar7 != 0) {
        log2Console(3,"eup","Successfully got stacktrace of pending exception.");
        if (0x13ff < param_3) {
          param_3 = 0x1400;
        }
        sVar9 = strlen(note);
        iVar5 = (**(code **)(*param_1 + 0x558))(param_1,lVar7);
        lVar8 = (**(code **)(*param_1 + 0x78))(param_1);
        if (lVar8 == 0) {
          log2Console(3,"eup","Stack line: %d",iVar5);
          uVar10 = (**(code **)(*param_1 + 0x110))(param_1,param_2,jm_throwable_toString);
          pcVar11 = (char *)(**(code **)(*param_1 + 0x548))(param_1,uVar10,0);
          lVar8 = (**(code **)(*param_1 + 0x78))(param_1);
          if (lVar8 == 0) {
            if (pcVar11 != (char *)0x0) {
              iVar15 = param_3 + ~(uint)sVar9;
              __dest = calloc(1,(long)param_3);
              pcVar11 = strcat(__dest,pcVar11);
              sVar9 = strlen(pcVar11);
              (__dest + sVar9)[0] = '\n';
              (__dest + sVar9)[1] = '\0';
              if (iVar15 < 1) {
                return __dest;
              }
              if (iVar5 < 2) {
                return __dest;
              }
              iVar14 = 1;
              bVar4 = false;
              while( true ) {
                bVar3 = bVar4;
                lVar8 = (**(code **)(*param_1 + 0x568))(param_1,lVar7,iVar14);
                lVar12 = (**(code **)(*param_1 + 0x78))(param_1);
                if (lVar12 != 0) break;
                if (lVar8 == 0) goto LAB_001144f4;
                lVar12 = (**(code **)(*param_1 + 0x110))(param_1,lVar8,jm_toString);
                lVar13 = (**(code **)(*param_1 + 0x78))(param_1);
                if (lVar13 != 0) {
                  log2Console(5,"eup","A Java exception has been caught.");
                  (**(code **)(*param_1 + 0x80))(param_1);
                  (**(code **)(*param_1 + 0x88))(param_1);
LAB_00114544:
                  pcVar11 = "call toString fail!";
                  goto LAB_00114640;
                }
                if (lVar12 == 0) goto LAB_00114544;
                pcVar11 = (char *)(**(code **)(*param_1 + 0x548))(param_1,lVar12,0);
                lVar13 = (**(code **)(*param_1 + 0x78))(param_1);
                if (lVar13 != 0) {
                  log2Console(5,"eup","A Java exception has been caught.");
                  (**(code **)(*param_1 + 0x80))(param_1);
                  (**(code **)(*param_1 + 0x88))(param_1);
LAB_00114594:
                  pcVar11 = "call getStr fail!";
                  goto LAB_00114640;
                }
                if (pcVar11 == (char *)0x0) goto LAB_00114594;
                sVar9 = strlen(pcVar11);
                uVar6 = (uint)sVar9;
                uVar2 = uVar6;
                if (iVar15 <= (int)uVar6) {
                  uVar2 = iVar15 - 1;
                }
                bVar1 = iVar15 <= (int)uVar6;
                if (0 < (int)uVar2) {
                  strncat(__dest,pcVar11,(long)(int)uVar2);
                }
                sVar9 = strlen(__dest);
                (__dest + sVar9)[0] = '\n';
                (__dest + sVar9)[1] = '\0';
                (**(code **)(*param_1 + 0x550))(param_1,lVar12,pcVar11);
                lVar12 = (**(code **)(*param_1 + 0x78))(param_1);
                if (lVar12 != 0) {
                  log2Console(5,"eup","A Java exception has been caught.");
                  (**(code **)(*param_1 + 0x80))(param_1);
                  (**(code **)(*param_1 + 0x88))(param_1);
                  pcVar11 = "release str fail!";
                  goto LAB_00114640;
                }
                (**(code **)(*param_1 + 0xb8))(param_1,lVar8);
                lVar8 = (**(code **)(*param_1 + 0x78))(param_1);
                if (lVar8 != 0) {
                  log2Console(5,"eup","A Java exception has been caught.");
                  (**(code **)(*param_1 + 0x80))(param_1);
                  (**(code **)(*param_1 + 0x88))(param_1);
                  pcVar11 = "delete loc fail!";
                  goto LAB_00114640;
                }
                iVar15 = iVar15 + ~uVar2;
                if ((iVar15 < 1) ||
                   (iVar14 = iVar14 + 1, bVar4 = (bool)(bVar3 | bVar1), iVar5 <= iVar14)) {
                  if (bVar3 || bVar1) {
                    log2Console(5,"eup",note);
                    __src = note;
                    sVar9 = strlen(note);
                    strncat(__dest,__src,sVar9);
                    return __dest;
                  }
                  return __dest;
                }
              }
              log2Console(5,"eup","A Java exception has been caught.");
              (**(code **)(*param_1 + 0x80))(param_1);
              (**(code **)(*param_1 + 0x88))(param_1);
LAB_001144f4:
              pcVar11 = "call getarrayitem fail!";
LAB_00114640:
              log2Console(6,"eup",pcVar11);
              free(__dest);
              return (char *)0x0;
            }
          }
          else {
            log2Console(5,"eup","A Java exception has been caught.");
            (**(code **)(*param_1 + 0x80))(param_1);
            (**(code **)(*param_1 + 0x88))(param_1);
          }
          pcVar11 = "Failed to get error massage of pending exception.";
        }
        else {
          log2Console(5,"eup","A Java exception has been caught.");
          (**(code **)(*param_1 + 0x80))(param_1);
          (**(code **)(*param_1 + 0x88))(param_1);
          pcVar11 = "Failed to get array length.";
        }
        goto LAB_00114114;
      }
    }
    else {
      log2Console(5,"eup","A Java exception has been caught.");
      (**(code **)(*param_1 + 0x80))(param_1);
      (**(code **)(*param_1 + 0x88))(param_1);
    }
    pcVar11 = "Failed to get stacktrace of pending exception.";
  }
LAB_00114114:
  log2Console(6,"eup",pcVar11);
  return (char *)0x0;
}

