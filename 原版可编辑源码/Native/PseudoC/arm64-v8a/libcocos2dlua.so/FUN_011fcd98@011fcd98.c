
undefined8
FUN_011fcd98(long param_1,byte *param_2,long *param_3,long param_4,ushort *param_5,long *param_6,
            ulong param_7,uint param_8)

{
  ushort uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ushort *puVar6;
  byte *pbVar7;
  ulong uVar8;
  ushort uVar9;
  
  *param_3 = param_1;
  *param_6 = param_4;
  pbVar7 = (byte *)*param_3;
  if (((((param_8 >> 2 & 1) != 0) && (2 < (long)param_2 - (long)pbVar7)) && (*pbVar7 == 0xef)) &&
     ((pbVar7[1] == 0xbb && (pbVar7[2] == 0xbf)))) {
    pbVar7 = pbVar7 + 3;
    *param_3 = (long)pbVar7;
  }
  if (pbVar7 < param_2) {
    puVar6 = (ushort *)*param_6;
    do {
      if (param_5 <= puVar6) {
        return 1;
      }
      bVar2 = *pbVar7;
      if (param_7 < bVar2) {
        return 2;
      }
      if ((char)bVar2 < '\0') {
        if (bVar2 < 0xc2) {
          return 2;
        }
        if (bVar2 < 0xe0) {
          if ((long)param_2 - (long)pbVar7 < 2) {
            return 1;
          }
          if ((pbVar7[1] & 0xc0) != 0x80) {
            return 2;
          }
          uVar8 = ((ulong)bVar2 & 0x1f) << 6 | (ulong)pbVar7[1] & 0x3f;
          if (param_7 < uVar8) {
            return 2;
          }
          *puVar6 = (ushort)uVar8;
          pbVar7 = pbVar7 + 2;
        }
        else if (bVar2 < 0xf0) {
          if ((long)param_2 - (long)pbVar7 < 3) {
            return 1;
          }
          bVar3 = pbVar7[1];
          if (bVar2 == 0xed) {
            bVar4 = bVar3 & 0xe0;
joined_r0x011fcf18:
            if (bVar4 != 0x80) {
              return 2;
            }
          }
          else {
            if (bVar2 != 0xe0) {
              bVar4 = bVar3 & 0xc0;
              goto joined_r0x011fcf18;
            }
            if ((bVar3 & 0xe0) != 0xa0) {
              return 2;
            }
          }
          if (((pbVar7[2] & 0xc0) != 0x80) ||
             (uVar9 = (ushort)bVar2 << 0xc | (bVar3 & 0x3f) << 6 | pbVar7[2] & 0x3f, param_7 < uVar9
             )) {
            return 2;
          }
          *puVar6 = uVar9;
          pbVar7 = pbVar7 + 3;
        }
        else {
          if (0xf4 < bVar2) {
            return 2;
          }
          if ((long)param_2 - (long)pbVar7 < 4) {
            return 1;
          }
          bVar3 = pbVar7[1];
          bVar4 = pbVar7[2];
          bVar5 = pbVar7[3];
          uVar9 = (ushort)bVar3;
          if (bVar2 == 0xf4) {
            uVar1 = uVar9 & 0xf0;
joined_r0x011fcf64:
            if (uVar1 != 0x80) {
              return 2;
            }
          }
          else {
            if (bVar2 != 0xf0) {
              uVar1 = uVar9 & 0xc0;
              goto joined_r0x011fcf64;
            }
            if (0x2f < (uVar9 + 0x70 & 0xff)) {
              return 2;
            }
          }
          if ((bVar4 & 0xc0) != 0x80) {
            return 2;
          }
          if ((bVar5 & 0xc0) != 0x80) {
            return 2;
          }
          if ((long)param_5 - (long)puVar6 < 4) {
            return 1;
          }
          if (param_7 < (((ulong)bVar2 & 7) << 0x12 | ((ulong)bVar3 & 0x3f) << 0xc |
                         ((ulong)bVar4 & 0x3f) << 6 | (ulong)bVar5 & 0x3f)) {
            return 2;
          }
          *puVar6 = ((uVar9 & 0xf) << 2 | bVar4 >> 4 & 3 | ((bVar2 & 7) << 2 | bVar3 >> 4 & 3) << 6)
                    + 0x3fc0 | 0xd800;
          *param_6 = (long)(puVar6 + 1);
          puVar6[1] = bVar5 & 0x3f | (bVar4 & 0xf) << 6 | 0xdc00;
          pbVar7 = (byte *)(*param_3 + 4);
        }
      }
      else {
        *puVar6 = (ushort)bVar2;
        pbVar7 = pbVar7 + 1;
      }
      *param_3 = (long)pbVar7;
      puVar6 = (ushort *)(*param_6 + 2);
      *param_6 = (long)puVar6;
      pbVar7 = (byte *)*param_3;
    } while (pbVar7 < param_2);
  }
  return 0;
}

