
/* v8::internal::compiler::LiveRangeBuilder::ProcessInstructions(v8::internal::compiler::InstructionBlock
   const*, v8::internal::BitVector*) */

void __thiscall
v8::internal::compiler::LiveRangeBuilder::ProcessInstructions
          (LiveRangeBuilder *this,InstructionBlock *param_1,BitVector *param_2)

{
  BitVector *pBVar1;
  LiveRangeBuilder *pLVar2;
  uint uVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  TopLevelLiveRange *pTVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  undefined1 uVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  BitVector *pBVar18;
  ulong uVar19;
  long *plVar20;
  LiveRangeBuilder *pLVar21;
  uint uVar22;
  undefined8 *puVar23;
  long *plVar24;
  LiveRangeBuilder *pLVar25;
  long *plVar26;
  uint *puVar27;
  ulong *puVar28;
  ulong uVar29;
  ulong *puVar30;
  uint uVar31;
  InstructionBlock IVar32;
  char cVar33;
  long local_b8;
  
  lVar16 = *(long *)this;
  iVar5 = *(int *)(param_1 + 0x70);
  if ((*(byte *)(lVar16 + 0x1d0) & 1) == 0) {
    IVar32 = (InstructionBlock)0x0;
  }
  else {
    IVar32 = param_1[0x78];
  }
  local_b8 = (long)*(int *)(param_1 + 0x74);
  if (*(int *)(param_1 + 0x74) <= iVar5) {
    return;
  }
  iVar6 = iVar5 << 2;
  pBVar1 = param_2 + 8;
  pLVar2 = this + 0x10;
  do {
    local_b8 = local_b8 + -1;
    uVar3 = (int)local_b8 << 2 | 2;
    uVar29 = *(long *)(*(long *)(lVar16 + 0x10) + 0xb0) + local_b8;
    uVar31 = (int)local_b8 << 2;
    lVar16 = *(long *)(*(long *)(*(long *)(*(long *)(lVar16 + 0x10) + 0x88) +
                                (uVar29 >> 6 & 0x3fffffffffffff8)) + (uVar29 & 0x1ff) * 8);
    uVar11 = *(uint *)(lVar16 + 4);
    if ((uVar11 & 0xff) != 0) {
      uVar29 = 0;
      puVar28 = (ulong *)(lVar16 + 0x28);
      do {
        uVar17 = *puVar28;
        if (((uVar17 & 7) == 2) || ((uVar17 & 7) == 1)) {
          pBVar18 = pBVar1;
          if (*(int *)(param_2 + 4) != 1) {
            iVar14 = (int)(uVar17 >> 3);
            iVar12 = iVar14 + 0x3f;
            if (-1 < iVar14) {
              iVar12 = iVar14;
            }
            pBVar18 = (BitVector *)(*(long *)(param_2 + 8) + (long)(iVar12 >> 6) * 8);
          }
          *(ulong *)pBVar18 = *(ulong *)pBVar18 & (1L << (uVar17 >> 3 & 0x3f) ^ 0xffffffffffffffffU)
          ;
        }
        if (((((local_b8 != iVar5) || (param_1[0x79] == (InstructionBlock)0x0)) ||
             (uVar17 = *puVar28, (uVar17 & 7) != 4)) ||
            (((uVar17 & 0x1c) != 4 || (10 < ((uint)(uVar17 >> 5) & 0xff))))) ||
           (uVar11 = uVar31, (int)((long)uVar17 >> 0x23) != 0)) {
          uVar11 = uVar3;
        }
        Define(this,uVar11,puVar28,0,0,IVar32);
        uVar29 = uVar29 + 1;
        puVar28 = puVar28 + 1;
        uVar11 = *(uint *)(lVar16 + 4);
      } while (uVar29 < (byte)uVar11);
    }
    if ((uVar11 >> 0x1e & 1) != 0) {
      lVar9 = *(long *)(*(long *)this + 0x20);
      if (0 < *(int *)(lVar9 + 0x18)) {
        lVar10 = 0;
        do {
          pTVar8 = (TopLevelLiveRange *)
                   FixedLiveRangeFor(this,*(undefined4 *)(*(long *)(lVar9 + 0x38) + lVar10 * 4),
                                     IVar32);
          TopLevelLiveRange::AddUseInterval
                    (pTVar8,uVar3,uVar31 | 3,**(undefined8 **)this,
                     *(uint *)(*(undefined8 **)this + 0x3a) >> 2 & 1);
          lVar10 = lVar10 + 1;
          lVar9 = *(long *)(*(long *)this + 0x20);
        } while (lVar10 < *(int *)(lVar9 + 0x18));
        uVar11 = *(uint *)(lVar16 + 4);
        if ((uVar11 >> 0x1e & 1) == 0) goto LAB_0165b8e0;
      }
      lVar9 = *(long *)(*(long *)this + 0x20);
      if (0 < *(int *)(lVar9 + 0x20)) {
        lVar10 = 0;
        do {
          pTVar8 = (TopLevelLiveRange *)
                   FixedFPLiveRangeFor(this,*(undefined4 *)(*(long *)(lVar9 + 0xc0) + lVar10 * 4),
                                       0xc,IVar32);
          TopLevelLiveRange::AddUseInterval
                    (pTVar8,uVar3,uVar31 | 3,**(undefined8 **)this,
                     *(uint *)(*(undefined8 **)this + 0x3a) >> 2 & 1);
          lVar10 = lVar10 + 1;
          lVar9 = *(long *)(*(long *)this + 0x20);
        } while (lVar10 < *(int *)(lVar9 + 0x20));
        uVar11 = *(uint *)(lVar16 + 4);
      }
    }
LAB_0165b8e0:
    if ((uVar11 & 0xffff00) != 0) {
      uVar29 = 0;
      do {
        puVar28 = (ulong *)(lVar16 + (uVar29 + (uVar11 & 0xff)) * 8 + 0x28);
        uVar17 = *puVar28;
        if ((uVar17 & 7) != 3) {
          uVar11 = uVar31 | 3;
          if ((uVar17 & 7) == 1) {
            uVar11 = uVar3;
            if ((uVar17 & 0x8000000000) != 0) {
              uVar11 = uVar31 | 3;
            }
            iVar12 = (int)(uVar17 >> 3);
            pBVar18 = pBVar1;
            if (*(int *)(param_2 + 4) != 1) {
              iVar14 = iVar12 + 0x3f;
              if (-1 < iVar12) {
                iVar14 = iVar12;
              }
              pBVar18 = (BitVector *)(*(long *)(param_2 + 8) + (long)(iVar14 >> 6) * 8);
            }
            *(ulong *)pBVar18 = *(ulong *)pBVar18 | 1L << (uVar17 >> 3 & 0x3f);
            if ((*puVar28 & 0x7800000000) == 0x6800000000) {
              uVar22 = *(uint *)(*(RegisterAllocationData **)this + 0x1d0);
              lVar9 = RegisterAllocationData::GetOrCreateLiveRangeFor
                                (*(RegisterAllocationData **)this,iVar12);
              if ((uVar22 & 1) == 0) {
                uVar22 = 6;
                if (((*(uint *)(lVar9 + 4) ^ 0xffffffff) & 6) != 0) {
                  uVar22 = 4;
                }
                uVar22 = uVar22 | *(uint *)(lVar9 + 4) & 0xfffffff9;
              }
              else {
                uVar7 = *(uint *)(lVar9 + 4) >> 1 & 3;
                uVar22 = 1;
                if (param_1[0x78] == (InstructionBlock)0x0) {
                  uVar22 = 2;
                }
                if (uVar22 <= uVar7) {
                  uVar22 = uVar7;
                }
                uVar22 = *(uint *)(lVar9 + 4) & 0xfffffff9 | uVar22 << 1;
              }
              *(uint *)(lVar9 + 4) = uVar22;
            }
          }
          Use(this,iVar6,uVar11,puVar28,0,0,IVar32);
          uVar11 = *(uint *)(lVar16 + 4);
        }
        uVar29 = uVar29 + 1;
      } while (uVar29 < (uVar11 >> 8 & 0xffff));
    }
    if ((uVar11 & 0x3f000000) != 0) {
      uVar29 = 0;
      do {
        puVar28 = (ulong *)(lVar16 + (uVar29 + ((uVar11 >> 8 & 0xffff) + (uVar11 & 0xff))) * 8 +
                           0x28);
        if (((uVar11 >> 0x1e & 1) == 0) ||
           (((uVar17 = *puVar28, (uVar17 & 0x1c) != 4 || (10 < ((uint)(uVar17 >> 5) & 0xff))) &&
            (((uVar17 & 7) != 1 ||
             (((uVar17 >> 0x23 & 1) != 0 && (1 < ((uint)(uVar17 >> 0x24) & 7) - 3)))))))) {
          Use(this,iVar6,uVar31 | 3,puVar28,0,0,IVar32);
          Define(this,uVar3,puVar28,0,0,IVar32);
          uVar11 = *(uint *)(lVar16 + 4);
        }
        uVar29 = uVar29 + 1;
      } while (uVar29 < (uVar11 >> 0x18 & 0x3f));
    }
    puVar27 = &DAT_01a5b298;
    do {
      puVar23 = *(undefined8 **)(lVar16 + (ulong)*puVar27 * 8 + 8);
      if (puVar23 != (undefined8 *)0x0) {
        puVar4 = (undefined8 *)*puVar23;
        puVar23 = (undefined8 *)puVar23[1];
        uVar3 = uVar31 & 0xfffffffe;
        uVar31 = uVar31 | 1;
        if (*puVar27 != 1) {
          uVar31 = uVar3;
        }
        for (; puVar4 != puVar23; puVar4 = puVar4 + 1) {
          puVar30 = (ulong *)*puVar4;
          puVar28 = puVar30 + 1;
          uVar29 = *puVar28;
          uVar3 = (uint)uVar29 & 7;
          if (uVar3 - 2 < 2) {
            cVar33 = '\0';
          }
          else if (uVar3 == 4) {
            if (((uVar29 & 0x1c) == 4) && (((uint)(uVar29 >> 5) & 0xff) < 0xb)) {
              cVar33 = '\x01';
            }
            else {
              cVar33 = (uVar29 & 0x1c) == 4 && 10 < ((uint)uVar29 >> 5 & 0xff);
            }
          }
          else {
            if (uVar3 != 1) goto LAB_0165bf70;
            cVar33 = '\x04';
          }
          if ((uVar29 & 7) == 1) {
            uVar29 = uVar29 >> 3;
            iVar12 = (int)uVar29;
            lVar9 = RegisterAllocationData::GetOrCreateLiveRangeFor
                              (*(RegisterAllocationData **)this,iVar12);
            if ((*(uint *)(lVar9 + 4) >> 3 & 1) != 0) {
              if ((*(uint *)(lVar9 + 4) >> 4 & 1) != 0) {
                puVar28 = *(ulong **)(lVar9 + 0x40);
                lVar9 = 0;
                cVar33 = (puVar28 != (ulong *)0x0) << 1;
                goto LAB_0165bdbc;
              }
              plVar20 = (long *)(*(long *)this + 0x30);
              plVar26 = (long *)*plVar20;
              plVar24 = plVar20;
              if (plVar26 == (long *)0x0) {
LAB_0165bcf8:
                plVar24 = plVar20;
              }
              else {
                do {
                  if (iVar12 <= (int)plVar26[4]) {
                    plVar24 = plVar26;
                  }
                  plVar26 = (long *)plVar26[(int)plVar26[4] < iVar12];
                } while (plVar26 != (long *)0x0);
                if ((plVar24 == plVar20) || (iVar12 < (int)plVar24[4])) goto LAB_0165bcf8;
              }
              puVar28 = (ulong *)plVar24[5];
              lVar9 = 0;
              cVar33 = '\x03';
              goto LAB_0165bdbc;
            }
            pBVar18 = pBVar1;
            if (*(int *)(param_2 + 4) != 1) {
              iVar14 = iVar12 + 0x3f;
              if (-1 < iVar12) {
                iVar14 = iVar12;
              }
              pBVar18 = (BitVector *)(*(long *)pBVar1 + (long)(iVar14 >> 6) * 8);
            }
            iVar14 = iVar12 + 0x3f;
            if (-1 < iVar12) {
              iVar14 = iVar12;
            }
            uVar17 = 1L << (uVar29 & 0x3f);
            if ((*(ulong *)pBVar18 & uVar17) != 0) {
              uVar19 = *puVar30;
              uVar3 = (uint)uVar19 & 7;
              if (uVar3 - 2 < 2) {
                uVar13 = 0;
              }
              else if (uVar3 == 4) {
                if (((uVar19 & 0x1c) == 4) && (((uint)(uVar19 >> 5) & 0xff) < 0xb)) {
                  uVar13 = 1;
                }
                else {
                  uVar13 = (uVar19 & 0x1c) == 4 && 10 < ((uint)uVar19 >> 5 & 0xff);
                }
              }
              else {
                if (uVar3 != 1) {
LAB_0165bf70:
                    /* WARNING: Subroutine does not return */
                  V8_Fatal("unreachable code");
                }
                uVar13 = 4;
              }
              lVar9 = Define(this,uVar31,puVar28,puVar30,uVar13,IVar32);
              if (*(int *)(param_2 + 4) == 1) {
                *(ulong *)pBVar1 = *(ulong *)pBVar1 & (1L << (uVar29 & 0x3f) ^ 0xffffffffffffffffU);
              }
              else {
                uVar29 = -(ulong)((uint)(iVar14 >> 6) >> 0x1f) & 0xfffffff800000000 |
                         (ulong)(uint)(iVar14 >> 6) << 3;
                *(ulong *)(*(long *)(param_2 + 8) + uVar29) =
                     *(ulong *)(*(long *)(param_2 + 8) + uVar29) & (uVar17 ^ 0xffffffffffffffff);
              }
              iVar12 = -1;
              goto LAB_0165bdbc;
            }
            *puVar30 = 0;
            puVar30[1] = 0;
          }
          else {
            Define(this,uVar31,puVar28,0,0,IVar32);
            lVar9 = 0;
            iVar12 = -1;
LAB_0165bdbc:
            lVar10 = Use(this,iVar6,uVar31,puVar30,puVar28,cVar33,IVar32);
            uVar29 = *puVar30;
            if ((uVar29 & 7) == 1) {
              pBVar18 = pBVar1;
              if (*(int *)(param_2 + 4) != 1) {
                iVar15 = (int)(uVar29 >> 3);
                iVar14 = iVar15 + 0x3f;
                if (-1 < iVar15) {
                  iVar14 = iVar15;
                }
                pBVar18 = (BitVector *)(*(long *)(param_2 + 8) + (long)(iVar14 >> 6) * 8);
              }
              *(ulong *)pBVar18 = *(ulong *)pBVar18 | 1L << (uVar29 >> 3 & 0x3f);
            }
            if ((lVar9 != 0) && (lVar10 != 0)) {
              if ((*(uint *)(lVar9 + 0x1c) & 0x1c) == 0x10) {
                *(long *)(lVar9 + 8) = lVar10;
                *(uint *)(lVar9 + 0x1c) = *(uint *)(lVar9 + 0x1c) & 0xffffffe3 | 8;
              }
              if ((*(uint *)(lVar10 + 0x1c) & 0x1c) == 0x10) {
                *(long *)(lVar10 + 8) = lVar9;
                *(uint *)(lVar10 + 0x1c) = *(uint *)(lVar10 + 0x1c) & 0xffffffe3 | 8;
              }
            }
            if ((iVar12 != -1) &&
               (pLVar25 = *(LiveRangeBuilder **)pLVar2, pLVar21 = pLVar2,
               pLVar25 != (LiveRangeBuilder *)0x0)) {
              do {
                if (*(ulong **)(pLVar25 + 0x20) >= puVar30) {
                  pLVar21 = pLVar25;
                }
                pLVar25 = *(LiveRangeBuilder **)
                           (pLVar25 + (ulong)(*(ulong **)(pLVar25 + 0x20) < puVar30) * 8);
              } while (pLVar25 != (LiveRangeBuilder *)0x0);
              if ((pLVar21 != pLVar2) && (*(ulong **)(pLVar21 + 0x20) <= puVar30)) {
                lVar9 = *(long *)(pLVar21 + 0x28);
                if ((*(uint *)(lVar9 + 0x1c) & 0x1c) == 0x10) {
                  *(long *)(lVar9 + 8) = lVar10;
                  *(uint *)(lVar9 + 0x1c) = *(uint *)(lVar9 + 0x1c) & 0xffffffe3 | 8;
                }
              }
            }
          }
        }
      }
      puVar27 = puVar27 + 1;
    } while (puVar27 != &DAT_01a5b2a0);
    if (local_b8 <= iVar5) {
      return;
    }
    lVar16 = *(long *)this;
  } while( true );
}

