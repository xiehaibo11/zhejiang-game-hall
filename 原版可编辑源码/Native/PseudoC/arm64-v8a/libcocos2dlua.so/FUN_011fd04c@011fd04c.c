
int FUN_011fd04c(byte *param_1,byte *param_2,ulong param_3,ulong param_4,uint param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  ulong uVar5;
  
  pbVar4 = param_1;
  if (((((param_5 >> 2 & 1) != 0) && (2 < (long)param_2 - (long)param_1)) && (*param_1 == 0xef)) &&
     ((param_1[1] == 0xbb && (pbVar4 = param_1 + 3, param_1[2] != 0xbf)))) {
    pbVar4 = param_1;
  }
  if ((param_3 != 0) && (pbVar4 < param_2)) {
    uVar5 = 0;
    while (bVar2 = *pbVar4, bVar2 <= param_4) {
      if ((char)bVar2 < '\0') {
        if (bVar2 < 0xc2) break;
        if (bVar2 < 0xe0) {
          if ((((long)param_2 - (long)pbVar4 < 2) || ((pbVar4[1] & 0xc0) != 0x80)) ||
             (param_4 < (((ulong)bVar2 & 0x1f) << 6 | (ulong)pbVar4[1] & 0x3f))) break;
          pbVar4 = pbVar4 + 2;
        }
        else if (bVar2 < 0xf0) {
          if ((long)param_2 - (long)pbVar4 < 3) break;
          bVar3 = pbVar4[1];
          if (bVar2 == 0xed) {
            bVar1 = bVar3 & 0xe0;
joined_r0x011fd19c:
            if (bVar1 != 0x80) break;
          }
          else {
            if (bVar2 != 0xe0) {
              bVar1 = bVar3 & 0xc0;
              goto joined_r0x011fd19c;
            }
            if ((bVar3 & 0xe0) != 0xa0) break;
          }
          if (((pbVar4[2] & 0xc0) != 0x80) ||
             (param_4 < (((ulong)bVar2 & 0xf) << 0xc | ((ulong)bVar3 & 0x3f) << 6 |
                        (ulong)pbVar4[2] & 0x3f))) break;
          pbVar4 = pbVar4 + 3;
        }
        else {
          if (((0xf4 < bVar2) || (param_3 - uVar5 < 2)) || ((long)param_2 - (long)pbVar4 < 4))
          break;
          bVar3 = pbVar4[1];
          if (bVar2 == 0xf4) {
            bVar1 = bVar3 & 0xf0;
joined_r0x011fd1e8:
            if (bVar1 != 0x80) break;
          }
          else {
            if (bVar2 != 0xf0) {
              bVar1 = bVar3 & 0xc0;
              goto joined_r0x011fd1e8;
            }
            if (0x2f < (byte)(bVar3 + 0x70)) break;
          }
          if ((((pbVar4[2] & 0xc0) != 0x80) || ((pbVar4[3] & 0xc0) != 0x80)) ||
             (param_4 < (((ulong)bVar2 & 7) << 0x12 | ((ulong)bVar3 & 0x3f) << 0xc |
                         ((ulong)pbVar4[2] & 0x3f) << 6 | (ulong)pbVar4[3] & 0x3f))) break;
          uVar5 = uVar5 + 1;
          pbVar4 = pbVar4 + 4;
        }
      }
      else {
        pbVar4 = pbVar4 + 1;
      }
      uVar5 = uVar5 + 1;
      if ((param_3 <= uVar5) || (param_2 <= pbVar4)) break;
    }
  }
  return (int)pbVar4 - (int)param_1;
}

