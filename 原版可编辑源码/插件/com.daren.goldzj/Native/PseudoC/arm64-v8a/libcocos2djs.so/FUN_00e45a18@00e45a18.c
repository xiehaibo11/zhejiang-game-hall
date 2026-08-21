
undefined8 FUN_00e45a18(long *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar2 = *(uint *)(*param_1 + 0x248);
  *(uint *)(param_1 + 3) = uVar2;
  puVar4 = *(uint **)(*param_1 + 600);
  param_1[4] = (long)puVar4;
  if (uVar2 < 2) {
    return 0;
  }
  uVar5 = 1;
  uVar6 = *puVar4;
  do {
    lVar3 = uVar5 * 4;
    if (puVar4[lVar3] <= uVar6) {
      return 8;
    }
    uVar1 = (int)uVar5 + 1;
    uVar5 = (ulong)uVar1;
    uVar6 = puVar4[lVar3];
  } while (uVar1 < uVar2);
  return 0;
}

