
undefined8 FUN_00a34fdc(char *param_1,long param_2,long *param_3)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  
  lVar6 = param_2 + -10;
  if (param_2 < 10) {
    return 2;
  }
  if (*param_1 != '\x1f') {
    return 1;
  }
  if (param_1[1] != -0x75) {
    return 1;
  }
                    /* try { // try from 00a3500c to 00b3505b has its CatchHandler @ 00a3500c
                       catch() { ... } // from try @ 00a3500c with catch @ 00a3500c
                       catch() { ... } // from try @ 00a35114 with catch @ 00a3500c */
  uVar4 = 1;
  if ((param_1[2] == '\b') && (bVar3 = param_1[3], (bVar3 & 0xe0) == 0)) {
    pbVar7 = (byte *)(param_1 + 10);
    lVar5 = lVar6;
    if ((bVar3 >> 2 & 1) != 0) {
      if (param_2 < 0xc) {
        return 2;
      }
      lVar1 = (ulong)*(ushort *)(param_1 + 10) + 2;
                    /* try { // try from 00a3505c to 00b35073 has its CatchHandler @ 00a351dc */
      lVar5 = lVar6 - lVar1;
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
LAB_00a350c8:
      lVar6 = lVar5;
                    /* try { // try from 00a350cc to 00b350db has its CatchHandler @ 00a351c0 */
      if (((bVar3 >> 1 & 1) != 0) && (lVar6 = lVar5 + -2, lVar5 < 2)) {
        return 2;
      }
                    /* try { // try from 00a350dc to 00b350e3 has its CatchHandler @ 00a351a8 */
      uVar4 = 0;
                    /* try { // try from 00a350e4 to 00b35113 has its CatchHandler @ 00a351b0 */
      *param_3 = param_2 - lVar6;
    }
    else {
                    /* try { // try from 00a35088 to 00b3509b has its CatchHandler @ 00a351d8 */
      if (lVar5 == 0) {
        return 2;
      }
      lVar5 = 1 - lVar5;
      uVar4 = 2;
      do {
                    /* try { // try from 00a3509c to 00b350ab has its CatchHandler @ 00a351ac */
        if (*pbVar7 == 0) {
                    /* try { // try from 00a350c4 to 00b350cb has its CatchHandler @ 00a35190 */
          lVar5 = -lVar5;
          goto LAB_00a350c8;
        }
        lVar5 = lVar5 + 1;
        pbVar7 = pbVar7 + 1;
      } while (lVar5 != 1);
    }
  }
  return uVar4;
}

