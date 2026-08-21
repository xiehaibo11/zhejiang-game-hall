
undefined8 FUN_00a1671c(undefined8 param_1,uint *param_2,byte *param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar6;
  int iVar7;
  int iVar8;
  ushort *puVar5;
  
  uVar4 = (uint)*param_3;
  if ((char)*param_3 < '\0') {
    if (0x3e < (uVar4 + 0x5f & 0xff)) {
      if (((uVar4 + 0x7f & 0xff) < 0x1f) || ((uVar4 + 0x20 & 0xff) < 0xb)) {
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
        iVar7 = 0x7f;
        if (0xdf < uVar4) {
          iVar7 = 0x3f;
        }
        iVar8 = -0x41;
        if (-1 < (char)bVar3) {
          iVar8 = -0x40;
        }
        uVar1 = iVar8 + (char)bVar3;
        uVar6 = (uint)(0x5d < (uVar1 & 0xff));
        uVar4 = (iVar7 + uVar4) * 2;
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
        iVar7 = (uVar2 + 0x21 & 0xff) * 0x5e + (uVar1 + 0x21 & 0xff);
        uVar4 = iVar7 - 0xc3f;
        if (uVar4 < 0x582) {
          if (0x2b1 < uVar4) {
            return 0xffffffff;
          }
          puVar5 = (ushort *)(&DAT_01303206 + (ulong)uVar4 * 2);
        }
        else {
          if (0x3c < uVar4 >> 7) {
            return 0xffffffff;
          }
          puVar5 = (ushort *)(&DAT_0130376a + (ulong)(iVar7 - 0x11c1) * 2);
        }
        uVar4 = (uint)*puVar5;
        if (uVar4 == 0xfffd) {
          return 0xffffffff;
        }
      }
      else {
        if (9 < (uVar4 + 0x10 & 0xff)) {
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
        iVar7 = -0x41;
        if (-1 < (char)bVar3) {
          iVar7 = -0x40;
        }
        uVar4 = (uint)bVar3 + uVar4 * 0xbc + iVar7 + 0x2fc0;
      }
      *param_2 = uVar4;
      return 2;
    }
    uVar4 = uVar4 + 0xfec0;
  }
  else if (uVar4 == 0x7e) {
    uVar4 = 0x203e;
  }
  else if (uVar4 == 0x5c) {
    uVar4 = 0xa5;
  }
  *param_2 = uVar4;
  return 1;
}

