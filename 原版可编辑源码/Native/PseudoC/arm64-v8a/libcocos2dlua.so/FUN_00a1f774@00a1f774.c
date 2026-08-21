
undefined8 FUN_00a1f774(undefined8 param_1,uint *param_2,byte *param_3,ulong param_4)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  char cVar11;
  ushort *puVar7;
  
  bVar3 = *param_3;
  uVar5 = (uint)bVar3;
  if (-1 < (char)bVar3) {
    uVar1 = 0x20a9;
    if (bVar3 != 0x5c) {
      uVar1 = uVar5;
    }
    *param_2 = uVar1;
    return 1;
  }
  if (uVar5 < 0xd8) {
    if (0x4f < (byte)(bVar3 + 0x7c)) {
      return 0xffffffff;
    }
    if (param_4 < 2) {
      return 0xfffffffe;
    }
    bVar2 = param_3[1];
    if (0x3d < bVar2 - 0x41) {
      if (bVar2 < 0x81) {
        return 0xffffffff;
      }
      if (bVar2 == 0xff) {
        return 0xffffffff;
      }
    }
    uVar8 = (ulong)(bVar3 >> 2) & 0x1f;
    if (0x13 < uVar8 - 1) {
      return 0xffffffff;
    }
    uVar6 = (ulong)(ushort)(CONCAT11(bVar3,bVar2) >> 5) & 0x1f;
    uVar10 = (ulong)bVar2 & 0x1f;
    if ((0x3cfcfcfcU >> uVar6 & 1 & 0x3ffbfffeU >> uVar10) == 0) {
      return 0xffffffff;
    }
    if ((int)uVar8 == 1) {
      if ((int)uVar6 == 2) {
        if ((0x11fcd0U >> uVar10 & 1) == 0) {
          return 0xffffffff;
        }
        uVar5 = (uint)(byte)(&DAT_012fceb4)[uVar10];
      }
      else {
        if ((int)uVar10 != 1) {
          return 0xffffffff;
        }
        if ((0x3cfcfcfcU >> uVar6 & 1) == 0) {
          return 0xffffffff;
        }
        uVar5 = (uint)(byte)(&DAT_012fced4)[uVar6];
      }
    }
    else {
      if ((int)uVar6 != 2) {
                    /* try { // try from 00a1fa30 to 00b1faa3 has its CatchHandler @ 00a1fa30
                       catch() { ... } // from try @ 00a1fa30 with catch @ 00a1fa30
                       catch() { ... } // from try @ 00a1fab0 with catch @ 00a1fa30 */
        uVar5 = (int)(char)(&DAT_012fce94)[uVar10] +
                ((int)(char)(&DAT_012fce74)[uVar6] + (char)(&DAT_012fce54)[uVar8] * 0x15) * 0x1c +
                0xa998;
        goto LAB_00a1fa80;
      }
      if ((int)uVar10 != 1) {
        return 0xffffffff;
      }
      uVar5 = (uint)(byte)(&DAT_012fcef4)[uVar8];
    }
    uVar5 = uVar5 + 0x3130;
  }
  else {
                    /* try { // try from 00a1f854 to 00b1f8e7 has its CatchHandler @ 00a1f854
                       catch() { ... } // from try @ 00a1f854 with catch @ 00a1f854
                       catch() { ... } // from try @ 00a1f8f0 with catch @ 00a1f854 */
    if ((bVar3 == 0xd8 || 0xde < bVar3) && (0x19 < (byte)(bVar3 + 0x20))) {
      return 0xffffffff;
    }
    if (param_4 < 2) {
      return 0xfffffffe;
    }
    bVar2 = param_3[1];
    if (0x4d < bVar2 - 0x31) {
      if (bVar2 < 0x91) {
        return 0xffffffff;
      }
      if (bVar2 == 0xff) {
        return 0xffffffff;
      }
      if ((bVar3 == 0xda) && ((byte)(bVar2 + 0x5f) < 0x33)) {
        return 0xffffffff;
      }
    }
    iVar4 = 0x4e;
    if (0xdf < uVar5) {
      iVar4 = 0x69;
    }
    uVar5 = iVar4 + uVar5 * 2;
    cVar11 = -0x31;
    if (0x90 < bVar2) {
      cVar11 = -0x43;
    }
    bVar2 = cVar11 + bVar2;
    if (0x5d < bVar2) {
      uVar5 = uVar5 + 1;
    }
    if (0x5d < bVar2) {
      bVar2 = bVar2 + 0xa2;
    }
                    /* try { // try from 00a1f8e8 to 00b1f8ef has its CatchHandler @ 00a1f92c */
                    /* try { // try from 00a1f8f0 to 00b1f947 has its CatchHandler @ 00a1f854 */
    if (0x5d < bVar2) {
      return 0xffffffff;
    }
    if (0x33 < (uVar5 - 0x29 & 0xff) && (0xb < (uVar5 & 0xff) && 0x18 < (uVar5 - 0xf & 0xff))) {
      return 0xffffffff;
    }
                    /* catch() { ... } // from try @ 00a1f8e8 with catch @ 00a1f92c */
    iVar4 = (uVar5 + 0x21 & 0xff) * 0x5e + (uint)(byte)(bVar2 + 0x21);
    uVar5 = iVar4 - 0xc3f;
    if (uVar5 < 0x582) {
      if (0x45a < uVar5) {
        return 0xffffffff;
      }
      puVar7 = (ushort *)(&DAT_0131dd04 + (ulong)uVar5 * 2);
    }
    else {
      if (uVar5 < 0xf0e) {
        if (0xeaf < uVar5) {
          return 0xffffffff;
        }
        uVar5 = iVar4 - 0x11c1;
        puVar9 = &DAT_0131e5ba;
      }
      else {
        if (0x2225 < uVar5) {
          return 0xffffffff;
        }
        uVar5 = iVar4 - 0x1b4d;
        puVar9 = &DAT_0131f816;
      }
      puVar7 = (ushort *)(puVar9 + (ulong)uVar5 * 2);
    }
    uVar5 = (uint)*puVar7;
    if (uVar5 == 0xfffd) {
      return 0xffffffff;
    }
  }
LAB_00a1fa80:
  *param_2 = uVar5;
  return 2;
}

