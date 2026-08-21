
int FUN_00a0fd68(long param_1,uint *param_2,long param_3,ulong param_4)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  
  uVar5 = *(uint *)(param_1 + 0x28);
  if (param_4 < 4) {
    *(uint *)(param_1 + 0x28) = uVar5;
    return -2;
  }
  lVar7 = 3;
  iVar3 = -1;
  do {
    iVar4 = iVar3;
    param_4 = param_4 - 4;
    pbVar1 = (byte *)(param_3 + lVar7);
    iVar6 = (int)lVar7;
    if (uVar5 == 0) {
      uVar2 = (uint)pbVar1[-3] << 0x18 | (uint)pbVar1[-2] << 0x10 | (uint)pbVar1[-1] << 8 |
              (uint)*pbVar1;
    }
    else {
      uVar2 = CONCAT13(*pbVar1,CONCAT12(pbVar1[-1],CONCAT11(pbVar1[-2],pbVar1[-3])));
    }
    if (uVar2 != 0xfeff) {
      if (uVar2 != 0xfffe0000) {
        if (-1 < (int)uVar2) {
          iVar4 = iVar6 + 1;
          *param_2 = uVar2;
        }
        *(uint *)(param_1 + 0x28) = uVar5;
        return iVar4;
      }
      uVar5 = uVar5 ^ 1;
    }
  } while ((3 < param_4) && (lVar7 = lVar7 + 4, iVar3 = iVar4 + -8, iVar6 + 1U < 0x3fffffff));
  *(uint *)(param_1 + 0x28) = uVar5;
  return iVar4 + -9;
}

