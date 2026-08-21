
ulong spSkeletonData_findBoneIndex(long param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (0 < iVar1) {
    lVar4 = *(long *)(param_1 + 0x20);
    uVar3 = 0;
    do {
      iVar2 = strcmp(*(char **)(*(long *)(lVar4 + uVar3 * 8) + 8),param_2);
      if (iVar2 == 0) goto LAB_00d50b58;
      uVar3 = uVar3 + 1;
    } while ((long)uVar3 < (long)iVar1);
  }
  uVar3 = 0xffffffff;
LAB_00d50b58:
  return uVar3 & 0xffffffff;
}

