
undefined8 FUN_00e72500(long *param_1,long param_2,long param_3,ulong *param_4,char param_5)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  ulong uVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  
  pbVar4 = (byte *)param_1[2];
  pbVar6 = (byte *)*param_1;
  while (pbVar6 < pbVar4) {
    bVar2 = *pbVar6;
    if (0x25 < bVar2) break;
    if ((1L << ((ulong)bVar2 & 0x3f) & 0x100003601U) == 0) {
      if ((ulong)bVar2 != 0x25) break;
      bVar1 = 0x25;
      while ((pbVar6 = pbVar6 + 1, bVar2 != 10 && (bVar1 != 0xd))) {
        if (pbVar4 <= pbVar6) goto LAB_00e72534;
        bVar1 = *pbVar6;
        bVar2 = bVar1;
      }
    }
    else {
LAB_00e72534:
      pbVar6 = pbVar6 + 1;
    }
  }
  *param_1 = (long)pbVar6;
  if (pbVar4 <= pbVar6) {
    return 0;
  }
  if (param_5 == '\0') {
    uVar9 = param_3 * 2;
    uVar5 = (ulong)(uint)((int)pbVar4 - (int)pbVar6);
    if (uVar9 < uVar5 || uVar9 - uVar5 == 0) {
      uVar5 = uVar9;
    }
    if (uVar5 == 0) {
      uVar9 = 0;
      uVar8 = 0;
    }
    else {
      uVar9 = 0;
      uVar7 = 0;
      uVar3 = 1;
      do {
        while( true ) {
          bVar2 = pbVar6[uVar9];
          if ((bVar2 < 0x21) && ((1L << ((ulong)bVar2 & 0x3f) & 0x100003601U) != 0)) break;
          if (((char)bVar2 < '\0') || (0xf < (byte)(&DAT_0197bb0c)[(ulong)bVar2 & 0x7f]))
          goto LAB_00e7270c;
          uVar3 = (int)(char)(&DAT_0197bb0c)[(ulong)bVar2 & 0x7f] | uVar3 << 4;
          if ((uVar3 >> 8 & 1) == 0) break;
          *(char *)(param_2 + (ulong)uVar7) = (char)uVar3;
          uVar7 = uVar7 + 1;
          uVar3 = 1;
          uVar9 = (ulong)((int)uVar9 + 1);
          if (uVar5 <= uVar9) goto LAB_00e7270c;
        }
        uVar9 = (ulong)((int)uVar9 + 1);
      } while (uVar9 < uVar5);
LAB_00e7270c:
      uVar8 = uVar7;
      if (uVar3 != 1) {
        uVar8 = uVar7 + 1;
        *(char *)(param_2 + (ulong)uVar7) = (char)(uVar3 << 4);
      }
    }
    *param_4 = (ulong)uVar8;
    *param_1 = (long)(pbVar6 + uVar9);
    return 0;
  }
  if (*pbVar6 != 0x3c) {
    return 3;
  }
  pbVar6 = pbVar6 + 1;
  if (pbVar6 < pbVar4) {
    uVar9 = param_3 * 2;
    uVar5 = (ulong)(uint)((int)pbVar4 - (int)pbVar6);
    uVar10 = 0;
    if (uVar9 < uVar5 || uVar9 - uVar5 == 0) {
      uVar5 = uVar9;
    }
    if (uVar5 == 0) {
      uVar8 = 0;
    }
    else {
      uVar7 = 0;
      uVar3 = 1;
      do {
        while( true ) {
          bVar2 = pbVar6[uVar10];
          if ((bVar2 < 0x21) && ((1L << ((ulong)bVar2 & 0x3f) & 0x100003601U) != 0)) break;
          if (((char)bVar2 < '\0') || (0xf < (byte)(&DAT_0197bb0c)[(ulong)bVar2 & 0x7f]))
          goto LAB_00e72654;
          uVar3 = (int)(char)(&DAT_0197bb0c)[(ulong)bVar2 & 0x7f] | uVar3 << 4;
          if ((uVar3 >> 8 & 1) == 0) break;
          *(char *)(param_2 + (ulong)uVar7) = (char)uVar3;
          uVar7 = uVar7 + 1;
          uVar3 = 1;
          uVar10 = (ulong)((int)uVar10 + 1);
          if (uVar5 <= uVar10) goto LAB_00e72654;
        }
        uVar10 = (ulong)((int)uVar10 + 1);
      } while (uVar10 < uVar5);
LAB_00e72654:
      uVar8 = uVar7;
      if (uVar3 != 1) {
        uVar8 = uVar7 + 1;
        *(char *)(param_2 + (ulong)uVar7) = (char)(uVar3 << 4);
      }
    }
    pbVar4 = (byte *)param_1[2];
    pbVar6 = pbVar6 + uVar10;
  }
  else {
    uVar8 = 0;
  }
  *param_4 = (ulong)uVar8;
  *param_1 = (long)pbVar6;
  if ((pbVar6 < pbVar4) && (*pbVar6 != 0x3e)) {
    return 3;
  }
  *param_1 = (long)(pbVar6 + 1);
  return 0;
}

