
undefined8
FUN_0181c5ec(long param_1,ushort *param_2,long *param_3,undefined1 *param_4,long param_5,
            long *param_6,ulong param_7,uint param_8)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined1 *puVar4;
  ushort *puVar5;
  byte *pbVar6;
  byte bVar7;
  ulong uVar8;
  
  *param_3 = param_1;
  *param_6 = (long)param_4;
  if ((param_8 >> 1 & 1) != 0) {
    if (param_5 - (long)param_4 < 3) {
      return 1;
    }
    *param_6 = (long)(param_4 + 1);
    *param_4 = 0xef;
    puVar4 = (undefined1 *)*param_6;
    *param_6 = (long)(puVar4 + 1);
    *puVar4 = 0xbb;
    puVar4 = (undefined1 *)*param_6;
    *param_6 = (long)(puVar4 + 1);
    *puVar4 = 0xbf;
  }
  puVar5 = (ushort *)*param_3;
  do {
    if (param_2 <= puVar5) {
      return 0;
    }
    uVar2 = *puVar5;
    if (param_7 < uVar2) {
      return 2;
    }
    if (uVar2 < 0x80) {
      pbVar6 = (byte *)*param_6;
      if (param_5 - (long)pbVar6 < 1) {
        return 1;
      }
      *param_6 = (long)(pbVar6 + 1);
      *pbVar6 = (byte)uVar2;
    }
    else {
      if (uVar2 < 0x800) {
        pbVar6 = (byte *)*param_6;
        if (param_5 - (long)pbVar6 < 2) {
          return 1;
        }
        bVar7 = (byte)(uVar2 >> 6) | 0xc0;
      }
      else {
        if (uVar2 >> 0xb < 0x1b) {
          pbVar6 = (byte *)*param_6;
          if (param_5 - (long)pbVar6 < 3) {
            return 1;
          }
        }
        else {
          if (uVar2 >> 10 < 0x37) {
            if ((long)param_2 - (long)puVar5 < 4) {
              return 1;
            }
            uVar3 = puVar5[1];
            if ((uVar3 & 0xfc00) != 0xdc00) {
              return 2;
            }
            if (param_5 - *param_6 < 4) {
              return 1;
            }
            uVar8 = (ulong)uVar2 << 10;
            if (param_7 < ((uVar8 & 0xf0000) + 0x10000 | uVar8 & 0xffff | (ulong)uVar3 & 0x3ff)) {
              return 2;
            }
            *param_3 = (long)(puVar5 + 1);
            pbVar6 = (byte *)*param_6;
            uVar1 = (uVar2 >> 6 & 0xf) + 1;
            *param_6 = (long)(pbVar6 + 1);
            *pbVar6 = (byte)(uVar1 >> 2) | 0xf0;
            pbVar6 = (byte *)*param_6;
            *param_6 = (long)(pbVar6 + 1);
            *pbVar6 = (byte)((uVar1 & 3) << 4) | (byte)(uVar2 >> 2) & 0xf | 0x80;
            pbVar6 = (byte *)*param_6;
            *param_6 = (long)(pbVar6 + 1);
            *pbVar6 = (byte)((uVar2 & 3) << 4) | (byte)(uVar3 >> 6) & 0xf | 0x80;
            pbVar6 = (byte *)*param_6;
            *param_6 = (long)(pbVar6 + 1);
            *pbVar6 = (byte)uVar3 & 0x3f | 0x80;
            goto LAB_0181c804;
          }
          if (uVar2 < 0xe000) {
            return 2;
          }
          pbVar6 = (byte *)*param_6;
          if (param_5 - (long)pbVar6 < 3) {
            return 1;
          }
        }
        *param_6 = (long)(pbVar6 + 1);
        *pbVar6 = (byte)(uVar2 >> 0xc) | 0xe0;
        pbVar6 = (byte *)*param_6;
        bVar7 = (byte)(uVar2 >> 6) & 0x3f | 0x80;
      }
      *param_6 = (long)(pbVar6 + 1);
      *pbVar6 = bVar7;
      pbVar6 = (byte *)*param_6;
      *param_6 = (long)(pbVar6 + 1);
      *pbVar6 = (byte)uVar2 & 0x3f | 0x80;
    }
LAB_0181c804:
    puVar5 = (ushort *)(*param_3 + 2);
    *param_3 = (long)puVar5;
  } while( true );
}

