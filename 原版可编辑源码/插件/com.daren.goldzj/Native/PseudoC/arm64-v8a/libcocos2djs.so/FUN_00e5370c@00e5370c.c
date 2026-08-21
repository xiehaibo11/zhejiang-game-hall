
/* WARNING: Removing unreachable block (ram,0x00e537c0) */

short FUN_00e5370c(long param_1,int *param_2)

{
  byte *pbVar1;
  long lVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  short sVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  
  uVar9 = *param_2 + 1;
  if (uVar9 >> 0x10 == 0) {
    lVar2 = *(long *)(param_1 + 0x18) + 6;
    puVar3 = (undefined1 *)(*(long *)(param_1 + 0x18) + 0x206);
LAB_00e53728:
    do {
      uVar11 = uVar9;
      if (uVar9 >> 8 == 0) {
        puVar13 = (undefined1 *)(lVar2 + ((ulong)(uVar9 << 1) & 0x1fe));
        puVar14 = puVar3;
        if (CONCAT11(*puVar13,puVar13[1]) == 0) goto LAB_00e53770;
      }
      else {
        pbVar1 = (byte *)(lVar2 + (ulong)(uVar9 >> 8) * 2);
        uVar7 = (ulong)pbVar1[1] & 0xf8 | (ulong)*pbVar1 << 8;
        if (uVar7 != 0) {
          puVar14 = puVar3 + uVar7;
LAB_00e53770:
          uVar12 = (uint)CONCAT11(*puVar14,puVar14[1]);
          uVar5 = (uint)CONCAT11(puVar14[2],puVar14[3]);
          uVar4 = uVar9 & 0xff;
          if ((uVar9 < 0x100) && (uVar5 + uVar12 <= uVar4)) {
            uVar9 = 0x100;
            goto LAB_00e53728;
          }
          uVar6 = (uint)CONCAT11(puVar14[6],puVar14[7]);
          if (uVar6 == 0) {
            if (uVar9 == 0x100) break;
          }
          else {
            uVar11 = uVar12;
            if (uVar12 <= uVar4) {
              uVar11 = uVar4;
            }
            uVar12 = uVar11 - uVar12;
            iVar10 = uVar11 + (uVar9 & 0xffffff00);
            if (uVar12 < uVar5) {
              puVar13 = puVar14 + 6 + (uVar6 + uVar12 * 2);
              do {
                if ((CONCAT11(*puVar13,puVar13[1]) != 0) &&
                   (sVar8 = CONCAT11(*puVar13,puVar13[1]) + CONCAT11(puVar14[4],puVar14[5]),
                   sVar8 != 0)) goto LAB_00e5385c;
                uVar12 = uVar12 + 1;
                iVar10 = iVar10 + 1;
                puVar13 = puVar13 + 2;
              } while (uVar12 < uVar5);
            }
            uVar11 = iVar10 - (uint)(uVar5 != 0);
          }
        }
      }
      uVar9 = uVar11 + 0x100 & 0xffffff00;
      if (uVar11 < 0x100) {
        uVar9 = uVar11 + 1;
      }
    } while (uVar9 < 0x10000);
  }
  iVar10 = 0;
  sVar8 = 0;
LAB_00e5385c:
  *param_2 = iVar10;
  return sVar8;
}

