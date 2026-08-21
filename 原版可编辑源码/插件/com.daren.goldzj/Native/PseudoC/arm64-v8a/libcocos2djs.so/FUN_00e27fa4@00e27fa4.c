
int FUN_00e27fa4(long *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long local_28;
  
  lVar3 = *param_1;
  if ((*(byte *)(lVar3 + 0x10) >> 1 & 1) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (**(code **)(*(long *)(lVar3 + 0x370) + 0xd0))(lVar3,param_2,&local_28);
    if (iVar2 == 0) {
      lVar3 = *param_1;
      param_1[0x1d] = local_28;
      if ((*(byte *)(lVar3 + 0x10) & 1) != 0) {
        FUN_00e16df4();
        FUN_00e31ac4(param_1,0);
        return 0;
      }
      iVar2 = (**(code **)(*(long *)(lVar3 + 0x370) + 0xd8))(lVar3,local_28,param_1 + 3);
      if (iVar2 == 0) {
        return 0;
      }
      param_1[0x1d] = 0xffffffff;
      return iVar2;
    }
    lVar3 = *param_1;
    param_1[0x1d] = 0xffffffff;
  }
  FUN_00e16f28(lVar3,param_2);
  if (((*(byte *)(*param_1 + 0x10) & 1) != 0) && (iVar2 = FUN_00e31ac4(param_1,0), iVar2 == 0)) {
    lVar3 = 0x18;
    if (*(ushort *)param_1[0xb] <= ((ushort *)param_1[0xb])[1]) {
      lVar3 = 0x1c;
    }
    iVar1 = *(int *)((long)param_2 + lVar3);
    if (*param_2 == 4 || iVar1 == 0) {
      iVar1 = 0x48;
    }
    lVar3 = FT_MulDiv((short)param_1[0x15],0x1200,iVar1);
    param_1[0x1e] = lVar3;
  }
  return iVar2;
}

