
bool FUN_00ea8554(byte *param_1,byte *param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  size_t sVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  
  bVar3 = *param_1;
  bVar4 = *param_2;
  sVar7 = (size_t)(bVar3 >> 1);
  sVar2 = sVar7;
  if ((bVar3 & 1) != 0) {
    sVar2 = *(size_t *)(param_1 + 8);
  }
  sVar1 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar1 = *(size_t *)(param_2 + 8);
  }
  if (sVar2 == sVar1) {
    pbVar9 = *(byte **)(param_1 + 0x10);
    pbVar10 = *(byte **)(param_2 + 0x10);
    if ((bVar3 & 1) == 0) {
      pbVar9 = param_1 + 1;
    }
    if ((bVar4 & 1) == 0) {
      pbVar10 = param_2 + 1;
    }
    pbVar5 = param_1;
    if ((bVar3 & 1) == 0) {
      while (sVar2 != 0) {
        if (pbVar5[1] != *pbVar10) {
          return false;
        }
        pbVar10 = pbVar10 + 1;
        sVar7 = sVar7 - 1;
        pbVar5 = pbVar5 + 1;
        sVar2 = sVar7;
      }
    }
    else if ((sVar2 != 0) && (iVar6 = memcmp(pbVar9,pbVar10,sVar2), iVar6 != 0)) {
      return false;
    }
    bVar3 = param_1[0x18];
    bVar4 = param_2[0x18];
    uVar8 = (ulong)(bVar3 >> 1);
    sVar2 = uVar8;
    if ((bVar3 & 1) != 0) {
      sVar2 = *(size_t *)(param_1 + 0x20);
    }
    sVar7 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      sVar7 = *(size_t *)(param_2 + 0x20);
    }
    if (sVar2 == sVar7) {
      pbVar9 = *(byte **)(param_1 + 0x28);
      pbVar10 = *(byte **)(param_2 + 0x28);
      if ((bVar3 & 1) == 0) {
        pbVar9 = param_1 + 0x19;
      }
      if ((bVar4 & 1) == 0) {
        pbVar10 = param_2 + 0x19;
      }
      if ((bVar3 & 1) == 0) {
        if (sVar2 != 0) {
          param_1 = param_1 + 0x19;
          do {
            if (*param_1 != *pbVar10) {
              return false;
            }
            uVar8 = uVar8 - 1;
            param_1 = param_1 + 1;
            pbVar10 = pbVar10 + 1;
          } while (uVar8 != 0);
          return true;
        }
      }
      else if (sVar2 != 0) {
        iVar6 = memcmp(pbVar9,pbVar10,sVar2);
        return iVar6 == 0;
      }
      return true;
    }
  }
  return false;
}

