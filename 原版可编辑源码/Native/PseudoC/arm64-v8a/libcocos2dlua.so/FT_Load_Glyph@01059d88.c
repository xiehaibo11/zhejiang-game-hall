
/* WARNING: Type propagation algorithm not settling */

ulong FT_Load_Glyph(long param_1,undefined4 param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  uint uVar21;
  long lVar22;
  short sVar23;
  long lVar24;
  long *plVar25;
  ulong uVar26;
  
  if (((param_1 == 0) || (*(long *)(param_1 + 0xa0) == 0)) ||
     (lVar24 = *(long *)(param_1 + 0x98), lVar24 == 0)) {
    return 0x23;
  }
  lVar11 = *(long *)(lVar24 + 0x128);
                    /* catch() { ... } // from try @ 01059d14 with catch @ 01059dd0 */
  if ((lVar11 == 0) || (uVar9 = *(uint *)(lVar11 + 8), (uVar9 & 1) == 0)) {
    *(undefined8 *)(lVar24 + 0xa8) = 0;
  }
  else {
    if (*(long *)(lVar24 + 0xa8) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar24 + 8) + 0xb8) + 0x10))();
      lVar11 = *(long *)(lVar24 + 0x128);
      uVar9 = *(uint *)(lVar11 + 8);
    }
    *(undefined8 *)(lVar24 + 0xa8) = 0;
    *(uint *)(lVar11 + 8) = uVar9 & 0xfffffffe;
  }
  *(undefined8 *)(lVar24 + 0x98) = 0;
  *(undefined4 *)(lVar24 + 0xa0) = 0;
  *(undefined1 *)(lVar24 + 0xb2) = 0;
  *(undefined4 *)(lVar24 + 0x90) = 0;
  memset((void *)(lVar24 + 0x30),0,0x50);
  *(undefined4 *)(lVar24 + 0xf0) = 0;
  *(undefined8 *)(lVar24 + 0xd8) = 0;
  *(undefined8 *)(lVar24 + 0xd0) = 0;
  *(undefined8 *)(lVar24 + 0xe8) = 0;
  *(undefined8 *)(lVar24 + 0xe0) = 0;
  *(undefined8 *)(lVar24 + 200) = 0;
  *(undefined8 *)(lVar24 + 0xc0) = 0;
  *(undefined8 *)(lVar24 + 0x120) = 0;
  *(undefined8 *)(lVar24 + 0x118) = 0;
  *(undefined8 *)(lVar24 + 0x110) = 0;
  *(undefined8 *)(lVar24 + 0x108) = 0;
  *(undefined8 *)(lVar24 + 0x100) = 0;
  *(undefined8 *)(lVar24 + 0xf8) = 0;
  puVar12 = *(undefined8 **)(param_1 + 0xb0);
  plVar25 = *(long **)(puVar12[1] + 0x130);
  if ((param_3 & 0x400) != 0) {
    param_3 = param_3 | 0x801;
  }
  if ((param_3 & 1) != 0) {
    param_3 = param_3 & 0xfffffff0 | param_3 & 1 | 10;
  }
                    /* try { // try from 01059ecc to 01159edb has its CatchHandler @ 01059eec */
  if (((plVar25 == (long *)0x0) || ((param_3 & 0x8002) != 0)) ||
     (((*(ulong *)*puVar12 & 0x300) != 0x100 ||
      (uVar9 = (uint)*(undefined8 *)(param_1 + 0x10), (uVar9 >> 0xd & 1) != 0)))) goto LAB_01059fb8;
  if ((param_3 >> 0xb & 1) == 0) {
    lVar11 = **(long **)(param_1 + 0xf0);
    if ((*(long **)(param_1 + 0xf0))[2] == 0) {
      if (lVar11 != 0) goto LAB_01059ef8;
    }
    else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01059ecc with catch @ 01059eec
                        */
      if (lVar11 == 0) goto LAB_01059ef8;
    }
