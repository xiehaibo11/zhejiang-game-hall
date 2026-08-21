
int FUN_00e45acc(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  if (uVar2 == 0) {
    *param_2 = 0;
    return 0;
  }
  uVar5 = *param_2;
  do {
    uVar6 = 0;
    uVar5 = uVar5 + 1;
    uVar7 = uVar2;
    while( true ) {
      uVar1 = uVar6 + (uVar7 - uVar6 >> 1);
      uVar3 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar1 * 0x10);
      if (uVar3 == uVar5) break;
      if (uVar3 < uVar5) {
        uVar6 = uVar1 + 1;
        uVar1 = uVar7;
      }
      uVar7 = uVar1;
      if (uVar1 <= uVar6) {
        iVar4 = 0;
        uVar5 = 0;
        if ((uVar6 < uVar2) && (uVar6 != 0)) {
          uVar5 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar6 * 0x10);
          iVar4 = uVar6 + 1;
        }
        *param_2 = uVar5;
        return iVar4;
      }
    }
    if (uVar1 != 0) {
      *param_2 = uVar5;
      return uVar1 + 1;
    }
  } while( true );
}

