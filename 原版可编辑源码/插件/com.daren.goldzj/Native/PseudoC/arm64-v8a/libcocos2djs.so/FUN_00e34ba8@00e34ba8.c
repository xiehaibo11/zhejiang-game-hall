
void FUN_00e34ba8(long *param_1,long param_2,ulong param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if ((long)*(short *)((long)param_1 + 0x226) != 0) {
    iVar1 = *(int *)(*(long *)(*param_1 + 0xb0) + 0x78);
    if ((iVar1 == 0x23) || ((iVar1 == 0x28 && (*(char *)((long)param_1 + 0x42b) == '\0')))) {
      lVar3 = (param_3 & 0xffff) * 0x10;
      lVar4 = *(long *)(*(long *)(param_2 + 0x18) + lVar3);
      lVar2 = FT_MulDiv(param_4,(long)*(short *)((long)param_1 + 0x226),param_1[0x7a]);
      *(long *)(*(long *)(param_2 + 0x18) + lVar3) = lVar2 + lVar4;
    }
    *(byte *)(*(long *)(param_2 + 0x28) + (param_3 & 0xffff)) =
         *(byte *)(*(long *)(param_2 + 0x28) + (param_3 & 0xffff)) | 8;
  }
  if ((long)(short)param_1[0x45] != 0) {
    if ((((*(int *)(*(long *)(*param_1 + 0xb0) + 0x78) != 0x28) ||
         (*(char *)((long)param_1 + 0x42b) == '\0')) || (*(char *)((long)param_1 + 0x42c) == '\0'))
       || (*(char *)((long)param_1 + 0x42d) == '\0')) {
      lVar3 = (param_3 & 0xffff) * 0x10;
      lVar4 = *(long *)(*(long *)(param_2 + 0x18) + lVar3 + 8);
      lVar2 = FT_MulDiv(param_4,(long)(short)param_1[0x45],param_1[0x7a]);
      *(long *)(*(long *)(param_2 + 0x18) + lVar3 + 8) = lVar2 + lVar4;
    }
    *(byte *)(*(long *)(param_2 + 0x28) + (param_3 & 0xffff)) =
         *(byte *)(*(long *)(param_2 + 0x28) + (param_3 & 0xffff)) | 0x10;
  }
  return;
}

