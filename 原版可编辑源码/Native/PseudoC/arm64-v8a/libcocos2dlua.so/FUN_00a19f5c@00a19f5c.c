
undefined8 FUN_00a19f5c(undefined8 param_1,uint *param_2,byte *param_3,ulong param_4)

{
  byte bVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  bVar1 = *param_3;
  uVar3 = (uint)(char)bVar1;
  uVar4 = (uint)bVar1;
  if ((char)bVar1 < '\0') {
    if ((uVar4 != 0x80) && (uVar4 != 0xff)) {
      if (param_4 < 2) {
        return 0xfffffffe;
      }
      uVar2 = FUN_00a20158(param_1,param_2,param_3,2);
      if ((int)uVar2 != -1) {
        return uVar2;
      }
      uVar3 = (uint)*param_3;
    }
    uVar3 = uVar3 & 0xff;
    if (uVar3 != 0x80) {
      if ((uVar3 + 0x5f & 0xff) < 2) {
        if (param_4 < 2) {
          return 0xfffffffe;
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
        iVar5 = -0x41;
        if (-1 < (char)bVar1) {
          iVar5 = -0x40;
        }
        uVar4 = (uint)bVar1 + uVar3 * 0x60 + iVar5 + 0xa866;
      }
      else {
        if (5 < (uVar3 + 0x56 & 0xff)) {
          if (uVar3 < 0xf8) {
            return 0xffffffff;
          }
          if (uVar3 == 0xff) {
            return 0xffffffff;
          }
        }
        if (param_4 < 2) {
          return 0xfffffffe;
        }
        bVar1 = param_3[1];
        if (bVar1 < 0xa1) {
          return 0xffffffff;
        }
        if (bVar1 == 0xff) {
          return 0xffffffff;
        }
        iVar5 = 0xf2;
        if (uVar3 < 0xf8) {
          iVar5 = 0xaa;
        }
        uVar4 = (uint)bVar1 + (uVar3 - iVar5) * 0x5e + 0xdf5f;
      }
      *param_2 = uVar4;
      return 2;
    }
    *param_2 = 0x20ac;
  }
  else {
    *param_2 = uVar4;
  }
  return 1;
}

