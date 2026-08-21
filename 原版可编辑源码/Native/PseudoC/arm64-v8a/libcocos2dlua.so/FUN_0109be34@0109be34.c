
uint FUN_0109be34(long *param_1,uint *param_2,char param_3)

{
  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  
  lVar13 = param_1[3];
  uVar16 = *(byte *)(lVar13 + 7) & 0xfe | (uint)*(byte *)(lVar13 + 6) << 8;
  uVar14 = (ulong)uVar16;
                    /* try { // try from 0109be54 to 0119be5f has its CatchHandler @ 0109bf34 */
  uVar16 = uVar16 >> 1;
  if (uVar16 != 0) {
    uVar15 = *param_2;
                    /* try { // try from 0109be60 to 0119bf47 has its CatchHandler @ 0109bd88 */
    if (param_3 != '\0') {
      uVar15 = uVar15 + 1;
    }
    if (uVar15 >> 0x10 == 0) {
      iVar17 = uVar15 << 1;
      lVar8 = uVar14 * 3;
      do {
        uVar9 = 0;
        lVar10 = lVar13 + uVar14 + 0x10;
        puVar11 = (undefined1 *)(lVar13 + 0xe);
        lVar12 = lVar13;
        do {
          uVar7 = *puVar11;
          puVar1 = puVar11 + 1;
          puVar11 = puVar11 + 2;
          if ((uVar15 <= CONCAT11(uVar7,*puVar1)) &&
             (uVar5 = (uint)CONCAT11(*(undefined1 *)(uVar14 + lVar12 + 0x10),
                                     *(undefined1 *)(lVar10 + 1)), uVar5 <= uVar15)) {
            lVar3 = lVar12 + uVar14 * 2;
            puVar11 = (undefined1 *)(lVar12 + lVar8 + 0x10);
            iVar18 = (int)CONCAT11(*(undefined1 *)(lVar3 + 0x10),*(undefined1 *)(lVar3 + 0x11));
            uVar6 = (uint)CONCAT11(*puVar11,*(undefined1 *)(lVar12 + lVar8 + 0x11));
            uVar19 = uVar6;
            if ((CONCAT11(uVar7,*puVar1) == 0xffff) && ((uVar16 - 1 <= uVar9 && (uVar5 == 0xffff))))
            {
              if (uVar6 != 0) {
                uVar2 = lVar12 + lVar8 + (ulong)uVar6 + 0x12;
                uVar4 = *(long *)(*param_1 + 800) + *(long *)(*param_1 + 0x328);
                if (uVar4 < uVar2) {
                  iVar18 = 1;
                }
                    /* catch() { ... } // from try @ 0109be54 with catch @ 0109bf34 */
                uVar19 = 0;
                if (uVar2 <= uVar4) {
                  uVar19 = uVar6;
                }
                goto LAB_0109bf38;
              }
LAB_0109bf7c:
              uVar9 = iVar18 + uVar15;
            }
            else {
LAB_0109bf38:
              if (uVar19 == 0xffff) goto LAB_0109bf40;
              if (uVar19 == 0) goto LAB_0109bf7c;
              lVar12 = lVar8 + (ulong)(iVar17 + uVar19 + uVar5 * -2) + lVar12;
              uVar5 = (uint)CONCAT11(*(undefined1 *)(lVar12 + 0x10),*(undefined1 *)(lVar12 + 0x11));
              uVar9 = 0;
              if (uVar5 == 0) goto joined_r0x0109bfb0;
              uVar9 = uVar5 + iVar18;
            }
            uVar9 = uVar9 & 0xffff;
            goto joined_r0x0109bfb0;
          }
LAB_0109bf40:
          uVar9 = uVar9 + 1;
          lVar10 = lVar10 + 2;
                    /* catch() { ... } // from try @ 0109bfd8 with catch @ 0109bf48 */
          lVar12 = lVar12 + 2;
        } while (uVar9 < uVar16);
        uVar9 = 0;
joined_r0x0109bfb0:
        if ((param_3 == '\0') || (uVar9 != 0)) {
          if (param_3 == '\0') {
            return uVar9;
          }
          if (uVar9 == 0) {
            return 0;
          }
          *param_2 = uVar15;
          return uVar9;
        }
        uVar15 = uVar15 + 1;
        iVar17 = iVar17 + 2;
      } while (uVar15 < 0x10000);
    }
  }
                    /* try { // try from 0109bfcc to 0119bfd7 has its CatchHandler @ 0109bfe8 */
                    /* try { // try from 0109bfd8 to 0119c043 has its CatchHandler @ 0109bf48 */
  return 0;
}

