
/* WARNING: Type propagation algorithm not settling */

void FUN_010d77f4(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  char cVar13;
  ushort uVar14;
  ushort uVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  int iVar22;
  undefined8 uVar23;
  uint uVar24;
  ulong uVar25;
  undefined4 uVar26;
  long lVar27;
  undefined8 *puVar28;
  long lVar29;
  long lVar30;
  int iVar31;
  long lVar32;
  undefined1 *puVar33;
  undefined1 uVar34;
  uint uVar35;
  undefined8 *puVar36;
  uint uVar37;
  uint uVar38;
  long lVar39;
  undefined1 auStack_468 [768];
  char local_168 [256];
  long local_68;
  
  lVar18 = tpidr_el0;
  local_68 = *(long *)(lVar18 + 0x28);
  bVar20 = false;
  puVar36 = (undefined8 *)*param_1;
  uVar10 = *(uint *)((long)puVar36 + 0x14);
  lVar8 = *(long *)*puVar36;
  lVar9 = ((long *)*puVar36)[1];
  bVar19 = (uVar10 & 8) == 0;
  if (((uVar10 >> 3 & 1) == 0) && ((uVar10 & 4) != 0)) {
    bVar20 = *(int *)(param_1 + 4) == 0;
  }
                    /* try { // try from 010d7858 to 011d7867 has its CatchHandler @ 010d7958 */
  png_set_benign_errors(lVar8,0);
  if (*(int *)(param_1 + 2) == 0) {
    iVar22 = 1;
    if ((*(uint *)((long)puVar36 + 0x14) & 8) == 0) {
      iVar22 = (*(uint *)((long)puVar36 + 0x14) & 3) + 1;
    }
    *(int *)(param_1 + 2) = iVar22 * *(int *)((long)puVar36 + 0xc);
    if ((uVar10 >> 3 & 1) == 0) goto LAB_010d78c4;
LAB_010d7870:
                    /* try { // try from 010d787c to 011d7887 has its CatchHandler @ 010d7908 */
    if ((param_1[3] == 0) || (uVar11 = *(uint *)((long)puVar36 + 0x1c), uVar11 == 0)) {
                    /* WARNING: Subroutine does not return */
      png_error(*(undefined8 *)*puVar36,"no color-map for color-mapped image");
    }
                    /* try { // try from 010d7888 to 011d78c3 has its CatchHandler @ 010d77ac */
    if (uVar11 < 0x11) {
      if (uVar11 < 5) {
        uVar26 = 1;
        if (2 < uVar11) {
          uVar26 = 2;
        }
      }
      else {
        uVar26 = 4;
      }
    }
    else {
      uVar26 = 8;
    }
    png_set_IHDR(lVar8,lVar9,*(undefined4 *)((long)puVar36 + 0xc),*(undefined4 *)(puVar36 + 2),
                 uVar26,3,0,0,0);
    puVar28 = (undefined8 *)*param_1;
    lVar39 = param_1[3];
    uVar11 = *(uint *)((long)puVar28 + 0x1c);
    uVar12 = *(uint *)((long)puVar28 + 0x14);
    if (0xff < uVar11) {
      uVar11 = 0x100;
    }
    memset(local_168,0xff,0x100);
    memset(auStack_468,0,0x300);
    if ((int)uVar11 < 1) {
      iVar22 = 0;
    }
    else {
      bVar21 = (uVar12 & 0x21) == 0x21;
      uVar38 = (uint)((uVar12 & 0x21) == 0x21);
      lVar30 = 0;
      if (!bVar21) {
        lVar30 = 3;
      }
      uVar2 = uVar12 >> 3 & 2;
      lVar4 = 1;
      if (bVar21) {
        lVar4 = 2;
      }
      uVar3 = uVar12 & 3;
      uVar16 = uVar2 | uVar38;
      uVar1 = uVar3 + 1;
      uVar6 = 0;
      if (!bVar21) {
        uVar6 = (ulong)uVar3;
      }
      lVar27 = 0;
      lVar29 = 0;
      lVar32 = 0;
      iVar22 = 0;
      puVar33 = (undefined1 *)((ulong)auStack_468 | 1);
      lVar5 = lVar39;
      if (bVar21) {
        lVar5 = lVar39 + 1;
      }
      do {
        iVar31 = (int)lVar32;
        if ((uVar12 >> 2 & 1) == 0) {
          uVar37 = uVar12 & 3;
          if (uVar37 != 0) {
            if (uVar37 != 1) {
              if (uVar37 != 2) {
                cVar13 = *(char *)(lVar39 + lVar30 + lVar29);
                if (cVar13 != -1) {
                  iVar22 = iVar31 + 1;
                }
                local_168[lVar32] = cVar13;
              }
              puVar33[1] = *(undefined1 *)(lVar39 + (ulong)(uVar16 ^ 2) + lVar29);
              *puVar33 = *(undefined1 *)(lVar39 + lVar4 + lVar29);
              puVar33[-1] = *(undefined1 *)(lVar39 + (ulong)uVar16 + lVar29);
              goto LAB_010d7e3c;
            }
            cVar13 = *(char *)(lVar39 + (ulong)(uVar38 ^ 1) + lVar29);
            if (cVar13 != -1) {
              iVar22 = iVar31 + 1;
            }
            local_168[lVar32] = cVar13;
          }
          uVar34 = *(undefined1 *)(lVar5 + lVar29);
LAB_010d7cd8:
          *puVar33 = uVar34;
          puVar33[-1] = uVar34;
          puVar33[1] = uVar34;
        }
        else if ((uVar1 & 1) == 0) {
          uVar14 = *(ushort *)(lVar39 + uVar6 * 2 + lVar27);
          uVar37 = (uint)uVar14 * 0xff + 0x807f;
          uVar17 = uVar37 >> 0x10 & 0xff;
          uVar24 = 0;
          uVar35 = (uint)uVar14;
          if ((uVar17 != 0) && (uVar17 != 0xff)) {
            uVar24 = 0;
            if (uVar14 != 0) {
              uVar24 = ((uVar14 >> 1) + 0x7f7f8080) / uVar35;
            }
          }
          if (uVar17 != 0xff) {
            iVar22 = iVar31 + 1;
          }
          local_168[lVar32] = (char)(uVar37 >> 0x10);
          if (uVar3 < 2) {
            uVar34 = 0xff;
            if ((0x7f < uVar35) &&
               (uVar15 = *(ushort *)(lVar39 + (ulong)bVar21 * 2 + lVar27), uVar15 < uVar14)) {
              if (uVar15 == 0) {
                uVar34 = 0;
              }
              else {
                if (uVar14 < 0xff7f) {
                  uVar37 = uVar24 * uVar15 + 0x40 >> 7;
                }
                else {
                  uVar37 = (uint)uVar15 * 0xff;
                }
                uVar34 = (undefined1)
                         ((uint)*(ushort *)(png_sRGB_base + (ulong)(uVar37 >> 0xf) * 2) +
                          ((uVar37 & 0x7fff) * (uint)(byte)png_sRGB_delta[uVar37 >> 0xf] >> 0xc) >>
                         8);
              }
            }
            *puVar33 = uVar34;
            puVar33[-1] = uVar34;
            puVar33[1] = uVar34;
          }
          else {
            uVar34 = 0xff;
            if ((0x7f < uVar35) &&
               (uVar15 = *(ushort *)(lVar39 + (ulong)(uVar16 ^ 2) * 2 + lVar27), uVar15 < uVar14)) {
              if (uVar15 == 0) {
                uVar34 = 0;
              }
              else {
                if (uVar14 < 0xff7f) {
                  uVar37 = uVar24 * uVar15 + 0x40 >> 7;
                }
                else {
                  uVar37 = (uint)uVar15 * 0xff;
                }
                uVar34 = (undefined1)
                         ((uint)*(ushort *)(png_sRGB_base + (ulong)(uVar37 >> 0xf) * 2) +
                          ((uVar37 & 0x7fff) * (uint)(byte)png_sRGB_delta[uVar37 >> 0xf] >> 0xc) >>
                         8);
              }
            }
            puVar33[1] = uVar34;
                    /* try { // try from 010d7d24 to 011d7d27 has its CatchHandler @ 010d7ebc */
                    /* try { // try from 010d7d28 to 011d7ef7 has its CatchHandler @ 010d7c00 */
            uVar34 = 0xff;
            if ((0x7f < uVar14) &&
               (uVar15 = *(ushort *)(lVar39 + lVar4 * 2 + lVar27), uVar15 < uVar14)) {
              if (uVar15 == 0) {
                uVar34 = 0;
              }
              else {
                if (uVar14 < 0xff7f) {
                  uVar37 = uVar24 * uVar15 + 0x40 >> 7;
                }
                else {
                  uVar37 = (uint)uVar15 * 0xff;
                }
                uVar34 = (undefined1)
                         ((uint)*(ushort *)(png_sRGB_base + (ulong)(uVar37 >> 0xf) * 2) +
                          ((uVar37 & 0x7fff) * (uint)(byte)png_sRGB_delta[uVar37 >> 0xf] >> 0xc) >>
                         8);
              }
            }
            *puVar33 = uVar34;
            uVar34 = 0xff;
            if ((0x7f < uVar14) &&
               (uVar15 = *(ushort *)(lVar39 + (ulong)uVar16 * 2 + lVar27), uVar15 < uVar14)) {
              if (uVar15 == 0) {
                uVar34 = 0;
              }
              else {
                if (uVar14 < 0xff7f) {
                  uVar37 = uVar24 * uVar15 + 0x40 >> 7;
                }
                else {
                  uVar37 = (uint)uVar15 * 0xff;
                }
                uVar34 = (undefined1)
                         ((uint)*(ushort *)(png_sRGB_base + (ulong)(uVar37 >> 0xf) * 2) +
                          ((uVar37 & 0x7fff) * (uint)(byte)png_sRGB_delta[uVar37 >> 0xf] >> 0xc) >>
                         8);
              }
            }
            puVar33[-1] = uVar34;
          }
        }
        else {
          if (uVar3 < 2) {
            uVar25 = (ulong)*(ushort *)(lVar39 + lVar27) * 0xff >> 0xf;
            uVar34 = (undefined1)
                     ((uint)*(ushort *)(png_sRGB_base + uVar25 * 2) +
                      (((uint)*(ushort *)(lVar39 + lVar27) * 0xff & 0x7fff) *
                       (uint)(byte)png_sRGB_delta[uVar25] >> 0xc) >> 8);
            goto LAB_010d7cd8;
          }
          uVar14 = *(ushort *)(lVar39 + (ulong)(uVar2 ^ 2) * 2 + lVar27);
          uVar25 = (ulong)uVar14 * 0xff >> 0xf;
          puVar33[1] = (char)((uint)*(ushort *)(png_sRGB_base + uVar25 * 2) +
                              (((uint)uVar14 * 0xff & 0x7fff) * (uint)(byte)png_sRGB_delta[uVar25]
                              >> 0xc) >> 8);
          uVar14 = *(ushort *)(lVar39 + lVar27 + 2);
          uVar25 = (ulong)uVar14 * 0xff >> 0xf;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010d7c38 with catch @ 010d7c00
                       catch(type#1 @ 00000000) { ... } // from try @ 010d7d28 with catch @ 010d7c00
                        */
          *puVar33 = (char)((uint)*(ushort *)(png_sRGB_base + uVar25 * 2) +
                            (((uint)uVar14 * 0xff & 0x7fff) * (uint)(byte)png_sRGB_delta[uVar25] >>
                            0xc) >> 8);
          uVar14 = *(ushort *)(lVar39 + (ulong)uVar2 * 2 + lVar27);
          uVar25 = (ulong)uVar14 * 0xff >> 0xf;
                    /* try { // try from 010d7c28 to 011d7c37 has its CatchHandler @ 010d7ebc */
                    /* try { // try from 010d7c38 to 011d7d23 has its CatchHandler @ 010d7c00 */
          puVar33[-1] = (char)((uint)*(ushort *)(png_sRGB_base + uVar25 * 2) +
                               (((uint)uVar14 * 0xff & 0x7fff) * (uint)(byte)png_sRGB_delta[uVar25]
                               >> 0xc) >> 8);
        }
LAB_010d7e3c:
        lVar32 = lVar32 + 1;
        lVar29 = lVar29 + (ulong)uVar1;
        lVar27 = lVar27 + (ulong)uVar1 * 2;
        puVar33 = puVar33 + 3;
      } while (lVar32 < (long)(ulong)uVar11);
    }
    png_set_PLTE(*(undefined8 *)*puVar28,((undefined8 *)*puVar28)[1],auStack_468,uVar11);
    if (0 < iVar22) {
      png_set_tRNS(*(undefined8 *)*puVar28,((undefined8 *)*puVar28)[1],local_168,iVar22,0);
    }
    *(uint *)((long)puVar28 + 0x1c) = uVar11;
    if (bVar20) goto LAB_010d78fc;
LAB_010d7eb0:
    if ((*(byte *)(puVar36 + 3) & 1) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010d7c28 with catch @ 010d7ebc
                       catch(type#1 @ 00000000) { ... } // from try @ 010d7d24 with catch @ 010d7ebc
                        */
      png_set_sRGB(lVar8,lVar9,0);
    }
    else {
      png_set_gAMA_fixed(lVar8,lVar9,0xb18f);
    }
    png_write_info(lVar8,lVar9);
  }
  else {
    if ((uVar10 >> 3 & 1) != 0) goto LAB_010d7870;
LAB_010d78c4:
                    /* try { // try from 010d78c4 to 011d78d7 has its CatchHandler @ 010d795c */
    uVar26 = 0x10;
                    /* try { // try from 010d78d8 to 011d7b13 has its CatchHandler @ 010d77ac */
    if (!bVar20) {
      uVar26 = 8;
    }
    png_set_IHDR(lVar8,lVar9,*(undefined4 *)((long)puVar36 + 0xc),*(undefined4 *)(puVar36 + 2),
                 uVar26,uVar10 & 2 | (uVar10 & 1) << 2,0,0,0);
    if (!bVar20) goto LAB_010d7eb0;
LAB_010d78fc:
                    /* catch() { ... } // from try @ 010d787c with catch @ 010d7908 */
    png_set_gAMA_fixed(lVar8,lVar9,100000);
    if ((*(byte *)(puVar36 + 3) & 1) == 0) {
      png_set_cHRM_fixed(lVar8,lVar9,0x7a26,0x8084,64000,33000,30000,60000,15000,6000);
    }
    png_write_info(lVar8,lVar9);
                    /* catch() { ... } // from try @ 010d7858 with catch @ 010d7958 */
                    /* catch() { ... } // from try @ 010d78c4 with catch @ 010d795c */
    png_set_swap(lVar8);
  }
  uVar11 = uVar10;
  if ((uVar10 >> 4 & 1) != 0) {
    if ((uVar10 & 10) == 2) {
      png_set_bgr(lVar8);
    }
    uVar11 = uVar10 & 0xffffffef;
  }
  if ((uVar10 >> 5 & 1) != 0) {
    if (((uVar10 >> 3 & 1) == 0) && ((uVar11 & 1) != 0)) {
                    /* catch() { ... } // from try @ 010d7f44 with catch @ 010d7f1c */
      png_set_swap_alpha(lVar8);
    }
    uVar11 = uVar11 & 0xffffffdf;
  }
  if (((uVar10 >> 3 & 1) != 0) && (*(uint *)((long)puVar36 + 0x1c) < 0x11)) {
    png_set_packing(lVar8);
  }
                    /* try { // try from 010d7f40 to 011d7f43 has its CatchHandler @ 010d8028 */
  if (0xf < uVar11) {
                    /* WARNING: Subroutine does not return */
    png_error(lVar8,"png_write_image: unsupported transformation");
  }
                    /* try { // try from 010d7f44 to 011d8043 has its CatchHandler @ 010d7f1c */
  lVar39 = param_1[1];
  lVar30 = (long)*(int *)(param_1 + 2) << ((uint)bVar19 & (uVar10 & 4) >> 2);
  if (lVar30 < 0) {
    lVar39 = lVar39 - lVar30 * (ulong)(*(int *)(puVar36 + 2) - 1);
  }
  param_1[5] = lVar39;
  param_1[6] = lVar30;
  if (((*(byte *)(puVar36 + 3) >> 1 & 1) != 0) && (png_set_filter(lVar8,0,0), lVar8 != 0)) {
    *(undefined4 *)(lVar8 + 500) = 3;
  }
  if ((((uVar10 ^ 0xffffffff) & 5) == 0 && bVar19) ||
     (((uVar10 >> 3 & 1) == 0 && (*(int *)(param_1 + 4) != 0)))) {
    uVar23 = png_get_rowbytes(lVar8,lVar9);
    uVar23 = png_malloc(lVar8,uVar23);
    pcVar7 = FUN_010d81e4;
    if (!bVar20) {
      pcVar7 = FUN_010d83ac;
    }
    param_1[7] = uVar23;
    iVar22 = png_safe_execute(puVar36,pcVar7,param_1);
    param_1[7] = 0;
    png_free(lVar8,uVar23);
    if (iVar22 == 0) {
      uVar23 = 0;
      goto LAB_010d8048;
    }
  }
  else {
    iVar22 = *(int *)(puVar36 + 2);
    if (iVar22 != 0) {
      lVar39 = param_1[5];
      lVar30 = param_1[6];
      do {
                    /* catch() { ... } // from try @ 010d7f40 with catch @ 010d8028 */
        iVar22 = iVar22 + -1;
        png_write_row(lVar8,lVar39);
        lVar39 = lVar39 + lVar30;
      } while (iVar22 != 0);
    }
  }
  png_write_end(lVar8,lVar9);
  uVar23 = 1;
LAB_010d8048:
  if (*(long *)(lVar18 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar23);
}

