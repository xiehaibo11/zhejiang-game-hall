
undefined4 FUN_0117eb68(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ssize_t sVar5;
  int *piVar6;
  char *pcVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  
  uVar1 = param_1[0x26];
  iVar4 = 0;
LAB_0117eba0:
  if (param_1[0x20] != 0) {
LAB_0117ec14:
    iVar4 = inflate(param_1 + 0x1e,0);
    switch(iVar4) {
    case -4:
      uVar8 = 0xfffffffc;
      pcVar7 = "out of memory";
      break;
    case -3:
      uVar8 = 0xfffffffd;
      pcVar7 = "compressed data error";
      if (*(char **)(param_1 + 0x2a) != (char *)0x0) {
        pcVar7 = *(char **)(param_1 + 0x2a);
      }
      break;
    case -2:
    case 2:
      uVar8 = 0xfffffffe;
      pcVar7 = "internal error: inflate stream corrupt";
      break;
    default:
      goto switchD_0117ec38_caseD_ffffffff;
    }
    FUN_0117e474(param_1,uVar8,pcVar7);
    return 0xffffffff;
  }
  if ((param_1[0x1b] != 0) && (param_1[0x1b] != 0xfffffffb)) {
    return 0xffffffff;
  }
  if (param_1[0x14] == 0) {
    lVar10 = *(long *)(param_1 + 0xc);
    uVar2 = param_1[10];
    uVar9 = 0;
    do {
      sVar5 = read(param_1[7],(void *)(lVar10 + (ulong)uVar9),(ulong)(uVar2 - uVar9));
      iVar3 = (int)sVar5;
      if (iVar3 < 1) {
        if (iVar3 < 0) {
          piVar6 = (int *)__errno();
          pcVar7 = strerror(*piVar6);
          FUN_0117e474(param_1,0xffffffff,pcVar7);
          return 0xffffffff;
        }
        param_1[0x14] = 1;
        break;
      }
      uVar9 = uVar9 + iVar3;
    } while (uVar9 < uVar2);
    uVar2 = param_1[0x20];
    param_1[0x20] = uVar2 + uVar9;
    *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_1 + 0xc);
    if (uVar2 + uVar9 != 0) goto LAB_0117ec14;
  }
  FUN_0117e474(param_1,0xfffffffb,"unexpected end of file");
  uVar9 = param_1[0x26];
LAB_0117ec68:
  *param_1 = uVar1 - uVar9;
  *(ulong *)(param_1 + 2) = *(long *)(param_1 + 0x24) - (ulong)(uVar1 - uVar9);
  if (iVar4 == 1) {
    param_1[0x11] = 0;
  }
  return 0;
switchD_0117ec38_caseD_ffffffff:
  uVar9 = param_1[0x26];
  if ((iVar4 == 1) || (uVar9 == 0)) goto LAB_0117ec68;
  goto LAB_0117eba0;
}

