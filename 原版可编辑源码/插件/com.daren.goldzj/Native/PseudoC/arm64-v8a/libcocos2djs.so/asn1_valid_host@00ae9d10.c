
undefined8 asn1_valid_host(int *param_1)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
                    /* try { // try from 00ae9d10 to 00be9d23 has its CatchHandler @ 00ae9e90 */
  iVar1 = *param_1;
  pbVar4 = *(byte **)(param_1 + 2);
  if (param_1[1] - 1U < 0x1e) {
    uVar5 = (uint)(byte)(&DAT_018a8924)[param_1[1]];
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
        uVar2 = *(ushort *)(&DAT_018a8944 + (ulong)pbVar4[3] * 2);
                    /* try { // try from 00ae9e1c to 00be9e33 has its CatchHandler @ 00ae9e9c */
        if ((uVar2 & 0x9000) == 0) {
          if (iVar6 == 0) {
            return 0;
          }
          if (iVar3 == iVar6) {
            return 0;
          }
                    /* try { // try from 00ae9e34 to 00be9e7f has its CatchHandler @ 00ae9b90 */
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
        uVar2 = *(ushort *)(&DAT_018a8944 + (ulong)pbVar4[1] * 2);
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
                    /* try { // try from 00ae9e80 to 00be9e87 has its CatchHandler @ 00ae9e88 */
        uVar2 = *(ushort *)(&DAT_018a8944 + (ulong)*pbVar4 * 2);
                    /* catch() { ... } // from try @ 00ae9cc4 with catch @ 00ae9e88
                       catch() { ... } // from try @ 00ae9e80 with catch @ 00ae9e88
                       try { // try from 00ae9e88 to 00be9ebf has its CatchHandler @ 00ae9b90 */
        if ((uVar2 & 0x9000) == 0) {
                    /* catch() { ... } // from try @ 00ae9d10 with catch @ 00ae9e90 */
                    /* catch() { ... } // from try @ 00ae9c00 with catch @ 00ae9e94
                       catch() { ... } // from try @ 00ae9c2c with catch @ 00ae9e94 */
          if (iVar6 == 0) {
            return 0;
          }
                    /* catch() { ... } // from try @ 00ae9e1c with catch @ 00ae9e9c */
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

