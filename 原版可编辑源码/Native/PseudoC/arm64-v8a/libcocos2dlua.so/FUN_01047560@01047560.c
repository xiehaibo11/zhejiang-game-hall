
ulong FUN_01047560(ulong param_1,byte param_2)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  byte *pbVar6;
  
  lVar4 = (long)(int)param_1;
  bVar3 = (&DAT_01459944)[lVar4];
  bVar1 = param_2 + 0x20;
  if (0x19 < (byte)(param_2 + 0xbf)) {
    bVar1 = param_2;
  }
  if (-1 < (char)bVar3) {
    pbVar6 = &DAT_01459944 + lVar4;
    lVar5 = (lVar4 << 0x20) + 0x200000000;
    lVar4 = (lVar4 << 0x20) + 0x100000000;
    do {
      pbVar6 = pbVar6 + 3;
      if (bVar3 == 8) {
        return 0xffffffff;
      }
      if (bVar3 < 8) {
        return param_1;
      }
      if (bVar3 == bVar1) {
        return (ulong)((uint)CONCAT11((&DAT_01459944)[lVar5 >> 0x20],(&DAT_01459944)[lVar4 >> 0x20])
                      + (int)param_1);
      }
      bVar3 = *pbVar6;
      lVar5 = lVar5 + 0x300000000;
      lVar4 = lVar4 + 0x300000000;
      param_1 = (ulong)((int)param_1 + 3);
    } while (-1 < (char)bVar3);
  }
  if ((bVar3 & 0x7f) == bVar1) {
    uVar2 = (int)param_1 + 1;
                    /* try { // try from 010475f4 to 011475fb has its CatchHandler @ 01047634 */
    if ((&DAT_01459945)[(int)param_1] == '\b') {
      uVar2 = 0xffffffff;
    }
    return (ulong)uVar2;
  }
                    /* try { // try from 010475fc to 0114764f has its CatchHandler @ 010474f4 */
  return 0xffffffff;
}

