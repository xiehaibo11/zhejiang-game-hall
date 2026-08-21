
bool ssl_cipher_disabled(long param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  
  lVar4 = *(long *)(param_1 + 0x90);
  if ((*(uint *)(lVar4 + 0x32c) & *(uint *)(param_2 + 0x14)) != 0) {
    return true;
  }
  if ((*(uint *)(lVar4 + 0x330) & *(uint *)(param_2 + 0x18)) != 0) {
    return true;
  }
  iVar3 = *(int *)(lVar4 + 0x338);
  if (iVar3 == 0) {
    return true;
  }
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x68) >> 3 & 1) == 0) {
    if (iVar3 < *(int *)(param_2 + 0x24)) {
      return true;
    }
    if (*(int *)(param_2 + 0x28) < *(int *)(lVar4 + 0x334)) {
      return true;
    }
  }
  else {
    iVar5 = 0xff00;
    iVar1 = iVar5;
    if (*(int *)(param_2 + 0x2c) != 0x100) {
      iVar1 = *(int *)(param_2 + 0x2c);
    }
    iVar2 = iVar5;
    if (iVar3 != 0x100) {
      iVar2 = iVar3;
    }
    if (iVar1 < iVar2) {
      return true;
    }
    iVar3 = iVar5;
    if (*(int *)(param_2 + 0x30) != 0x100) {
      iVar3 = *(int *)(param_2 + 0x30);
    }
    if (*(int *)(lVar4 + 0x334) != 0x100) {
      iVar5 = *(int *)(lVar4 + 0x334);
    }
    if (iVar5 < iVar3) {
      return true;
    }
  }
  iVar3 = ssl_security(param_1,param_3,*(undefined4 *)(param_2 + 0x3c),0,param_2);
  return iVar3 == 0;
}

