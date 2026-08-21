
undefined8
FUN_011ff17c(long param_1,uint *param_2,long *param_3,undefined1 *param_4,long param_5,long *param_6
            ,ulong param_7,uint param_8)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint *puVar4;
  byte *pbVar5;
  uint uVar6;
  
  *param_3 = param_1;
  *param_6 = (long)param_4;
  if ((param_8 >> 1 & 1) != 0) {
    if (param_5 - (long)param_4 < 3) {
      return 1;
    }
    *param_6 = (long)(param_4 + 1);
    *param_4 = 0xef;
    puVar3 = (undefined1 *)*param_6;
    *param_6 = (long)(puVar3 + 1);
    *puVar3 = 0xbb;
    puVar3 = (undefined1 *)*param_6;
    *param_6 = (long)(puVar3 + 1);
    *puVar3 = 0xbf;
  }
  puVar4 = (uint *)*param_3;
  do {
    if (param_2 <= puVar4) {
      return 0;
    }
    uVar2 = *puVar4;
    if (param_7 < ((ulong)uVar2 & 0xffff)) {
      return 2;
    }
    uVar6 = (uint)((ulong)uVar2 & 0xffff);
    if (uVar6 < 0x80) {
      pbVar5 = (byte *)*param_6;
      if (param_5 - (long)pbVar5 < 1) {
        return 1;
      }
      *param_6 = (long)(pbVar5 + 1);
      *pbVar5 = (byte)uVar2;
    }
    else {
      if (uVar6 < 0x800) {
        pbVar5 = (byte *)*param_6;
        if (param_5 - (long)pbVar5 < 2) {
          return 1;
        }
        *param_6 = (long)(pbVar5 + 1);
        *pbVar5 = (byte)(uVar2 >> 6) | 0xc0;
      }
      else {
        if (0x1a < uVar6 >> 0xb) {
          if (uVar6 >> 10 < 0x37) {
            if ((long)param_2 - (long)puVar4 < 8) {
              return 1;
            }
            uVar6 = puVar4[1];
            if ((uVar6 & 0xfc00) != 0xdc00) {
              return 2;
            }
            if (param_5 - *param_6 < 4) {
              return 1;
            }
            if (param_7 < ((ulong)(uVar2 << 10) & 0xffc00 | (ulong)uVar6 & 0x3ff) + 0x10000) {
              return 2;
            }
            *param_3 = (long)(puVar4 + 1);
            pbVar5 = (byte *)*param_6;
            uVar1 = (uVar2 >> 6 & 0xf) + 1;
            *param_6 = (long)(pbVar5 + 1);
            *pbVar5 = (byte)(uVar1 >> 2) | 0xf0;
            pbVar5 = (byte *)*param_6;
            *param_6 = (long)(pbVar5 + 1);
            *pbVar5 = (byte)(uVar2 >> 2) & 0xf | (byte)((uVar1 & 3) << 4) | 0x80;
            pbVar5 = (byte *)*param_6;
            *param_6 = (long)(pbVar5 + 1);
            *pbVar5 = (byte)((uVar2 & 3) << 4) | (byte)(uVar6 >> 6) & 0xf | 0x80;
            pbVar5 = (byte *)*param_6;
            *param_6 = (long)(pbVar5 + 1);
            *pbVar5 = (byte)uVar6 & 0x3f | 0x80;
            goto LAB_011ff21c;
          }
          if (uVar6 < 0xe000) {
            return 2;
          }
        }
        pbVar5 = (byte *)*param_6;
        if (param_5 - (long)pbVar5 < 3) {
          return 1;
        }
        *param_6 = (long)(pbVar5 + 1);
        *pbVar5 = (byte)(uVar6 >> 0xc) | 0xe0;
        pbVar5 = (byte *)*param_6;
        *param_6 = (long)(pbVar5 + 1);
        *pbVar5 = (byte)(uVar2 >> 6) & 0x3f | 0x80;
      }
      pbVar5 = (byte *)*param_6;
      *param_6 = (long)(pbVar5 + 1);
      *pbVar5 = (byte)uVar2 & 0x3f | 0x80;
    }
LAB_011ff21c:
    puVar4 = (uint *)(*param_3 + 4);
    *param_3 = (long)puVar4;
  } while( true );
}

