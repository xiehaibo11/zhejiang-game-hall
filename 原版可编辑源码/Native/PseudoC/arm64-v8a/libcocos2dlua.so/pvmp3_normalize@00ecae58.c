
ulong pvmp3_normalize(int param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_1 < 0x10000000) {
    if (param_1 < 0x1000000) {
      if (param_1 < 0x10000) {
        if (param_1 < 0x100) {
          bVar1 = SBORROW4(param_1,0xf);
          iVar3 = param_1 + -0xf;
          bVar2 = param_1 == 0xf;
          uVar6 = 0x1b;
          uVar5 = 0x17;
        }
        else {
          bVar1 = SBORROW4(param_1,0xfff);
          iVar3 = param_1 + -0xfff;
          bVar2 = param_1 == 0xfff;
          uVar6 = 0x13;
          uVar5 = 0xf;
        }
        if (bVar2 || iVar3 < 0 != bVar1) {
          uVar5 = uVar6;
        }
        uVar4 = (ulong)uVar5;
      }
      else {
        uVar5 = 7;
        if (param_1 < 0x100000) {
          uVar5 = 0xb;
        }
        uVar4 = (ulong)uVar5;
      }
    }
    else {
      uVar4 = 3;
    }
  }
  else {
    uVar4 = 0;
  }
  iVar3 = (int)uVar4;
  uVar5 = (param_1 << uVar4 & 0x78000000U) + 0xf8000000 >> 0x1b;
  if (uVar5 - 3 < 4) {
    return (ulong)(iVar3 + 1);
  }
  if (uVar5 - 1 < 2) {
    return (ulong)(iVar3 + 2);
  }
  if (uVar5 == 0) {
    uVar4 = (ulong)(iVar3 + 3);
  }
  return uVar4;
}

