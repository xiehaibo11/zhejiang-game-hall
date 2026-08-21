
undefined8
FUN_011fd394(long param_1,uint *param_2,long *param_3,undefined1 *param_4,long param_5,long *param_6
            ,ulong param_7,uint param_8)

{
  uint uVar1;
  undefined1 *puVar2;
  uint *puVar3;
  byte *pbVar4;
  
  *param_3 = param_1;
  *param_6 = (long)param_4;
  if ((param_8 >> 1 & 1) != 0) {
    if (param_5 - (long)param_4 < 3) {
      return 1;
    }
    *param_6 = (long)(param_4 + 1);
    *param_4 = 0xef;
    puVar2 = (undefined1 *)*param_6;
    *param_6 = (long)(puVar2 + 1);
    *puVar2 = 0xbb;
    puVar2 = (undefined1 *)*param_6;
    *param_6 = (long)(puVar2 + 1);
    *puVar2 = 0xbf;
  }
  puVar3 = (uint *)*param_3;
  while( true ) {
    if (param_2 <= puVar3) {
      return 0;
    }
    uVar1 = *puVar3;
    if (uVar1 >> 0xb == 0x1b) break;
    if (param_7 < uVar1) {
      return 2;
    }
    if (uVar1 < 0x80) {
      pbVar4 = (byte *)*param_6;
      if (param_5 - (long)pbVar4 < 1) {
        return 1;
      }
      *param_6 = (long)(pbVar4 + 1);
      *pbVar4 = (byte)uVar1;
    }
    else {
      if (uVar1 < 0x800) {
        pbVar4 = (byte *)*param_6;
        if (param_5 - (long)pbVar4 < 2) {
          return 1;
        }
        *param_6 = (long)(pbVar4 + 1);
        *pbVar4 = (byte)(uVar1 >> 6) | 0xc0;
      }
      else {
        pbVar4 = (byte *)*param_6;
        if (uVar1 >> 0x10 == 0) {
          if (param_5 - (long)pbVar4 < 3) {
            return 1;
          }
          *param_6 = (long)(pbVar4 + 1);
          *pbVar4 = (byte)(uVar1 >> 0xc) | 0xe0;
        }
        else {
          if (param_5 - (long)pbVar4 < 4) {
            return 1;
          }
          *param_6 = (long)(pbVar4 + 1);
          *pbVar4 = (byte)(uVar1 >> 0x12) | 0xf0;
          pbVar4 = (byte *)*param_6;
          *param_6 = (long)(pbVar4 + 1);
          *pbVar4 = (byte)(uVar1 >> 0xc) & 0x3f | 0x80;
        }
        pbVar4 = (byte *)*param_6;
        *param_6 = (long)(pbVar4 + 1);
        *pbVar4 = (byte)(uVar1 >> 6) & 0x3f | 0x80;
      }
      pbVar4 = (byte *)*param_6;
      *param_6 = (long)(pbVar4 + 1);
      *pbVar4 = (byte)uVar1 & 0x3f | 0x80;
    }
    puVar3 = (uint *)(*param_3 + 4);
    *param_3 = (long)puVar3;
  }
  return 2;
}

