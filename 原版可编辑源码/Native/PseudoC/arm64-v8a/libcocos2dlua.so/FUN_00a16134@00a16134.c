
undefined8 FUN_00a16134(undefined8 param_1,uint *param_2,byte *param_3,ulong param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar7;
  undefined *puVar8;
  ushort *puVar6;
  
  uVar5 = (uint)*param_3;
  if (-1 < (char)*param_3) {
    *param_2 = uVar5;
    return 1;
  }
  if ((uVar5 < 0xa1) || (uVar5 == 0xff)) {
    if (uVar5 == 0x8f) {
      if (param_4 < 2) {
        return 0xfffffffe;
      }
      bVar1 = param_3[1];
      uVar4 = 0xffffffff;
      if ((0xa0 < bVar1) && (bVar1 != 0xff)) {
        if (param_4 < 3) {
          return 0xfffffffe;
        }
        bVar2 = param_3[2];
        if (bVar1 < 0xf5) {
          if (bVar2 < 0xa1 || bVar2 == 0xff) {
            return 0xffffffff;
          }
          uVar5 = bVar1 ^ 0x80;
          if (0x3d < (bVar1 + 0x50 & 0xff)) {
            if (0x2b < uVar5) {
              return 0xffffffff;
            }
            if ((1L << ((ulong)uVar5 & 0x3f) & 0xec400000000U) == 0) {
              return 0xffffffff;
            }
          }
          iVar3 = (bVar2 ^ 0x80) + uVar5 * 0x5e;
          uVar5 = iVar3 - 0xc3f;
          if (uVar5 < 0x1d6) {
            if (0xae < uVar5) {
              return 0xffffffff;
            }
            uVar5 = iVar3 - 0xc9d;
            puVar8 = &DAT_0130b5c8;
          }
          else if (uVar5 < 0x2f0) {
            if (0x291 < uVar5) {
              return 0xffffffff;
            }
            uVar5 = iVar3 - 0xe15;
            puVar8 = &DAT_0130b66a;
          }
          else if (uVar5 < 0x582) {
            if (0x402 < uVar5) {
              return 0xffffffff;
            }
            uVar5 = iVar3 - 0xf2f;
            puVar8 = &DAT_0130b7e2;
          }
          else {
            if (0x1c2a < uVar5) {
              return 0xffffffff;
            }
            uVar5 = iVar3 - 0x11c1;
            puVar8 = &DAT_0130ba08;
          }
          uVar5 = (uint)*(ushort *)(puVar8 + (ulong)uVar5 * 2);
          if (uVar5 == 0xfffd) {
            return 0xffffffff;
          }
        }
        else {
          if (bVar2 < 0xa1 || bVar2 == 0xff) {
            return 0xffffffff;
          }
          uVar5 = (uint)bVar2 + (uint)bVar1 * 0x5e + 0x8915;
        }
        uVar4 = 3;
        *param_2 = uVar5;
      }
      return uVar4;
    }
    if (uVar5 != 0x8e) {
      return 0xffffffff;
    }
    if (param_4 < 2) {
      return 0xfffffffe;
    }
    if (0x3e < (param_3[1] + 0x5f & 0xff)) {
      return 0xffffffff;
    }
    uVar5 = param_3[1] + 0xfec0;
  }
  else {
    if (param_4 < 2) {
      return 0xfffffffe;
    }
    bVar1 = param_3[1];
    uVar7 = (uint)bVar1;
    if (uVar5 < 0xf5) {
      if (bVar1 < 0xa1 || bVar1 == 0xff) {
        return 0xffffffff;
      }
      if (7 < (uVar5 + 0x5f & 0xff) && 0x44 < (uVar5 + 0x50 & 0xff)) {
        return 0xffffffff;
      }
      if (0x5d < (uVar7 + 0x5f & 0xff)) {
        return 0xffffffff;
      }
      iVar3 = (uVar7 ^ 0x80) + (uVar5 ^ 0x80) * 0x5e;
      uVar5 = iVar3 - 0xc3f;
      if (uVar5 < 0x582) {
        if (0x2b1 < uVar5) {
          return 0xffffffff;
        }
        puVar6 = (ushort *)(&DAT_01303206 + (ulong)uVar5 * 2);
      }
      else {
        if (0x3c < uVar5 >> 7) {
          return 0xffffffff;
        }
        puVar6 = (ushort *)(&DAT_0130376a + (ulong)(iVar3 - 0x11c1) * 2);
      }
      uVar5 = (uint)*puVar6;
      if (uVar5 == 0xfffd) {
        return 0xffffffff;
      }
    }
    else {
      if (bVar1 < 0xa1 || bVar1 == 0xff) {
        return 0xffffffff;
      }
      uVar5 = uVar7 + uVar5 * 0x5e + 0x8569;
    }
  }
  *param_2 = uVar5;
  return 2;
}

