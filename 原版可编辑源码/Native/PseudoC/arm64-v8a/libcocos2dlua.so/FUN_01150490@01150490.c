
uint FUN_01150490(uint param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = param_2[-1];
  uVar1 = ((*param_2 ^ param_1) >> 1 & 0x7f7f7f7f) + (*param_2 & param_1);
  iVar4 = (uVar1 >> 0x18) - (uVar3 >> 0x18);
  if (iVar4 < 0) {
    iVar4 = iVar4 + 1;
  }
  uVar2 = (uVar1 >> 0x18) + (iVar4 >> 1);
  if (0xff < uVar2) {
    uVar2 = ~(uVar2 >> 0x18);
  }
  uVar5 = uVar1 >> 0x10 & 0xff;
  iVar4 = uVar5 - (uVar3 >> 0x10 & 0xff);
  if (iVar4 < 0) {
    iVar4 = iVar4 + 1;
  }
  uVar5 = uVar5 + (iVar4 >> 1);
  if (0xff < uVar5) {
    uVar5 = uVar5 >> 0x18 ^ 0xff;
  }
  uVar6 = uVar1 >> 8 & 0xff;
  iVar4 = uVar6 - (uVar3 >> 8 & 0xff);
  if (iVar4 < 0) {
    iVar4 = iVar4 + 1;
  }
  uVar6 = uVar6 + (iVar4 >> 1);
  iVar4 = (uVar1 & 0xff) - (uVar3 & 0xff);
  if (0xff < uVar6) {
    uVar6 = uVar6 >> 0x18 ^ 0xff;
  }
  if (iVar4 < 0) {
    iVar4 = iVar4 + 1;
  }
  uVar1 = (uVar1 & 0xff) + (iVar4 >> 1);
  if (0xff < uVar1) {
    uVar1 = uVar1 >> 0x18 ^ 0xff;
  }
  return uVar1 | uVar2 << 0x18 | uVar5 << 0x10 | uVar6 << 8;
}

