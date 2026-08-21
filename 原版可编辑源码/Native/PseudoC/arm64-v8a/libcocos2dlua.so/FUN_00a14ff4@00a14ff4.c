
undefined8 FUN_00a14ff4(undefined8 param_1,char *param_2,uint param_3,ulong param_4)

{
  char cVar1;
  ushort uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (param_3 < 0x80) {
                    /* try { // try from 00a15014 to 00b15047 has its CatchHandler @ 00a15358 */
    if ((0x1f < param_3) || ((1 << (ulong)(param_3 & 0x1f) & 0xfe0076U) == 0)) {
      *param_2 = (char)param_3;
      return 1;
    }
LAB_00a15064:
    if ((param_3 & 0xfffffffe) == 0x340) {
      cVar1 = (&DAT_01303178)[param_3 - 0x340];
    }
    else {
      uVar4 = param_3 - 0x1ea0;
      if (0x5f < uVar4) goto LAB_00a150bc;
      puVar6 = &DAT_013031a0;
LAB_00a150a4:
      cVar1 = puVar6[uVar4];
    }
  }
  else {
    if (0x117 < param_3 - 0xa0) {
      uVar4 = param_3 - 0x300;
      if (0x27 < uVar4) goto LAB_00a15064;
      puVar6 = &DAT_01303178;
      goto LAB_00a150a4;
    }
    cVar1 = (&DAT_01303060)[param_3 - 0xa0];
  }
  if (cVar1 != '\0') {
    *param_2 = cVar1;
    return 1;
  }
LAB_00a150bc:
  if (param_3 - 0xb4 < 0x1f3b) {
    if (param_3 == 0x1e7f) {
      uVar7 = 100;
LAB_00a15158:
      uVar5 = (uint)*(ushort *)(&DAT_012ffa9e + uVar7 * 4);
      uVar4 = uVar5;
      if (((uVar5 & 0xfff) < 0x80) ||
         (uVar4 = (uint)(byte)(&DAT_01303060)[(uVar5 & 0xfff) - 0xa0],
         (byte)(&DAT_01303060)[(uVar5 & 0xfff) - 0xa0] != 0)) {
        if (param_4 < 2) {
          return 0xfffffffe;
        }
        cVar1 = (&UNK_01303200)[(int)(uVar5 << 0x10) >> 0x1c];
        *param_2 = (char)uVar4;
        param_2[1] = cVar1;
        return 2;
      }
    }
    else {
      uVar5 = 0;
                    /* try { // try from 00a150ec to 00b150ff has its CatchHandler @ 00a15308 */
      uVar7 = 100;
      uVar4 = 100;
      uVar8 = 200;
      if (0x1e7e < param_3) goto LAB_00a1512c;
                    /* try { // try from 00a15100 to 00b15207 has its CatchHandler @ 00a14d78 */
      while (uVar8 = uVar7, uVar5 != (uint)uVar7) {
        while( true ) {
          uVar4 = (int)uVar8 + uVar5 >> 1;
          uVar7 = (ulong)uVar4;
          uVar2 = *(ushort *)(&DAT_012ffa9c + uVar7 * 4);
          if (uVar2 == param_3) goto LAB_00a15158;
          if (param_3 <= uVar2 && uVar2 != param_3) break;
LAB_00a1512c:
          uVar7 = uVar8;
          bVar3 = uVar5 == uVar4;
          uVar8 = uVar7;
          uVar5 = uVar4;
          if (bVar3) {
            if (*(ushort *)(&DAT_012ffa9c + uVar7 * 4) != param_3) {
              return 0xffffffff;
            }
            goto LAB_00a15158;
          }
        }
      }
    }
  }
  return 0xffffffff;
}

