
ulong FUN_00c09288(long param_1,uint *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  
  if (param_2[2] == 0xb) {
    uVar4 = *(uint *)(*(long *)(param_1 + 0x48) + (ulong)*param_2 * 8);
    if ((uVar4 & 0xff) == 0x13) {
      uVar8 = 0xf;
      if (param_3 == 0) {
        uVar8 = 0xe;
      }
      *(uint *)(*(long *)(param_1 + 0x48) + (ulong)*param_2 * 8) = uVar8 | uVar4 & 0xffff0000;
      uVar9 = FUN_00c0899c();
      return uVar9;
    }
LAB_00c093f4:
    FUN_00c07f38(param_1,1);
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    FUN_00c08290(param_1,param_2);
  }
  else if (param_2[2] != 0xc) goto LAB_00c093f4;
  uVar4 = 0xff0c;
  if (param_3 == 0) {
    uVar4 = 0xff0d;
  }
  FUN_00c07f70(param_1,uVar4 | *param_2 << 0x10);
  uVar4 = *(uint *)(param_1 + 0x30);
  iVar2 = *(int *)(param_1 + 0x28);
  uVar8 = iVar2 - 1;
  uVar9 = (ulong)uVar8;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  if (((int)uVar8 < *(int *)(param_1 + 0x2c)) ||
     (*(char *)(*(long *)(param_1 + 0x48) + uVar9 * 8) != '2')) {
    uVar9 = FUN_00c07f70(param_1,*(int *)(param_1 + 0x34) << 8 | 0x7fff0058);
    uVar9 = uVar9 & 0xffffffff;
  }
  else {
    *(undefined2 *)(*(long *)(param_1 + 0x48) + uVar9 * 8 + 2) = 0x7fff;
    *(int *)(param_1 + 0x2c) = iVar2;
  }
  if (uVar4 != 0xffffffff) {
    if ((uint)uVar9 == 0xffffffff) {
      uVar8 = param_2[2];
      uVar9 = (ulong)uVar4;
      uVar4 = *param_2;
      goto joined_r0x00c0945c;
    }
    lVar7 = *(long *)(param_1 + 0x48);
    lVar3 = uVar9 * 8;
    uVar8 = *(uint *)(lVar7 + lVar3);
    uVar6 = uVar9;
    uVar5 = (uint)uVar9;
    while( true ) {
      if (uVar8 >> 0x10 == 0x7fff) break;
      uVar5 = (uint)uVar6;
      uVar1 = ((uVar8 >> 0x10) - 0x7fff) + uVar5;
      if (uVar1 == 0xffffffff) break;
      uVar6 = (ulong)uVar1;
      lVar3 = uVar6 * 8;
      uVar8 = *(uint *)(lVar7 + lVar3);
      uVar5 = uVar1;
    }
    uVar5 = (uVar4 + 0x7fff) - uVar5;
    if (0xffff < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_00c07bc4(*(undefined8 *)(param_1 + 8),0x91a);
    }
    *(short *)(lVar7 + lVar3 + 2) = (short)uVar5;
  }
  uVar8 = param_2[2];
  uVar4 = *param_2;
joined_r0x00c0945c:
  if (uVar8 != 0xc) {
    return uVar9;
  }
  FUN_00c07f1c(param_1,uVar4);
  return uVar9;
}

