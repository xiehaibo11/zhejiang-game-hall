
undefined8 FUN_00ae4bac(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x1ec);
  iVar3 = *param_2;
  if ((iVar4 != 0) && (iVar3 != iVar4)) {
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x68) >> 3 & 1) == 0) {
      if (iVar3 < iVar4) {
        return 0x18c;
      }
    }
    else {
      iVar2 = 0xff00;
      if (iVar3 != 0x100) {
        iVar2 = iVar3;
      }
      iVar1 = 0xff00;
      if (iVar4 != 0x100) {
        iVar1 = iVar4;
      }
      if (iVar1 < iVar2) {
        return 0x18c;
      }
    }
  }
  iVar4 = ssl_security(param_1,9,0,iVar3,0);
  if (iVar4 == 0) {
    return 0x18c;
  }
  iVar4 = *(int *)(param_1 + 0x1f0);
  if ((iVar4 != 0) && (iVar3 != iVar4)) {
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x68) >> 3 & 1) == 0) {
      if (iVar4 <= iVar3) {
        return 0xa6;
      }
    }
    else {
      iVar2 = 0xff00;
      if (iVar3 != 0x100) {
        iVar2 = iVar3;
      }
      iVar3 = 0xff00;
      if (iVar4 != 0x100) {
        iVar3 = iVar4;
      }
      if (iVar2 <= iVar3) {
        return 0xa6;
      }
    }
  }
  if ((*(ulong *)(param_2 + 2) & (ulong)*(uint *)(param_1 + 0x1e4)) != 0) {
    return 0x102;
  }
  if ((((uint)param_2[1] >> 1 & 1) != 0) &&
     ((*(byte *)(*(long *)(param_1 + 0x148) + 0x1e) & 3) != 0)) {
    return 0x9e;
  }
  if (((param_2[1] & 1U) != 0) && (iVar4 = FIPS_mode(), iVar4 != 0)) {
    return 0x8f;
  }
  return 0;
}

