
undefined8 FUN_010b3db0(long *param_1,long param_2,long param_3,ulong *param_4,char param_5)

{
  bool bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  byte bVar11;
  
  pbVar4 = (byte *)param_1[2];
  pbVar2 = (byte *)*param_1;
  do {
    if ((pbVar4 <= pbVar2) || (bVar11 = *pbVar2, 0x25 < bVar11)) break;
    if ((1L << ((ulong)bVar11 & 0x3f) & 0x100003601U) == 0) {
      if ((ulong)bVar11 != 0x25) break;
      bVar11 = 0x25;
      while (((pbVar3 = pbVar2 + 1, bVar11 != 10 && (bVar11 != 0xd)) &&
             (pbVar2 = pbVar3, pbVar3 < pbVar4))) {
        bVar11 = *pbVar3;
      }
    }
    pbVar2 = pbVar2 + 1;
  } while( true );
  *param_1 = (long)pbVar2;
  if (pbVar4 <= pbVar2) {
    return 0;
  }
  if (param_5 == '\0') {
    uVar10 = param_3 * 2;
    uVar5 = (ulong)(uint)((int)pbVar4 - (int)pbVar2);
    if (uVar10 < uVar5 || uVar10 - uVar5 == 0) {
      uVar5 = uVar10;
    }
    if (uVar5 == 0) {
      uVar10 = 0;
      uVar7 = 0;
    }
    else {
      uVar6 = 0;
      uVar9 = 1;
      uVar10 = 0;
      uVar8 = 1;
      do {
        bVar11 = pbVar2[uVar10];
        if ((0x20 < bVar11) || ((1L << ((ulong)bVar11 & 0x3f) & 0x100003601U) == 0)) {
          if (((char)bVar11 < 0) ||
             (0xf < (byte)(&DAT_01463138)[(ulong)(uint)(int)(char)bVar11 & 0x7f])) break;
          uVar9 = (int)(char)(&DAT_01463138)[(ulong)(uint)(int)(char)bVar11 & 0x7f] | uVar9 << 4;
          if ((uVar9 >> 8 & 1) != 0) {
            *(char *)(param_2 + (ulong)uVar6) = (char)uVar9;
            uVar6 = uVar6 + 1;
            uVar9 = 1;
          }
        }
        bVar1 = uVar8 < uVar5;
        uVar10 = uVar8;
        uVar8 = (ulong)((int)uVar8 + 1);
      } while (bVar1);
      uVar7 = uVar6;
      if (uVar9 != 1) {
        uVar7 = uVar6 + 1;
        *(char *)(param_2 + (ulong)uVar6) = (char)(uVar9 << 4);
      }
    }
    pbVar2 = pbVar2 + uVar10;
    *param_4 = (ulong)uVar7;
  }
  else {
    if (*pbVar2 != 0x3c) {
      return 3;
    }
    pbVar2 = pbVar2 + 1;
    if (pbVar2 < pbVar4) {
      uVar8 = param_3 * 2;
      uVar5 = (ulong)(uint)((int)pbVar4 - (int)pbVar2);
      uVar10 = 0;
      if (uVar8 < uVar5 || uVar8 - uVar5 == 0) {
        uVar5 = uVar8;
      }
      if (uVar5 == 0) {
        uVar7 = 0;
      }
      else {
        uVar6 = 0;
        uVar9 = 1;
        uVar8 = 1;
        do {
          bVar11 = pbVar2[uVar10];
          if ((0x20 < bVar11) || ((1L << ((ulong)bVar11 & 0x3f) & 0x100003601U) == 0)) {
            if (((char)bVar11 < 0) ||
               (0xf < (byte)(&DAT_01463138)[(ulong)(uint)(int)(char)bVar11 & 0x7f])) break;
            uVar9 = (int)(char)(&DAT_01463138)[(ulong)(uint)(int)(char)bVar11 & 0x7f] | uVar9 << 4;
            if ((uVar9 >> 8 & 1) != 0) {
              *(char *)(param_2 + (ulong)uVar6) = (char)uVar9;
              uVar6 = uVar6 + 1;
              uVar9 = 1;
            }
          }
          bVar1 = uVar8 < uVar5;
          uVar10 = uVar8;
          uVar8 = (ulong)((int)uVar8 + 1);
        } while (bVar1);
        uVar7 = uVar6;
        if (uVar9 != 1) {
          uVar7 = uVar6 + 1;
          *(char *)(param_2 + (ulong)uVar6) = (char)(uVar9 << 4);
        }
      }
      pbVar4 = (byte *)param_1[2];
      pbVar2 = pbVar2 + uVar10;
    }
    else {
      uVar7 = 0;
    }
    *param_4 = (ulong)uVar7;
    if ((pbVar2 < pbVar4) && (*pbVar2 != 0x3e)) {
      return 3;
    }
    pbVar2 = pbVar2 + 1;
  }
  *param_1 = (long)pbVar2;
  return 0;
}

