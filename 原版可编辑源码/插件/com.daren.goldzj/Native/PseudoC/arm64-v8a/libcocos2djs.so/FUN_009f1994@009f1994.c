
bool FUN_009f1994(byte *param_1,byte *param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  bVar3 = *param_1;
  bVar4 = *param_2;
  sVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(param_1 + 8);
  }
  sVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar2 = *(size_t *)(param_2 + 8);
  }
  if (sVar1 == sVar2) {
    pbVar7 = *(byte **)(param_1 + 0x10);
    pbVar8 = *(byte **)(param_2 + 0x10);
                    /* try { // try from 009f19d8 to 00af19ef has its CatchHandler @ 009f1aa0 */
    if ((bVar3 & 1) == 0) {
      pbVar7 = param_1 + 1;
    }
    if ((bVar4 & 1) == 0) {
      pbVar8 = param_2 + 1;
    }
    if ((bVar3 & 1) == 0) {
      if (sVar1 != 0) {
        lVar6 = -(ulong)(bVar3 >> 1);
        pbVar7 = param_1;
        do {
                    /* try { // try from 009f19f8 to 00af1a03 has its CatchHandler @ 009f1a9c */
          pbVar7 = pbVar7 + 1;
                    /* try { // try from 009f1a04 to 00af1a0f has its CatchHandler @ 009f1a98 */
          if (*pbVar7 != *pbVar8) {
            return false;
          }
                    /* try { // try from 009f1a10 to 00af1a23 has its CatchHandler @ 009f1ab0 */
          lVar6 = lVar6 + 1;
          pbVar8 = pbVar8 + 1;
        } while (lVar6 != 0);
      }
    }
    else {
                    /* try { // try from 009f1a24 to 00af1b07 has its CatchHandler @ 009f1984 */
      if ((sVar1 != 0) && (iVar5 = memcmp(pbVar7,pbVar8,sVar1), iVar5 != 0)) {
        return false;
      }
    }
    bVar3 = param_1[0x18];
    bVar4 = param_2[0x18];
    sVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      sVar1 = *(size_t *)(param_1 + 0x20);
    }
    sVar2 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      sVar2 = *(size_t *)(param_2 + 0x20);
    }
    if (sVar1 == sVar2) {
      pbVar7 = *(byte **)(param_1 + 0x28);
      pbVar8 = *(byte **)(param_2 + 0x28);
      if ((bVar3 & 1) == 0) {
        pbVar7 = param_1 + 0x19;
      }
      if ((bVar4 & 1) == 0) {
        pbVar8 = param_2 + 0x19;
      }
      if ((bVar3 & 1) == 0) {
        if (sVar1 != 0) {
          param_1 = param_1 + 0x19;
          lVar6 = -(ulong)(bVar3 >> 1);
          do {
                    /* catch() { ... } // from try @ 009f1a04 with catch @ 009f1a98 */
                    /* catch() { ... } // from try @ 009f19f8 with catch @ 009f1a9c */
                    /* catch() { ... } // from try @ 009f19d8 with catch @ 009f1aa0 */
            if (*param_1 != *pbVar8) {
              return false;
            }
            param_1 = param_1 + 1;
            pbVar8 = pbVar8 + 1;
            lVar6 = lVar6 + 1;
                    /* catch() { ... } // from try @ 009f1a10 with catch @ 009f1ab0 */
          } while (lVar6 != 0);
          return true;
        }
      }
      else if (sVar1 != 0) {
        iVar5 = memcmp(pbVar7,pbVar8,sVar1);
        return iVar5 == 0;
      }
      return true;
    }
  }
  return false;
}

