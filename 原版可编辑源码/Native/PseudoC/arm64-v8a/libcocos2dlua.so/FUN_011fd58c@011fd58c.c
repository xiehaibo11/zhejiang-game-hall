
undefined8
FUN_011fd58c(long param_1,byte *param_2,long *param_3,ulong param_4,undefined4 *param_5,
            ulong *param_6,ulong param_7,uint param_8)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  ulong uVar8;
  
  *param_3 = param_1;
  *param_6 = param_4;
  pbVar6 = (byte *)*param_3;
  if (((((param_8 >> 2 & 1) != 0) && (2 < (long)param_2 - (long)pbVar6)) && (*pbVar6 == 0xef)) &&
     ((pbVar6[1] == 0xbb && (pbVar6[2] == 0xbf)))) {
    pbVar6 = pbVar6 + 3;
    *param_3 = (long)pbVar6;
  }
  if (pbVar6 < param_2) {
    puVar7 = (undefined4 *)*param_6;
    do {
      if (param_5 <= puVar7) {
        return 1;
      }
      bVar4 = *pbVar6;
      uVar2 = (uint)bVar4;
      uVar8 = (ulong)uVar2;
      if ((char)bVar4 < '\0') {
        if (bVar4 < 0xc2) {
          return 2;
        }
        if (bVar4 < 0xe0) {
          if ((long)param_2 - (long)pbVar6 < 2) {
            return 1;
          }
          if ((pbVar6[1] & 0xc0) != 0x80) {
            return 2;
          }
          uVar8 = ((ulong)bVar4 & 0x1f) << 6 | (ulong)pbVar6[1] & 0x3f;
          lVar5 = 2;
          if (param_7 < uVar8) {
            return 2;
          }
        }
        else if (bVar4 < 0xf0) {
          if ((long)param_2 - (long)pbVar6 < 3) {
            return 1;
          }
          bVar3 = pbVar6[1];
          if (uVar2 == 0xed) {
            bVar1 = bVar3 & 0xe0;
joined_r0x011fd708:
            if (bVar1 != 0x80) {
              return 2;
            }
          }
          else {
            if (uVar2 != 0xe0) {
              bVar1 = bVar3 & 0xc0;
              goto joined_r0x011fd708;
            }
            if ((bVar3 & 0xe0) != 0xa0) {
              return 2;
            }
          }
          if (((pbVar6[2] & 0xc0) != 0x80) ||
             (uVar8 = ((ulong)bVar4 & 0xf) << 0xc | ((ulong)bVar3 & 0x3f) << 6 |
                      (ulong)pbVar6[2] & 0x3f, param_7 < uVar8)) {
            return 2;
          }
          lVar5 = 3;
        }
        else {
          if (0xf4 < bVar4) {
            return 2;
          }
          if ((long)param_2 - (long)pbVar6 < 4) {
            return 1;
          }
          bVar3 = pbVar6[1];
          if (bVar4 == 0xf4) {
            bVar1 = bVar3 & 0xf0;
joined_r0x011fd754:
            if (bVar1 != 0x80) {
              return 2;
            }
          }
          else {
            if (bVar4 != 0xf0) {
              bVar1 = bVar3 & 0xc0;
              goto joined_r0x011fd754;
            }
            if (0x2f < (byte)(bVar3 + 0x70)) {
              return 2;
            }
          }
          if ((pbVar6[2] & 0xc0) != 0x80) {
            return 2;
          }
          if ((pbVar6[3] & 0xc0) != 0x80) {
            return 2;
          }
          uVar8 = ((ulong)bVar4 & 7) << 0x12 | ((ulong)bVar3 & 0x3f) << 0xc |
                  ((ulong)pbVar6[2] & 0x3f) << 6 | (ulong)pbVar6[3] & 0x3f;
          if (param_7 < uVar8) {
            return 2;
          }
          lVar5 = 4;
        }
      }
      else {
        if (param_7 < bVar4) {
          return 2;
        }
        lVar5 = 1;
      }
      *puVar7 = (int)uVar8;
      *param_3 = (long)(pbVar6 + lVar5);
      puVar7 = (undefined4 *)(*param_6 + 4);
      *param_6 = (ulong)puVar7;
      pbVar6 = (byte *)*param_3;
    } while (pbVar6 < param_2);
  }
  return 0;
}

