
undefined8 FUN_00a1ced8(undefined8 param_1,uint *param_2,byte *param_3,ulong param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined *puVar9;
  int iVar10;
  
  uVar5 = (uint)*param_3;
  if (-1 < (char)*param_3) {
    *param_2 = uVar5;
    return 1;
  }
                    /* try { // try from 00a1cef4 to 00b1cf17 has its CatchHandler @ 00a1cdd4 */
  if (uVar5 == 0x80) {
    return 0xffffffff;
  }
  if (uVar5 == 0xff) {
    return 0xffffffff;
  }
  if (param_4 < 2) {
    return 0xfffffffe;
  }
  bVar1 = param_3[1];
                    /* try { // try from 00a1cf18 to 00b1cf23 has its CatchHandler @ 00a1cf90 */
  uVar2 = bVar1 - 0x40;
  uVar3 = (uint)bVar1;
  if ((uVar2 < 0x3f) || ((0xa0 < bVar1 && (uVar3 != 0xff)))) {
    uVar4 = (uint)bVar1;
                    /* try { // try from 00a1cf38 to 00b1cf43 has its CatchHandler @ 00a1cfc0 */
    if (uVar5 < 0xa1) {
                    /* try { // try from 00a1cf88 to 00b1cf8f has its CatchHandler @ 00a1cfc0 */
      iVar6 = 0xdb18;
      if (uVar5 < 0x8e) {
        iVar6 = 0xeeb8;
      }
                    /* catch() { ... } // from try @ 00a1cf18 with catch @ 00a1cf90
                       try { // try from 00a1cf90 to 00b1cfdb has its CatchHandler @ 00a1cdd4 */
      iVar6 = iVar6 + uVar5 * 0x9d;
      iVar8 = -0x62;
      if (uVar3 < 0xa1) {
        iVar8 = -0x40;
      }
      iVar10 = -0x4f1d;
    }
    else {
      if (uVar5 < 0xa3) {
                    /* try { // try from 00a1cf44 to 00b1cf87 has its CatchHandler @ 00a1cdd4 */
        iVar6 = -0x62;
        if (uVar4 < 0xa1) {
          iVar6 = -0x40;
        }
        uVar5 = (uint)*(ushort *)
                       (&DAT_013935ec + (ulong)((uVar4 + uVar5 * 0x9d + iVar6) - 0x62bd) * 2);
        goto LAB_00a1cfb0;
      }
                    /* catch() { ... } // from try @ 00a1ce2c with catch @ 00a1cfc0
                       catch() { ... } // from try @ 00a1ce90 with catch @ 00a1cfc0
                       catch() { ... } // from try @ 00a1cf38 with catch @ 00a1cfc0
                       catch() { ... } // from try @ 00a1cf88 with catch @ 00a1cfc0 */
      if ((((uVar5 != 199) && (uVar5 != 0xc6 || uVar4 < 0xa1)) &&
          (((uVar5 + 0x5f & 0xff) < 0x27 || ((uVar5 + 0x37 & 0xff) < 0x31)))) &&
         ((0xa0 < uVar4 || ((uVar2 & 0xff) < 0x3f)))) {
        iVar6 = 0x62;
        if (uVar4 < 0xa1) {
          iVar6 = 0x40;
        }
        iVar6 = (uVar3 - iVar6) + uVar5 * 0x9d;
        uVar7 = iVar6 - 0x62bd;
        if (uVar7 >> 3 < 0x311) {
          if (uVar7 < 0x17e9) {
            puVar9 = &DAT_0138474c;
                    /* try { // try from 00a1d054 to 00b1d0db has its CatchHandler @ 00a1d054
                       catch() { ... } // from try @ 00a1d054 with catch @ 00a1d054
                       catch() { ... } // from try @ 00a1d148 with catch @ 00a1d054 */
LAB_00a1d074:
            if (*(ushort *)(puVar9 + (ulong)uVar7 * 2) != 0xfffd) {
              *param_2 = (uint)*(ushort *)(puVar9 + (ulong)uVar7 * 2);
              return 2;
            }
          }
        }
        else if (uVar7 >> 2 < 0xd9b) {
          uVar7 = iVar6 - 0x7b45;
          puVar9 = &DAT_0138771e;
          goto LAB_00a1d074;
        }
      }
      if ((uVar5 == 0xa3) && (uVar3 == 0xe1)) {
        uVar5 = 0x20ac;
        goto LAB_00a1cfb0;
      }
      if (uVar5 < 0xfa) goto LAB_00a1d0c8;
      iVar10 = 0x46ae;
      iVar8 = -0x62;
      if (uVar4 < 0xa1) {
        iVar8 = -0x40;
      }
      iVar6 = uVar5 * 0x9d;
    }
    uVar5 = uVar4 + iVar6 + iVar8 + iVar10;
  }
  else {
LAB_00a1d0c8:
    if (uVar5 != 0xf9) {
      return 0xffffffff;
    }
    if (0x3e < (uVar2 & 0xff)) {
                    /* try { // try from 00a1d0dc to 00b1d0fb has its CatchHandler @ 00a1d194 */
      if (bVar1 < 0xa1) {
        return 0xffffffff;
      }
      if (bVar1 == 0xff) {
        return 0xffffffff;
      }
    }
    iVar6 = 0x62;
    if (bVar1 < 0xa1) {
      iVar6 = 0x40;
    }
    uVar5 = (uVar3 - iVar6) - 0x74;
    if (0x28 < uVar5) {
      return 0xffffffff;
    }
    uVar5 = (uint)*(ushort *)(&DAT_01393860 + (ulong)uVar5 * 2);
  }
LAB_00a1cfb0:
  *param_2 = uVar5;
  return 2;
}

