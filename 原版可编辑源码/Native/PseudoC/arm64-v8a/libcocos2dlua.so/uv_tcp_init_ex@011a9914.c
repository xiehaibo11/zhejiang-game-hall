
int uv_tcp_init_ex(undefined8 param_1,long param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = param_3 & 0xff;
  if (10 < uVar1) {
    return -0x16;
  }
  if ((1 << (ulong)(param_3 & 0x1f) & 0x405U) == 0) {
    return -0x16;
  }
  if (0xff < param_3) {
    return -0x16;
  }
  FUN_011a7f30(param_1,param_2,0xc);
  if ((uVar1 == 0) || (*(int *)(param_2 + 0xb8) != -1)) {
LAB_011a9978:
    iVar3 = 0;
  }
  else {
    iVar2 = FUN_011a2b64(uVar1,1,0);
    iVar3 = iVar2;
    if (-1 < iVar2) {
      iVar3 = FUN_011a8740(param_2,iVar2,0);
      if (iVar3 == 0) goto LAB_011a9978;
      FUN_011a2d5c(iVar2);
    }
    **(undefined8 **)(param_2 + 0x28) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(*(long *)(param_2 + 0x20) + 8) = *(undefined8 *)(param_2 + 0x28);
  }
  return iVar3;
}

