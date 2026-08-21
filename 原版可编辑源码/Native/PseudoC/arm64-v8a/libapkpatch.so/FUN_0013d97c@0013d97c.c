
undefined8 FUN_0013d97c(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  short sVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = param_1[10] + (ulong)*(uint *)(param_1[0xb] + (long)param_2 * 4);
  sVar3 = *(short *)(lVar1 + 10);
  lVar5 = (long)param_2;
  if (sVar3 == 8) {
    iVar2 = *(int *)(param_1[0xf] + lVar5 * 4);
    uVar4 = FUN_0013d6b0(param_1,*param_1,iVar2,*(int *)(param_1[0xc] + lVar5 * 4) + iVar2,
                         *(undefined4 *)(lVar1 + 0x18));
    return uVar4;
  }
  if (sVar3 == 0) {
    iVar2 = *(int *)(param_1[0xf] + lVar5 * 4);
    uVar4 = FUN_0013d5c8(param_1,*param_1,iVar2,iVar2 + *(int *)(param_1[0xc] + lVar5 * 4),param_3,
                         param_4);
    return uVar4;
  }
  FUN_0013fb24(&DAT_0016ba80,"Z_DEFLATED==compressType",DAT_0016ba88);
  return 0;
}

