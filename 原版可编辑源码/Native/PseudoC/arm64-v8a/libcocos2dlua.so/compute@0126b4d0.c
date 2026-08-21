
/* btConvexHullComputer::compute(void const*, bool, int, int, float, float) */

undefined1  [16]
btConvexHullComputer::compute
          (void *param_1,bool param_2,int param_3,int param_4,float param_5,float param_6)

{
  int iVar1;
  int iVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  void *pvVar6;
  void *pvVar7;
  int in_w4;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  undefined4 *puVar18;
  long *plVar19;
  ulong *puVar20;
  undefined4 *puVar21;
  ulong *puVar22;
  undefined8 *puVar23;
  ulong uVar24;
  ulong uVar25;
  long *plVar26;
  uint uVar27;
  uint uVar28;
  ulong uVar29;
  Vertex *pVVar30;
  long *plVar31;
  int iVar32;
  undefined4 uVar33;
  undefined8 uVar34;
  ulong uVar35;
  undefined8 uVar36;
  undefined1 auVar37 [16];
  undefined8 uVar38;
  ulong uVar39;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 uVar40;
  undefined8 uVar41;
  long *local_188;
  long *local_180;
  ulong local_178;
  long *local_168;
  undefined8 local_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  btConvexHullInternal abStack_150 [32];
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined8 local_cc;
  undefined8 local_c0;
  undefined1 local_b8;
  long local_98;
  
  uVar29 = (ulong)(uint)param_6;
  if (in_w4 < 1) {
    if (*(void **)((long)param_1 + 0x10) != (void *)0x0) {
      if (*(char *)((long)param_1 + 0x18) != '\0') {
        btAlignedFreeInternal(*(void **)((long)param_1 + 0x10));
      }
      *(undefined8 *)((long)param_1 + 0x10) = 0;
    }
    *(undefined1 *)((long)param_1 + 0x18) = 1;
    *(undefined8 *)((long)param_1 + 0x10) = 0;
    *(undefined8 *)((long)param_1 + 4) = 0;
    if (*(void **)((long)param_1 + 0x30) != (void *)0x0) {
      if (*(char *)((long)param_1 + 0x38) != '\0') {
        btAlignedFreeInternal(*(void **)((long)param_1 + 0x30));
      }
      *(undefined8 *)((long)param_1 + 0x30) = 0;
    }
    *(undefined1 *)((long)param_1 + 0x38) = 1;
    *(undefined8 *)((long)param_1 + 0x30) = 0;
    *(undefined8 *)((long)param_1 + 0x24) = 0;
    if (*(void **)((long)param_1 + 0x50) != (void *)0x0) {
      if (*(char *)((long)param_1 + 0x58) != '\0') {
        btAlignedFreeInternal(*(void **)((long)param_1 + 0x50));
      }
      *(undefined8 *)((long)param_1 + 0x50) = 0;
    }
    *(undefined8 *)((long)param_1 + 0x50) = 0;
    *(undefined8 *)((long)param_1 + 0x44) = 0;
    *(undefined1 *)((long)param_1 + 0x58) = 1;
    uVar40 = 0;
    uVar41 = 0;
    goto LAB_0126b7a4;
  }
  local_118 = 0x100;
  local_f8 = 0x100;
  local_d8 = 0x100;
  local_128 = 0;
  uStack_120 = 0;
  local_130 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_110 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f0 = 0;
  local_b8 = 1;
  local_c0 = 0;
  local_cc = 0;
  uVar17 = uVar29;
  btConvexHullInternal::compute
            (abStack_150,(void *)(ulong)param_2,(bool)((byte)param_3 & 1),param_4,in_w4);
  auVar37 = ZEXT816(0);
  if (param_5 <= 0.0) {
LAB_0126b5f4:
    uVar41 = auVar37._8_8_;
    uVar40 = auVar37._0_8_;
    iVar8 = *(int *)((long)param_1 + 4);
    if (iVar8 < 0) {
      if (*(int *)((long)param_1 + 8) < 0) {
        if (*(void **)((long)param_1 + 0x10) != (void *)0x0) {
          if (*(char *)((long)param_1 + 0x18) != '\0') {
            btAlignedFreeInternal(*(void **)((long)param_1 + 0x10));
          }
          *(undefined8 *)((long)param_1 + 0x10) = 0;
        }
        *(undefined8 *)((long)param_1 + 0x10) = 0;
        *(undefined1 *)((long)param_1 + 0x18) = 1;
        *(undefined4 *)((long)param_1 + 8) = 0;
      }
      lVar10 = -(long)iVar8;
      lVar15 = (long)iVar8 << 4;
      do {
        lVar10 = lVar10 + -1;
        puVar11 = (undefined8 *)(*(long *)((long)param_1 + 0x10) + lVar15);
        puVar11[1] = CONCAT44(uStack_154,uStack_158);
        *puVar11 = local_160;
        lVar15 = lVar15 + 0x10;
      } while (lVar10 != 0);
    }
    *(undefined4 *)((long)param_1 + 4) = 0;
    iVar8 = *(int *)((long)param_1 + 0x24);
    if (iVar8 < 0) {
      if (*(int *)((long)param_1 + 0x28) < 0) {
        if (*(void **)((long)param_1 + 0x30) != (void *)0x0) {
          if (*(char *)((long)param_1 + 0x38) != '\0') {
            btAlignedFreeInternal(*(void **)((long)param_1 + 0x30));
          }
          *(undefined8 *)((long)param_1 + 0x30) = 0;
        }
        *(undefined8 *)((long)param_1 + 0x30) = 0;
        *(undefined1 *)((long)param_1 + 0x38) = 1;
        *(undefined4 *)((long)param_1 + 0x28) = 0;
      }
      lVar10 = -(long)iVar8;
      lVar15 = (long)iVar8 * 0xc;
      do {
        lVar10 = lVar10 + -1;
        puVar11 = (undefined8 *)(*(long *)((long)param_1 + 0x30) + lVar15);
        *(undefined4 *)(puVar11 + 1) = 0;
        lVar15 = lVar15 + 0xc;
        *puVar11 = 0;
      } while (lVar10 != 0);
    }
    iVar8 = *(int *)((long)param_1 + 0x44);
    *(undefined4 *)((long)param_1 + 0x24) = 0;
    if (iVar8 < 0) {
      pvVar6 = *(void **)((long)param_1 + 0x50);
      if (*(int *)((long)param_1 + 0x48) < 0) {
        if ((pvVar6 != (void *)0x0) && (*(char *)((long)param_1 + 0x58) != '\0')) {
          btAlignedFreeInternal(pvVar6);
        }
        pvVar6 = (void *)0x0;
        *(undefined8 *)((long)param_1 + 0x50) = 0;
        *(undefined1 *)((long)param_1 + 0x58) = 1;
        *(undefined4 *)((long)param_1 + 0x48) = 0;
      }
      memset((void *)((long)pvVar6 + (long)iVar8 * 4),0,(long)iVar8 * -4);
    }
    *(undefined4 *)((long)param_1 + 0x44) = 0;
    if (*(int *)(local_98 + 0x78) < 0) {
      *(undefined4 *)(local_98 + 0x78) = 0;
      local_188 = (long *)btAlignedAllocInternal(8,0x10);
      lVar15 = 0;
      uVar29 = 1;
      *local_188 = local_98;
      local_178 = 1;
      local_180 = local_188;
      local_168 = local_188;
      do {
        pVVar30 = (Vertex *)local_168[lVar15];
        uVar33 = btConvexHullInternal::getCoordinates(abStack_150,pVVar30);
        iVar8 = *(int *)((long)param_1 + 4);
        uVar25 = uVar17;
        uVar36 = in_d2;
        uVar38 = in_d3;
        if (iVar8 == *(int *)((long)param_1 + 8)) {
          uVar28 = iVar8 << 1;
          if (iVar8 == 0) {
            uVar28 = 1;
          }
          if (iVar8 < (int)uVar28) {
            if (uVar28 == 0) {
              lVar10 = 0;
            }
            else {
              lVar10 = btAlignedAllocInternal
                                 (-(ulong)(uVar28 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar28 << 4
                                  ,0x10);
              iVar8 = *(int *)((long)param_1 + 4);
            }
            if (0 < iVar8) {
              lVar13 = 0;
              lVar12 = (long)iVar8;
              do {
                lVar12 = lVar12 + -1;
                puVar11 = (undefined8 *)(*(long *)((long)param_1 + 0x10) + lVar13);
                uVar34 = *puVar11;
                ((undefined8 *)(lVar10 + lVar13))[1] = puVar11[1];
                *(undefined8 *)(lVar10 + lVar13) = uVar34;
                lVar13 = lVar13 + 0x10;
              } while (lVar12 != 0);
            }
            if (*(void **)((long)param_1 + 0x10) != (void *)0x0) {
              if (*(char *)((long)param_1 + 0x18) != '\0') {
                btAlignedFreeInternal(*(void **)((long)param_1 + 0x10));
              }
              *(undefined8 *)((long)param_1 + 0x10) = 0;
            }
            iVar8 = *(int *)((long)param_1 + 4);
            *(undefined1 *)((long)param_1 + 0x18) = 1;
            *(long *)((long)param_1 + 0x10) = lVar10;
            *(uint *)((long)param_1 + 8) = uVar28;
          }
        }
        puVar18 = (undefined4 *)(*(long *)((long)param_1 + 0x10) + (long)iVar8 * 0x10);
        *puVar18 = uVar33;
        puVar18[1] = (int)uVar17;
        puVar18[2] = (int)in_d2;
        puVar18[3] = (int)in_d3;
        *(int *)((long)param_1 + 4) = *(int *)((long)param_1 + 4) + 1;
        plVar26 = *(long **)(pVVar30 + 0x10);
        if (plVar26 != (long *)0x0) {
          plVar31 = plVar26;
          iVar8 = -1;
          iVar32 = -1;
          do {
            uVar28 = (uint)uVar29;
            iVar1 = (int)plVar31[5];
            if (iVar1 < 0) {
              iVar1 = *(int *)((long)param_1 + 0x24);
              iVar9 = iVar1;
              if (iVar1 == *(int *)((long)param_1 + 0x28)) {
                iVar2 = iVar1 << 1;
                if (iVar1 == 0) {
                  iVar2 = 1;
                }
                if (iVar1 < iVar2) {
                  if (iVar2 == 0) {
                    lVar10 = 0;
                  }
                  else {
                    lVar10 = btAlignedAllocInternal((long)iVar2 * 0xc,0x10);
                    iVar9 = *(int *)((long)param_1 + 0x24);
                  }
                  if (0 < iVar9) {
                    lVar13 = 0;
                    lVar12 = (long)iVar9;
                    do {
                      puVar11 = (undefined8 *)(lVar10 + lVar13);
                      lVar12 = lVar12 + -1;
                      puVar23 = (undefined8 *)(*(long *)((long)param_1 + 0x30) + lVar13);
                      lVar13 = lVar13 + 0xc;
                      *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar23 + 1);
                      *puVar11 = *puVar23;
                    } while (lVar12 != 0);
                  }
                  if (*(void **)((long)param_1 + 0x30) != (void *)0x0) {
                    if (*(char *)((long)param_1 + 0x38) != '\0') {
                      btAlignedFreeInternal(*(void **)((long)param_1 + 0x30));
                    }
                    *(undefined8 *)((long)param_1 + 0x30) = 0;
                  }
                  iVar9 = *(int *)((long)param_1 + 0x24);
                  *(undefined1 *)((long)param_1 + 0x38) = 1;
                  *(long *)((long)param_1 + 0x30) = lVar10;
                  *(int *)((long)param_1 + 0x28) = iVar2;
                }
              }
              puVar11 = (undefined8 *)(*(long *)((long)param_1 + 0x30) + (long)iVar9 * 0xc);
              *(undefined4 *)(puVar11 + 1) = 0;
              *puVar11 = 0;
              iVar9 = *(int *)((long)param_1 + 0x24) + 1;
              *(int *)((long)param_1 + 0x24) = iVar9;
              if (iVar9 == *(int *)((long)param_1 + 0x28)) {
                iVar2 = iVar9 * 2;
                if (iVar9 == 0) {
                  iVar2 = 1;
                }
                if (iVar9 < iVar2) {
                  if (iVar2 == 0) {
                    lVar10 = 0;
                  }
                  else {
                    lVar10 = btAlignedAllocInternal((long)iVar2 * 0xc,0x10);
                    iVar9 = *(int *)((long)param_1 + 0x24);
                  }
                  if (0 < iVar9) {
                    lVar13 = 0;
                    lVar12 = (long)iVar9;
                    do {
                      puVar11 = (undefined8 *)(lVar10 + lVar13);
                      lVar12 = lVar12 + -1;
                      puVar23 = (undefined8 *)(*(long *)((long)param_1 + 0x30) + lVar13);
                      lVar13 = lVar13 + 0xc;
                      *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar23 + 1);
                      *puVar11 = *puVar23;
                    } while (lVar12 != 0);
                  }
                  if (*(void **)((long)param_1 + 0x30) != (void *)0x0) {
                    if (*(char *)((long)param_1 + 0x38) != '\0') {
                      btAlignedFreeInternal(*(void **)((long)param_1 + 0x30));
                    }
                    *(undefined8 *)((long)param_1 + 0x30) = 0;
                  }
                  iVar9 = *(int *)((long)param_1 + 0x24);
                  *(undefined1 *)((long)param_1 + 0x38) = 1;
                  *(long *)((long)param_1 + 0x30) = lVar10;
                  *(int *)((long)param_1 + 0x28) = iVar2;
                }
              }
              iVar2 = iVar1 + 1;
              puVar11 = (undefined8 *)(*(long *)((long)param_1 + 0x30) + (long)iVar9 * 0xc);
              *(undefined4 *)(puVar11 + 1) = 0;
              *puVar11 = 0;
              lVar13 = *(long *)((long)param_1 + 0x30);
              *(int *)((long)param_1 + 0x24) = *(int *)((long)param_1 + 0x24) + 1;
              *(int *)(plVar31 + 5) = iVar1;
              *(int *)(plVar31[2] + 0x28) = iVar2;
              *(undefined4 *)(lVar13 + (long)iVar1 * 0xc + 4) = 1;
              *(undefined4 *)(lVar13 + (long)iVar2 * 0xc + 4) = 0xffffffff;
              lVar10 = plVar31[3];
              uVar27 = *(uint *)(lVar10 + 0x78);
              if ((int)uVar27 < 0) {
                *(uint *)(lVar10 + 0x78) = uVar28;
                plVar14 = local_168;
                plVar5 = local_188;
                if (uVar28 == (uint)local_178) {
                  uVar27 = uVar28 << 1;
                  if (uVar28 == 0) {
                    uVar27 = 1;
                  }
                  uVar17 = (ulong)uVar27;
                  local_178 = uVar29;
                  if ((int)uVar28 < (int)uVar27) {
                    if (uVar27 == 0) {
                      plVar14 = (long *)0x0;
                    }
                    else {
                      plVar14 = (long *)btAlignedAllocInternal
                                                  (-(ulong)(uVar27 >> 0x1f) & 0xfffffff800000000 |
                                                   uVar17 << 3,0x10);
                    }
                    plVar5 = plVar14;
                    local_180 = plVar14;
                    local_178 = uVar17;
                    if ((int)uVar28 < 1) {
                      if (local_168 == (long *)0x0) goto LAB_0126bc24;
                    }
                    else {
                      uVar29 = (ulong)(int)uVar28;
                      if (uVar28 < 4) {
LAB_0126bbd0:
                        uVar17 = 0;
                      }
                      else {
                        uVar17 = uVar29 & 0xfffffffffffffffc;
                        if (uVar17 != 0) {
                          if ((plVar14 < local_168 + uVar29) && (local_188 < plVar14 + uVar29))
                          goto LAB_0126bbd0;
                          puVar20 = (ulong *)(plVar14 + 2);
                          puVar22 = (ulong *)(local_168 + 2);
                          uVar24 = uVar17;
                          do {
                            puVar3 = puVar22 + -1;
                            uVar35 = puVar22[-2];
                            uVar39 = puVar22[1];
                            uVar25 = *puVar22;
                            uVar24 = uVar24 - 4;
                            puVar22 = puVar22 + 4;
                            puVar20[-1] = *puVar3;
                            puVar20[-2] = uVar35;
                            puVar20[1] = uVar39;
                            *puVar20 = uVar25;
                            puVar20 = puVar20 + 4;
                          } while (uVar24 != 0);
                          if (uVar17 == uVar29) goto LAB_0126bc08;
                        }
                      }
                      lVar12 = uVar29 - uVar17;
                      plVar16 = local_168 + uVar17;
                      plVar19 = plVar14 + uVar17;
                      do {
                        lVar12 = lVar12 + -1;
                        *plVar19 = *plVar16;
                        plVar16 = plVar16 + 1;
                        plVar19 = plVar19 + 1;
                      } while (lVar12 != 0);
                    }
LAB_0126bc08:
                    btAlignedFreeInternal(local_188);
                  }
                }
LAB_0126bc24:
                local_188 = plVar5;
                uVar29 = (ulong)(uVar28 + 1);
                plVar14[(int)uVar28] = lVar10;
                uVar27 = uVar28;
                local_168 = plVar14;
              }
              *(uint *)(lVar13 + (long)iVar1 * 0xc + 8) = uVar27;
              *(int *)(lVar13 + (long)iVar2 * 0xc + 8) = (int)lVar15;
              iVar1 = (int)plVar31[5];
            }
            iVar9 = iVar1;
            if (-1 < iVar8) {
              *(int *)(*(long *)((long)param_1 + 0x30) + (long)iVar1 * 0xc) = iVar8 - iVar1;
              iVar9 = iVar32;
            }
            plVar31 = (long *)*plVar31;
            iVar8 = iVar1;
            iVar32 = iVar9;
          } while (plVar31 != plVar26);
          *(int *)(*(long *)((long)param_1 + 0x30) + (long)iVar9 * 0xc) = iVar1 - iVar9;
        }
        lVar15 = lVar15 + 1;
        uVar17 = uVar25;
        in_d2 = uVar36;
        in_d3 = uVar38;
      } while (lVar15 < (int)uVar29);
      if (0 < (int)lVar15) {
        lVar10 = 0;
        do {
          plVar31 = *(long **)(local_168[lVar10] + 0x10);
          plVar26 = plVar31;
          if (plVar31 != (long *)0x0) {
            do {
              iVar8 = (int)plVar26[5];
              if (-1 < iVar8) {
                uVar28 = *(uint *)((long)param_1 + 0x44);
                if (uVar28 == *(uint *)((long)param_1 + 0x48)) {
                  uVar27 = uVar28 << 1;
                  if (uVar28 == 0) {
                    uVar27 = 1;
                  }
                  if ((int)uVar28 < (int)uVar27) {
                    if (uVar27 == 0) {
                      pvVar6 = (void *)0x0;
                    }
                    else {
                      pvVar6 = (void *)btAlignedAllocInternal
                                                 (-(ulong)(uVar27 >> 0x1f) & 0xfffffffc00000000 |
                                                  (ulong)uVar27 << 2,0x10);
                      uVar28 = *(uint *)((long)param_1 + 0x44);
                    }
                    pvVar7 = *(void **)((long)param_1 + 0x50);
                    if ((int)uVar28 < 1) {
                      if (pvVar7 != (void *)0x0) goto LAB_0126be00;
                    }
                    else {
                      uVar29 = (ulong)(int)uVar28;
                      if (uVar28 < 8) {
LAB_0126bdd4:
                        uVar17 = 0;
                      }
                      else {
                        uVar17 = uVar29 & 0xfffffffffffffff8;
                        if (uVar17 != 0) {
                          if ((pvVar6 < (void *)((long)pvVar7 + uVar29 * 4)) &&
                             (pvVar7 < (void *)((long)pvVar6 + uVar29 * 4))) goto LAB_0126bdd4;
                          puVar11 = (undefined8 *)((long)pvVar6 + 0x10);
                          puVar23 = (undefined8 *)((long)pvVar7 + 0x10);
                          uVar25 = uVar17;
                          do {
                            puVar4 = puVar23 + -1;
                            uVar36 = puVar23[-2];
                            uVar34 = puVar23[1];
                            uVar38 = *puVar23;
                            uVar25 = uVar25 - 8;
                            puVar23 = puVar23 + 4;
                            puVar11[-1] = *puVar4;
                            puVar11[-2] = uVar36;
                            puVar11[1] = uVar34;
                            *puVar11 = uVar38;
                            puVar11 = puVar11 + 4;
                          } while (uVar25 != 0);
                          if (uVar17 == uVar29) goto LAB_0126be00;
                        }
                      }
                      lVar13 = uVar29 - uVar17;
                      puVar18 = (undefined4 *)((long)pvVar7 + uVar17 * 4);
                      puVar21 = (undefined4 *)((long)pvVar6 + uVar17 * 4);
                      do {
                        lVar13 = lVar13 + -1;
                        *puVar21 = *puVar18;
                        puVar18 = puVar18 + 1;
                        puVar21 = puVar21 + 1;
                      } while (lVar13 != 0);
LAB_0126be00:
                      if (*(char *)((long)param_1 + 0x58) != '\0') {
                        btAlignedFreeInternal(pvVar7);
                      }
                      uVar28 = *(uint *)((long)param_1 + 0x44);
                      *(undefined8 *)((long)param_1 + 0x50) = 0;
                    }
                    *(undefined1 *)((long)param_1 + 0x58) = 1;
                    *(void **)((long)param_1 + 0x50) = pvVar6;
                    *(uint *)((long)param_1 + 0x48) = uVar27;
                    iVar8 = (int)plVar26[5];
                  }
                }
                *(int *)(*(long *)((long)param_1 + 0x50) + (long)(int)uVar28 * 4) = iVar8;
                *(int *)((long)param_1 + 0x44) = *(int *)((long)param_1 + 0x44) + 1;
                plVar14 = plVar26;
                do {
                  *(undefined4 *)(plVar14 + 5) = 0xffffffff;
                  plVar14 = *(long **)(plVar14[2] + 8);
                } while (plVar14 != plVar26);
              }
              plVar26 = (long *)*plVar26;
            } while (plVar26 != plVar31);
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 < (int)lVar15);
      }
      if (local_168 != (long *)0x0) {
        btAlignedFreeInternal(local_180);
      }
    }
  }
  else {
    auVar37 = btConvexHullInternal::shrink(abStack_150,param_5,param_6);
    uVar41 = auVar37._8_8_;
    uVar40 = auVar37._0_8_;
    uVar17 = uVar29;
    if (0.0 <= auVar37._0_4_) goto LAB_0126b5f4;
    if (*(void **)((long)param_1 + 0x10) != (void *)0x0) {
      if (*(char *)((long)param_1 + 0x18) != '\0') {
        btAlignedFreeInternal(*(void **)((long)param_1 + 0x10));
      }
      *(undefined8 *)((long)param_1 + 0x10) = 0;
    }
    *(undefined1 *)((long)param_1 + 0x18) = 1;
    *(undefined8 *)((long)param_1 + 0x10) = 0;
    *(undefined8 *)((long)param_1 + 4) = 0;
    if (*(void **)((long)param_1 + 0x30) != (void *)0x0) {
      if (*(char *)((long)param_1 + 0x38) != '\0') {
        btAlignedFreeInternal(*(void **)((long)param_1 + 0x30));
      }
      *(undefined8 *)((long)param_1 + 0x30) = 0;
    }
    *(undefined1 *)((long)param_1 + 0x38) = 1;
    *(undefined8 *)((long)param_1 + 0x30) = 0;
    *(undefined8 *)((long)param_1 + 0x24) = 0;
    if (*(void **)((long)param_1 + 0x50) != (void *)0x0) {
      if (*(char *)((long)param_1 + 0x58) != '\0') {
        btAlignedFreeInternal(*(void **)((long)param_1 + 0x50));
      }
      *(undefined8 *)((long)param_1 + 0x50) = 0;
    }
    *(undefined8 *)((long)param_1 + 0x50) = 0;
    *(undefined1 *)((long)param_1 + 0x58) = 1;
    *(undefined8 *)((long)param_1 + 0x44) = 0;
  }
  btConvexHullInternal::~btConvexHullInternal(abStack_150);
LAB_0126b7a4:
  auVar37._8_8_ = uVar41;
  auVar37._0_8_ = uVar40;
  return auVar37;
}

