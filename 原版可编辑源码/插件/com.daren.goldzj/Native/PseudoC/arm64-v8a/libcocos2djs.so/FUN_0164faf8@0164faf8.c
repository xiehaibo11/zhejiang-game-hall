
bool FUN_0164faf8(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar2 = *param_1;
  uVar1 = (uint)uVar2;
  uVar5 = uVar2;
  if ((uVar1 >> 2 & 1) != 0) {
    uVar5 = 0x180;
    if ((uVar1 >> 5 & 0xff) < 0xb || (uVar2 & 0x1c) != 4) {
      uVar5 = 0;
    }
    uVar5 = uVar2 & 0xffffffffffffe018 | uVar5 | 4;
  }
  uVar4 = *param_2;
  uVar3 = (uint)uVar4;
  uVar6 = uVar4;
  if ((uVar3 >> 2 & 1) != 0) {
    uVar6 = 0x180;
    if ((uVar3 >> 5 & 0xff) < 0xb || (uVar4 & 0x1c) != 4) {
      uVar6 = 0;
    }
    uVar6 = uVar4 & 0xffffffffffffe018 | uVar6 | 4;
  }
  if (uVar5 == uVar6) {
    uVar2 = param_1[1];
    if ((uVar2 & 0x1c) == 0xc) {
      if ((param_2[1] & 0x1c) != 0xc) {
        return false;
      }
    }
    else if ((param_2[1] & 0x1c) == 0xc) {
      return true;
    }
    if (((uint)uVar2 >> 2 & 1) != 0) {
      uVar5 = 0x180;
      if (((uint)uVar2 >> 5 & 0xff) < 0xb || (uVar2 & 0x1c) != 4) {
        uVar5 = 0;
      }
      uVar2 = uVar2 & 0xffffffffffffe018 | uVar5 | 4;
    }
    uVar4 = param_2[1];
    uVar3 = (uint)uVar4;
  }
  else if ((uVar1 >> 2 & 1) != 0) {
    uVar5 = 0x180;
    if ((uVar1 >> 5 & 0xff) < 0xb || (uVar2 & 0x1c) != 4) {
      uVar5 = 0;
    }
    uVar2 = uVar2 & 0xffffffffffffe018 | uVar5 | 4;
  }
  if ((uVar3 >> 2 & 1) != 0) {
    uVar5 = 0x180;
    if (((uint)uVar4 >> 5 & 0xff) < 0xb || (uVar4 & 0x1c) != 4) {
      uVar5 = 0;
    }
    uVar4 = uVar4 & 0xffffffffffffe018 | uVar5 | 4;
  }
  return uVar2 < uVar4;
}

