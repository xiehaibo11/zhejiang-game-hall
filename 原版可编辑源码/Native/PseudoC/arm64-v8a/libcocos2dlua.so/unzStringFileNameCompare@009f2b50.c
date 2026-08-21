
int unzStringFileNameCompare(byte *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_3 < 2) {
    iVar3 = strcmp((char *)param_1,(char *)param_2);
    return iVar3;
  }
  while( true ) {
    bVar1 = *param_1;
    bVar2 = *param_2;
    uVar4 = bVar1 - 0x20;
    uVar5 = bVar2 - 0x20;
    if (0x19 < bVar1 - 0x61) {
      uVar4 = (uint)bVar1;
    }
    if (0x19 < bVar2 - 0x61) {
      uVar5 = (uint)bVar2;
    }
    if ((uVar4 & 0xff) == 0) {
      return -(uint)((uVar5 & 0xff) != 0);
    }
    if ((uVar5 & 0xff) == 0) {
      return 1;
    }
    if ((uVar4 & 0xff) < (uVar5 & 0xff)) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    if ((uVar5 & 0xff) < (uVar4 & 0xff)) {
      return 1;
    }
  }
  return -1;
}

