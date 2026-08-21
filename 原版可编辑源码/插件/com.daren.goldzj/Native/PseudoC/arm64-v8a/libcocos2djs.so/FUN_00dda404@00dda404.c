
uint FUN_00dda404(long param_1,uint param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  
  uVar6 = param_3 - param_2;
  if ((int)uVar6 < 1) {
    return 0;
  }
  uVar4 = param_2 & 7;
  pbVar5 = (byte *)(param_1 + ((int)param_2 >> 3));
  if (uVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = 8 - uVar4;
    if ((uint)(byte)(&DAT_019560ec)[(uint)*pbVar5 << (ulong)uVar4 & 0xff] <= 8 - uVar4) {
      uVar2 = (uint)(byte)(&DAT_019560ec)[(uint)*pbVar5 << (ulong)uVar4 & 0xff];
    }
    uVar3 = uVar6;
    if ((int)uVar2 <= (int)uVar6) {
      uVar3 = uVar2;
    }
    if ((int)(uVar3 + uVar4) < 8) {
      return uVar3;
    }
    uVar6 = uVar6 - uVar3;
    pbVar5 = pbVar5 + 1;
  }
  uVar4 = uVar6;
  if (0x7f < (int)uVar6) {
    if (((ulong)pbVar5 & 7) != 0) {
      iVar7 = 0;
      do {
        if ((ulong)*pbVar5 != 0) {
          return uVar3 + (byte)(&DAT_019560ec)[*pbVar5] + iVar7;
        }
        pbVar5 = pbVar5 + 1;
        iVar7 = iVar7 + 8;
      } while (((ulong)pbVar5 & 7) != 0);
      uVar6 = uVar6 - iVar7;
      uVar3 = uVar3 + iVar7;
      uVar4 = uVar6;
      if ((int)(uVar6 + 8) < 0x48) goto joined_r0x00dda550;
    }
    do {
      uVar4 = uVar6;
      if (*(long *)pbVar5 != 0) break;
      uVar4 = uVar6 - 0x40;
      uVar3 = uVar3 + 0x40;
      pbVar5 = pbVar5 + 8;
      bVar1 = 0x7f < (int)uVar6;
      uVar6 = uVar4;
    } while (bVar1);
  }
joined_r0x00dda550:
  if (7 < (int)uVar4) {
    iVar7 = -uVar3;
    uVar6 = uVar4;
    do {
      if ((ulong)*pbVar5 != 0) {
        return (uint)(byte)(&DAT_019560ec)[*pbVar5] - iVar7;
      }
      uVar4 = uVar6 - 8;
      pbVar5 = pbVar5 + 1;
      iVar7 = iVar7 + -8;
      bVar1 = 0xf < (int)uVar6;
      uVar6 = uVar4;
    } while (bVar1);
    uVar3 = -iVar7;
  }
  if (0 < (int)uVar4) {
    if ((int)(uint)(byte)(&DAT_019560ec)[*pbVar5] <= (int)uVar4) {
      uVar4 = (uint)(byte)(&DAT_019560ec)[*pbVar5];
    }
    uVar3 = uVar4 + uVar3;
  }
  return uVar3;
}

