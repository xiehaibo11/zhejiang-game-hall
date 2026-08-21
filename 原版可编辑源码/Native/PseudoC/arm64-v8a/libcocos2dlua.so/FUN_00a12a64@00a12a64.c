
undefined8 FUN_00a12a64(undefined8 param_1,char *param_2,uint param_3,ulong param_4)

{
  char cVar1;
  ushort uVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  
  if (param_3 < 0x80) {
    *param_2 = (char)param_3;
    return 1;
  }
  uVar5 = param_3 - 0xa0;
  if (uVar5 < 0x58) {
    puVar6 = &DAT_012feeb4;
LAB_00a12a94:
    cVar4 = puVar6[uVar5];
  }
  else {
    if (param_3 == 0x192) {
      cVar4 = -0x7d;
      goto LAB_00a12b1c;
    }
    if ((param_3 & 0xffffffe0) == 0x2c0) {
      cVar4 = (&DAT_012fcbb4)[param_3 - 0x2c0];
    }
    else {
      if (0x47 < param_3 - 0x5b0) {
        uVar5 = param_3 - 0x2008;
        if (0x37 < uVar5) {
          if (param_3 == 0x20aa) {
            cVar4 = -0x5c;
            goto LAB_00a12b1c;
          }
          if (param_3 == 0x2122) {
            cVar4 = -0x67;
            goto LAB_00a12b1c;
          }
          if (param_3 == 0x20ac) {
            cVar4 = -0x80;
            goto LAB_00a12b1c;
          }
          goto LAB_00a12aa0;
        }
        puVar6 = &DAT_012fef54;
        goto LAB_00a12a94;
      }
      cVar4 = (&DAT_012fef0c)[param_3 - 0x5b0];
    }
  }
  if (cVar4 != '\0') {
LAB_00a12b1c:
    *param_2 = cVar4;
    return 1;
  }
LAB_00a12aa0:
  if (param_3 - 0xfb1d < 0x32) {
    if (param_3 == 0xfb39) {
      uVar7 = 0x10;
LAB_00a12be0:
      uVar2 = *(ushort *)(&DAT_012fef90 + uVar7 * 8);
      if ((short)uVar2 < 0) {
        if (1 < param_4) {
          cVar4 = (&UNK_012fd13c)[(int)(char)uVar2];
          *param_2 = (&DAT_012fef0c)[*(ushort *)(&DAT_012fef8e + uVar7 * 8) - 0x5b0];
          param_2[1] = cVar4;
          return 2;
        }
        return 0xfffffffe;
      }
      if (2 < param_4) {
        cVar4 = (&UNK_012fd13c)[(int)(char)uVar2];
        cVar1 = (&UNK_012fd13c)[uVar2 >> 8];
        *param_2 = (&DAT_012fef0c)[*(ushort *)(&DAT_012fef8e + uVar7 * 8) - 0x5b0];
        param_2[1] = cVar4;
        param_2[2] = cVar1;
        return 3;
      }
      return 0xfffffffe;
    }
    uVar9 = 0;
    uVar7 = 0x10;
    uVar5 = 0x10;
    uVar8 = 0x21;
    if (0xfb38 < param_3) goto LAB_00a12b6c;
    while (uVar8 = uVar7, uVar9 != (uint)uVar7) {
      while( true ) {
        uVar5 = (int)uVar8 + uVar9 >> 1;
        uVar7 = (ulong)uVar5;
        uVar2 = *(ushort *)(&DAT_012fef8c + uVar7 * 8);
        if (uVar2 == param_3) goto LAB_00a12be0;
        if (param_3 <= uVar2 && uVar2 != param_3) break;
LAB_00a12b6c:
        uVar7 = uVar8;
        bVar3 = uVar9 == uVar5;
        uVar8 = uVar7;
        uVar9 = uVar5;
        if (bVar3) {
          if (*(ushort *)(&DAT_012fef8c + uVar7 * 8) != param_3) {
            return 0xffffffff;
          }
          goto LAB_00a12be0;
        }
      }
    }
  }
  return 0xffffffff;
}

