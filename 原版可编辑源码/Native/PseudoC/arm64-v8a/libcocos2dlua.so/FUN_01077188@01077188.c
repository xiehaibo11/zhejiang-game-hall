
long FUN_01077188(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  uVar3 = (param_2 & 0xffff) * (int)*(short *)(param_1 + 0x216);
  iVar4 = ((int)param_2 >> 0x10) * (int)*(short *)(param_1 + 0x216);
  uVar5 = (param_3 & 0xffff) * (int)*(short *)(param_1 + 0x218);
  iVar6 = ((int)param_3 >> 0x10) * (int)*(short *)(param_1 + 0x218);
  uVar1 = iVar4 * 0x10000;
  uVar2 = uVar3 + uVar1;
  iVar4 = (iVar4 >> 0x10) + ((int)uVar3 >> 0x1f) + ((int)uVar5 >> 0x1f) + (iVar6 >> 0x10);
  if (CARRY4(uVar3,uVar1)) {
    iVar4 = iVar4 + 1;
  }
  uVar1 = iVar6 * 0x10000;
  uVar3 = uVar5 + uVar1;
  if (CARRY4(uVar5,uVar1)) {
    iVar4 = iVar4 + 1;
  }
  uVar1 = uVar3 + uVar2;
  if (CARRY4(uVar3,uVar2)) {
    iVar4 = iVar4 + 1;
  }
  uVar3 = iVar4 >> 0x1f;
  uVar2 = uVar3 + uVar1;
  iVar4 = uVar3 + iVar4;
  if (CARRY4(uVar3,uVar1)) {
    iVar4 = iVar4 + 1;
  }
  if (0xffffdfff < uVar2) {
    iVar4 = iVar4 + 1;
  }
  return (long)(int)(CONCAT44(iVar4,uVar2 + 0x2000) >> 0xe);
}

