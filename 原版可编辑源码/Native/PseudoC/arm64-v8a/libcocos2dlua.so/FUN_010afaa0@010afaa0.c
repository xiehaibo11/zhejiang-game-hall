
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_010afaa0(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  uint *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long local_2f8;
  long local_2f0;
  int local_2e8;
  int local_2e4;
  long local_2e0;
  long local_2d8;
  long *local_58;
  
                    /* try { // try from 010afaa8 to 011afc2f has its CatchHandler @ 010afaa8
                       catch(type#1 @ 00000000) { ... } // from try @ 010afaa8 with catch @ 010afaa8
                       catch(type#1 @ 00000000) { ... } // from try @ 010afc9c with catch @ 010afaa8
                       catch(type#1 @ 00000000) { ... } // from try @ 010afd28 with catch @ 010afaa8
                       catch(type#1 @ 00000000) { ... } // from try @ 010afe3c with catch @ 010afaa8
                       catch(type#1 @ 00000000) { ... } // from try @ 010afe50 with catch @ 010afaa8
                        */
  if (param_1 == (long *)0x0) {
    return 6;
  }
  lVar7 = *param_1;
  if (lVar7 == 0) {
    return 6;
  }
  lVar9 = param_1[1];
  if (lVar9 == 0) {
    return 6;
  }
  psVar4 = (short *)param_2[1];
  if (psVar4 == (short *)0x0) {
    return 0x14;
  }
  if ((psVar4[1] != 0) && (0 < (long)*psVar4)) {
    if (*(long *)(psVar4 + 0xc) == 0) {
      return 0x14;
    }
    if (*(long *)(psVar4 + 4) == 0) {
      return 0x14;
    }
    if (*(short *)(*(long *)(psVar4 + 0xc) + (long)*psVar4 * 2 + -2) + 1 != (int)psVar4[1]) {
      return 0x14;
    }
    puVar5 = (uint *)*param_2;
    uVar1 = *(uint *)(param_2 + 2);
    lVar18 = param_1[4];
    if ((uVar1 >> 1 & 1) == 0) {
      if (puVar5 == (uint *)0x0) {
        return 6;
      }
      if (puVar5[1] == 0) {
        return 0;
      }
      if (*puVar5 == 0) {
        return 0;
      }
      if (*(long *)(puVar5 + 4) == 0) {
        return 6;
      }
    }
    if ((uVar1 & 1) == 0) {
      return 0x13;
    }
    if ((uVar1 >> 1 & 1) == 0) {
      *(undefined8 *)(lVar18 + 0x880) = 0;
      *(undefined8 *)(lVar18 + 0x878) = 0;
      *(ulong *)(lVar18 + 0x888) = (ulong)puVar5[1];
      *(ulong *)(lVar18 + 0x890) = (ulong)*puVar5;
    }
    else if ((uVar1 >> 2 & 1) == 0) {
      *(undefined8 *)(lVar18 + 0x880) = 0xffffffffffff8000;
      *(undefined8 *)(lVar18 + 0x878) = 0xffffffffffff8000;
      *(undefined8 *)(lVar18 + 0x890) = 0x7fff;
      *(undefined8 *)(lVar18 + 0x888) = 0x7fff;
    }
    else {
      uVar19 = param_2[10];
      *(undefined8 *)(lVar18 + 0x890) = param_2[0xb];
      *(undefined8 *)(lVar18 + 0x888) = uVar19;
      uVar19 = param_2[8];
      *(undefined8 *)(lVar18 + 0x880) = param_2[9];
      *(undefined8 *)(lVar18 + 0x878) = uVar19;
      lVar7 = *param_1;
      lVar9 = param_1[1];
    }
    *(long *)(lVar18 + 0x980) = lVar7;
    *(long *)(lVar18 + 0x990) = lVar7;
    *(long *)(lVar18 + 0x988) = lVar9;
    *(undefined4 *)(lVar18 + 0x140) = 0;
    *(undefined8 *)(lVar18 + 0x148) = 0;
    *(undefined8 *)(lVar18 + 0x160) = 0;
    *(undefined8 *)(lVar18 + 0x168) = 0;
    *(undefined8 *)(lVar18 + 0x158) = 0;
    *(undefined4 *)(lVar18 + 0x150) = 1;
    *(undefined8 *)(lVar18 + 0x848) = *(undefined8 *)(psVar4 + 0x10);
    uVar19 = *(undefined8 *)(psVar4 + 8);
    *(undefined8 *)(lVar18 + 0x840) = *(undefined8 *)(psVar4 + 0xc);
    *(undefined8 *)(lVar18 + 0x838) = uVar19;
    uVar19 = *(undefined8 *)psVar4;
    *(undefined8 *)(lVar18 + 0x830) = *(undefined8 *)(psVar4 + 4);
    *(undefined8 *)(lVar18 + 0x828) = uVar19;
    *(undefined8 *)(lVar18 + 0x168) = 0;
    *(undefined4 *)(lVar18 + 0x150) = 1;
    iVar3 = (int)param_1[2];
    *(undefined4 *)(lVar18 + 0x958) = 0;
                    /* try { // try from 010afc30 to 011afc37 has its CatchHandler @ 010afec4 */
    *(int *)(lVar18 + 0x974) = iVar3;
    if ((*(byte *)(param_2 + 2) >> 1 & 1) == 0) {
      *(undefined8 *)(lVar18 + 0x870) = *(undefined8 *)(puVar5 + 8);
      uVar19 = *(undefined8 *)(puVar5 + 4);
      *(undefined8 *)(lVar18 + 0x868) = *(undefined8 *)(puVar5 + 6);
      *(undefined8 *)(lVar18 + 0x860) = uVar19;
      uVar20 = *(undefined8 *)(puVar5 + 2);
      uVar19 = *(undefined8 *)puVar5;
      *(code **)(lVar18 + 0x960) = FUN_010b0298;
      *(undefined8 *)(lVar18 + 0x858) = uVar20;
      *(undefined8 *)(lVar18 + 0x850) = uVar19;
      lVar7 = lVar18;
    }
    else {
      *(undefined8 *)(lVar18 + 0x960) = param_2[3];
      lVar7 = param_2[7];
    }
    *(long *)(lVar18 + 0x968) = lVar7;
    sVar2 = *(short *)(lVar18 + 0x82a);
    if ((long)sVar2 < 1) {
      local_2f0 = 0;
      lVar9 = 0;
      lVar7 = 0;
      lVar11 = 0;
      *(undefined8 *)(lVar18 + 0x118) = 0;
      *(undefined8 *)(lVar18 + 0x110) = 0;
      *(undefined8 *)(lVar18 + 0x128) = 0;
      *(undefined8 *)(lVar18 + 0x120) = 0;
    }
    else {
      plVar12 = *(long **)(lVar18 + 0x830);
      lVar9 = *plVar12;
                    /* try { // try from 010afc94 to 011afc9b has its CatchHandler @ 010afe64 */
      *(long *)(lVar18 + 0x110) = lVar9;
      *(long *)(lVar18 + 0x118) = lVar9;
      local_2f0 = plVar12[1];
                    /* try { // try from 010afc9c to 011afd1f has its CatchHandler @ 010afaa8 */
      *(long *)(lVar18 + 0x120) = local_2f0;
      *(long *)(lVar18 + 0x128) = local_2f0;
      lVar17 = local_2f0;
      lVar7 = lVar9;
      if (sVar2 != 1) {
        plVar13 = plVar12 + 2;
        do {
          lVar11 = *plVar13;
          lVar15 = plVar13[1];
          if (lVar11 < lVar7) {
            *(long *)(lVar18 + 0x110) = lVar11;
            lVar7 = lVar11;
          }
          if (lVar9 < lVar11) {
                    /* try { // try from 010afd20 to 011afd27 has its CatchHandler @ 010afe54 */
            *(long *)(lVar18 + 0x118) = lVar11;
                    /* try { // try from 010afd28 to 011afd9b has its CatchHandler @ 010afaa8 */
            lVar9 = lVar11;
          }
          if (lVar15 < local_2f0) {
            *(long *)(lVar18 + 0x120) = lVar15;
            local_2f0 = lVar15;
          }
          if (lVar17 < lVar15) {
            *(long *)(lVar18 + 0x128) = lVar15;
            lVar17 = lVar15;
          }
          plVar13 = plVar13 + 2;
        } while (plVar13 < plVar12 + (long)sVar2 * 2);
      }
      lVar7 = lVar7 >> 6;
      local_2f0 = local_2f0 >> 6;
      lVar11 = lVar9 + 0x3f >> 6;
      lVar9 = lVar17 + 0x3f >> 6;
      *(long *)(lVar18 + 0x110) = lVar7;
      *(long *)(lVar18 + 0x118) = lVar11;
      *(long *)(lVar18 + 0x120) = local_2f0;
      *(long *)(lVar18 + 0x128) = lVar9;
    }
    lVar17 = *(long *)(lVar18 + 0x878);
    if ((((lVar17 < lVar11) && (lVar15 = *(long *)(lVar18 + 0x888), lVar7 < lVar15)) &&
        (lVar16 = *(long *)(lVar18 + 0x880), lVar16 < lVar9)) &&
       (lVar14 = *(long *)(lVar18 + 0x890), local_2f0 < lVar14)) {
                    /* try { // try from 010afd9c to 011afda7 has its CatchHandler @ 010afe74 */
      if (lVar7 < lVar17) {
        *(long *)(lVar18 + 0x110) = lVar17;
        lVar7 = lVar17;
      }
      if (local_2f0 < lVar16) {
        *(long *)(lVar18 + 0x120) = lVar16;
        local_2f0 = lVar16;
      }
      if (lVar15 < lVar11) {
        *(long *)(lVar18 + 0x118) = lVar15;
        lVar11 = lVar15;
      }
      if (lVar14 < lVar9) {
        *(long *)(lVar18 + 0x128) = lVar14;
        lVar9 = lVar14;
      }
      local_2e8 = 0;
      if ((long)iVar3 != 0) {
        local_2e8 = (int)((lVar9 - local_2f0) / (long)iVar3);
      }
      *(long *)(lVar18 + 0x130) = lVar11 - lVar7;
      *(long *)(lVar18 + 0x138) = lVar9 - local_2f0;
      if (local_2e8 == 0) {
        local_2e8 = 1;
      }
      if (0x26 < local_2e8) {
        local_2e8 = 0x27;
      }
      *(undefined4 *)(lVar18 + 0x978) = 0;
      local_2e4 = 0;
      if (local_2e8 < 1) {
        return 0;
      }
                    /* try { // try from 010afe34 to 011afe3b has its CatchHandler @ 010afe50 */
                    /* try { // try from 010afe3c to 011afe3f has its CatchHandler @ 010afaa8 */
                    /* try { // try from 010afe40 to 011afe47 has its CatchHandler @ 010afe64 */
      do {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010afd9c with catch @ 010afe74
                        */
        if ((local_2e4 == local_2e8 + -1) ||
           (local_2f8 = local_2f0 + iVar3, lVar9 < local_2f0 + iVar3)) {
          local_2f8 = lVar9;
        }
        local_2e0 = local_2f0;
        local_2d8 = local_2f8;
        local_58 = &local_2e0;
        while (&local_2e0 <= local_58) {
          puVar6 = *(undefined8 **)(lVar18 + 0x980);
          *(undefined8 **)(lVar18 + 0x990) = puVar6;
          uVar10 = *(ulong *)(lVar18 + 0x988) & 0xffffffffffffffe0;
          lVar11 = local_58[1] - *local_58;
          uVar8 = lVar11 * 8;
          lVar7 = 0;
          if ((uVar8 & 0x18) != 0) {
            lVar7 = 0x20 - (uVar8 & 0x18);
          }
          lVar7 = lVar7 + uVar8;
          lVar17 = uVar10 - lVar7;
          *(long *)(lVar18 + 0x998) = lVar11;
          *(long *)(lVar18 + 0x158) = (long)puVar6 + lVar7;
          if ((lVar17 == 0 || (long)uVar10 < lVar7) ||
             (*(long *)(lVar18 + 0x160) = lVar17 >> 5, lVar17 < 0x40)) {
LAB_010afef0:
            lVar17 = *local_58;
            lVar11 = local_58[1];
            lVar7 = lVar11 - lVar17 >> 1;
            if (lVar7 == 0) {
              return 1;
            }
            lVar7 = lVar7 + lVar17;
            if ((long)*(int *)(lVar18 + 0x974) <= lVar17 - lVar11) {
              *(int *)(lVar18 + 0x978) = *(int *)(lVar18 + 0x978) + 1;
            }
            local_58[2] = lVar17;
            local_58[3] = lVar7;
            *local_58 = lVar7;
            local_58[1] = lVar11;
            local_58 = local_58 + 2;
          }
          else {
            if ((0 < lVar11) && (*puVar6 = 0, lVar11 != 1)) {
              lVar7 = 1;
              do {
                *(undefined8 *)(*(long *)(lVar18 + 0x990) + lVar7 * 8) = 0;
                lVar7 = lVar7 + 1;
              } while (lVar7 < lVar11);
            }
            *(undefined8 *)(lVar18 + 0x168) = 0;
            *(undefined4 *)(lVar18 + 0x150) = 1;
            *(long *)(lVar18 + 0x120) = *local_58;
            *(long *)(lVar18 + 0x128) = local_58[1];
            *(long *)(lVar18 + 0x138) = local_58[1] - *local_58;
            iVar3 = FUN_010b035c(lVar18);
            if (iVar3 == 0x40) goto LAB_010afef0;
            if (iVar3 != 0) {
              return 1;
            }
            if (*(long *)(lVar18 + 0x168) != 0) {
              *(undefined4 *)(lVar18 + 0x958) = 0;
              if (0 < *(long *)(lVar18 + 0x998)) {
                lVar7 = 0;
                do {
                  plVar12 = *(long **)(*(long *)(lVar18 + 0x990) + lVar7 * 8);
                  if (plVar12 != (long *)0x0) {
                    lVar11 = 0;
                    lVar17 = 0;
                    do {
                      if ((lVar17 != 0) &&
                         (lVar15 = *plVar12 - lVar11, lVar15 != 0 && lVar11 <= *plVar12)) {
                        FUN_010b15a8(lVar18,lVar11,lVar7,lVar17 << 9,lVar15);
                      }
                      lVar17 = plVar12[1] + lVar17;
                      lVar11 = lVar17 * 0x200 - (long)(int)plVar12[2];
                      if ((lVar11 != 0) && (-1 < *plVar12)) {
                        FUN_010b15a8(lVar18,*plVar12,lVar7,lVar11,1);
                      }
                      lVar11 = *plVar12;
                      plVar12 = (long *)plVar12[3];
                      lVar11 = lVar11 + 1;
                    } while (plVar12 != (long *)0x0);
                    if (lVar17 != 0) {
                      FUN_010b15a8(lVar18,lVar11,lVar7,lVar17 * 0x200,
                                   *(long *)(lVar18 + 0x130) - lVar11);
                    }
                  }
                  lVar7 = lVar7 + 1;
                } while (lVar7 < *(long *)(lVar18 + 0x998));
              }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010afc30 with catch @ 010afec4
                        */
              if ((*(code **)(lVar18 + 0x960) != (code *)0x0) && (0 < *(int *)(lVar18 + 0x958))) {
                (**(code **)(lVar18 + 0x960))
                          (*(undefined4 *)(lVar18 + 0x970),*(int *)(lVar18 + 0x958),lVar18 + 0x898,
                           *(undefined8 *)(lVar18 + 0x968));
              }
            }
            local_58 = local_58 + -2;
          }
        }
                    /* try { // try from 010afe48 to 011afe4f has its CatchHandler @ 010afe54 */
        local_2e4 = local_2e4 + 1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010afe34 with catch @ 010afe50
                       try { // try from 010afe50 to 011afedf has its CatchHandler @ 010afaa8 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010afd20 with catch @ 010afe54
                       catch(type#1 @ 00000000) { ... } // from try @ 010afe48 with catch @ 010afe54
                        */
        local_2f0 = local_2f8;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010afc94 with catch @ 010afe64
                       catch(type#1 @ 00000000) { ... } // from try @ 010afe40 with catch @ 010afe64
                        */
        if (local_2e8 <= local_2e4) {
          if (*(int *)(lVar18 + 0x978) < 9) {
            return 0;
          }
          if ((int)*(uint *)(lVar18 + 0x974) < 0x11) {
            return 0;
          }
          *(uint *)(lVar18 + 0x974) = *(uint *)(lVar18 + 0x974) >> 1;
          return 0;
        }
        iVar3 = *(int *)(lVar18 + 0x974);
      } while( true );
    }
  }
  return 0;
}

