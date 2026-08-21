
int FUN_00e84fd4(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar3 = *param_1;
  uVar4 = *param_2;
  uVar1 = uVar3 & 0x7fffffff;
  uVar2 = uVar4 & 0x7fffffff;
  if (uVar1 == uVar2) {
    bVar5 = uVar4 <= uVar3;
    if (uVar4 < uVar3) {
      return 1;
    }
  }
  else {
    if (uVar2 < uVar1) {
      return 1;
    }
    bVar5 = uVar2 <= uVar1;
  }
  return -(uint)!bVar5;
}

