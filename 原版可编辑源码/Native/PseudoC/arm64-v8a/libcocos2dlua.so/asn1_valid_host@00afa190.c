
undefined8 asn1_valid_host(int *param_1)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  iVar1 = *param_1;
  pbVar4 = *(byte **)(param_1 + 2);
  if (param_1[1] - 1U < 0x1e) {
    uVar5 = (uint)(byte)(&DAT_013d8f24)[param_1[1]];
  }
  else {
    uVar5 = 0xff;
  }
  if (iVar1 == 0) {
    return 0;
  }
  if (uVar5 == 0) {
    uVar5 = 1;
  }
  iVar3 = iVar1 + -1;
  if (0 < iVar1) {
    if (uVar5 == 4) {
      iVar6 = 0;
      uVar5 = 0;
      do {
        if (*pbVar4 != 0) {
          return 0;
        }
        if (pbVar4[1] != 0) {
          return 0;
        }
        if (pbVar4[2] != 0) {
          return 0;
        }
        if ((char)pbVar4[3] < '\0') {
          return 0;
        }
        uVar2 = *(ushort *)(&DAT_013d8f44 + (ulong)pbVar4[3] * 2);
        if ((uVar2 & 0x9000) == 0) {
          if (iVar6 == 0) {
            return 0;
          }
          if (iVar3 == iVar6) {
            return 0;
          }
          if ((uVar2 & 0x6000) == 0) {
            return 0;
          }
          if (((uVar5 & 0x6000) != 0) && (((uVar2 | uVar5) >> 0xd & 1) != 0)) {
            return 0;
          }
        }
        iVar6 = iVar6 + 4;
        pbVar4 = pbVar4 + 4;
        uVar5 = (uint)uVar2;
        if (iVar1 <= iVar6) {
          return 1;
        }
      } while( true );
    }
    if (uVar5 == 2) {
      iVar6 = 0;
      uVar5 = 0;
      do {
        if (*pbVar4 != 0) {
          return 0;
        }
        if ((char)pbVar4[1] < '\0') {
          return 0;
        }
        uVar2 = *(ushort *)(&DAT_013d8f44 + (ulong)pbVar4[1] * 2);
        if ((uVar2 & 0x9000) == 0) {
          if (iVar6 == 0) {
            return 0;
          }
          if (iVar3 == iVar6) {
            return 0;
          }
          if ((uVar2 & 0x6000) == 0) {
            return 0;
          }
          if (((uVar5 & 0x6000) != 0) && (((uVar2 | uVar5) >> 0xd & 1) != 0)) {
            return 0;
          }
        }
        iVar6 = iVar6 + 2;
        pbVar4 = pbVar4 + 2;
        uVar5 = (uint)uVar2;
      } while (iVar6 < iVar1);
    }
    else {
      iVar6 = 0;
      uVar7 = 0;
      do {
        if ((char)*pbVar4 < '\0') {
          return 0;
        }
        uVar2 = *(ushort *)(&DAT_013d8f44 + (ulong)*pbVar4 * 2);
        if ((uVar2 & 0x9000) == 0) {
          if (iVar6 == 0) {
            return 0;
          }
          if (iVar3 == iVar6) {
            return 0;
          }
          if ((uVar2 & 0x6000) == 0) {
            return 0;
          }
          if (((uVar7 & 0x6000) != 0) && (((uVar2 | uVar7) >> 0xd & 1) != 0)) {
            return 0;
          }
        }
        iVar6 = iVar6 + uVar5;
        pbVar4 = pbVar4 + 1;
        uVar7 = (uint)uVar2;
      } while (iVar6 < iVar1);
    }
  }
  return 1;
}