LAB_01059fb8:
                    /* catch() { ... } // from try @ 0105a000 with catch @ 01059fc8 */
    uVar9 = (**(code **)(puVar12[3] + 0x90))(lVar24,*(undefined8 *)(param_1 + 0xa0),param_2,param_3)
    ;
    if (uVar9 != 0) {
      return (ulong)uVar9;
    }
    if (*(int *)(lVar24 + 0x90) == 0x6f75746c) {
      sVar5 = *(short *)(lVar24 + 0xca);
      sVar6 = *(short *)(lVar24 + 200);
      if (sVar6 != 0 || sVar5 != 0) {
                    /* try { // try from 01059ff8 to 01159fff has its CatchHandler @ 0105a0b4 */
                    /* try { // try from 0105a000 to 0115a0cf has its CatchHandler @ 01059fc8 */
        if (sVar5 < 1) {
          return 6;
        }
        if (sVar6 < 1) {
          return 6;
        }
        if (sVar6 < 1) {
          iVar8 = -1;
        }
        else {
          lVar11 = 0;
          sVar23 = -1;
          do {
            sVar7 = *(short *)(*(long *)(lVar24 + 0xe0) + lVar11 * 2);
            iVar8 = (int)sVar7;
            if ((int)sVar5 <= (int)sVar7) {
              return 6;
            }
            if (sVar7 <= sVar23) {
              return 6;
            }
            lVar11 = lVar11 + 1;
            sVar23 = sVar7;
          } while (lVar11 < sVar6);
        }
        if (iVar8 != sVar5 + -1) {
          return 6;
        }
      }
      if ((param_3 >> 1 & 1) != 0) {
LAB_0105a0cc:
        uVar10 = 0;
        goto joined_r0x01059f8c;
      }
      if ((param_3 >> 4 & 1) == 0) {
        uVar10 = *(ulong *)(lVar24 + 0x40) & 0xffffffffffffffc0;
        uVar26 = *(long *)(lVar24 + 0x48) + 0x3fU & 0xffffffffffffffc0;
                    /* catch() { ... } // from try @ 01059ff8 with catch @ 0105a0b4 */
        *(ulong *)(lVar24 + 0x30) =
             (*(ulong *)(lVar24 + 0x40) + *(long *)(lVar24 + 0x30) + 0x3f & 0xffffffffffffffc0) -
             uVar10;
        lVar11 = uVar26 - (*(long *)(lVar24 + 0x48) - *(long *)(lVar24 + 0x38) & 0xffffffffffffffc0U
                          );
        *(ulong *)(lVar24 + 0x60) = *(ulong *)(lVar24 + 0x60) & 0xffffffffffffffc0;
        *(ulong *)(lVar24 + 0x58) = *(ulong *)(lVar24 + 0x58) & 0xffffffffffffffc0;
        *(ulong *)(lVar24 + 0x40) = uVar10;
        *(ulong *)(lVar24 + 0x48) = uVar26;
      }
      else {
        uVar10 = *(ulong *)(lVar24 + 0x58);
        uVar26 = *(ulong *)(lVar24 + 0x60);
        *(ulong *)(lVar24 + 0x40) = *(ulong *)(lVar24 + 0x40) & 0xffffffffffffffc0;
        *(ulong *)(lVar24 + 0x48) = *(long *)(lVar24 + 0x48) + 0x3fU & 0xffffffffffffffc0;
                    /* try { // try from 0105a210 to 0115a21f has its CatchHandler @ 0105a230 */
        uVar18 = uVar10 & 0xffffffffffffffc0;
        uVar20 = uVar26 & 0xffffffffffffffc0;
        *(ulong *)(lVar24 + 0x58) = uVar18;
        *(ulong *)(lVar24 + 0x60) = uVar20;
        *(ulong *)(lVar24 + 0x30) =
             (uVar10 + *(long *)(lVar24 + 0x30) + 0x3f & 0xffffffffffffffc0) - uVar18;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0105a210 with catch @ 0105a230
                        */
        lVar11 = (uVar26 + *(long *)(lVar24 + 0x38) + 0x3f & 0xffffffffffffffc0) - uVar20;
      }
      *(long *)(lVar24 + 0x38) = lVar11;
      *(ulong *)(lVar24 + 0x50) = *(long *)(lVar24 + 0x50) + 0x20U & 0xffffffffffffffc0;
      *(ulong *)(lVar24 + 0x68) = *(long *)(lVar24 + 0x68) + 0x20U & 0xffffffffffffffc0;
    }
    uVar10 = 0;
    if ((param_3 >> 4 & 1) == 0) goto LAB_0105a058;
