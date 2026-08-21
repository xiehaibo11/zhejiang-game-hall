
int FUN_00e6bb30(long param_1,long param_2,uint param_3,int param_4,undefined4 param_5,
                undefined8 param_6)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  byte *pbVar4;
  int *piVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  int local_5c;
  int local_58;
  int local_54;
  
  uVar9 = *(uint *)(param_1 + 0x10);
  if (uVar9 != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x18) + (ulong)uVar9 * 0x18 + -8) = param_5;
  }
  uVar7 = *(uint *)(param_1 + 0x14);
  uVar1 = uVar9 + 1;
  if (uVar7 < uVar1) {
    local_5c = 0;
    uVar9 = uVar9 + 8 & 0xfffffff8;
    piVar5 = (int *)FUN_00e13bcc(param_6,0x18,uVar7,uVar9,*(undefined8 *)(param_1 + 0x18),&local_5c)
    ;
    *(int **)(param_1 + 0x18) = piVar5;
    if (local_5c != 0) {
      return local_5c;
    }
    *(uint *)(param_1 + 0x14) = uVar9;
    uVar7 = uVar9;
  }
  else {
    piVar5 = *(int **)(param_1 + 0x18);
  }
  piVar5[(ulong)uVar1 * 6 + -6] = 0;
  piVar5[(ulong)uVar1 * 6 + -2] = 0;
  *(uint *)(param_1 + 0x10) = uVar1;
  if (uVar1 == 0) {
    if (uVar7 == 0) {
      local_58 = 0;
      piVar5 = (int *)FUN_00e13bcc(param_6,0x18,0,8,piVar5,&local_58);
      *(int **)(param_1 + 0x18) = piVar5;
      if (local_58 != 0) {
        return local_58;
      }
      *(undefined4 *)(param_1 + 0x14) = 8;
    }
    *piVar5 = 0;
    piVar5[4] = 0;
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else {
    piVar5 = piVar5 + (ulong)uVar1 * 6 + -6;
  }
  local_54 = 0;
  uVar9 = piVar5[1] + 7U >> 3;
  uVar1 = param_4 + 7U >> 3;
  if (uVar9 < uVar1) {
    uVar1 = uVar1 + 7 & 0x3ffffff8;
    pbVar6 = (byte *)FUN_00e13bcc(param_6,1,uVar9,uVar1,*(undefined8 *)(piVar5 + 2),&local_54);
    *(byte **)(piVar5 + 2) = pbVar6;
    if (local_54 != 0) {
      return local_54;
    }
    piVar5[1] = uVar1 << 3;
    *piVar5 = param_4;
  }
  else {
    pbVar6 = *(byte **)(piVar5 + 2);
    *piVar5 = param_4;
  }
  if (param_4 != 0) {
    uVar9 = 0x80 >> (ulong)(param_3 & 7);
    pbVar8 = (byte *)(param_2 + (ulong)(param_3 >> 3));
    iVar10 = 0x80;
    do {
      uVar1 = (int)uVar9 >> 1;
      iVar2 = iVar10 >> 1;
      bVar3 = *pbVar6 & ((byte)iVar10 ^ 0xff);
      if ((uVar9 & *pbVar8) != 0) {
        bVar3 = (byte)iVar10 | *pbVar6;
      }
      *pbVar6 = bVar3;
      uVar9 = 0x80;
      pbVar4 = pbVar8 + 1;
      if (uVar1 != 0) {
        uVar9 = uVar1;
        pbVar4 = pbVar8;
      }
      pbVar8 = pbVar4;
      pbVar4 = pbVar6 + 1;
      if (iVar2 != 0) {
        pbVar4 = pbVar6;
      }
      iVar10 = 0x80;
      if (iVar2 != 0) {
        iVar10 = iVar2;
      }
      param_4 = param_4 + -1;
      pbVar6 = pbVar4;
    } while (param_4 != 0);
  }
  return 0;
}

