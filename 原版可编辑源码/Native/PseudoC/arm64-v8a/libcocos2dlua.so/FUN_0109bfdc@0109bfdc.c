
/* WARNING: Type propagation algorithm not settling */

uint FUN_0109bfdc(long *param_1,uint *param_2,char param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  undefined1 *puVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  
                    /* catch() { ... } // from try @ 0109bfcc with catch @ 0109bfe8 */
  lVar16 = param_1[3];
  uVar17 = *(byte *)(lVar16 + 7) & 0xfe | (uint)*(byte *)(lVar16 + 6) << 8;
  uVar18 = (ulong)uVar17;
  if (uVar17 == 0) {
    return 0;
  }
  uVar26 = *param_2;
  uVar17 = uVar17 >> 1;
  uVar20 = 0;
  lVar1 = uVar18 + 2;
  lVar16 = lVar16 + 0xe;
  if (param_3 != '\0') {
    uVar26 = uVar26 + 1;
  }
  uVar14 = 0xffff;
  uVar21 = uVar17;
  uVar12 = uVar17;
  while (uVar22 = uVar21, uVar20 < uVar22) {
    puVar19 = (undefined1 *)(lVar16 + (ulong)(uVar22 + uVar20 & 0xfffffffe));
    puVar2 = puVar19 + lVar1;
    uVar12 = uVar22 + uVar20 >> 1;
    uVar5 = (uint)CONCAT11(*puVar2,puVar2[1]);
    uVar14 = (uint)CONCAT11(*puVar19,puVar19[1]);
    uVar21 = uVar12;
    if (uVar5 <= uVar26) {
                    /* try { // try from 0109c044 to 0119c19b has its CatchHandler @ 0109c044
                       catch() { ... } // from try @ 0109c044 with catch @ 0109c044
                       catch() { ... } // from try @ 0109c1a8 with catch @ 0109c044 */
      if (uVar26 <= uVar14) {
        puVar2 = puVar2 + uVar18;
        puVar19 = puVar2 + uVar18;
        iVar8 = (int)CONCAT11(*puVar2,puVar2[1]);
        uVar20 = (uint)CONCAT11(*puVar19,puVar19[1]);
        uVar11 = (ulong)uVar20;
        iVar10 = iVar8;
        if (((uVar14 == 0xffff) && (uVar17 - 1 <= uVar12)) && (uVar5 == 0xffff)) {
          if (uVar20 == 0) {
            uVar11 = 0;
            bVar7 = *(byte *)(param_1 + 4);
            uVar21 = 0;
          }
          else {
            puVar2 = (undefined1 *)(*(long *)(*param_1 + 800) + *(long *)(*param_1 + 0x328));
            if (puVar2 < puVar19 + uVar11 + 2) {
              iVar10 = 1;
            }
            uVar21 = 0;
            if (puVar19 + uVar11 + 2 <= puVar2) {
              uVar21 = uVar20;
            }
            uVar11 = (ulong)uVar21;
            bVar7 = *(byte *)(param_1 + 4);
          }
        }
        else {
                    /* try { // try from 0109c1a8 to 0119c22f has its CatchHandler @ 0109c044 */
          bVar7 = *(byte *)(param_1 + 4);
          uVar21 = uVar20;
        }
        uVar23 = uVar12;
        uVar15 = uVar14;
        uVar22 = uVar5;
        if ((bVar7 >> 1 & 1) != 0) {
          uVar21 = (uint)uVar11;
          uVar24 = uVar12 + 1;
          if (uVar21 == 0xffff) {
            uVar23 = uVar12 + 1;
          }
          if (uVar12 == 0) {
            uVar13 = 0;
            if (uVar23 == 1) goto LAB_0109c244;
            goto LAB_0109c210;
          }
          uVar25 = uVar12 * 2;
          uVar13 = uVar12;
          goto LAB_0109c138;
        }
        if (uVar21 != 0xffff) goto joined_r0x0109c1c0;
        break;
      }
      uVar20 = uVar12 + 1;
      uVar21 = uVar22;
    }
  }
joined_r0x0109c30c:
  uVar20 = 0;
  goto joined_r0x0109c230;
LAB_0109c40c:
  *(uint *)(param_1 + 5) = uVar26;
  goto LAB_0109c410;
  while( true ) {
    puVar2 = puVar2 + lVar1;
    puVar3 = puVar2 + uVar18;
    puVar19 = puVar3 + uVar18;
    uVar13 = uVar13 - 1;
    uVar22 = (uint)CONCAT11(*puVar2,puVar2[1]);
    uVar21 = (uint)CONCAT11(*puVar19,puVar19[1]);
    uVar11 = (ulong)uVar21;
    iVar10 = (int)CONCAT11(*puVar3,puVar3[1]);
    if (uVar21 != 0xffff) {
      uVar23 = uVar13;
    }
    uVar15 = uVar6;
    if (uVar13 == 0) break;
LAB_0109c138:
    uVar21 = (uint)uVar11;
    uVar25 = uVar25 - 2;
    puVar2 = (undefined1 *)(lVar16 + (ulong)uVar25);
    uVar6 = (uint)CONCAT11(*puVar2,puVar2[1]);
    if (uVar6 < uVar26) break;
  }
  if (uVar23 == uVar24) {
LAB_0109c244:
    if (uVar13 != uVar12) {
      uVar15 = uVar14;
    }
    uVar14 = uVar15;
    if (uVar24 < uVar17) {
      if (uVar13 != uVar12) {
        iVar10 = iVar8;
        uVar21 = uVar20;
        uVar22 = uVar5;
      }
      uVar11 = (ulong)uVar24 << 1;
      uVar23 = uVar12;
      do {
        puVar2 = (undefined1 *)(lVar16 + (uVar11 & 0xfffffffe));
        puVar19 = puVar2 + lVar1;
        uVar20 = (uint)CONCAT11(*puVar19,puVar19[1]);
        if (uVar26 < uVar20) break;
        puVar3 = puVar19 + uVar18;
        puVar19 = puVar3 + uVar18;
        uVar15 = (uint)CONCAT11(*puVar2,puVar2[1]);
        iVar10 = (int)CONCAT11(*puVar3,puVar3[1]);
        uVar21 = (uint)CONCAT11(*puVar19,puVar19[1]);
        if (uVar21 != 0xffff) {
          uVar23 = uVar24;
        }
        uVar24 = uVar24 + 1;
        uVar11 = uVar11 + 2;
        uVar22 = uVar20;
      } while (uVar24 < uVar17);
      bVar9 = uVar23 != uVar12;
      uVar14 = uVar15;
      uVar12 = uVar24 - 1;
      if (bVar9) {
        if (uVar23 != uVar24 - 1) goto LAB_0109c444;
        goto LAB_0109c21c;
      }
    }
    goto joined_r0x0109c30c;
  }
LAB_0109c210:
  if (uVar23 == uVar13) {
LAB_0109c21c:
                    /* catch() { ... } // from try @ 0109c19c with catch @ 0109c21c */
    if (uVar21 == 0) goto LAB_0109c224;
LAB_0109c1c4:
    uVar20 = (uint)CONCAT11(puVar19[uVar21 + (uVar26 - uVar22) * 2],
                            (puVar19 + (uVar21 + (uVar26 - uVar22) * 2))[1]);
    uVar14 = uVar15;
    uVar12 = uVar23;
    if (uVar20 == 0) goto joined_r0x0109c30c;
    uVar20 = uVar20 + iVar10;
  }
  else {
LAB_0109c444:
    puVar2 = (undefined1 *)(lVar16 + (ulong)(uVar23 << 1));
    puVar3 = puVar2 + lVar1;
    puVar4 = puVar3 + uVar18;
    puVar19 = puVar4 + uVar18;
    iVar10 = (int)CONCAT11(*puVar4,puVar4[1]);
    uVar21 = (uint)CONCAT11(*puVar19,puVar19[1]);
    uVar22 = (uint)CONCAT11(*puVar3,puVar3[1]);
    uVar15 = (uint)CONCAT11(*puVar2,puVar2[1]);
joined_r0x0109c1c0:
    if (uVar21 != 0) goto LAB_0109c1c4;
LAB_0109c224:
    uVar20 = iVar10 + uVar26;
  }
  uVar20 = uVar20 & 0xffff;
  uVar14 = uVar15;
  uVar12 = uVar23;
joined_r0x0109c230:
                    /* try { // try from 0109c230 to 0119c40f has its CatchHandler @ 0109c230
                       catch(type#1 @ 00000000) { ... } // from try @ 0109c230 with catch @ 0109c230
                       catch(type#1 @ 00000000) { ... } // from try @ 0109c428 with catch @ 0109c230
                       catch(type#1 @ 00000000) { ... } // from try @ 0109c608 with catch @ 0109c230
                        */
  if (param_3 == '\0') {
    return uVar20;
  }
  if ((uVar14 < uVar26) && (uVar12 + 1 == uVar17)) {
                    /* try { // try from 0109c428 to 0119c4e3 has its CatchHandler @ 0109c230 */
    return 0;
  }
  iVar10 = FUN_0109c494(param_1);
  if (iVar10 == 0) {
    *(uint *)(param_1 + 5) = uVar26;
    if (uVar20 == 0) {
      *(uint *)(param_1 + 5) = uVar26;
      if (uVar26 < 0xffff) {
        uVar17 = *(uint *)(param_1 + 7);
        uVar20 = uVar17;
        if (uVar17 <= uVar26 + 1) {
          uVar20 = uVar26 + 1;
        }
        while( true ) {
          uVar26 = uVar20;
          uVar14 = *(uint *)((long)param_1 + 0x3c);
          if (uVar26 <= uVar14) {
            if (param_1[9] == 0) {
              do {
                uVar20 = (int)param_1[8] + uVar26 & 0xffff;
                if (uVar20 != 0) goto LAB_0109c40c;
                uVar26 = uVar26 + 1;
              } while (uVar26 <= uVar14);
            }
            else {
              puVar19 = (undefined1 *)(param_1[9] + (ulong)((uVar26 - uVar17) * 2));
              do {
                if ((CONCAT11(*puVar19,puVar19[1]) != 0) &&
                   (uVar20 = (uint)CONCAT11(*puVar19,puVar19[1]) + (int)param_1[8] & 0xffff,
                   uVar20 != 0)) goto LAB_0109c40c;
                uVar26 = uVar26 + 1;
                puVar19 = puVar19 + 2;
              } while (uVar26 <= uVar14);
            }
          }
          iVar10 = FUN_0109c494(param_1,*(int *)((long)param_1 + 0x34) + 1);
          if (iVar10 < 0) break;
          uVar17 = *(uint *)(param_1 + 7);
          uVar20 = uVar17;
          if (uVar17 <= uVar26) {
            uVar20 = uVar26;
          }
        }
      }
      param_1[5] = 0xffffffff;
      return 0;
    }
LAB_0109c410:
                    /* try { // try from 0109c410 to 0119c427 has its CatchHandler @ 0109c668 */
    *(uint *)((long)param_1 + 0x2c) = uVar20;
  }
  else if (uVar20 == 0) {
    return 0;
  }
  *param_2 = uVar26;
  return uVar20;
}

