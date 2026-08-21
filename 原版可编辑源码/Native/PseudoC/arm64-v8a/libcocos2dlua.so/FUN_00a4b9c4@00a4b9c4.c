
undefined8 FUN_00a4b9c4(char *param_1,long param_2,long *param_3)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  
                    /* try { // try from 00a4b9c4 to 00b4b9f7 has its CatchHandler @ 00a4b8ac */
  lVar6 = param_2 + -10;
  if (param_2 < 10) {
    return 2;
  }
                    /* catch() { ... } // from try @ 00a4b918 with catch @ 00a4b9d8
                       catch() { ... } // from try @ 00a4b9bc with catch @ 00a4b9d8 */
                    /* catch() { ... } // from try @ 00a4b8fc with catch @ 00a4b9dc
                       catch() { ... } // from try @ 00a4b96c with catch @ 00a4b9dc */
  if (*param_1 != '\x1f') {
    return 1;
  }
  if (param_1[1] != -0x75) {
    return 1;
  }
  uVar4 = 1;
                    /* try { // try from 00a4b9f8 to 00b4ba47 has its CatchHandler @ 00a4b9f8
                       catch() { ... } // from try @ 00a4b9f8 with catch @ 00a4b9f8
                       catch() { ... } // from try @ 00a4bae8 with catch @ 00a4b9f8 */
  if ((param_1[2] == '\b') && (bVar3 = param_1[3], (bVar3 & 0xe0) == 0)) {
    pbVar7 = (byte *)(param_1 + 10);
    lVar5 = lVar6;
    if ((bVar3 >> 2 & 1) != 0) {
      if (param_2 < 0xc) {
        return 2;
      }
      lVar1 = (ulong)*(ushort *)(param_1 + 10) + 2;
      lVar5 = lVar6 - lVar1;
                    /* try { // try from 00a4ba48 to 00b4ba7b has its CatchHandler @ 00a4bb6c */
      if (lVar6 < lVar1) {
        return 2;
      }
      pbVar7 = pbVar7 + lVar1;
    }
    bVar2 = bVar3 >> 3 & 1;
    while (bVar2 != 0) {
      if (lVar5 == 0) {
        return 2;
      }
      lVar5 = lVar5 + -1;
      bVar2 = *pbVar7;
      pbVar7 = pbVar7 + 1;
    }
    if ((bVar3 >> 4 & 1) == 0) {
LAB_00a4bab0:
      lVar6 = lVar5;
                    /* try { // try from 00a4bab4 to 00b4bae7 has its CatchHandler @ 00a4bb54 */
      if (((bVar3 >> 1 & 1) != 0) && (lVar6 = lVar5 + -2, lVar5 < 2)) {
        return 2;
      }
      uVar4 = 0;
      *param_3 = param_2 - lVar6;
    }
    else {
      if (lVar5 == 0) {
        return 2;
      }
      lVar5 = 1 - lVar5;
      uVar4 = 2;
      do {
        if (*pbVar7 == 0) {
          lVar5 = -lVar5;
          goto LAB_00a4bab0;
        }
        lVar5 = lVar5 + 1;
        pbVar7 = pbVar7 + 1;
      } while (lVar5 != 1);
    }
  }
  return uVar4;
}

