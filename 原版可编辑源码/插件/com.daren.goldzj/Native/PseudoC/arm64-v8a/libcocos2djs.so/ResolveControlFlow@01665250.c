
/* v8::internal::compiler::LiveRangeConnector::ResolveControlFlow(v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::LiveRangeConnector::ResolveControlFlow
          (LiveRangeConnector *this,Zone *param_1)

{
  long *plVar1;
  uint uVar2;
  LiveRangeBoundArray *pLVar3;
  uint uVar4;
  int *piVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  bool bVar11;
  ParallelMove *this_00;
  long *plVar12;
  void *__s;
  ulong uVar13;
  int iVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  undefined8 *puVar18;
  int iVar19;
  long lVar20;
  ulong *puVar21;
  long *plVar22;
  int iVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  long *plVar30;
  long lVar31;
  long lVar32;
  int *piVar33;
  TopLevelLiveRange *pTVar34;
  long lVar35;
  Zone *this_01;
  long lVar36;
  ulong local_70;
  ulong local_68;
  
  lVar20 = *(long *)this;
  __s = *(void **)(param_1 + 0x10);
  uVar29 = *(long *)(lVar20 + 0x90) - *(long *)(lVar20 + 0x88);
  uVar13 = -(uVar29 >> 0x22 & 1) & 0xfffffff000000000 | (uVar29 & 0x7ffffffff) << 1;
  if ((ulong)(*(long *)(param_1 + 0x18) - (long)__s) < uVar13) {
    __s = (void *)Zone::NewExpand(param_1,uVar13);
  }
  else {
    *(ulong *)(param_1 + 0x10) = uVar13 + (long)__s;
  }
  if (0 < (int)(uVar29 >> 3)) {
    lVar15 = (long)(uVar29 * 0x20000000) >> 0x20;
    if (lVar15 < 2) {
      lVar15 = 1;
    }
    memset(__s,0,lVar15 << 4);
  }
  lVar15 = *(long *)this;
  plVar16 = *(long **)(*(long *)(lVar15 + 0x10) + 0x10);
  plVar12 = (long *)*plVar16;
  plVar16 = (long *)plVar16[1];
  if (plVar12 != plVar16) {
    do {
      lVar36 = *plVar12;
      if (*(long *)(lVar36 + 0x28) - (long)*(int **)(lVar36 + 0x20) == 4) {
        iVar14 = *(int *)(lVar36 + 100);
        if (**(int **)(lVar36 + 0x20) + 1 != iVar14) goto LAB_01665350;
      }
      else {
        iVar14 = *(int *)(lVar36 + 100);
LAB_01665350:
        lVar26 = *(long *)(*(long *)(lVar15 + 0x48) + (long)iVar14 * 8);
        iVar14 = *(int *)(lVar26 + 4);
        puVar21 = (ulong *)(lVar26 + 8);
        if (iVar14 != 1) {
          puVar21 = (ulong *)*puVar21;
        }
        uVar13 = *puVar21;
        if (uVar13 == 0) {
          if (1 < iVar14) {
            uVar13 = *(ulong *)(*(long *)(lVar26 + 8) + 8);
            if (uVar13 == 0) {
              lVar31 = 2;
              do {
                if (iVar14 == lVar31) goto LAB_0166530c;
                uVar13 = *(ulong *)(*(long *)(lVar26 + 8) + lVar31 * 8);
                lVar31 = lVar31 + 1;
              } while (uVar13 == 0);
              iVar19 = (int)lVar31 + -1;
            }
            else {
              iVar19 = 1;
            }
            iVar23 = iVar19 << 6;
            goto LAB_01665380;
          }
          uVar13 = 0;
          iVar23 = 0;
          iVar19 = 1;
          if (iVar14 < 2) goto LAB_0166530c;
        }
        else {
          iVar19 = 0;
          iVar23 = 0;
LAB_01665380:
          uVar29 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
          uVar29 = (uVar29 & 0xcccccccccccccccc) >> 2 | (uVar29 & 0x3333333333333333) << 2;
          uVar29 = (uVar29 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar29 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar29 = (uVar29 & 0xff00ff00ff00ff00) >> 8 | (uVar29 & 0xff00ff00ff00ff) << 8;
          uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 | (uVar29 & 0xffff0000ffff) << 0x10;
          uVar29 = LZCOUNT(uVar29 >> 0x20 | uVar29 << 0x20);
          iVar23 = iVar23 + (int)uVar29;
          uVar13 = (uVar13 >> (uVar29 & 0x3f)) >> 1;
          if (iVar14 <= iVar19) goto LAB_0166530c;
        }
LAB_016653b4:
        do {
          TickCounter::DoTick(*(TickCounter **)(*(long *)this + 0x1d8));
          plVar1 = (long *)((long)__s + (long)iVar23 * 0x10);
          lVar31 = *(long *)(*(long *)(lVar20 + 0x88) + (long)iVar23 * 8);
          plVar30 = plVar1 + 1;
          if (*plVar30 == 0) {
            plVar22 = *(long **)(param_1 + 0x10);
            uVar29 = (long)*(int *)(lVar31 + 0x60) * 0x18 + 0x18;
            if ((ulong)(*(long *)(param_1 + 0x18) - (long)plVar22) < uVar29) {
              plVar22 = (long *)Zone::NewExpand(param_1,uVar29);
            }
            else {
              *(long **)(param_1 + 0x10) = plVar22 + (long)*(int *)(lVar31 + 0x60) * 3 + 3;
            }
            *plVar30 = (long)plVar22;
            *plVar1 = 0;
            do {
              bVar10 = *(byte *)(lVar31 + 4);
              *plVar22 = lVar31;
              *(undefined4 *)(plVar22 + 1) = **(undefined4 **)(lVar31 + 0x10);
              uVar7 = *(undefined4 *)(*(long *)(lVar31 + 8) + 4);
              *(byte *)(plVar22 + 2) = bVar10 & 1;
              *(undefined4 *)((long)plVar22 + 0xc) = uVar7;
              lVar31 = *(long *)(lVar31 + 0x28);
              plVar22 = plVar22 + 3;
              *plVar1 = *plVar1 + 1;
            } while (lVar31 != 0);
          }
          piVar33 = *(int **)(lVar36 + 0x20);
          piVar5 = *(int **)(lVar36 + 0x28);
          if (piVar33 != piVar5) {
LAB_016654cc:
            lVar17 = *(long *)this;
            plVar22 = *(long **)(*(long *)(lVar17 + 0x10) + 0x10);
            lVar31 = *plVar22;
            if ((ulong)(plVar22[1] - lVar31 >> 3) <= (ulong)(long)*piVar33) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            lVar35 = *(long *)(lVar31 + (long)*piVar33 * 8);
            lVar24 = *plVar30;
            iVar14 = *(int *)(lVar35 + 0x74) * 4 + -2;
            lVar31 = 0;
            lVar32 = *plVar1;
            do {
              do {
                lVar27 = lVar32;
                lVar28 = lVar31 + ((ulong)(lVar27 - lVar31) >> 1);
                iVar8 = *(int *)(lVar24 + lVar28 * 0x18 + 8);
                lVar32 = lVar28;
              } while (iVar14 < iVar8);
              iVar9 = *(int *)(lVar24 + lVar28 * 0x18 + 0xc);
              lVar31 = lVar28;
              lVar32 = lVar27;
            } while (iVar9 <= iVar14);
            lVar31 = *(long *)(lVar24 + lVar28 * 0x18);
            iVar14 = *(int *)(lVar36 + 0x70) * 4;
            if ((iVar14 < iVar8) || (iVar9 <= iVar14)) {
              lVar32 = *plVar1;
              lVar28 = 0;
              do {
                do {
                  lVar25 = lVar32;
                  lVar27 = lVar28 + ((ulong)(lVar25 - lVar28) >> 1);
                  lVar32 = lVar27;
                } while (iVar14 < *(int *)(lVar24 + lVar27 * 0x18 + 8));
                lVar32 = lVar25;
                lVar28 = lVar27;
              } while (*(int *)(lVar24 + lVar27 * 0x18 + 0xc) <= iVar14);
              if ((*(char *)(lVar24 + lVar27 * 0x18 + 0x10) == '\0') &&
                 (lVar32 = *(long *)(lVar24 + lVar27 * 0x18), lVar32 != lVar31)) {
                uVar2 = *(uint *)(lVar31 + 4);
                if ((uVar2 & 0x1f80) == 0x1000) {
                  lVar31 = *(long *)(lVar31 + 0x20);
                  if ((*(uint *)(lVar31 + 4) & 0x60) == 0x20) {
                    local_68 = **(ulong **)(lVar31 + 0x70);
                  }
                  else {
                    local_68 = (ulong)(*(uint *)(lVar31 + 4) >> 8) & 0x1fe0 |
                               (ulong)*(uint *)(*(long *)(lVar31 + 0x70) + 0x2c) << 0x23 | 0xc;
                  }
                }
                else {
                  local_68 = (ulong)(uVar2 >> 8 & 0x1fe0 | 4) | (ulong)(uVar2 >> 7 & 0x3f) << 0x23;
                }
                uVar2 = *(uint *)(lVar32 + 4);
                if ((uVar2 & 0x1f80) == 0x1000) {
                  lVar31 = *(long *)(lVar32 + 0x20);
                  if ((*(uint *)(lVar31 + 4) & 0x60) == 0x20) {
                    local_70 = **(ulong **)(lVar31 + 0x70);
                  }
                  else {
                    local_70 = (ulong)(*(uint *)(lVar31 + 4) >> 8) & 0x1fe0 |
                               (ulong)*(uint *)(*(long *)(lVar31 + 0x70) + 0x2c) << 0x23 | 0xc;
                  }
                }
                else {
                  local_70 = (ulong)(uVar2 >> 8 & 0x1fe0 | 4) | (ulong)(uVar2 >> 7 & 0x3f) << 0x23;
                }
                if (local_68 != local_70) {
                  if (((local_68 & 0x1c) == 4) || ((local_70 & 0x1c) != 4)) goto LAB_016657d0;
                  if ((*(int *)(*(long *)(lVar32 + 8) + 4) < *(int *)(lVar36 + 0x74) * 4) &&
                     ((*(long *)(lVar32 + 0x28) == 0 ||
                      ((*(byte *)(*(long *)(lVar32 + 0x28) + 4) & 1) != 0)))) {
                    puVar18 = *(undefined8 **)(lVar32 + 0x38);
                    if ((puVar18 != (undefined8 *)0x0) && (*(int *)(puVar18 + 3) <= iVar14))
                    goto LAB_016656dc;
                    for (puVar18 = *(undefined8 **)(lVar32 + 0x18); puVar18 != (undefined8 *)0x0;
                        puVar18 = (undefined8 *)puVar18[2]) {
LAB_016656dc:
                      if (iVar14 <= *(int *)(puVar18 + 3)) {
                        *(undefined8 **)(lVar32 + 0x38) = puVar18;
                        goto LAB_016656fc;
                      }
                    }
                    *(undefined8 *)(lVar32 + 0x38) = 0;
                  }
                  else {
LAB_01665720:
                    lVar31 = *(long *)(lVar32 + 0x20);
                    if ((*(uint *)(lVar17 + 0x1d0) & 1) == 0) {
                      if (*(char *)(lVar31 + 0x80) != '\0') {
LAB_01665734:
                        if (*(char *)(lVar35 + 0x78) != '\0') {
                          if ((*(uint *)(lVar17 + 0x1d0) >> 2 & 1) != 0) {
                            PrintF("Adding B%d to list of spill blocks for %d\n",
                                   (ulong)*(uint *)(lVar35 + 100),(ulong)*(uint *)(lVar31 + 0x5c));
                            lVar31 = *(long *)(lVar32 + 0x20);
                          }
                          lVar31 = *(long *)(lVar31 + 0x78);
                          uVar2 = *(uint *)(lVar35 + 100);
                          if (*(int *)(lVar31 + 4) == 1) {
                            *(ulong *)(lVar31 + 8) =
                                 *(ulong *)(lVar31 + 8) | 1L << ((ulong)uVar2 & 0x3f);
                          }
                          else {
                            uVar4 = uVar2 + 0x3f;
                            if (-1 < (int)uVar2) {
                              uVar4 = uVar2;
                            }
                            uVar29 = -(ulong)((uint)((int)uVar4 >> 6) >> 0x1f) & 0xfffffff800000000
                                     | (ulong)(uint)((int)uVar4 >> 6) << 3;
                            *(ulong *)(*(long *)(lVar31 + 8) + uVar29) =
                                 *(ulong *)(*(long *)(lVar31 + 8) + uVar29) |
                                 1L << ((ulong)uVar2 & 0x3f);
                          }
                        }
                      }
                    }
                    else if ((~*(uint *)(lVar31 + 4) & 0x60) == 0) goto LAB_01665734;
LAB_016657d0:
                    bVar11 = *(long *)(lVar36 + 0x28) - *(long *)(lVar36 + 0x20) != 4;
                    if (bVar11) {
                      iVar14 = *(int *)(lVar35 + 0x74) + -1;
                    }
                    else {
                      iVar14 = *(int *)(lVar36 + 0x70);
                    }
                    lVar31 = *(long *)(*(long *)this + 0x10);
                    this_01 = *(Zone **)(lVar31 + 8);
                    uVar29 = *(long *)(lVar31 + 0xb0) + (long)iVar14;
                    puVar18 = (undefined8 *)
                              (*(long *)(*(long *)(*(long *)(lVar31 + 0x88) +
                                                  (uVar29 >> 6 & 0x3fffffffffffff8)) +
                                        (uVar29 & 0x1ff) * 8) + (ulong)bVar11 * 8 + 8);
                    this_00 = (ParallelMove *)*puVar18;
                    if (this_00 == (ParallelMove *)0x0) {
                      this_00 = *(ParallelMove **)(this_01 + 0x10);
                      if ((ulong)(*(long *)(this_01 + 0x18) - (long)this_00) < 0x20) {
                        this_00 = (ParallelMove *)Zone::NewExpand(this_01,0x20);
                      }
                      else {
                        *(ParallelMove **)(this_01 + 0x10) = this_00 + 0x20;
                      }
                      *(undefined8 *)this_00 = 0;
                      *(undefined8 *)(this_00 + 8) = 0;
                      *(undefined8 *)(this_00 + 0x10) = 0;
                      *(Zone **)(this_00 + 0x18) = this_01;
                      *puVar18 = this_00;
                    }
                    ParallelMove::AddMove
                              (this_00,(InstructionOperand *)&local_68,
                               (InstructionOperand *)&local_70,*(Zone **)(this_00 + 0x18));
                  }
                }
              }
            }
            goto LAB_016654c0;
          }
LAB_01665464:
          iVar23 = iVar23 + 1;
          if (uVar13 != 0) {
            iVar14 = *(int *)(lVar26 + 4);
LAB_01665478:
            uVar29 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
            uVar29 = (uVar29 & 0xcccccccccccccccc) >> 2 | (uVar29 & 0x3333333333333333) << 2;
            uVar29 = (uVar29 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar29 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar29 = (uVar29 & 0xff00ff00ff00ff00) >> 8 | (uVar29 & 0xff00ff00ff00ff) << 8;
            uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 | (uVar29 & 0xffff0000ffff) << 0x10;
            uVar29 = LZCOUNT(uVar29 >> 0x20 | uVar29 << 0x20);
            iVar23 = iVar23 + (int)uVar29;
            uVar13 = (uVar13 >> (uVar29 & 0x3f)) >> 1;
            if (iVar14 <= iVar19) break;
            goto LAB_016653b4;
          }
          iVar14 = *(int *)(lVar26 + 4);
          uVar2 = iVar19 + 1;
          uVar29 = (ulong)uVar2;
          if ((int)uVar2 < iVar14) {
            uVar29 = (ulong)(int)uVar2;
            iVar23 = iVar19 << 6;
            do {
              uVar13 = *(ulong *)(*(long *)(lVar26 + 8) + uVar29 * 8);
              if (uVar13 != 0) {
                iVar23 = iVar23 + 0x40;
                iVar19 = (int)uVar29;
                goto LAB_01665478;
              }
              uVar29 = uVar29 + 1;
              iVar23 = iVar23 + 0x40;
            } while ((long)uVar29 < (long)iVar14);
          }
          uVar13 = 0;
          iVar19 = (int)uVar29;
        } while (iVar19 < iVar14);
      }
LAB_0166530c:
      plVar12 = plVar12 + 1;
    } while (plVar12 != plVar16);
    lVar15 = *(long *)this;
  }
  puVar18 = *(undefined8 **)(lVar15 + 0x88);
  puVar6 = *(undefined8 **)(lVar15 + 0x90);
  lVar36 = (long)puVar6 - (long)puVar18;
  if (puVar6 == puVar18) {
    return;
  }
  do {
    pTVar34 = (TopLevelLiveRange *)*puVar18;
    if ((pTVar34 != (TopLevelLiveRange *)0x0) && (*(long *)(pTVar34 + 0x10) != 0)) {
      if ((*(byte *)(lVar15 + 0x1d0) & 1) == 0) {
        if (pTVar34[0x80] != (TopLevelLiveRange)0x0) {
LAB_01665954:
          pLVar3 = (LiveRangeBoundArray *)((long)__s + (long)*(int *)(pTVar34 + 0x5c) * 0x10);
          lVar15 = *(long *)(*(long *)(lVar20 + 0x88) + (long)*(int *)(pTVar34 + 0x5c) * 8);
          if (*(long *)(pLVar3 + 8) == 0) {
            plVar12 = *(long **)(param_1 + 0x10);
            uVar13 = (long)*(int *)(lVar15 + 0x60) * 0x18 + 0x18;
            if ((ulong)(*(long *)(param_1 + 0x18) - (long)plVar12) < uVar13) {
              plVar12 = (long *)Zone::NewExpand(param_1,uVar13);
            }
            else {
              *(long **)(param_1 + 0x10) = plVar12 + (long)*(int *)(lVar15 + 0x60) * 3 + 3;
            }
            *(long **)(pLVar3 + 8) = plVar12;
            *(undefined8 *)pLVar3 = 0;
            do {
              bVar10 = *(byte *)(lVar15 + 4);
              *plVar12 = lVar15;
              *(undefined4 *)(plVar12 + 1) = **(undefined4 **)(lVar15 + 0x10);
              uVar7 = *(undefined4 *)(*(long *)(lVar15 + 8) + 4);
              *(byte *)(plVar12 + 2) = bVar10 & 1;
              *(undefined4 *)((long)plVar12 + 0xc) = uVar7;
              lVar15 = *(long *)(lVar15 + 0x28);
              plVar12 = plVar12 + 3;
              *(long *)pLVar3 = *(long *)pLVar3 + 1;
            } while (lVar15 != 0);
          }
          CommitSpillsInDeferredBlocks(this,pTVar34,pLVar3,param_1);
        }
      }
      else if ((~*(uint *)(pTVar34 + 4) & 0x60) == 0) goto LAB_01665954;
    }
    puVar18 = puVar18 + 1;
    if (puVar18 == puVar6) {
      return;
    }
    lVar15 = *(long *)this;
    if (lVar36 != *(long *)(lVar15 + 0x90) - *(long *)(lVar15 + 0x88)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","live_ranges_size == data()->live_ranges().size()");
    }
  } while( true );
  while (puVar18 = (undefined8 *)puVar18[2], puVar18 != (undefined8 *)0x0) {
LAB_016656fc:
    if ((*(ulong *)*puVar18 & 0x1c) == 4) {
      lVar17 = *(long *)this;
      goto LAB_01665720;
    }
  }
LAB_016654c0:
  piVar33 = piVar33 + 1;
  if (piVar33 == piVar5) goto LAB_01665464;
  goto LAB_016654cc;
}

