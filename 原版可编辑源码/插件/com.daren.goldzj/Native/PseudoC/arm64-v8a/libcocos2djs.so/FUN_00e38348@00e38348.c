
undefined8 FUN_00e38348(long param_1,undefined8 *param_2)

{
  byte *pbVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 uVar7;
  
  puVar3 = *(undefined8 **)(param_1 + 0x350);
  if (puVar3 != (undefined8 *)0x0) {
    uVar7 = NEON_rev64(*puVar3,4);
    uVar6 = (uint)((ulong)*puVar3 >> 0x20);
    *param_2 = uVar7;
    if (uVar6 != 0) {
      uVar2 = (ulong)uVar6;
      plVar4 = puVar3 + 0x16;
      do {
        puVar3 = puVar3 + 1;
        uVar2 = uVar2 - 1;
        param_2[1] = *puVar3;
        puVar5 = (undefined8 *)*plVar4;
        param_2[2] = *puVar5;
        pbVar1 = (byte *)(plVar4 + -1);
        plVar4 = plVar4 + 3;
        param_2[3] = puVar5[(ulong)*pbVar1 - 1];
        param_2 = param_2 + 3;
      } while (uVar2 != 0);
    }
    return 0;
  }
  return 6;
}

