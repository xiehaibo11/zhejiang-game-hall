
uint FUN_00e84db0(long param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  
  uVar4 = *(uint *)(param_1 + 0x18);
  if (uVar4 == 0) {
    uVar7 = 0;
  }
  else {
    lVar8 = *(long *)(param_1 + 0x20);
    uVar6 = 0;
    uVar7 = 0;
    uVar2 = *param_2 + 1;
    uVar9 = uVar4;
    do {
      uVar3 = uVar7 + (uVar9 - uVar7 >> 1);
      uVar10 = (ulong)uVar3;
      uVar5 = *(uint *)(lVar8 + uVar10 * 8);
      if (uVar5 == uVar2) {
        uVar4 = *(uint *)(lVar8 + uVar10 * 8 + 4);
        *param_2 = uVar2;
        return uVar4;
      }
      uVar5 = uVar5 & 0x7fffffff;
      if (uVar5 == uVar2) {
        uVar6 = *(uint *)(lVar8 + uVar10 * 8 + 4);
      }
      if (uVar5 < uVar2) {
        uVar7 = uVar3 + 1;
        uVar3 = uVar9;
      }
      uVar9 = uVar3;
    } while (uVar7 < uVar3);
    if (uVar6 != 0) {
      *param_2 = uVar2;
      return uVar6;
    }
  }
  if (uVar7 < uVar4) {
    puVar1 = (uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar7 * 8);
    uVar4 = puVar1[1];
    *param_2 = *puVar1 & 0x7fffffff;
    return uVar4;
  }
  *param_2 = 0;
  return 0;
}

