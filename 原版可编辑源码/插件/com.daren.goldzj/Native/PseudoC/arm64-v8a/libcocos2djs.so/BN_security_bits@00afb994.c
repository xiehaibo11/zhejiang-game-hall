
int BN_security_bits(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 < 0x3c00) {
    if (param_1 < 0x1e0a) {
      if (param_1 < 0xc00) {
        if (param_1 < 0x800) {
          if (param_1 < 0x400) {
            return 0;
          }
          iVar2 = 0x50;
          iVar1 = 0x50;
        }
        else {
          iVar2 = 0x70;
          iVar1 = 0x70;
        }
      }
      else {
        iVar2 = 0x80;
        iVar1 = 0x80;
      }
    }
    else {
      iVar2 = 0xc0;
      iVar1 = 0xc0;
    }
  }
  else {
    iVar2 = 0x100;
    iVar1 = 0x100;
  }
  if (param_2 != -1) {
    iVar2 = param_2;
    if (param_2 < 0) {
      iVar2 = param_2 + 1;
    }
    if (0x9f < param_2) {
      if (iVar2 >> 1 < iVar1) {
        iVar1 = iVar2 >> 1;
      }
      return iVar1;
    }
    return 0;
  }
  return iVar2;
}