LAB_0105a0d4:
    uVar16 = *(undefined8 *)(lVar24 + 0x68);
    uVar13 = 0;
  }
  else {
LAB_01059ef8:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01059f8c with catch @ 01059fb4
                        */
    if ((((((param_3 >> 5 & 1) == 0) && ((param_3 & 0xf0000) != 0x10000)) &&
         (((uint)*(ulong *)*puVar12 >> 10 & 1) != 0)) &&
        (*(char *)(*(long *)(param_1 + 0xf0) + 0x68) == '\0')) &&
       ((((uVar9 >> 3 & 1) == 0 || (*(long *)(param_1 + 0x478) == 0)) ||
        ((*(short *)(param_1 + 0x1e6) != 0 ||
         ((*(long *)(param_1 + 0x3f0) != 0 || (*(long *)(param_1 + 0x400) != 0))))))))
    goto LAB_01059fb8;
                    /* try { // try from 01059f28 to 01159f37 has its CatchHandler @ 01059f50 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01059f28 with catch @ 01059f50
                        */
    if (((param_3 >> 3 & 1) == 0) &&
       ((((uVar9 >> 1 & 1) != 0 &&
         (iVar8 = (**(code **)(puVar12[3] + 0x90))
                            (lVar24,*(undefined8 *)(param_1 + 0xa0),param_2,param_3 | 0x4000),
         iVar8 == 0)) && (*(int *)(lVar24 + 0x90) == 0x62697473)))) goto LAB_0105a0cc;
    lVar11 = *(long *)(param_1 + 0xf0);
    uVar4 = *(undefined4 *)(lVar11 + 0x30);
    *(undefined4 *)(lVar11 + 0x30) = 0;
    uVar10 = (**(code **)(*(long *)(*plVar25 + 0x28) + 0x18))
                       (plVar25,lVar24,*(undefined8 *)(param_1 + 0xa0),param_2,param_3);
    uVar10 = uVar10 & 0xffffffff;
    *(undefined4 *)(lVar11 + 0x30) = uVar4;
joined_r0x01059f8c:
                    /* try { // try from 01059f8c to 01159f9b has its CatchHandler @ 01059fb4 */
    if ((param_3 >> 4 & 1) != 0) goto LAB_0105a0d4;
LAB_0105a058:
    uVar13 = *(undefined8 *)(lVar24 + 0x50);
    uVar16 = 0;
  }
  *(undefined8 *)(lVar24 + 0x80) = uVar13;
  *(undefined8 *)(lVar24 + 0x88) = uVar16;
  if (((param_3 >> 0xd & 1) == 0) && ((*(byte *)(param_1 + 0x10) & 1) != 0)) {
    lVar14 = *(long *)(param_1 + 0xa0);
    lVar15 = *(long *)(lVar24 + 0x70);
    lVar17 = *(long *)(lVar24 + 0x78);
    lVar22 = *(long *)(lVar14 + 0x20);
    lVar11 = -lVar15;
    if (-1 < lVar15) {
      lVar11 = lVar15;
    }
    iVar8 = 1;
    if (-1 >= lVar15) {
      iVar8 = -1;
    }
    lVar15 = -lVar22;
    if (-1 < lVar22) {
      lVar15 = lVar22;
    }
    lVar1 = lVar15 * lVar11 + 0x20;
    iVar3 = -iVar8;
    if (-1 < lVar22) {
      iVar3 = iVar8;
    }
    lVar11 = lVar15 * lVar11 + 0x5f;
    if (-1 < lVar1) {
      lVar11 = lVar1;
    }
    lVar15 = -(lVar11 >> 6);
    if (-1 < iVar3) {
      lVar15 = lVar11 >> 6;
    }
    *(long *)(lVar24 + 0x70) = lVar15;
    lVar15 = *(long *)(lVar14 + 0x28);
    lVar11 = -lVar17;
    if (-1 < lVar17) {
      lVar11 = lVar17;
    }
    iVar8 = 1;
    if (-1 >= lVar17) {
      iVar8 = -1;
    }
    lVar17 = -lVar15;
    if (-1 < lVar15) {
      lVar17 = lVar15;
    }
    lVar14 = lVar17 * lVar11 + 0x20;
    iVar3 = -iVar8;
    if (-1 < lVar15) {
      iVar3 = iVar8;
    }
    lVar11 = lVar17 * lVar11 + 0x5f;
    if (-1 < lVar14) {
      lVar11 = lVar14;
    }
    lVar15 = -(lVar11 >> 6);
    if (-1 < iVar3) {
      lVar15 = lVar11 >> 6;
    }
    *(long *)(lVar24 + 0x78) = lVar15;
  }
  if ((param_3 >> 0xb & 1) != 0) goto LAB_0105a394;
  lVar11 = *(long *)(param_1 + 0xf0);
  uVar9 = *(uint *)(lVar11 + 0x30);
  if (uVar9 == 0) goto LAB_0105a394;
  lVar17 = *(long *)(*(long *)(*(long *)(lVar24 + 8) + 0xb0) + 8);
  lVar15 = *(long *)(lVar17 + 0x128);
  if (lVar15 == 0) {
    iVar8 = *(int *)(lVar24 + 0x90);
LAB_0105a1bc:
    if (lVar17 != 0) {
      for (lVar17 = *(long *)(lVar17 + 0x118); lVar17 != 0; lVar17 = *(long *)(lVar17 + 8)) {
        lVar15 = *(long *)(lVar17 + 0x10);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0105a1b4 with catch @ 0105a1d4
                        */
        if (*(int *)(lVar15 + 0x20) == iVar8) {
          if (lVar15 != 0) goto LAB_0105a268;
          break;
        }
      }
    }
    if (iVar8 == 0x6f75746c) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0105a26c with catch @ 0105a294
                        */
      if ((((uVar9 & 1) != 0) && (lVar11 != 0)) && (0 < (long)*(short *)(lVar24 + 0xca))) {
        uVar26 = *(ulong *)(lVar24 + 0xd0);
        uVar18 = uVar26 + (long)*(short *)(lVar24 + 0xca) * 0x10;
        do {
          FT_Vector_Transform(uVar26,lVar11);
          uVar26 = uVar26 + 0x10;
        } while (uVar26 < uVar18);
        uVar9 = *(uint *)(lVar11 + 0x30);
      }
      if ((uVar9 >> 1 & 1) != 0) {
        sVar5 = *(short *)(lVar24 + 0xca);
                    /* try { // try from 0105a2d0 to 0115a2df has its CatchHandler @ 0105a2f8 */
        uVar9 = (int)sVar5 - 1;
        if (0 < sVar5) {
          lVar17 = *(long *)(lVar11 + 0x28);
          lVar15 = *(long *)(lVar11 + 0x20);
          plVar25 = *(long **)(lVar24 + 0xd0);
          if ((ulong)uVar9 + 1 < 4) {
            uVar21 = 0;
          }
          else {
            uVar2 = (int)sVar5 & 3;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0105a2d0 with catch @ 0105a2f8
                        */
            lVar14 = ((ulong)uVar9 + 1) - (ulong)uVar2;
            if (lVar14 == 0) {
              uVar21 = 0;
            }
            else {
              uVar21 = 0;
                    /* try { // try from 0105a30c to 0115a417 has its CatchHandler @ 0105a30c
                       catch() { ... } // from try @ 0105a30c with catch @ 0105a30c
                       catch() { ... } // from try @ 0105a430 with catch @ 0105a30c */
              if (((~uVar9 & 0xffff) != 0) && (uVar9 >> 0x10 == 0)) {
                lVar22 = lVar14 * 2;
                uVar21 = (uint)lVar14;
                plVar19 = plVar25 + 4;
                do {
                  lVar14 = lVar14 + -4;
                  plVar19[-4] = plVar19[-4] + lVar15;
                  plVar19[-3] = plVar19[-3] + lVar17;
                  plVar19[-2] = plVar19[-2] + lVar15;
                  plVar19[-1] = plVar19[-1] + lVar17;
                  *plVar19 = *plVar19 + lVar15;
                  plVar19[1] = plVar19[1] + lVar17;
                  plVar19[2] = plVar19[2] + lVar15;
                  plVar19[3] = plVar19[3] + lVar17;
                  plVar19 = plVar19 + 8;
                } while (lVar14 != 0);
                plVar25 = plVar25 + lVar22;
                if (uVar2 == 0) goto LAB_0105a388;
              }
            }
          }
          do {
            uVar21 = uVar21 + 1;
            plVar25[1] = plVar25[1] + lVar17;
            *plVar25 = *plVar25 + lVar15;
            plVar25 = plVar25 + 2;
          } while ((int)(uVar21 & 0xffff) < (int)sVar5);
        }
      }
    }
  }
  else {
    iVar8 = *(int *)(lVar24 + 0x90);
    if (*(int *)(lVar15 + 0x20) != iVar8) goto LAB_0105a1bc;
LAB_0105a268:
                    /* try { // try from 0105a26c to 0115a27b has its CatchHandler @ 0105a294 */
    uVar10 = (**(code **)(*(long *)(lVar15 + 0x18) + 0x58))(lVar15,lVar24,lVar11,lVar11 + 0x20);
    uVar10 = uVar10 & 0xffffffff;
  }
LAB_0105a388:
  FT_Vector_Transform((undefined8 *)(lVar24 + 0x80),lVar11);
LAB_0105a394:
  if ((int)uVar10 != 0) {
    return uVar10;
  }
  if (*(int *)(lVar24 + 0x90) == 0x62697473) {
    return uVar10;
  }
  if (*(int *)(lVar24 + 0x90) == 0x636f6d70) {
    return uVar10;
  }
  if ((param_3 >> 2 & 1) != 0) {
    if (*(long *)(lVar24 + 8) == 0) {
      return 6;
    }
    uVar9 = param_3 >> 0x10 & 0xf;
    if ((param_3 & 0x1000) != 0 && uVar9 == 0) {
      uVar9 = 2;
    }
    uVar10 = FT_Render_Glyph_Internal
                       (*(undefined8 *)(*(long *)(*(long *)(lVar24 + 8) + 0xb0) + 8),lVar24,uVar9);
    return uVar10;
  }
  return 0;
}

