
ulong FUN_00de87f0(int *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  uint uVar8;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (param_2 == 0) {
    if (*param_1 != 0) {
      return 0;
    }
    param_1[0] = 2;
    param_1[1] = 0;
    *(char **)(param_1 + 2) = "NULL VP8Io parameter in VP8Decode().";
    return 0;
  }
  if ((param_1[1] == 0) && (uVar4 = FUN_00de7944(param_1,param_2), (int)uVar4 == 0)) {
    return uVar4;
  }
  iVar1 = FUN_00de57ec(param_1,param_2);
  uVar4 = (ulong)(iVar1 == 0);
  if (iVar1 != 0) {
    if (iVar1 != 0) goto LAB_00de8984;
    goto LAB_00de884c;
  }
  iVar1 = FUN_00de5ae4(param_1,param_2);
  if (iVar1 == 0) {
LAB_00de896c:
    uVar8 = 0;
  }
  else {
    param_1[0x2d7] = 0;
    if (0 < param_1[0x6b]) {
      uVar8 = 0;
      do {
        iVar1 = param_1[0x6c];
        iVar2 = FUN_00e040d4(param_1 + 4,param_1);
        if (iVar2 == 0) {
          if (*param_1 != 0) goto LAB_00de896c;
          uVar6 = 7;
          pcVar7 = "Premature end-of-partition0 encountered.";
LAB_00de89e8:
          uVar8 = 0;
          *(undefined8 *)param_1 = uVar6;
          *(char **)(param_1 + 2) = pcVar7;
          goto LAB_00de8970;
        }
        if (param_1[0x2d6] < param_1[0x66]) {
          do {
            iVar2 = FUN_00de8058(param_1,param_1 + (long)(int)(iVar1 - 1U & uVar8) * 0xc + 0x6e);
            if (iVar2 == 0) {
              if (*param_1 != 0) goto LAB_00de896c;
              uVar6 = 7;
              pcVar7 = "Premature end-of-file encountered.";
              goto LAB_00de89e8;
            }
            iVar2 = param_1[0x2d6];
            param_1[0x2d6] = iVar2 + 1;
          } while (iVar2 + 1 < param_1[0x66]);
        }
        *(undefined2 *)(*(long *)(param_1 + 0x2c4) + -2) = 0;
        param_1[0x2c0] = 0;
        param_1[0x2d6] = 0;
        iVar1 = FUN_00de4714(param_1,param_2);
        if (iVar1 == 0) {
          if (*param_1 == 0) {
            uVar6 = 6;
            pcVar7 = "Output aborted.";
            goto LAB_00de89e8;
          }
          goto LAB_00de896c;
        }
        uVar8 = param_1[0x2d7] + 1;
        param_1[0x2d7] = uVar8;
      } while ((int)uVar8 < param_1[0x6b]);
    }
    if (0 < param_1[0x32]) {
      lVar5 = WebPGetWorkerInterface();
      iVar1 = (**(code **)(lVar5 + 0x10))(param_1 + 0x26);
      if (iVar1 == 0) goto LAB_00de896c;
    }
    uVar8 = 1;
  }
LAB_00de8970:
  uVar3 = FUN_00de5a5c(param_1,param_2);
  uVar4 = (ulong)(uVar3 & uVar8);
  if ((uVar3 & uVar8) == 0) {
LAB_00de8984:
    lVar5 = WebPGetWorkerInterface();
    (**(code **)(lVar5 + 0x28))(param_1 + 0x26);
    FUN_00e03bec(*(undefined8 *)(param_1 + 0x2e4));
    param_1[0x2e4] = 0;
    param_1[0x2e5] = 0;
    WebPSafeFree(*(void **)(param_1 + 0x2d2));
    param_1[1] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[0x2d4] = 0;
    param_1[0x2d5] = 0;
    param_1[0x2d2] = 0;
    param_1[0x2d3] = 0;
    return 0;
  }
LAB_00de884c:
  param_1[1] = 0;
  return uVar4;
}

