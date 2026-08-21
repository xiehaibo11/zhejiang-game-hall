
undefined4 FUN_00e0fb14(uint *param_1)

{
  uint uVar1;
  int iVar2;
  ssize_t sVar3;
  int *piVar4;
  char *pcVar5;
  uint uVar6;
  long lVar7;
  
  do {
    uVar6 = param_1[0x11];
    if (uVar6 == 0) {
      iVar2 = FUN_00e1025c(param_1);
      if (iVar2 == -1) {
        return 0xffffffff;
      }
      if (param_1[0x11] == 0) {
        return 0;
      }
    }
    else if (uVar6 == 2) {
      param_1[0x26] = param_1[10] << 1;
      *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_1 + 0xe);
      iVar2 = FUN_00e0fc40(param_1);
      if (iVar2 == -1) {
        return 0xffffffff;
      }
    }
    else if (uVar6 == 1) {
      uVar1 = param_1[10];
      lVar7 = *(long *)(param_1 + 0xe);
      uVar6 = 0;
      *param_1 = 0;
      break;
    }
    if (*param_1 != 0) {
      return 0;
    }
    if ((param_1[0x14] != 0) && (param_1[0x20] == 0)) {
      return 0;
    }
  } while( true );
  while( true ) {
    uVar6 = *param_1 + iVar2;
    *param_1 = uVar6;
    if (uVar1 * 2 <= uVar6) break;
    sVar3 = read(param_1[7],(void *)(lVar7 + (ulong)uVar6),(ulong)(uVar1 * 2 - uVar6));
    iVar2 = (int)sVar3;
    if (iVar2 < 1) {
      if (iVar2 < 0) {
        piVar4 = (int *)__errno();
        pcVar5 = strerror(*piVar4);
        FUN_00e0f54c(param_1,0xffffffff,pcVar5);
        return 0xffffffff;
      }
      param_1[0x14] = 1;
      break;
    }
  }
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 0xe);
  return 0;
}

