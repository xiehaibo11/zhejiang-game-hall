
undefined8 FUN_00a16acc(undefined8 param_1,uint *param_2,byte *param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  ushort *puVar5;
  
  uVar4 = (uint)*param_3;
  if (-1 < (char)*param_3) {
LAB_00a16af0:
    *param_2 = uVar4;
    return 1;
  }
  if ((uVar4 + 0x5f & 0xff) < 0x3f) {
    uVar4 = uVar4 + 0xfec0;
    goto LAB_00a16af0;
  }
  if (((uVar4 == 0x87) || (0x1e < (uVar4 + 0x7f & 0xff))) && (10 < (uVar4 + 0x20 & 0xff))) {
    if (((uVar4 != 0x87) && (5 < uVar4 - 0xfa)) && (1 < uVar4 - 0xed)) {
      if (uVar4 < 0xf0) {
        return 0xffffffff;
      }
      if (param_4 < 2) {
        return 0xfffffffe;
      }
      bVar3 = param_3[1];
      if (0x3e < bVar3 - 0x40) {
        if (-1 < (char)bVar3) {
          return 0xffffffff;
        }
        if (0xfc < bVar3) {
          return 0xffffffff;
        }
      }
      iVar8 = -0x41;
      if (-1 < (char)bVar3) {
        iVar8 = -0x40;
      }
      uVar4 = (uint)bVar3 + uVar4 * 0xbc + iVar8 + 0x2fc0;
      goto LAB_00a16da8;
    }
    if (param_4 < 2) {
      return 0xfffffffe;
    }
    if (((0xf < uVar4 - 0xed) || ((1 << (ulong)(uVar4 - 0xed & 0x1f) & 0xe003U) == 0)) &&
       (uVar4 != 0x87)) {
      return 0xffffffff;
    }
    bVar3 = param_3[1];
    if (0x3e < bVar3 - 0x40) {
      if (-1 < (char)bVar3) {
        return 0xffffffff;
      }
      if (0xfc < bVar3) {
        return 0xffffffff;
      }
    }
    iVar8 = 0xc1;
    if (uVar4 < 0xe0) {
      iVar8 = 0x81;
    }
    iVar9 = 0x40;
    if ((char)bVar3 < '\0') {
      iVar9 = 0x41;
    }
    uVar4 = ((uint)bVar3 - iVar9) + (uVar4 - iVar8) * 0xbc;
    if (uVar4 >> 4 < 0x205) {
      if (0x4c3 < uVar4) {
        return 0xffffffff;
      }
      uVar4 = uVar4 - 0x468;
      puVar7 = &DAT_01328208;
    }
    else if (uVar4 >> 2 < 0xa77) {
      if (0x438 < uVar4 >> 3) {
        return 0xffffffff;
      }
      uVar4 = uVar4 - 0x2050;
      puVar7 = &DAT_013282c0;
    }
    else {
      if (0x15a < uVar4 >> 5) {
        return 0xffffffff;
      }
      uVar4 = uVar4 - 0x29dc;
      puVar7 = &DAT_013285b0;
    }
LAB_00a16d38:
    puVar5 = (ushort *)(puVar7 + (ulong)uVar4 * 2);
  }
  else {
    if (param_4 < 2) {
      return 0xfffffffe;
    }
    bVar3 = param_3[1];
    if (0x3e < (int)(char)bVar3 - 0x40U) {
      if (-1 < (char)bVar3) {
        return 0xffffffff;
      }
      if (0xfc < bVar3) {
        return 0xffffffff;
      }
    }
    iVar8 = 0x7f;
    if (0xdf < uVar4) {
      iVar8 = 0x3f;
    }
    iVar9 = -0x41;
    if (-1 < (char)bVar3) {
      iVar9 = -0x40;
    }
    uVar1 = iVar9 + (char)bVar3;
    uVar6 = (uint)(0x5d < (uVar1 & 0xff));
    uVar4 = (iVar8 + uVar4) * 2;
    uVar2 = uVar6 | uVar4;
    if (0x5d < (uVar1 & 0xff)) {
      uVar1 = uVar1 - 0x5e;
    }
    if (0x5d < (uVar1 & 0xff)) {
      return 0xffffffff;
    }
    if (7 < (uVar6 | uVar4 & 0xff) && 0x44 < (uVar2 - 0xf & 0xff)) {
      return 0xffffffff;
    }
    iVar8 = (uVar2 + 0x21 & 0xff) * 0x5e + (uVar1 + 0x21 & 0xff);
    uVar4 = iVar8 - 0xc3f;
    if (0x581 < uVar4) {
      if (0x3c < uVar4 >> 7) {
        return 0xffffffff;
      }
      uVar4 = iVar8 - 0x11c1;
      puVar7 = &DAT_0130376a;
      goto LAB_00a16d38;
    }
    if (0x2b1 < uVar4) {
      return 0xffffffff;
    }
    puVar5 = (ushort *)(&DAT_01303206 + (ulong)uVar4 * 2);
  }
  uVar4 = (uint)*puVar5;
  if (*puVar5 == 0xfffd) {
    return 0xffffffff;
  }
LAB_00a16da8:
  *param_2 = uVar4;
  return 2;
}

