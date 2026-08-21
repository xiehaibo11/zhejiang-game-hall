
int FUN_00e39cf8(long param_1,void *param_2,size_t param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint local_34;
  
  iVar2 = FUN_00e1bb5c(param_1,0);
  if (iVar2 != 0) {
    return iVar2;
  }
  sVar1 = FUN_00e1bcf8(param_1,&local_34);
  if (local_34 != 0) {
    return local_34;
  }
  if ((ushort)(sVar1 + 0x7fffU) < 2) {
    FUN_00e1dcb4(param_1,&local_34);
    if (local_34 != 0) {
      return local_34;
    }
    if (sVar1 == -0x7fff) goto LAB_00e39da0;
  }
  iVar2 = FUN_00e1bb5c(param_1,0);
  if (iVar2 != 0) {
    return iVar2;
  }
LAB_00e39da0:
  iVar2 = FUN_00e1d718(param_1,param_3);
  if (iVar2 == 0) {
    iVar3 = memcmp(*(void **)(param_1 + 0x40),param_2,param_3);
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = 2;
    }
    FUN_00e1d90c(param_1);
  }
  return iVar2;
}

