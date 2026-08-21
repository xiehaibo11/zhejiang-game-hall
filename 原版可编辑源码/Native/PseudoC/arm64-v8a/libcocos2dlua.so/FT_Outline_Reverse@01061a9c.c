
void FT_Outline_Reverse(short *param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if (param_1 != (short *)0x0) {
    if (0 < *param_1) {
      uVar3 = 0;
      lVar5 = 0;
      do {
        lVar4 = (long)*(short *)(*(long *)(param_1 + 0xc) + (ulong)(uVar3 & 0xffff) * 2);
        if (lVar5 < lVar4) {
          puVar7 = (undefined8 *)(*(long *)(param_1 + 4) + lVar4 * 0x10);
          puVar11 = (undefined8 *)(*(long *)(param_1 + 4) + lVar5 * 0x10);
          do {
            uVar15 = puVar11[1];
            uVar13 = *puVar11;
            uVar14 = *puVar7;
            puVar12 = puVar11 + 2;
            puVar11[1] = puVar7[1];
            *puVar11 = uVar14;
            puVar8 = puVar7 + -2;
            puVar7[1] = uVar15;
            *puVar7 = uVar13;
            puVar7 = puVar8;
            puVar11 = puVar12;
          } while (puVar12 < puVar8);
          if (lVar5 < lVar4) {
            puVar9 = (undefined1 *)(*(long *)(param_1 + 8) + lVar4);
            puVar2 = (undefined1 *)(*(long *)(param_1 + 8) + lVar5);
            do {
              puVar6 = puVar2 + 1;
              uVar1 = *puVar2;
              *puVar2 = *puVar9;
              puVar10 = puVar9 + -1;
              *puVar9 = uVar1;
              puVar9 = puVar10;
              puVar2 = puVar6;
            } while (puVar6 < puVar10);
          }
        }
        uVar3 = uVar3 + 1;
        lVar5 = lVar4 + 1;
      } while ((int)(uVar3 & 0xffff) < (int)*param_1);
    }
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) ^ 4;
  }
  return;
}

