
undefined8 FUN_010a385c(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  ushort uVar4;
  short sVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long *plVar23;
  uint uVar24;
  undefined8 uVar25;
  uint *puVar26;
  byte *pbVar27;
  uint uVar28;
  long local_390 [51];
  long local_1f8 [51];
  
  uVar25 = *(undefined8 *)(param_2 + 0xa8);
  *(uint *)(param_1 + 9) = (uint)*(ushort *)(param_2 + 0x88);
  iVar9 = FT_Select_Charmap(param_2,0x756e6963);
  if (iVar9 == 0) {
    FUN_010a6b50(param_1,param_2);
    puVar26 = (uint *)(af_blue_stringsets + (ulong)*(uint *)(*param_1 + 0xc) * 8);
    uVar28 = *puVar26;
    if (uVar28 != 0x284) {
LAB_010a38ec:
      bVar7 = true;
      pbVar12 = &af_blue_strings + uVar28;
      uVar11 = (ulong)(((ushort)((ushort)puVar26[1] >> 1) ^ 0xffffffff) & 1);
      uVar28 = 0;
      uVar24 = 0;
      do {
        while( true ) {
          do {
            pbVar27 = pbVar12;
            bVar8 = bVar7;
            do {
              bVar7 = bVar8;
              bVar3 = *pbVar27;
              uVar10 = (ulong)bVar3;
              if (uVar10 == 0) {
                if (uVar24 == 0 && uVar28 == 0) goto LAB_010a3ce0;
                    /* try { // try from 010a3b6c to 011a3b77 has its CatchHandler @ 010a3cd4 */
                if (uVar24 < 2) goto LAB_010a3bc0;
                uVar14 = 0;
                uVar10 = 1;
                goto LAB_010a3b80;
              }
              pbVar12 = pbVar27 + 1;
              if ((char)bVar3 < '\0') {
                if (bVar3 < 0xe0) {
                  iVar9 = 1;
                  uVar14 = 0x1f;
                }
                else {
                  uVar14 = 0xf;
                  if (0xef < bVar3) {
                    uVar14 = 7;
                  }
                  iVar9 = 2;
                  if (0xef < bVar3) {
                    iVar9 = 3;
                  }
                }
                uVar10 = uVar14 & uVar10;
                uVar6 = iVar9 - 1;
                do {
                  iVar9 = iVar9 + -1;
                  uVar10 = (ulong)*pbVar12 & 0x3f | uVar10 << 6;
                  pbVar12 = pbVar12 + 1;
                } while (iVar9 != 0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010a3834 with catch @ 010a39b0
                        */
                pbVar12 = pbVar27 + (ulong)uVar6 + 2;
              }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010a3a10 with catch @ 010a39b4
                       catch(type#1 @ 00000000) { ... } // from try @ 010a3bdc with catch @ 010a39b4
                        */
              pbVar27 = pbVar12;
              bVar8 = false;
            } while (uVar10 == 0x7c);
            iVar9 = FT_Get_Char_Index(*(undefined8 *)param_1[8]);
          } while (((iVar9 == 0) || (iVar9 = FT_Load_Glyph(param_2,iVar9,1), iVar9 != 0)) ||
                  (lVar16 = *(long *)(param_2 + 0x98), *(short *)(lVar16 + 0xca) < 1
                    /* try { // try from 010a3a08 to 011a3a0f has its CatchHandler @ 010a3ce8 */));
                    /* try { // try from 010a3a10 to 011a3b6b has its CatchHandler @ 010a39b4 */
          if (0 < (long)*(short *)(lVar16 + 200)) break;
          lVar13 = 0;
          if (bVar7) goto LAB_010a3940;
LAB_010a3930:
          local_390[(int)uVar28] = lVar13;
          uVar28 = uVar28 + 1;
        }
        lVar15 = *(long *)(lVar16 + 0xd0);
        uVar10 = 0;
        iVar9 = 0;
        lVar13 = 0;
        iVar19 = -1;
        do {
          sVar5 = *(short *)(*(long *)(lVar16 + 0xe0) + uVar10 * 2);
          if (iVar9 < sVar5) {
            uVar4 = (ushort)puVar26[1];
            lVar22 = (long)iVar9;
            lVar20 = (long)(int)sVar5;
            if ((uVar4 >> 1 & 1) == 0) {
              if ((uVar4 & 1) == 0) {
                lVar21 = lVar22 + -1;
                plVar23 = (long *)(lVar15 + 8 + lVar22 * 0x10);
                iVar9 = iVar19;
                do {
                  lVar21 = lVar21 + 1;
                  iVar19 = (int)lVar21;
                  lVar22 = *plVar23;
                  if (-1 < iVar9 && lVar13 <= *plVar23) {
                    iVar19 = iVar9;
                    lVar22 = lVar13;
                  }
                  lVar13 = lVar22;
                  plVar23 = plVar23 + 2;
                  iVar9 = iVar19;
                } while (lVar21 < lVar20);
              }
              else {
                lVar21 = lVar22 + -1;
                plVar23 = (long *)(lVar15 + 8 + lVar22 * 0x10);
                iVar9 = iVar19;
                do {
                  lVar21 = lVar21 + 1;
                  iVar19 = (int)lVar21;
                  lVar22 = *plVar23;
                  if (-1 < iVar9 && *plVar23 <= lVar13) {
                    iVar19 = iVar9;
                    lVar22 = lVar13;
                  }
                  lVar13 = lVar22;
                  plVar23 = plVar23 + 2;
                  iVar9 = iVar19;
                } while (lVar21 < lVar20);
              }
            }
            else if ((uVar4 & 1) == 0) {
              lVar21 = lVar22 + -1;
              plVar23 = (long *)(lVar15 + lVar22 * 0x10);
              iVar9 = iVar19;
              do {
                lVar21 = lVar21 + 1;
                iVar19 = (int)lVar21;
                lVar22 = *plVar23;
                if (-1 < iVar9 && lVar13 <= *plVar23) {
                  iVar19 = iVar9;
                  lVar22 = lVar13;
                }
                lVar13 = lVar22;
                plVar23 = plVar23 + 2;
                iVar9 = iVar19;
              } while (lVar21 < lVar20);
            }
            else {
              lVar21 = lVar22 + -1;
              plVar23 = (long *)(lVar15 + lVar22 * 0x10);
              iVar9 = iVar19;
              do {
                lVar21 = lVar21 + 1;
                iVar19 = (int)lVar21;
                lVar22 = *plVar23;
                if (-1 < iVar9 && *plVar23 <= lVar13) {
                  iVar19 = iVar9;
                  lVar22 = lVar13;
                }
                lVar13 = lVar22;
                plVar23 = plVar23 + 2;
                iVar9 = iVar19;
              } while (lVar21 < lVar20);
            }
          }
          uVar10 = uVar10 + 1;
          iVar9 = sVar5 + 1;
        } while (uVar10 != ((long)*(short *)(lVar16 + 200) & 0xffffffffU));
        if (!bVar7) goto LAB_010a3930;
LAB_010a3940:
        local_1f8[(int)uVar24] = lVar13;
        uVar24 = uVar24 + 1;
      } while( true );
    }
LAB_010a3cec:
    FUN_010a6f18(param_1,param_2);
  }
  FT_Set_Charmap(param_2,uVar25);
  return 0;
LAB_010a3b80:
  do {
    lVar16 = local_1f8[uVar10];
    uVar18 = uVar14;
    do {
      lVar13 = local_1f8[uVar18 & 0xffffffff];
      if (lVar13 <= lVar16) break;
      uVar17 = uVar18 - 1;
      local_1f8[uVar18 + 1] = lVar13;
      local_1f8[uVar18 & 0xffffffff] = lVar16;
      uVar18 = uVar17;
    } while ((int)uVar17 != -1);
    uVar10 = uVar10 + 1;
    uVar14 = uVar14 + 1;
  } while (uVar10 != uVar24);
LAB_010a3bc0:
  if (1 < uVar28) {
    uVar14 = 0;
    uVar10 = 1;
    do {
                    /* try { // try from 010a3bd4 to 011a3bdb has its CatchHandler @ 010a3cbc */
      lVar16 = local_390[uVar10];
      uVar18 = uVar14;
      do {
                    /* try { // try from 010a3bdc to 011a3ceb has its CatchHandler @ 010a39b4 */
        lVar13 = local_390[uVar18 & 0xffffffff];
        if (lVar13 <= lVar16) break;
        uVar17 = uVar18 - 1;
        local_390[uVar18 + 1] = lVar13;
        local_390[uVar18 & 0xffffffff] = lVar16;
        uVar18 = uVar17;
      } while ((int)uVar17 != -1);
      uVar10 = uVar10 + 1;
      uVar14 = uVar14 + 1;
    } while (uVar10 != uVar28);
  }
  uVar6 = *(uint *)((long)param_1 + uVar11 * 0x9d8 + 0x1fc);
  uVar10 = (ulong)uVar6;
  plVar23 = param_1 + uVar11 * 0x13b + uVar10 * 7 + 0x40;
  plVar1 = param_1 + uVar11 * 0x13b + uVar10 * 7 + 0x43;
  *(uint *)((long)param_1 + uVar11 * 0x9d8 + 0x1fc) = uVar6 + 1;
  if ((uVar28 == 0) || (uVar24 == 0)) {
    plVar2 = local_1f8;
    if (uVar28 != 0) {
      plVar2 = local_390;
      uVar24 = uVar28;
    }
    if ((int)uVar24 < 0) {
      uVar24 = uVar24 + 1;
    }
    lVar16 = plVar2[(int)uVar24 >> 1];
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010a3bd4 with catch @ 010a3cbc
                        */
    *plVar1 = lVar16;
    *plVar23 = lVar16;
  }
  else {
    if ((int)uVar24 < 0) {
      uVar24 = uVar24 + 1;
    }
    lVar16 = local_1f8[(int)uVar24 >> 1];
    if ((int)uVar28 < 0) {
      uVar28 = uVar28 + 1;
    }
    *plVar23 = lVar16;
    lVar13 = local_390[(int)uVar28 >> 1];
    *plVar1 = lVar13;
    if (lVar13 != lVar16) {
      uVar28 = (uint)(ushort)puVar26[1];
      if (((ushort)puVar26[1] & 1) != (ushort)(lVar13 < lVar16)) {
        lVar13 = lVar13 + lVar16;
        if (lVar13 < 0) {
          lVar13 = lVar13 + 1;
        }
        *plVar1 = lVar13 >> 1;
        *plVar23 = lVar13 >> 1;
      }
      goto LAB_010a3cc8;
    }
  }
  uVar28 = (uint)(ushort)puVar26[1];
LAB_010a3cc8:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010a3b6c with catch @ 010a3cd4
                        */
  *(uint *)(param_1 + uVar11 * 0x13b + uVar10 * 7 + 0x46) = (uVar28 & 1) << 1;
LAB_010a3ce0:
  puVar26 = puVar26 + 2;
  uVar28 = *puVar26;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010a3a08 with catch @ 010a3ce8
                        */
  if (uVar28 == 0x284) goto LAB_010a3cec;
  goto LAB_010a38ec;
}

