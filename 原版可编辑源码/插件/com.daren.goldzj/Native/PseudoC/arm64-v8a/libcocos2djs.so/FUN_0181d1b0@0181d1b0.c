
undefined8
FUN_0181d1b0(long param_1,byte *param_2,long *param_3,ulong param_4,undefined4 *param_5,
            ulong *param_6,ulong param_7,uint param_8)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  ulong uVar7;
  ulong uVar8;
  
  *param_3 = param_1;
  *param_6 = param_4;
  pbVar5 = (byte *)*param_3;
  if (((((param_8 >> 2 & 1) != 0) && (2 < (long)param_2 - (long)pbVar5)) && (*pbVar5 == 0xef)) &&
     ((pbVar5[1] == 0xbb && (pbVar5[2] == 0xbf)))) {
    pbVar5 = pbVar5 + 3;
    *param_3 = (long)pbVar5;
  }
  if (pbVar5 < param_2) {
    puVar6 = (undefined4 *)*param_6;
    do {
      if (param_5 <= puVar6) {
        return 1;
      }
      bVar3 = *pbVar5;
      uVar7 = (ulong)bVar3;
      uVar1 = (uint)bVar3;
      uVar8 = (ulong)uVar1;
      if ((char)bVar3 < '\0') {
        if (bVar3 < 0xc2) {
          return 2;
        }
        if (bVar3 < 0xe0) {
          if ((long)param_2 - (long)pbVar5 < 2) {
            return 1;
          }
          if ((pbVar5[1] & 0xc0) != 0x80) {
            return 2;
          }
          uVar8 = (ulong)pbVar5[1] & 0x3f | (uVar7 & 0x1f) << 6;
          lVar4 = 2;
          if (param_7 < uVar8) {
            return 2;
          }
        }
        else if (bVar3 < 0xf0) {
          if ((long)param_2 - (long)pbVar5 < 3) {
            return 1;
          }
          bVar3 = pbVar5[1];
          if (uVar1 == 0xed) {
            if ((bVar3 & 0xe0) != 0x80) {
              return 2;
            }
          }
          else if (uVar1 == 0xe0) {
            if ((bVar3 & 0xe0) != 0xa0) {
              return 2;
            }
          }
          else if ((bVar3 & 0xc0) != 0x80) {
            return 2;
          }
          if ((pbVar5[2] & 0xc0) != 0x80) {
            return 2;
          }
          uVar8 = (uVar7 & 0xf) << 0xc | ((ulong)bVar3 & 0x3f) << 6 | (ulong)pbVar5[2] & 0x3f;
          if (param_7 < uVar8) {
            return 2;
          }
          lVar4 = 3;
        }
        else {
          if (0xf4 < bVar3) {
            return 2;
          }
          if ((long)param_2 - (long)pbVar5 < 4) {
            return 1;
          }
          bVar2 = pbVar5[1];
          if (bVar3 == 0xf4) {
            if ((bVar2 & 0xf0) != 0x80) {
              return 2;
            }
          }
          else if (bVar3 == 0xf0) {
            if (0x2f < (byte)(bVar2 + 0x70)) {
              return 2;
            }
          }
          else if ((bVar2 & 0xc0) != 0x80) {
            return 2;
          }
          if ((pbVar5[2] & 0xc0) != 0x80) {
            return 2;
          }
          if ((pbVar5[3] & 0xc0) != 0x80) {
            return 2;
          }
          uVar8 = (uVar7 & 7) << 0x12 | ((ulong)bVar2 & 0x3f) << 0xc |
                  ((ulong)pbVar5[2] & 0x3f) << 6 | (ulong)pbVar5[3] & 0x3f;
          if (param_7 < uVar8) {
            return 2;
          }
          lVar4 = 4;
        }
      }
      else {
        if (param_7 < uVar7) {
          return 2;
        }
        lVar4 = 1;
      }
      *puVar6 = (int)uVar8;
      *param_3 = (long)(pbVar5 + lVar4);
      puVar6 = (undefined4 *)(*param_6 + 4);
      *param_6 = (ulong)puVar6;
      pbVar5 = (byte *)*param_3;
    } while (pbVar5 < param_2);
  }
  return 0;
}

