
int FUN_0181d488(byte *param_1,byte *param_2,ulong param_3,ulong param_4,uint param_5)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  
  pbVar3 = param_1;
  if (((((param_5 >> 2 & 1) != 0) && (2 < (long)param_2 - (long)param_1)) && (*param_1 == 0xef)) &&
     ((param_1[1] == 0xbb && (pbVar3 = param_1 + 3, param_1[2] != 0xbf)))) {
    pbVar3 = param_1;
  }
  if ((param_3 != 0) && (pbVar3 < param_2)) {
    uVar4 = 1;
    do {
      bVar2 = *pbVar3;
      uVar5 = (ulong)bVar2;
      if ((char)bVar2 < '\0') {
        if (bVar2 < 0xc2) break;
        if (bVar2 < 0xe0) {
          if ((((long)param_2 - (long)pbVar3 < 2) || ((pbVar3[1] & 0xc0) != 0x80)) ||
             (param_4 < ((ulong)pbVar3[1] & 0x3f | (uVar5 & 0x1f) << 6))) break;
          pbVar3 = pbVar3 + 2;
        }
        else if (bVar2 < 0xf0) {
          if ((long)param_2 - (long)pbVar3 < 3) break;
          bVar1 = pbVar3[1];
          if (bVar2 == 0xed) {
            bVar2 = bVar1 & 0xe0;
joined_r0x0181d5dc:
            if (bVar2 != 0x80) break;
          }
          else {
            if (bVar2 != 0xe0) {
              bVar2 = bVar1 & 0xc0;
              goto joined_r0x0181d5dc;
            }
            if ((bVar1 & 0xe0) != 0xa0) break;
          }
          if (((pbVar3[2] & 0xc0) != 0x80) ||
             (param_4 < ((uVar5 & 0xf) << 0xc | ((ulong)bVar1 & 0x3f) << 6 | (ulong)pbVar3[2] & 0x3f
                        ))) break;
          pbVar3 = pbVar3 + 3;
        }
        else {
          if ((0xf4 < bVar2) || ((long)param_2 - (long)pbVar3 < 4)) break;
          bVar1 = pbVar3[1];
          if (bVar2 == 0xf4) {
            bVar2 = bVar1 & 0xf0;
joined_r0x0181d62c:
            if (bVar2 != 0x80) break;
          }
          else {
            if (bVar2 != 0xf0) {
              bVar2 = bVar1 & 0xc0;
              goto joined_r0x0181d62c;
            }
            if (0x2f < (byte)(bVar1 + 0x70)) break;
          }
          if ((((pbVar3[2] & 0xc0) != 0x80) || ((pbVar3[3] & 0xc0) != 0x80)) ||
             (param_4 < ((uVar5 & 7) << 0x12 | ((ulong)bVar1 & 0x3f) << 0xc |
                         ((ulong)pbVar3[2] & 0x3f) << 6 | (ulong)pbVar3[3] & 0x3f))) break;
          pbVar3 = pbVar3 + 4;
        }
      }
      else {
        if (param_4 < uVar5) break;
        pbVar3 = pbVar3 + 1;
      }
      if ((param_3 <= uVar4) || (uVar4 = uVar4 + 1, param_2 <= pbVar3)) break;
    } while( true );
  }
  return (int)pbVar3 - (int)param_1;
}

