
int FUN_0109f148(long param_1,ulong param_2,ulong param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  byte bVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  int iVar8;
  uint uVar9;
  undefined1 *puVar10;
  ulong uVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  undefined1 *puVar16;
  uint uVar17;
  byte *pbVar18;
  
  iVar8 = 0;
  if ((9 < *(long *)(param_1 + 0x4d0)) && (iVar12 = *(int *)(param_1 + 0x4d8), iVar12 != 0)) {
    lVar15 = *(long *)(param_1 + 0x4c8);
    puVar2 = (undefined1 *)(lVar15 + *(long *)(param_1 + 0x4d0));
    puVar16 = (undefined1 *)(lVar15 + 10);
    iVar8 = 0;
    uVar13 = 1;
    uVar14 = param_3 & 0xffffffff | (param_2 & 0xffffffff) << 0x10;
    puVar10 = (undefined1 *)(lVar15 + 4);
    do {
                    /* catch() { ... } // from try @ 0109f214 with catch @ 0109f278 */
                    /* catch() { ... } // from try @ 0109f120 with catch @ 0109f27c */
      puVar4 = puVar2;
      if (puVar10 + CONCAT11(puVar10[2],puVar10[3]) <= puVar2) {
        puVar4 = puVar10 + CONCAT11(puVar10[2],puVar10[3]);
      }
      if (((*(uint *)(param_1 + 0x4dc) & uVar13) != 0) && (puVar1 = puVar10 + 0xe, puVar1 <= puVar4)
         ) {
        uVar17 = (uint)CONCAT11(*puVar16,puVar10[7]);
        if ((long)puVar4 - (long)puVar1 < (long)(ulong)(uVar17 * 6)) {
          auVar7 = SEXT816((long)puVar4 - (long)puVar1) * SEXT816(0x2aaaaaaaaaaaaaab);
          uVar17 = auVar7._8_4_ - (auVar7._12_4_ >> 0x1f);
        }
        if (puVar10[4] == '\0') {
          if ((*(uint *)(param_1 + 0x4e0) & uVar13) == 0) {
            if (uVar17 != 0) {
              pbVar18 = puVar10 + 0x13;
              do {
                    /* try { // try from 0109f214 to 0119f233 has its CatchHandler @ 0109f278 */
                if (((ulong)pbVar18[-5] << 0x18 | (ulong)pbVar18[-4] << 0x10 |
                     (ulong)pbVar18[-3] << 8 | (ulong)pbVar18[-2]) == uVar14) {
                  bVar5 = pbVar18[-1];
                  goto LAB_0109f250;
                }
                uVar17 = uVar17 - 1;
                    /* try { // try from 0109f234 to 0119f297 has its CatchHandler @ 0109f0e4 */
                pbVar18 = pbVar18 + 6;
              } while (uVar17 != 0);
            }
          }
          else if (uVar17 != 0) {
            uVar9 = 0;
LAB_0109f1b0:
            uVar6 = uVar17 + uVar9 >> 1;
            pbVar3 = puVar1 + uVar6 * 6;
            uVar11 = (ulong)*pbVar3 << 0x18 | (ulong)pbVar3[1] << 0x10 | (ulong)pbVar3[2] << 8 |
                     (ulong)pbVar3[3];
            if (uVar11 != uVar14) goto code_r0x0109f1ec;
            pbVar18 = pbVar3 + 5;
            bVar5 = pbVar3[4];
LAB_0109f250:
            if ((puVar10[5] & 8) != 0) {
              iVar8 = 0;
            }
            iVar8 = iVar8 + CONCAT11(bVar5,*pbVar18);
          }
        }
      }
LAB_0109f2cc:
      puVar16 = puVar4 + 6;
      if (puVar2 < puVar16) {
        return iVar8;
      }
      iVar12 = iVar12 + -1;
      uVar13 = uVar13 << 1;
      puVar10 = puVar4;
    } while (iVar12 != 0);
  }
  return iVar8;
code_r0x0109f1ec:
  if (uVar11 < uVar14) {
    uVar9 = uVar6 + 1;
    uVar6 = uVar17;
  }
  uVar17 = uVar6;
  if (uVar6 <= uVar9) goto LAB_0109f2cc;
  goto LAB_0109f1b0;
}

