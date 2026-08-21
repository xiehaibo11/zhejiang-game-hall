
undefined8 FUN_00a20158(undefined8 param_1,uint *param_2,byte *param_3,ulong param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  ushort *puVar7;
  
  bVar1 = *param_3;
  if (bVar1 < 0x81) {
    return 0xffffffff;
  }
  if (bVar1 == 0xff) {
    return 0xffffffff;
  }
  if (param_4 < 2) {
    return 0xfffffffe;
  }
  uVar3 = (uint)bVar1;
  uVar2 = (uint)bVar1;
  if ((uVar3 + 0x5f & 0xff) < 0x57) {
    bVar1 = param_3[1];
    if (uVar2 == 0xa1) {
      if (bVar1 == 0xaa) {
        uVar3 = 0x2014;
        goto LAB_00a203e0;
      }
      if (bVar1 == 0xa4) {
        uVar3 = 0xb7;
        goto LAB_00a203e0;
      }
    }
    uVar4 = (uint)bVar1;
    if ((0xa0 < uVar4) && (uVar4 != 0xff)) {
                    /* try { // try from 00a20258 to 00b2026b has its CatchHandler @ 00a204f8 */
      if (((uVar3 + 0x5f & 0xff) < 9 || (uVar2 + 0x50 & 0xff) < 0x48) &&
         ((uVar4 + 0x5f & 0xff) < 0x5e)) {
        iVar6 = (uVar4 ^ 0x80) + (uVar2 ^ 0x80) * 0x5e;
                    /* try { // try from 00a2026c to 00b202ff has its CatchHandler @ 00a200cc */
        uVar3 = iVar6 - 0xc3f;
        if (uVar3 < 0x582) {
          if (uVar3 < 0x33f) {
            puVar7 = (ushort *)(&DAT_01312c68 + (ulong)uVar3 * 2);
LAB_00a202b8:
            if (*puVar7 != 0xfffd) {
              *param_2 = (uint)*puVar7;
              return 2;
            }
          }
        }
        else if (uVar3 >> 1 < 0xff9) {
          puVar7 = (ushort *)(&DAT_013132e6 + (ulong)(iVar6 - 0x11c1) * 2);
          goto LAB_00a202b8;
        }
      }
      if ((uVar2 == 0xa8) || (uVar2 == 0xa6)) {
        iVar6 = (uint)bVar1 + uVar2 * 0xbe;
        if (iVar6 - 0x5fffU >> 1 < 0xe79) {
          uVar3 = iVar6 - 0x7c14;
                    /* try { // try from 00a20300 to 00b20313 has its CatchHandler @ 00a20500 */
          if (uVar3 < 0x16) {
            puVar5 = &DAT_0132a262;
LAB_00a20328:
            if (*(ushort *)(puVar5 + (ulong)uVar3 * 2) != 0xfffd) {
              *param_2 = (uint)*(ushort *)(puVar5 + (ulong)uVar3 * 2);
              return 2;
            }
          }
        }
        else {
                    /* try { // try from 00a20314 to 00b203e7 has its CatchHandler @ 00a200cc */
          uVar3 = iVar6 - 0x7d6b;
          if (uVar3 < 6) {
            puVar5 = &DAT_0132a28e;
            goto LAB_00a20328;
          }
        }
      }
    }
LAB_00a2033c:
    if (uVar2 < 0xa8) {
      if (uVar2 != 0xa2) {
        return 0xffffffff;
      }
      if (9 < (param_3[1] + 0x5f & 0xff)) {
        return 0xffffffff;
      }
      uVar3 = param_3[1] + 0x20cf;
      goto LAB_00a203e0;
    }
    bVar1 = param_3[1];
    if (0x3e < bVar1 - 0x40) {
      if (-1 < (char)bVar1) {
        return 0xffffffff;
      }
      if (0xa0 < bVar1) {
        return 0xffffffff;
      }
    }
    iVar6 = 0x40;
    if ((char)bVar1 < '\0') {
      iVar6 = 0x41;
    }
    iVar6 = ((uint)bVar1 - iVar6) + uVar2 * 0x60;
    if (0x2ee < iVar6 - 0x3060U >> 4) {
      return 0xffffffff;
    }
    uVar3 = iVar6 - 0x3f00;
    puVar5 = &DAT_0132d21a;
  }
  else {
    if (0xa0 < uVar3) goto LAB_00a2033c;
    bVar1 = param_3[1];
    if ((-2 < (char)bVar1) && (0x3e < (byte)(bVar1 - 0x40))) {
      return 0xffffffff;
    }
    iVar6 = 0x40;
    if ((char)bVar1 < '\0') {
      iVar6 = 0x41;
    }
    uVar3 = (((uint)bVar1 - iVar6) + uVar3 * 0xbe) - 0x5fbe;
    if (0x5e < uVar3 >> 6) {
      return 0xffffffff;
    }
    puVar5 = &DAT_0132a29a;
  }
  uVar3 = (uint)*(ushort *)(puVar5 + (ulong)uVar3 * 2);
  if (uVar3 == 0xfffd) {
    return 0xffffffff;
  }
LAB_00a203e0:
  *param_2 = uVar3;
                    /* try { // try from 00a203e8 to 00b203fb has its CatchHandler @ 00a204fc */
  return 2;
}

