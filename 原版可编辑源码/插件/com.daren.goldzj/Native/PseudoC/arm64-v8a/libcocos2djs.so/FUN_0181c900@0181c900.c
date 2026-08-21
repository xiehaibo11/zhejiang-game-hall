
undefined8
FUN_0181c900(long param_1,byte *param_2,long *param_3,long param_4,ushort *param_5,long *param_6,
            ulong param_7,uint param_8)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ushort *puVar5;
  byte *pbVar6;
  ushort uVar7;
  ulong uVar8;
  ushort uVar9;
  
  *param_3 = param_1;
  *param_6 = param_4;
  pbVar6 = (byte *)*param_3;
  if (((((param_8 >> 2 & 1) != 0) && (2 < (long)param_2 - (long)pbVar6)) && (*pbVar6 == 0xef)) &&
     ((pbVar6[1] == 0xbb && (pbVar6[2] == 0xbf)))) {
    pbVar6 = pbVar6 + 3;
    *param_3 = (long)pbVar6;
  }
  if (pbVar6 < param_2) {
    puVar5 = (ushort *)*param_6;
    do {
      if (param_5 <= puVar5) {
        return 1;
      }
      bVar1 = *pbVar6;
      uVar8 = (ulong)bVar1;
      if (param_7 < uVar8) {
        return 2;
      }
      uVar7 = (ushort)bVar1;
      if ((char)bVar1 < '\0') {
        if (bVar1 < 0xc2) {
          return 2;
        }
        if (bVar1 < 0xe0) {
          if ((long)param_2 - (long)pbVar6 < 2) {
            return 1;
          }
          if ((pbVar6[1] & 0xc0) != 0x80) {
            return 2;
          }
          uVar8 = (ulong)pbVar6[1] & 0x3f | (uVar8 & 0x1f) << 6;
          if (param_7 < uVar8) {
            return 2;
          }
          *puVar5 = (ushort)uVar8;
          pbVar6 = pbVar6 + 2;
        }
        else if (bVar1 < 0xf0) {
          if ((long)param_2 - (long)pbVar6 < 3) {
            return 1;
          }
          bVar2 = pbVar6[1];
          if (uVar7 == 0xed) {
            if ((bVar2 & 0xe0) != 0x80) {
              return 2;
            }
          }
          else if (uVar7 == 0xe0) {
            if ((bVar2 & 0xe0) != 0xa0) {
              return 2;
            }
          }
          else if ((bVar2 & 0xc0) != 0x80) {
            return 2;
          }
          if ((pbVar6[2] & 0xc0) != 0x80) {
            return 2;
          }
          uVar7 = (ushort)bVar1 << 0xc | (bVar2 & 0x3f) << 6 | pbVar6[2] & 0x3f;
          if (param_7 < uVar7) {
            return 2;
          }
          *puVar5 = uVar7;
          pbVar6 = pbVar6 + 3;
        }
        else {
          if (0xf4 < bVar1) {
            return 2;
          }
          if ((long)param_2 - (long)pbVar6 < 4) {
            return 1;
          }
          bVar2 = pbVar6[1];
          bVar3 = pbVar6[2];
          bVar4 = pbVar6[3];
          uVar9 = (ushort)bVar2;
          if (bVar1 == 0xf4) {
            if ((uVar9 & 0xf0) != 0x80) {
              return 2;
            }
          }
          else if (bVar1 == 0xf0) {
            if (0x2f < (uVar9 + 0x70 & 0xff)) {
              return 2;
            }
          }
          else if ((uVar9 & 0xc0) != 0x80) {
            return 2;
          }
          if ((bVar3 & 0xc0) != 0x80) {
            return 2;
          }
          if ((bVar4 & 0xc0) != 0x80) {
            return 2;
          }
          if ((long)param_5 - (long)puVar5 < 4) {
            return 1;
          }
          if (param_7 < ((uVar8 & 7) << 0x12 | ((ulong)bVar2 & 0x3f) << 0xc |
                         ((ulong)bVar3 & 0x3f) << 6 | (ulong)bVar4 & 0x3f)) {
            return 2;
          }
          *puVar5 = (uVar9 & 0xf) << 2 | bVar3 >> 4 & 3 |
                    ((uVar7 & 7) << 2 | bVar2 >> 4 & 3) * 0x40 + 0x3fc0 | 0xd800;
          *param_6 = (long)(puVar5 + 1);
          puVar5[1] = bVar4 & 0x3f | (bVar3 & 0xf) << 6 | 0xdc00;
          pbVar6 = (byte *)(*param_3 + 4);
        }
      }
      else {
        *puVar5 = (ushort)bVar1;
        pbVar6 = pbVar6 + 1;
      }
      *param_3 = (long)pbVar6;
      puVar5 = (ushort *)(*param_6 + 2);
      *param_6 = (long)puVar5;
      pbVar6 = (byte *)*param_3;
    } while (pbVar6 < param_2);
  }
  return 0;
}

