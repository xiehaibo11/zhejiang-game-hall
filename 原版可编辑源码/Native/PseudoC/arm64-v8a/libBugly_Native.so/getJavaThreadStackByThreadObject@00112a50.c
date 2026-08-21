
/* WARNING: Type propagation algorithm not settling */

char * getJavaThreadStackByThreadObject(long *param_1,long param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  bool bVar3;
  undefined *__src;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  size_t sVar10;
  char *pcVar11;
  long lVar12;
  long lVar13;
  char *pcVar14;
  int iVar15;
  int iVar16;
  
  if ((param_1 == (long *)0x0) || (param_3 < 1)) {
    pcVar11 = "env == NULL || maxLen <= 0, return!";
    goto LAB_00112b74;
  }
  uVar7 = getJavaThreadName();
  log2Console(3,"eup","Begin to get stack of java thread: %s",uVar7);
  if (param_2 == 0) {
    pcVar11 = "env == NULL || obj == NULL , return!";
    uVar7 = 6;
LAB_00112b5c:
    log2Console(uVar7,"eup",pcVar11);
  }
  else {
    lVar8 = (**(code **)(*param_1 + 0x110))(param_1,param_2,jm_getStackTrace);
    lVar9 = (**(code **)(*param_1 + 0x78))(param_1);
    if (lVar9 != 0) {
      log2Console(5,"eup","A Java exception has been caught.");
      (**(code **)(*param_1 + 0x80))(param_1);
      (**(code **)(*param_1 + 0x88))(param_1);
      pcVar11 = "call getStackTrace fail!";
      uVar7 = 5;
      goto LAB_00112b5c;
    }
    if (lVar8 != 0) {
      log2Console(3,"eup","Successfully got stacktrace of java thread.");
      if (0x13ff < param_3) {
        param_3 = 0x1400;
      }
      sVar10 = strlen(note);
      iVar5 = (**(code **)(*param_1 + 0x558))(param_1,lVar8);
      lVar9 = (**(code **)(*param_1 + 0x78))(param_1);
      if (lVar9 == 0) {
        iVar16 = param_3 + ~(uint)sVar10;
        log2Console(3,"eup","Stack line: %d",iVar5);
        pcVar11 = calloc(1,(long)param_3);
        if (iVar16 < 1) {
          return pcVar11;
        }
        if (iVar5 < 2) {
          return pcVar11;
        }
        iVar15 = 1;
        bVar4 = false;
        while( true ) {
          bVar3 = bVar4;
          lVar9 = (**(code **)(*param_1 + 0x568))(param_1,lVar8,iVar15);
          lVar12 = (**(code **)(*param_1 + 0x78))(param_1);
          if (lVar12 != 0) break;
          if (lVar9 == 0) goto LAB_00112e88;
          lVar12 = (**(code **)(*param_1 + 0x110))(param_1,lVar9,jm_toString);
          lVar13 = (**(code **)(*param_1 + 0x78))(param_1);
          if (lVar13 != 0) {
            log2Console(5,"eup","A Java exception has been caught.");
            (**(code **)(*param_1 + 0x80))(param_1);
            (**(code **)(*param_1 + 0x88))(param_1);
LAB_00112ed8:
            pcVar14 = "call toString fail!";
            goto LAB_00112fd4;
          }
          if (lVar12 == 0) goto LAB_00112ed8;
          pcVar14 = (char *)(**(code **)(*param_1 + 0x548))(param_1,lVar12,0);
          lVar13 = (**(code **)(*param_1 + 0x78))(param_1);
          if (lVar13 != 0) {
            log2Console(5,"eup","A Java exception has been caught.");
            (**(code **)(*param_1 + 0x80))(param_1);
            (**(code **)(*param_1 + 0x88))(param_1);
LAB_00112f28:
            pcVar14 = "call getStr fail!";
            goto LAB_00112fd4;
          }
          if (pcVar14 == (char *)0x0) goto LAB_00112f28;
          sVar10 = strlen(pcVar14);
          uVar6 = (uint)sVar10;
          uVar2 = uVar6;
          if (iVar16 <= (int)uVar6) {
            uVar2 = iVar16 - 1;
          }
          bVar1 = iVar16 <= (int)uVar6;
          if (0 < (int)uVar2) {
            strncat(pcVar11,pcVar14,(long)(int)uVar2);
          }
          sVar10 = strlen(pcVar11);
          (pcVar11 + sVar10)[0] = '\n';
          (pcVar11 + sVar10)[1] = '\0';
          (**(code **)(*param_1 + 0x550))(param_1,lVar12,pcVar14);
          lVar12 = (**(code **)(*param_1 + 0x78))(param_1);
          if (lVar12 != 0) {
            log2Console(5,"eup","A Java exception has been caught.");
            (**(code **)(*param_1 + 0x80))(param_1);
            (**(code **)(*param_1 + 0x88))(param_1);
            pcVar14 = "release str fail!";
            goto LAB_00112fd4;
          }
          (**(code **)(*param_1 + 0xb8))(param_1,lVar9);
          lVar9 = (**(code **)(*param_1 + 0x78))(param_1);
          if (lVar9 != 0) {
            log2Console(5,"eup","A Java exception has been caught.");
            (**(code **)(*param_1 + 0x80))(param_1);
            (**(code **)(*param_1 + 0x88))(param_1);
            pcVar14 = "delete loc fail!";
            goto LAB_00112fd4;
          }
          iVar16 = iVar16 + ~uVar2;
          if ((iVar16 < 1) || (iVar15 = iVar15 + 1, bVar4 = (bool)(bVar3 | bVar1), iVar5 <= iVar15))
          {
            if (bVar3 || bVar1) {
              log2Console(5,"eup",note);
              __src = note;
              sVar10 = strlen(note);
              strncat(pcVar11,__src,sVar10);
              return pcVar11;
            }
            return pcVar11;
          }
        }
        log2Console(5,"eup","A Java exception has been caught.");
        (**(code **)(*param_1 + 0x80))(param_1);
        (**(code **)(*param_1 + 0x88))(param_1);
LAB_00112e88:
        pcVar14 = "call getarrayitem fail!";
LAB_00112fd4:
        log2Console(6,"eup",pcVar14);
        free(pcVar11);
        return (char *)0x0;
      }
      log2Console(5,"eup","A Java exception has been caught.");
      (**(code **)(*param_1 + 0x80))(param_1);
      (**(code **)(*param_1 + 0x88))(param_1);
      pcVar11 = "Failed to get array length.";
      goto LAB_00112b74;
    }
  }
  pcVar11 = "Failed to get stacktrace of java thread.";
LAB_00112b74:
  log2Console(6,"eup",pcVar11);
  return (char *)0x0;
}

