
undefined8 FUN_0109c494(long *param_1,uint param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  uVar4 = *(uint *)(param_1 + 6);
  if (param_2 < uVar4) {
    uVar9 = uVar4 * 2;
    uVar10 = (ulong)param_2;
    uVar11 = uVar10 << 1;
    do {
      puVar1 = (undefined1 *)(param_1[3] + 0xe + (uVar11 & 0xfffffffe));
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      puVar1 = puVar1 + (uVar9 + 2);
      *(uint *)((long)param_1 + 0x3c) = (uint)CONCAT11(uVar5,uVar6);
      uVar7 = *puVar1;
                    /* try { // try from 0109c4e4 to 0119c4e7 has its CatchHandler @ 0109c61c */
      uVar8 = puVar1[1];
      puVar1 = puVar1 + uVar9;
      *(uint *)(param_1 + 7) = (uint)CONCAT11(uVar7,uVar8);
      puVar2 = puVar1 + uVar9;
      *(int *)(param_1 + 8) = (int)CONCAT11(*puVar1,puVar1[1]);
      uVar3 = (uint)CONCAT11(*puVar2,puVar2[1]);
      uVar12 = (ulong)uVar3;
      if (((uVar4 - 1 <= uVar10) && (CONCAT11(uVar7,uVar8) == 0xffff)) &&
         (CONCAT11(uVar5,uVar6) == 0xffff)) {
        if (uVar3 == 0) goto LAB_0109c580;
        if ((undefined1 *)(*(long *)(*param_1 + 800) + *(long *)(*param_1 + 0x328)) <
            puVar2 + uVar12 + 2) {
          uVar12 = 0;
          *(undefined4 *)(param_1 + 8) = 1;
          goto LAB_0109c580;
        }
      }
      if (uVar3 != 0xffff) {
LAB_0109c580:
        puVar2 = puVar2 + uVar12;
        if ((int)uVar12 == 0) {
          puVar2 = (undefined1 *)0x0;
        }
        param_1[9] = (long)puVar2;
        *(int *)((long)param_1 + 0x34) = (int)uVar10;
        return 0;
      }
      uVar10 = uVar10 + 1;
      uVar11 = uVar11 + 2;
                    /* try { // try from 0109c564 to 0119c56f has its CatchHandler @ 0109c620 */
    } while (uVar10 < uVar4);
  }
  return 0xffffffff;
}

