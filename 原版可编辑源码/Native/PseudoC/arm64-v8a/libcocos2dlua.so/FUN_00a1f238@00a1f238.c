
undefined8 FUN_00a1f238(undefined8 param_1,uint *param_2,byte *param_3,ulong param_4)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  undefined *puVar8;
  
  uVar3 = (uint)*param_3;
                    /* catch() { ... } // from try @ 00a1f1cc with catch @ 00a1f240 */
  if (-1 < (char)*param_3) {
    *param_2 = uVar3;
    return 1;
  }
  if ((uVar3 == 0x80) || (0xa0 < uVar3)) {
    if (uVar3 < 0xa1) {
      return 0xffffffff;
    }
    if (uVar3 == 0xff) {
      return 0xffffffff;
    }
    if (param_4 < 2) {
      return 0xfffffffe;
    }
    bVar2 = param_3[1];
    uVar5 = (uint)bVar2;
    uVar6 = (uint)bVar2;
    if (uVar5 < 0xa1) {
      if (0x25 < (uVar3 + 0x5f & 0xff)) {
        return 0xffffffff;
      }
                    /* try { // try from 00a1f370 to 00b1f3bf has its CatchHandler @ 00a1f370
                       catch() { ... } // from try @ 00a1f370 with catch @ 00a1f370
                       catch() { ... } // from try @ 00a1f40c with catch @ 00a1f370
                       catch() { ... } // from try @ 00a1f450 with catch @ 00a1f370 */
      if ((0x1f < (byte)(bVar2 + 0x7f)) && (0x19 < (byte)((bVar2 & 0xdf) + 0xbf))) {
        return 0xffffffff;
      }
      iVar4 = 0x47;
      if (bVar2 < 0x61) {
        iVar4 = 0x41;
      }
      iVar1 = 0x4d;
      if (uVar6 < 0x81) {
        iVar1 = iVar4;
      }
      uVar5 = (uVar6 - iVar1) + (uVar3 - 0xa1) * 0x54;
      if (0xc35 < uVar5) {
        return 0xffffffff;
      }
                    /* try { // try from 00a1f3c0 to 00b1f40b has its CatchHandler @ 00a1f490 */
      uVar5 = (uint)(byte)(&DAT_013a2378)[uVar5] +
              (uint)*(ushort *)
                     (&DAT_013a22e0 + (ulong)((uint)(0x29 < uVar6 - iVar1) | (uVar3 - 0xa1) * 2) * 2
                     );
      goto LAB_00a1f304;
    }
    if (uVar6 == 0xff) {
      return 0xffffffff;
    }
    if ((uVar3 == 0xa2) && (uVar6 == 0xe8)) {
      return 0xffffffff;
    }
                    /* try { // try from 00a1f40c to 00b1f43b has its CatchHandler @ 00a1f370 */
    if (((uVar3 + 0x36 & 0xff) < 0x34 ||
         ((uVar3 + 0x5f & 0xff) < 0xc || (uVar3 + 0x50 & 0xff) < 0x19)) &&
       ((uVar6 + 0x5f & 0xff) < 0x5e)) {
                    /* try { // try from 00a1f43c to 00b1f44f has its CatchHandler @ 00a1f490 */
      iVar4 = (uVar6 ^ 0x80) + (uVar3 ^ 0x80) * 0x5e;
      uVar6 = iVar4 - 0xc3f;
                    /* try { // try from 00a1f450 to 00b1f4ab has its CatchHandler @ 00a1f370 */
      if (uVar6 < 0x582) {
        if (uVar6 < 0x45b) {
          puVar7 = (ushort *)(&DAT_0131dd04 + (ulong)uVar6 * 2);
LAB_00a1f4b0:
          if (*puVar7 != 0xfffd) {
            *param_2 = (uint)*puVar7;
            return 2;
          }
        }
      }
      else if (uVar6 < 0xf0e) {
        if (uVar6 < 0xeb0) {
          uVar6 = iVar4 - 0x11c1;
          puVar8 = &DAT_0131e5ba;
LAB_00a1f4ac:
          puVar7 = (ushort *)(puVar8 + (ulong)uVar6 * 2);
          goto LAB_00a1f4b0;
        }
      }
      else {
                    /* catch() { ... } // from try @ 00a1f3c0 with catch @ 00a1f490
                       catch() { ... } // from try @ 00a1f43c with catch @ 00a1f490 */
        if (uVar6 < 0x2226) {
          uVar6 = iVar4 - 0x1b4d;
          puVar8 = &DAT_0131f816;
          goto LAB_00a1f4ac;
        }
      }
    }
    if (uVar3 == 0xfe) {
      uVar3 = 0xdfbd;
    }
    else {
      if (uVar3 != 0xc9) {
        return 0xffffffff;
      }
      uVar3 = 0xdf5f;
    }
  }
  else {
    if (0x1f < (uVar3 + 0x7f & 0xff)) {
      return 0xffffffff;
    }
    if (param_4 < 2) {
      return 0xfffffffe;
    }
    bVar2 = param_3[1];
    if (0x19 < (byte)((bVar2 & 0xdf) + 0xbf)) {
      if (bVar2 < 0x81) {
        return 0xffffffff;
      }
      if (bVar2 == 0xff) {
        return 0xffffffff;
      }
    }
    iVar4 = 0x47;
    if (bVar2 < 0x61) {
      iVar4 = 0x41;
    }
    iVar1 = 0x4d;
    if (bVar2 < 0x81) {
      iVar1 = iVar4;
    }
    uVar6 = (uint)bVar2 - iVar1;
    uVar5 = uVar6 + (uVar3 - 0x81) * 0xb2;
    if (0x58 < uVar5 >> 6) {
      return 0xffffffff;
    }
    uVar5 = (uint)(byte)(&DAT_013a0ca0)[uVar5];
    uVar3 = (uint)*(ushort *)
                   (&DAT_013a0c20 + (ulong)((uint)(0x58 < uVar6) | (uVar3 - 0x81) * 2) * 2);
  }
  uVar5 = uVar5 + uVar3;
LAB_00a1f304:
  *param_2 = uVar5;
  return 2;
}

