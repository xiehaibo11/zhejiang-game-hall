
undefined2 FUN_010bb3bc(byte *param_1,byte *param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  
  if (param_1 == (byte *)0x0) {
    return 0;
  }
  if (param_2 <= param_1) {
    return 0;
  }
  iVar8 = 0;
  iVar9 = 0x34;
  while( true ) {
                    /* try { // try from 010bb3e0 to 011bb417 has its CatchHandler @ 010bb3e0
                       catch() { ... } // from try @ 010bb3e0 with catch @ 010bb3e0
                       catch() { ... } // from try @ 010bb42c with catch @ 010bb3e0 */
    iVar1 = iVar9 + iVar8 >> 1;
    bVar7 = (&DAT_0146362c)
            [CONCAT11((&DAT_0146362e)[(long)iVar1 * 2],(&DAT_0146362f)[(long)iVar1 * 2])];
    bVar2 = bVar7 & 0x7f;
    pbVar4 = param_1 + 1;
    pbVar6 = &DAT_0146362c +
             CONCAT11((&DAT_0146362e)[(long)iVar1 * 2],(&DAT_0146362f)[(long)iVar1 * 2]);
    if (bVar2 == *param_1) break;
    if (bVar2 < *param_1) {
      iVar8 = iVar1 + 1;
      iVar1 = iVar9;
    }
                    /* try { // try from 010bb418 to 011bb42b has its CatchHandler @ 010bb474 */
    iVar9 = iVar1;
    if (iVar1 <= iVar8) {
      return 0;
    }
  }
                    /* try { // try from 010bb42c to 011bb48f has its CatchHandler @ 010bb3e0 */
  while (pbVar4 < param_2) {
    pbVar5 = pbVar4 + 1;
    bVar2 = *pbVar4;
    bVar3 = pbVar6[1];
    pbVar4 = pbVar5;
    if ((char)bVar7 < '\0') {
      pbVar6 = pbVar6 + 1;
      bVar7 = bVar3;
      if ((uint)bVar2 != (bVar3 & 0x7f)) {
        return 0;
      }
    }
    else {
      if ((bVar3 & 0x7f) == 0) {
        return 0;
      }
      pbVar5 = pbVar6 + ((ulong)(bVar3 >> 6) | 1) + 1;
      iVar8 = (bVar3 & 0x7f) + 1;
      while( true ) {
                    /* catch() { ... } // from try @ 010bb418 with catch @ 010bb474 */
        bVar7 = (&DAT_0146362c)[CONCAT11(*pbVar5,pbVar5[1])];
        pbVar6 = &DAT_0146362c + CONCAT11(*pbVar5,pbVar5[1]);
        if ((uint)bVar2 == (bVar7 & 0x7f)) break;
        iVar8 = iVar8 + -1;
        pbVar5 = pbVar5 + 2;
                    /* try { // try from 010bb490 to 011bb4cf has its CatchHandler @ 010bb490
                       catch() { ... } // from try @ 010bb490 with catch @ 010bb490
                       catch() { ... } // from try @ 010bb62c with catch @ 010bb490 */
        if (iVar8 < 2) {
          return 0;
        }
      }
    }
  }
  if ((char)bVar7 < '\0') {
    return 0;
  }
  if (-1 < (char)pbVar6[1]) {
    return 0;
  }
                    /* try { // try from 010bb4d0 to 011bb4e7 has its CatchHandler @ 010bb69c */
  return CONCAT11(pbVar6[2],pbVar6[3]);
}

