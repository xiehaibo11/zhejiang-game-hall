
undefined8
javaObjectCall_NativeExceptionHandler_handleNativeException
          (long *param_1,long param_2,long param_3,char *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  size_t sVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  code *pcVar19;
  char *pcVar20;
  
  if ((((param_1 == (long *)0x0) || (param_2 == 0)) || (param_3 == 0)) || (param_4 == (char *)0x0))
  {
    pcVar20 = "env == NULL || obj == NULL || eupInfo == NULL || nativeRQDVersion == NULL , return!";
  }
  else {
    uVar1 = *(undefined4 *)(param_3 + 4);
    uVar2 = *(undefined4 *)(param_3 + 8);
    iVar7 = *(int *)(param_3 + 0x28);
    iVar8 = *(int *)(param_3 + 0x30);
    sVar9 = strlen((char *)(param_3 + 0xd0));
    lVar10 = toJavaString(param_1,(char *)(param_3 + 0xd0),sVar9);
    if (lVar10 == 0) {
      return 0xffffffff;
    }
    sVar9 = strlen((char *)(param_3 + 0xe8));
    lVar11 = toJavaString(param_1,(char *)(param_3 + 0xe8),sVar9);
    if (lVar11 == 0) {
      return 0xffffffff;
    }
    pcVar20 = *(char **)(param_3 + 0x4a8);
    sVar9 = strlen(pcVar20);
    lVar12 = toJavaString(param_1,pcVar20,sVar9);
    if (lVar12 == 0) {
      return 0xffffffff;
    }
    sVar9 = strlen((char *)(param_3 + 0x128));
    lVar13 = toJavaString(param_1,(char *)(param_3 + 0x128),sVar9);
    if (lVar13 == 0) {
      return 0xffffffff;
    }
    uVar3 = *(undefined4 *)(param_3 + 0x14);
    sVar9 = strlen((char *)(param_3 + 0x38));
    lVar14 = toJavaString(param_1,(char *)(param_3 + 0x38),sVar9);
    if (lVar14 == 0) {
      return 0xffffffff;
    }
    uVar4 = *(undefined4 *)(param_3 + 0x18);
    uVar5 = *(undefined4 *)(param_3 + 0x1c);
    uVar6 = *(undefined4 *)(param_3 + 0x10);
    sVar9 = strlen((char *)(param_3 + 0x50));
    lVar15 = toJavaString(param_1,(char *)(param_3 + 0x50),sVar9);
    if (lVar15 == 0) {
      return 0xffffffff;
    }
    sVar9 = strlen(param_4);
    lVar16 = toJavaString(param_1,param_4,sVar9);
    if (lVar16 == 0) {
      return 0xffffffff;
    }
    lVar17 = constructUploadExtraMessage(param_1,param_3);
    if (lVar17 == 0) {
      pcVar20 = "Failed to constructUploadExtraMessage";
    }
    else {
      if (jm_handleNativeException2 == 0) {
        pcVar19 = *(code **)(*param_1 + 0x1e8);
        lVar18 = jm_handleNativeException;
      }
      else {
        log2Console(4,"eup","Use new interface to handle native exception.");
        pcVar19 = *(code **)(*param_1 + 0x1e8);
        lVar18 = jm_handleNativeException2;
      }
      (*pcVar19)(param_1,param_2,lVar18,uVar1,uVar2,(long)iVar7,(long)iVar8,lVar10,lVar11,lVar12,
                 lVar13,uVar3,lVar14,uVar4,uVar5,uVar6,lVar15,lVar16);
      lVar18 = (**(code **)(*param_1 + 0x78))(param_1);
      if (lVar18 == 0) {
        (**(code **)(*param_1 + 0xb8))(param_1,lVar10);
        lVar10 = (**(code **)(*param_1 + 0x78))(param_1);
        if (lVar10 == 0) {
          (**(code **)(*param_1 + 0xb8))(param_1,lVar11);
          lVar10 = (**(code **)(*param_1 + 0x78))(param_1);
          if (lVar10 == 0) {
            (**(code **)(*param_1 + 0xb8))(param_1,lVar12);
            lVar10 = (**(code **)(*param_1 + 0x78))(param_1);
            if (lVar10 == 0) {
              (**(code **)(*param_1 + 0xb8))(param_1,lVar13);
              lVar10 = (**(code **)(*param_1 + 0x78))(param_1);
              if (lVar10 == 0) {
                (**(code **)(*param_1 + 0xb8))(param_1,lVar14);
                lVar10 = (**(code **)(*param_1 + 0x78))(param_1);
                if (lVar10 == 0) {
                  (**(code **)(*param_1 + 0xb8))(param_1,lVar15);
                  lVar10 = (**(code **)(*param_1 + 0x78))(param_1);
                  if (lVar10 == 0) {
                    (**(code **)(*param_1 + 0xb8))(param_1,lVar16);
                    lVar10 = (**(code **)(*param_1 + 0x78))(param_1);
                    if (lVar10 == 0) {
                      (**(code **)(*param_1 + 0xb8))(param_1,lVar17);
                      lVar10 = (**(code **)(*param_1 + 0x78))(param_1);
                      if (lVar10 == 0) {
                        return 0;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        log2Console(5,"eup","A Java exception has been caught.");
        (**(code **)(*param_1 + 0x80))(param_1);
        (**(code **)(*param_1 + 0x88))(param_1);
        pcVar20 = "delete fail!";
      }
      else {
        log2Console(5,"eup","A Java exception has been caught.");
        (**(code **)(*param_1 + 0x80))(param_1);
        (**(code **)(*param_1 + 0x88))(param_1);
        pcVar20 = "call handle fail!";
      }
    }
  }
  log2Console(6,"eup",pcVar20);
  return 0xffffffff;
}

