
int FUN_00e6b624(uint *param_1,int param_2,int param_3,undefined8 param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  uint *puVar8;
  uint uVar9;
  undefined4 uVar10;
  int local_64;
  int local_58;
  int local_54;
  
  if (param_3 < 0) {
    uVar10 = 3;
    iVar4 = param_2 + -0x15;
    if (param_3 != -0x15) {
      uVar10 = 1;
      iVar4 = param_2;
    }
    param_3 = 0;
    param_2 = iVar4;
  }
  else {
    uVar10 = 0;
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = 0xffffffff;
  }
  uVar2 = *param_1;
  lVar6 = *(long *)(param_1 + 2);
  uVar9 = 0;
  if (uVar2 != 0) {
    piVar7 = (int *)(lVar6 + 4);
    do {
      if ((piVar7[-1] == param_2) && (*piVar7 == param_3)) goto LAB_00e6b708;
      uVar9 = uVar9 + 1;
      piVar7 = piVar7 + 3;
    } while (uVar9 < uVar2);
  }
  uVar3 = param_1[1];
  uVar1 = uVar2 + 1;
  if ((uVar3 <= uVar1) && (local_64 = 0, uVar3 < uVar1)) {
    uVar2 = uVar2 + 8 & 0xfffffff8;
    lVar6 = FUN_00e13bcc(param_4,0xc,uVar3,uVar2,lVar6,&local_64);
    *(long *)(param_1 + 2) = lVar6;
    if (local_64 != 0) {
      return local_64;
    }
    param_1[1] = uVar2;
  }
  lVar6 = lVar6 + (ulong)uVar1 * 0xc;
  *param_1 = uVar1;
  *(int *)(lVar6 + -0xc) = param_2;
  *(int *)(lVar6 + -8) = param_3;
  *(undefined4 *)(lVar6 + -4) = uVar10;
LAB_00e6b708:
  if (param_1[4] == 0) {
    if (param_1[5] == 0) {
      local_58 = 0;
      puVar8 = (uint *)FUN_00e13bcc(param_4,0x18,0,8,*(undefined8 *)(param_1 + 6),&local_58);
      *(uint **)(param_1 + 6) = puVar8;
      if (local_58 != 0) {
        return local_58;
      }
      param_1[5] = 8;
    }
    else {
      puVar8 = *(uint **)(param_1 + 6);
    }
    *puVar8 = 0;
    puVar8[4] = 0;
    param_1[4] = 1;
  }
  else {
    puVar8 = (uint *)(*(long *)(param_1 + 6) + (ulong)param_1[4] * 0x18 + -0x18);
    if (uVar9 < *puVar8) goto LAB_00e6b7c4;
  }
  local_54 = 0;
  uVar2 = puVar8[1] + 7 >> 3;
  uVar1 = uVar9 + 8 >> 3;
  if (uVar2 < uVar1) {
    uVar1 = uVar1 + 7 & 0x3ffffff8;
    uVar5 = FUN_00e13bcc(param_4,1,uVar2,uVar1,*(undefined8 *)(puVar8 + 2),&local_54);
    *(undefined8 *)(puVar8 + 2) = uVar5;
    if (local_54 != 0) {
      return local_54;
    }
    puVar8[1] = uVar1 << 3;
  }
  *puVar8 = uVar9 + 1;
LAB_00e6b7c4:
  *(byte *)(*(long *)(puVar8 + 2) + (ulong)(uVar9 >> 3)) =
       *(byte *)(*(long *)(puVar8 + 2) + (ulong)(uVar9 >> 3)) | (byte)(0x80 >> (ulong)(uVar9 & 7));
  if (param_5 != (uint *)0x0) {
    *param_5 = uVar9;
  }
  return 0;
}

