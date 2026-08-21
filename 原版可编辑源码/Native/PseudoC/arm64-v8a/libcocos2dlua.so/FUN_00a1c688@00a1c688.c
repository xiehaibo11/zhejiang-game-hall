
undefined8 FUN_00a1c688(undefined8 param_1,uint *param_2,byte *param_3,ulong param_4)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ushort *puVar10;
  undefined *puVar11;
  uint uVar12;
  uint uVar13;
  
  uVar7 = (uint)*param_3;
  if (-1 < (char)*param_3) {
    *param_2 = uVar7;
    return 1;
  }
  if ((0xa0 < uVar7) && (uVar7 != 0xff)) {
    if (param_4 < 2) {
      return 0xfffffffe;
    }
    bVar2 = param_3[1];
    if (bVar2 < 0xa1) {
      return 0xffffffff;
    }
    if (bVar2 == 0xff) {
      return 0xffffffff;
    }
    uVar8 = uVar7 ^ 0x80;
    if (((6 < uVar8 - 0x21) && (uVar8 != 0x42)) && (0x39 < (uVar7 + 0x3c & 0xff))) {
      return 0xffffffff;
    }
    iVar5 = (bVar2 ^ 0x80) + uVar8 * 0x5e;
    uVar7 = iVar5 - 0xc3f;
    if (uVar7 < 0xc1e) {
      if (uVar7 < 500) {
        puVar10 = (ushort *)(&DAT_0133e3da + (ulong)uVar7 * 2);
        goto LAB_00a1c84c;
      }
      if (iVar5 == 0xe7a) {
        uVar7 = 0x4ea0;
      }
      else if (iVar5 == 0xe86) {
        uVar7 = 0x52f9;
      }
      else {
        if (iVar5 != 0xe81) {
          return 0xffffffff;
        }
        uVar7 = 0x51ab;
      }
    }
    else {
      if (uVar7 < 0xcda) {
        if (0xc3f < uVar7) {
          return 0xffffffff;
        }
        uVar7 = iVar5 - 0x185d;
        puVar11 = &DAT_0133e7c2;
      }
      else {
        if (0x21f2 < uVar7) {
          return 0xffffffff;
        }
        uVar7 = iVar5 - 0x1919;
        puVar11 = &DAT_0133e806;
      }
      puVar10 = (ushort *)(puVar11 + (ulong)uVar7 * 2);
LAB_00a1c84c:
      uVar7 = (uint)*puVar10;
                    /* try { // try from 00a1c858 to 00b1c8b3 has its CatchHandler @ 00a1c858
                       catch() { ... } // from try @ 00a1c858 with catch @ 00a1c858
                       catch() { ... } // from try @ 00a1c910 with catch @ 00a1c858
                       catch() { ... } // from try @ 00a1c9e4 with catch @ 00a1c858 */
      if (*puVar10 == 0xfffd) {
        return 0xffffffff;
      }
    }
    uVar6 = 2;
    *param_2 = uVar7;
switchD_00a1c79c_caseD_a8:
    return uVar6;
  }
  if (uVar7 != 0x8e) {
    return 0xffffffff;
  }
  if (param_4 < 4) {
    return 0xfffffffe;
  }
  uVar7 = (uint)param_3[1];
  if (0xf < (uVar7 + 0x5f & 0xff)) {
    return 0xffffffff;
  }
  bVar2 = param_3[3];
  if (bVar2 == 0xff) {
    return 0xffffffff;
  }
  bVar3 = param_3[2];
  if (bVar3 < 0xa1) {
    return 0xffffffff;
  }
  if (bVar3 == 0xff) {
    return 0xffffffff;
  }
  if (bVar2 < 0xa1) {
    return 0xffffffff;
  }
  uVar6 = 0xffffffff;
  if (0xe < uVar7 - 0xa1) {
    return 0xffffffff;
  }
  uVar13 = (uint)bVar3;
  uVar8 = uVar13 ^ 0x80;
  uVar12 = (uint)bVar2;
  uVar1 = uVar12 ^ 0x80;
  switch(uVar7) {
  case 0xa1:
    if (((6 < uVar8 - 0x21) && (uVar8 != 0x42)) && (0x39 < (uVar13 + 0x3c & 0xff))) {
      return 0xffffffff;
    }
    if (0x5d < (uVar12 + 0x5f & 0xff)) {
      return 0xffffffff;
    }
    iVar5 = uVar1 + uVar8 * 0x5e;
    uVar7 = iVar5 - 0xc3f;
    if (uVar7 < 0xc1e) {
      if (499 < uVar7) {
        if (iVar5 == 0xe7a) {
          uVar7 = 0x4ea0;
        }
        else if (iVar5 == 0xe86) {
          uVar7 = 0x52f9;
        }
        else {
          if (iVar5 != 0xe81) {
            return 0xffffffff;
          }
          uVar7 = 0x51ab;
        }
        goto LAB_00a1cb78;
      }
      puVar10 = (ushort *)(&DAT_0133e3da + (ulong)uVar7 * 2);
    }
    else {
      if (uVar7 < 0xcda) {
        if (0xc3f < uVar7) {
          return 0xffffffff;
        }
        uVar7 = iVar5 - 0x185d;
        puVar11 = &DAT_0133e7c2;
      }
      else {
        if (0x21f2 < uVar7) {
          return 0xffffffff;
        }
        uVar7 = iVar5 - 0x1919;
        puVar11 = &DAT_0133e806;
      }
      puVar10 = (ushort *)(puVar11 + (ulong)uVar7 * 2);
    }
    uVar7 = (uint)*puVar10;
    goto LAB_00a1cb6c;
  case 0xa2:
    if (0x51 < (byte)(bVar3 + 0x5f)) {
      return 0xffffffff;
    }
                    /* try { // try from 00a1c8b4 to 00b1c90f has its CatchHandler @ 00a1c9f8 */
    if (0x5d < (byte)(bVar2 + 0x5f)) {
      return 0xffffffff;
    }
    uVar7 = (uVar1 + uVar8 * 0x5e) - 0xc3f;
    if (0xef0 < uVar7 >> 1) {
      return 0xffffffff;
    }
    uVar7 = (uint)*(ushort *)(&DAT_0133a816 + (ulong)uVar7 * 2);
    goto LAB_00a1cb6c;
  case 0xa3:
                    /* try { // try from 00a1c910 to 00b1c943 has its CatchHandler @ 00a1c858 */
    if (0x5d < (byte)(bVar2 + 0x5f)) {
      return 0xffffffff;
    }
    if (0x41 < (byte)(bVar3 + 0x5f) && (uVar8 & 0xfc) != 100) {
      return 0xffffffff;
    }
    iVar5 = uVar1 + uVar8 * 0x5e;
    uVar7 = iVar5 - 0xc3f;
    if (uVar7 >> 1 < 0xc4d) {
      if (0x600 < uVar7 >> 2) {
        return 0xffffffff;
      }
                    /* try { // try from 00a1c944 to 00b1c9e3 has its CatchHandler @ 00a1c9f8 */
      puVar10 = (ushort *)(&DAT_0136e49a + (ulong)uVar7 * 2);
    }
    else {
      if (0xcde < uVar7 >> 1) {
        return 0xffffffff;
      }
      puVar10 = (ushort *)(&DAT_013716c4 + (ulong)(iVar5 - 0x24d9) * 2);
    }
    uVar9 = (ulong)*puVar10;
    puVar11 = &DAT_013714a4;
    break;
  case 0xa4:
    if (0x4d < (byte)(bVar3 + 0x5f)) {
      return 0xffffffff;
    }
    if (0x5d < (byte)(bVar2 + 0x5f)) {
      return 0xffffffff;
    }
    iVar5 = uVar1 + uVar8 * 0x5e;
    uVar7 = iVar5 - 0xc3f;
    if (uVar7 < 0xb62) {
      uVar4 = *(ushort *)(&DAT_0137190c + (ulong)uVar7 * 2);
      puVar11 = &DAT_01372fd0;
    }
    else {
                    /* try { // try from 00a1cb28 to 00b1cb2f has its CatchHandler @ 00a1cb6c */
                    /* try { // try from 00a1cb30 to 00b1cb87 has its CatchHandler @ 00a1ca94 */
      if (0xe40 < uVar7 >> 1) {
        return 0xffffffff;
      }
      uVar4 = *(ushort *)(&DAT_01373320 + (ulong)(iVar5 - 0x17a1) * 2);
      puVar11 = &DAT_01375560;
    }
    uVar8 = (uint)uVar4;
    uVar7 = *(uint *)(puVar11 + ((ulong)(uVar4 >> 6) & 0x3fc));
    goto LAB_00a1cb64;
  case 0xa5:
    if (0x5b < (byte)(bVar3 + 0x5f)) {
      return 0xffffffff;
    }
    if (0x5d < (byte)(bVar2 + 0x5f)) {
      return 0xffffffff;
    }
    uVar7 = (uVar1 + uVar8 * 0x5e) - 0xc3f;
    if (0x219a < uVar7) {
      return 0xffffffff;
    }
                    /* try { // try from 00a1c9e4 to 00b1ca1b has its CatchHandler @ 00a1c858 */
    uVar9 = (ulong)*(ushort *)(&DAT_01375940 + (ulong)uVar7 * 2);
    puVar11 = &DAT_01379c78;
    break;
  case 0xa6:
                    /* catch() { ... } // from try @ 00a1c8b4 with catch @ 00a1c9f8
                       catch() { ... } // from try @ 00a1c944 with catch @ 00a1c9f8 */
    if (0x43 < (byte)(bVar3 + 0x5f)) {
      return 0xffffffff;
    }
    if (0x5d < (byte)(bVar2 + 0x5f)) {
      return 0xffffffff;
    }
    uVar7 = (uVar1 + uVar8 * 0x5e) - 0xc3f;
    if (0x63c < uVar7 >> 2) {
      return 0xffffffff;
    }
    uVar9 = (ulong)*(ushort *)(&DAT_0137a00c + (ulong)uVar7 * 2);
    puVar11 = &DAT_0137d1f4;
    break;
  case 0xa7:
    if (0x45 < (byte)(bVar3 + 0x5f)) {
      return 0xffffffff;
    }
    if (0x5d < (byte)(bVar2 + 0x5f)) {
      return 0xffffffff;
    }
    uVar7 = (uVar1 + uVar8 * 0x5e) - 0xc3f;
    if (0x198a < uVar7) {
      return 0xffffffff;
    }
    uVar9 = (ulong)*(ushort *)(&DAT_0137d524 + (ulong)uVar7 * 2);
                    /* try { // try from 00a1ca94 to 00b1cb27 has its CatchHandler @ 00a1ca94
                       catch() { ... } // from try @ 00a1ca94 with catch @ 00a1ca94
                       catch() { ... } // from try @ 00a1cb30 with catch @ 00a1ca94 */
    puVar11 = &DAT_0138083c;
    break;
  default:
    goto switchD_00a1c79c_caseD_a8;
  case 0xaf:
    if (0x4c < (uVar13 + 0x5f & 0xff)) {
      return 0xffffffff;
    }
    if (0x5d < (uVar12 + 0x5f & 0xff)) {
      return 0xffffffff;
    }
    uVar7 = (uVar1 + uVar8 * 0x5e) - 0xc3f;
    if (0x1c00 < uVar7) {
      return 0xffffffff;
    }
    uVar9 = (ulong)*(ushort *)(&DAT_01380b54 + (ulong)uVar7 * 2);
    puVar11 = &DAT_01384358;
  }
  uVar8 = (uint)uVar9;
  uVar7 = *(uint *)(puVar11 + (uVar9 >> 6 & 0x3fc));
LAB_00a1cb64:
  uVar7 = uVar8 & 0xff | uVar7;
LAB_00a1cb6c:
                    /* catch() { ... } // from try @ 00a1cb28 with catch @ 00a1cb6c */
  if (uVar7 == 0xfffd) {
    return 0xffffffff;
  }
LAB_00a1cb78:
  *param_2 = uVar7;
  return 4;
}

