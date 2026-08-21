
undefined8 FUN_01079bc8(long param_1,uint *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  
  puVar4 = *(uint **)(param_1 + 0x348);
  if (puVar4 != (uint *)0x0) {
    uVar2 = puVar4[1];
    *param_2 = uVar2;
    param_2[1] = *puVar4;
    if (uVar2 != 0) {
      lVar6 = 0;
      lVar5 = 0;
      do {
        lVar3 = lVar6 * 2;
        puVar1 = (undefined8 *)((long)param_2 + lVar5 + 0x10);
        lVar6 = lVar6 + 1;
        puVar1[-1] = *(undefined8 *)(puVar4 + lVar3 + 2);
        puVar7 = *(undefined8 **)((long)puVar4 + lVar5 + 0xb0);
        *puVar1 = *puVar7;
        puVar1[1] = puVar7[(ulong)*(byte *)((long)puVar4 + lVar5 + 0xa8) - 1];
        lVar5 = lVar5 + 0x18;
      } while ((uint)lVar6 < uVar2);
    }
    return 0;
  }
  return 6;
}

