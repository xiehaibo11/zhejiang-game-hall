
uint FUN_00e84d28(long param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  
  puVar5 = *(uint **)(param_1 + 0x20);
  puVar7 = puVar5 + (ulong)*(uint *)(param_1 + 0x18) * 2 + -2;
  if (puVar7 < puVar5) {
    return 0;
  }
  puVar6 = (uint *)0x0;
  do {
    puVar1 = puVar5 + ((long)puVar7 - (long)puVar5 >> 4) * 2;
    puVar3 = puVar1;
    if (*puVar1 == param_2) break;
    uVar2 = *puVar1 & 0x7fffffff;
    if (uVar2 != param_2) {
      puVar3 = puVar6;
    }
    if (puVar5 == puVar7) break;
    puVar4 = puVar1 + 2;
    if (param_2 <= uVar2) {
      puVar4 = puVar5;
      puVar7 = puVar1 + -2;
    }
    puVar5 = puVar4;
    puVar6 = puVar3;
  } while (puVar4 <= puVar7);
  if (puVar3 != (uint *)0x0) {
    return puVar3[1];
  }
  return 0;
}

