
void FT_Outline_Reverse(short *param_1)

{
  uint uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  if (param_1 != (short *)0x0) {
    if (0 < *param_1) {
      uVar5 = 0;
      lVar7 = 0;
      do {
        lVar6 = (long)*(short *)(*(long *)(param_1 + 0xc) + (uVar5 & 0xffff) * 2);
        if (lVar7 < lVar6) {
          puVar9 = (undefined8 *)(*(long *)(param_1 + 4) + lVar6 * 0x10);
          puVar3 = (undefined8 *)(*(long *)(param_1 + 4) + lVar7 * 0x10);
          do {
            puVar13 = puVar3 + 2;
            uVar16 = puVar3[1];
            uVar14 = *puVar3;
            uVar15 = *puVar9;
            puVar3[1] = puVar9[1];
            *puVar3 = uVar15;
            puVar10 = puVar9 + -2;
            puVar9[1] = uVar16;
            *puVar9 = uVar14;
            puVar9 = puVar10;
            puVar3 = puVar13;
          } while (puVar13 < puVar10);
          if (lVar7 < lVar6) {
            puVar11 = (undefined1 *)(*(long *)(param_1 + 8) + lVar6);
            puVar4 = (undefined1 *)(*(long *)(param_1 + 8) + lVar7);
            do {
              puVar8 = puVar4 + 1;
              uVar2 = *puVar4;
              *puVar4 = *puVar11;
              puVar12 = puVar11 + -1;
              *puVar11 = uVar2;
              puVar11 = puVar12;
              puVar4 = puVar8;
            } while (puVar8 < puVar12);
          }
        }
        uVar1 = (int)uVar5 + 1;
        uVar5 = (ulong)uVar1;
        lVar7 = lVar6 + 1;
      } while ((int)(uVar1 & 0xffff) < (int)*param_1);
    }
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) ^ 4;
  }
  return;
}

