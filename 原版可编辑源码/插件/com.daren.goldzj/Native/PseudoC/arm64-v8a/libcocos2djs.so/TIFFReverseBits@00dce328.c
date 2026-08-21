
void TIFFReverseBits(byte *param_1,ulong param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  byte *pbVar6;
  
  if (8 < (long)param_2) {
    uVar4 = 0xffffffffffffffef;
    if (-0x11 < (long)~param_2) {
      uVar4 = ~param_2;
    }
    uVar4 = uVar4 + param_2 + 8 & 0xfffffffffffffff8;
    lVar5 = param_2 + 8;
    pbVar6 = param_1;
    do {
      bVar1 = (&DAT_01954986)[pbVar6[1]];
      lVar5 = lVar5 + -8;
      *pbVar6 = (&DAT_01954986)[*pbVar6];
      bVar2 = (&DAT_01954986)[pbVar6[2]];
      pbVar6[1] = bVar1;
      bVar1 = (&DAT_01954986)[pbVar6[3]];
      pbVar6[2] = bVar2;
      bVar2 = (&DAT_01954986)[pbVar6[4]];
      bVar3 = (&DAT_01954986)[pbVar6[5]];
      pbVar6[3] = bVar1;
      bVar1 = (&DAT_01954986)[pbVar6[6]];
      pbVar6[4] = bVar2;
      pbVar6[5] = bVar3;
      bVar2 = (&DAT_01954986)[pbVar6[7]];
      pbVar6[6] = bVar1;
      pbVar6[7] = bVar2;
      pbVar6 = pbVar6 + 8;
    } while (0x10 < lVar5);
    param_1 = param_1 + uVar4 + 8;
    param_2 = (param_2 - 8) - uVar4;
  }
  if (0 < (long)param_2) {
    lVar5 = param_2 + 1;
    do {
      lVar5 = lVar5 + -1;
      *param_1 = (&DAT_01954986)[*param_1];
      param_1 = param_1 + 1;
    } while (1 < lVar5);
  }
  return;
}

