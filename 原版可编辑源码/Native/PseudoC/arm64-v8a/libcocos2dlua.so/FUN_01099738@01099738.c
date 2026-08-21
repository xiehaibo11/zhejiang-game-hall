
short FUN_01099738(long param_1,uint *param_2)

{
  byte *pbVar1;
  long lVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  short sVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  
  uVar10 = *param_2 + 1;
  if (uVar10 >> 0x10 == 0) {
    lVar2 = *(long *)(param_1 + 0x18) + 6;
    puVar3 = (undefined1 *)(*(long *)(param_1 + 0x18) + 0x206);
    do {
      if (uVar10 >> 8 == 0) {
        puVar13 = (undefined1 *)(lVar2 + (ulong)((uVar10 & 0xff) << 1));
        puVar12 = puVar3;
        if (CONCAT11(*puVar13,puVar13[1]) == 0) goto LAB_01099798;
      }
      else {
        pbVar1 = (byte *)(lVar2 + (ulong)(uVar10 >> 8) * 2);
        uVar7 = (ulong)pbVar1[1] & 0xf8 | (ulong)*pbVar1 << 8;
        if (uVar7 != 0) {
          puVar12 = puVar3 + uVar7;
LAB_01099798:
          uVar5 = (uint)CONCAT11(puVar12[6],puVar12[7]);
          if (uVar5 != 0) {
            uVar6 = (uint)CONCAT11(*puVar12,puVar12[1]);
            uVar4 = uVar10 & 0xff;
            uVar8 = uVar6;
            if (uVar6 <= uVar4) {
              uVar8 = uVar4;
            }
            uVar11 = 0;
            if (uVar6 <= uVar4) {
              uVar11 = uVar4 - uVar6;
            }
            uVar10 = uVar8 + (uVar10 & 0xffffff00);
            if (uVar11 < CONCAT11(puVar12[2],puVar12[3])) {
              puVar13 = puVar12 + 6 + (uVar5 + uVar11 * 2);
              do {
                if ((CONCAT11(*puVar13,puVar13[1]) != 0) &&
                   (sVar9 = CONCAT11(*puVar13,puVar13[1]) + CONCAT11(puVar12[4],puVar12[5]),
                   sVar9 != 0)) goto LAB_01099840;
                uVar11 = uVar11 + 1;
                uVar10 = uVar10 + 1;
                puVar13 = puVar13 + 2;
              } while (uVar11 < CONCAT11(puVar12[2],puVar12[3]));
            }
          }
        }
      }
      uVar10 = uVar10 + 0x100 & 0xffffff00;
    } while (uVar10 < 0x10000);
  }
  uVar10 = 0;
  sVar9 = 0;
LAB_01099840:
  *param_2 = uVar10;
  return sVar9;
}

