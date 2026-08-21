
undefined8 FUN_00a13000(undefined8 param_1,char *param_2,uint param_3,ulong param_4)

{
  char cVar1;
  ushort uVar2;
  bool bVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_3 < 0x80) {
    *param_2 = (char)param_3;
    return 1;
  }
  if ((param_3 & 0xffffffe0) == 0xa0) {
    uVar6 = param_3 & 0xff;
    uVar4 = param_3;
joined_r0x00a13054:
    cVar5 = (char)uVar4;
    if (uVar6 != 0) {
LAB_00a130e8:
      *param_2 = cVar5;
      return 1;
    }
  }
  else {
    if (param_3 - 0xc0 < 0x58) {
      uVar6 = (uint)(byte)(&DAT_012ff9ac)[param_3 - 0xc0];
      uVar4 = uVar6;
      goto joined_r0x00a13054;
    }
    if (param_3 - 0x150 < 0x68) {
      cVar5 = (&DAT_012ffa04)[param_3 - 0x150];
joined_r0x00a130e4:
      if (cVar5 != '\0') goto LAB_00a130e8;
    }
    else {
      if ((param_3 & 0xffffffe0) == 0x2c0) {
        uVar6 = param_3 - 0x2c0;
        puVar7 = &DAT_012fcbb4;
LAB_00a130dc:
        cVar5 = puVar7[uVar6];
        goto joined_r0x00a130e4;
      }
      uVar6 = param_3 - 0x300;
                    /* try { // try from 00a13098 to 00b1309f has its CatchHandler @ 00a1318c */
      if (uVar6 < 0x28) {
                    /* try { // try from 00a130a0 to 00b130a7 has its CatchHandler @ 00a13174 */
        puVar7 = &DAT_012ffa6c;
        goto LAB_00a130dc;
      }
                    /* try { // try from 00a130b0 to 00b130b7 has its CatchHandler @ 00a13164 */
      if ((param_3 & 0xfffffffe) == 0x340) {
        uVar6 = param_3 - 0x340;
        puVar7 = &DAT_012ffa6c;
        goto LAB_00a130dc;
      }
      uVar6 = param_3 - 0x2010;
      if (uVar6 < 0x30) {
        puVar7 = &DAT_013028a6;
        goto LAB_00a130dc;
      }
                    /* try { // try from 00a130f4 to 00b130ff has its CatchHandler @ 00a13160 */
      if (param_3 == 0x20ab) {
        cVar5 = -2;
        goto LAB_00a130e8;
      }
                    /* try { // try from 00a13100 to 00b131e7 has its CatchHandler @ 00a12f5c */
      if (param_3 == 0x2122) {
                    /* try { // try from 00a13240 to 00b13247 has its CatchHandler @ 00a13280 */
        cVar5 = -0x67;
        goto LAB_00a130e8;
      }
      if (param_3 == 0x20ac) {
        cVar5 = -0x80;
        goto LAB_00a130e8;
      }
    }
  }
  if (0x1f3a < param_3 - 0xb4) {
                    /* try { // try from 00a131e8 to 00b1323f has its CatchHandler @ 00a131e8
                       catch() { ... } // from try @ 00a131e8 with catch @ 00a131e8
                       catch() { ... } // from try @ 00a13248 with catch @ 00a131e8 */
    return 0xffffffff;
  }
  if (param_3 != 0x1e7f) {
    uVar4 = 0;
    uVar8 = 100;
    uVar6 = 100;
                    /* catch() { ... } // from try @ 00a130f4 with catch @ 00a13160 */
    uVar9 = 200;
    if (0x1e7e < param_3) goto LAB_00a13190;
    do {
                    /* catch() { ... } // from try @ 00a130b0 with catch @ 00a13164 */
      uVar9 = uVar8;
      if (uVar4 == (uint)uVar8) {
        return 0xffffffff;
      }
      while( true ) {
                    /* catch() { ... } // from try @ 00a130a0 with catch @ 00a13174 */
        uVar6 = (int)uVar9 + uVar4 >> 1;
        uVar8 = (ulong)uVar6;
        uVar2 = *(ushort *)(&DAT_012ffa9c + uVar8 * 4);
        if (uVar2 == param_3) goto LAB_00a131bc;
                    /* catch() { ... } // from try @ 00a13098 with catch @ 00a1318c */
        if (param_3 <= uVar2 && uVar2 != param_3) break;
LAB_00a13190:
        uVar8 = uVar9;
        bVar3 = uVar4 == uVar6;
        uVar9 = uVar8;
        uVar4 = uVar6;
        if (bVar3) {
          if (*(ushort *)(&DAT_012ffa9c + uVar8 * 4) != param_3) {
            return 0xffffffff;
          }
          goto LAB_00a131bc;
        }
      }
    } while( true );
  }
  uVar8 = 100;
LAB_00a131bc:
  uVar4 = (uint)*(ushort *)(&DAT_012ffa9e + uVar8 * 4);
  uVar6 = uVar4 & 0xfff;
  if (0xff < uVar6) {
    if (uVar6 < 0x118) {
      cVar5 = (&DAT_012ff9ac)[uVar6 - 0xc0];
      goto joined_r0x00a13200;
    }
    uVar4 = (uint)(byte)(&DAT_012ffa04)[uVar6 - 0x150];
  }
  cVar5 = (char)uVar4;
joined_r0x00a13200:
  if (1 < param_4) {
    cVar1 = (&UNK_012ffa94)[(int)((uint)*(ushort *)(&DAT_012ffa9e + uVar8 * 4) << 0x10) >> 0x1c];
    *param_2 = cVar5;
    param_2[1] = cVar1;
    return 2;
  }
  return 0xfffffffe;
}

