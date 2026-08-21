
int FUN_011a9b94(long param_1,long param_2,sockaddr *param_3,socklen_t param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (*(long *)(param_2 + 0x78) != 0) {
    return -0x72;
  }
  if ((param_3->sa_family == 0) || (*(int *)(param_2 + 0xb8) != -1)) {
    *(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) | 0xc000;
  }
  else {
    iVar1 = FUN_011a2b64(param_3->sa_family,1,0);
    if (iVar1 < 0) {
      return iVar1;
    }
    iVar2 = FUN_011a8740(param_2,iVar1,0xc000);
    if (iVar2 != 0) {
      FUN_011a2d5c(iVar1);
      return iVar2;
    }
  }
  *(undefined4 *)(param_2 + 0xe8) = 0;
  do {
    piVar3 = (int *)__errno();
    *piVar3 = 0;
    iVar1 = connect(*(int *)(param_2 + 0xb8),param_3,param_4);
    if (iVar1 != -1) goto LAB_011a9c40;
    iVar1 = *piVar3;
  } while (iVar1 == 4);
  if ((iVar1 != 0) && (iVar1 != 0x73)) {
    if (iVar1 != 0x6f) {
      return -iVar1;
    }
    *(undefined4 *)(param_2 + 0xe8) = 0xffffff91;
  }
LAB_011a9c40:
  *(undefined4 *)(param_1 + 8) = 2;
  *(int *)(*(long *)(param_2 + 8) + 0x20) = *(int *)(*(long *)(param_2 + 8) + 0x20) + 1;
  *(undefined8 *)(param_1 + 0x40) = param_5;
  *(long *)(param_1 + 0x48) = param_2;
  *(long *)(param_1 + 0x50) = param_1 + 0x50;
  *(long *)(param_1 + 0x58) = param_1 + 0x50;
  *(long *)(param_2 + 0x78) = param_1;
  FUN_011a3688(*(undefined8 *)(param_2 + 8),param_2 + 0x88,4);
  if (*(int *)(param_2 + 0xe8) != 0) {
    FUN_011a390c(*(undefined8 *)(param_2 + 8),param_2 + 0x88);
  }
  return 0;
}

