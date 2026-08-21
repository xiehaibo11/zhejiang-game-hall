
/* ClipperLib::Clipper::JoinCommonEdges() */

void __thiscall ClipperLib::Clipper::JoinCommonEdges(Clipper *this)

{
  long *plVar1;
  OutPt *pOVar2;
  OutPt *pOVar3;
  Clipper CVar4;
  OutRec OVar5;
  long lVar6;
  int iVar7;
  OutRec *pOVar8;
  ulong uVar9;
  long lVar10;
  OutRec *pOVar11;
  OutRec *pOVar12;
  OutRec *pOVar13;
  OutRec *pOVar14;
  undefined8 *puVar15;
  ulong uVar16;
  OutPt *pOVar17;
  long lVar18;
  Join *pJVar19;
  OutPt *pOVar20;
  OutPt *pOVar21;
  undefined8 *puVar22;
  ulong uVar23;
  long lVar24;
  double dVar25;
  OutRec *local_80;
  long local_78;
  
  lVar6 = tpidr_el0;
  local_78 = *(long *)(lVar6 + 0x28);
  lVar10 = *(long *)(this + 0x20);
  if (*(long *)(this + 0x28) == lVar10) {
LAB_010353e4:
    if (*(long *)(lVar6 + 0x28) == local_78) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  uVar23 = 0;
LAB_01034eec:
  pJVar19 = *(Join **)(lVar10 + uVar23 * 8);
  lVar10 = *(long *)(this + 8);
  pOVar14 = *(OutRec **)(lVar10 + (long)**(int **)pJVar19 * 8);
  do {
    pOVar13 = pOVar14;
    pOVar14 = *(OutRec **)(lVar10 + (long)*(int *)pOVar13 * 8);
  } while (pOVar13 != pOVar14);
  pOVar14 = *(OutRec **)(lVar10 + (long)**(int **)(pJVar19 + 8) * 8);
  do {
    pOVar12 = pOVar14;
    pOVar14 = *(OutRec **)(lVar10 + (long)*(int *)pOVar12 * 8);
  } while (pOVar12 != pOVar14);
  if ((*(long *)(pOVar13 + 0x18) != 0) && (*(long *)(pOVar12 + 0x18) != 0)) {
    pOVar14 = pOVar13;
    pOVar8 = pOVar13;
    if (pOVar13 != pOVar12) {
      do {
        pOVar14 = *(OutRec **)(pOVar14 + 8);
        pOVar8 = pOVar12;
        if (pOVar14 == pOVar12) goto LAB_01034f9c;
        pOVar11 = pOVar12;
      } while (pOVar14 != (OutRec *)0x0);
      do {
        pOVar11 = *(OutRec **)(pOVar11 + 8);
        pOVar8 = pOVar13;
        if (pOVar11 == pOVar13) goto LAB_01034f9c;
      } while (pOVar11 != (OutRec *)0x0);
      pOVar8 = (OutRec *)GetLowermostRec(pOVar13,pOVar12);
    }
LAB_01034f9c:
    uVar9 = JoinPoints(this,pJVar19,pOVar13,pOVar12);
    if ((uVar9 & 1) != 0) {
      if (pOVar13 == pOVar12) {
        *(undefined8 *)(pOVar13 + 0x18) = *(undefined8 *)pJVar19;
        *(undefined8 *)(pOVar13 + 0x20) = 0;
        local_80 = operator_new(0x28);
        *(undefined2 *)(local_80 + 4) = 0;
        *(undefined8 *)(local_80 + 0x20) = 0;
        *(undefined8 *)(local_80 + 0x18) = 0;
        *(undefined8 *)(local_80 + 0x10) = 0;
        *(undefined8 *)(local_80 + 8) = 0;
        puVar22 = *(undefined8 **)(this + 0x10);
        if (puVar22 == *(undefined8 **)(this + 0x18)) {
          std::__ndk1::vector<ClipperLib::OutRec*,std::__ndk1::allocator<ClipperLib::OutRec*>>::
          __push_back_slow_path<ClipperLib::OutRec*const&>
                    ((vector<ClipperLib::OutRec*,std::__ndk1::allocator<ClipperLib::OutRec*>> *)
                     (this + 8),&local_80);
          puVar15 = *(undefined8 **)(this + 0x10);
        }
        else {
          puVar15 = puVar22 + 1;
          *puVar22 = local_80;
          *(undefined8 **)(this + 0x10) = puVar15;
        }
        pOVar14 = local_80;
        puVar22 = *(undefined8 **)(this + 8);
        uVar9 = (long)puVar15 - (long)puVar22;
        iVar7 = (int)(uVar9 >> 3) + -1;
        *(int *)local_80 = iVar7;
        pOVar20 = *(OutPt **)(pJVar19 + 8);
        *(OutPt **)(local_80 + 0x18) = pOVar20;
        pOVar17 = pOVar20;
        do {
          *(int *)pOVar17 = iVar7;
          pOVar17 = *(OutPt **)(pOVar17 + 0x20);
        } while (pOVar17 != pOVar20);
        CVar4 = this[0xa5];
        uVar16 = (long)uVar9 >> 3;
        if ((CVar4 != (Clipper)0x0) && (uVar9 != 8)) {
          uVar9 = 0;
          do {
            lVar10 = puVar22[uVar9];
            lVar24 = *(long *)(lVar10 + 0x18);
            if (lVar24 != 0) {
              for (pOVar12 = *(OutRec **)(lVar10 + 8);
                  (pOVar12 != (OutRec *)0x0 && (*(long *)(pOVar12 + 0x18) == 0));
                  pOVar12 = *(OutRec **)(pOVar12 + 8)) {
              }
              if ((pOVar12 == pOVar13) && (lVar18 = lVar24, *(OutRec *)(lVar10 + 4) != pOVar13[4]))
              {
                do {
                  iVar7 = PointInPolygon((IntPoint *)(lVar18 + 8),pOVar20);
                  if (-1 < iVar7) {
                    if (iVar7 == 0) goto LAB_010350e0;
                    break;
                  }
                  plVar1 = (long *)(lVar18 + 0x18);
                  lVar18 = *plVar1;
                } while (*plVar1 != lVar24);
                *(OutRec **)(lVar10 + 8) = pOVar14;
              }
            }
LAB_010350e0:
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar16 - 1);
        }
        pOVar21 = *(OutPt **)(pOVar13 + 0x18);
        pOVar17 = pOVar20;
        do {
          iVar7 = PointInPolygon((IntPoint *)(pOVar17 + 8),pOVar21);
          if (-1 < iVar7) {
            pOVar17 = pOVar21;
            if (iVar7 == 0) goto LAB_010351e0;
            break;
          }
          pOVar17 = *(OutPt **)(pOVar17 + 0x18);
        } while (pOVar17 != pOVar20);
        OVar5 = pOVar13[4];
        *(OutRec **)(pOVar14 + 8) = pOVar13;
        pOVar14[4] = (OutRec)((byte)OVar5 ^ 1);
        if ((CVar4 != (Clipper)0x0) && (puVar15 != puVar22)) {
          uVar9 = 0;
          do {
            if (*(OutRec **)(puVar22[uVar9] + 8) == pOVar14) {
              *(OutRec **)(puVar22[uVar9] + 8) = pOVar13;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar16);
        }
        if (pOVar20 != (OutPt *)0x0) {
          dVar25 = 0.0;
          pOVar17 = pOVar20;
          do {
            pOVar21 = pOVar17 + 0x20;
            pOVar2 = pOVar17 + 8;
            pOVar3 = pOVar17 + 0x10;
            pOVar17 = *(OutPt **)(pOVar17 + 0x18);
            dVar25 = dVar25 + (double)(*(long *)pOVar2 + *(long *)(*(long *)pOVar21 + 8)) *
                              (double)(*(long *)(*(long *)pOVar21 + 0x10) - *(long *)pOVar3);
          } while (pOVar17 != pOVar20);
          if ((pOVar20 != (OutPt *)0x0) &&
             (pOVar17 = pOVar20, (bool)((byte)this[0xa4] ^ (byte)OVar5 ^ 1) == 0.0 < dVar25 * 0.5))
          {
            do {
              pOVar21 = *(OutPt **)(pOVar17 + 0x18);
              *(undefined8 *)(pOVar17 + 0x18) = *(undefined8 *)(pOVar17 + 0x20);
              *(OutPt **)(pOVar17 + 0x20) = pOVar21;
              pOVar17 = pOVar21;
            } while (pOVar21 != pOVar20);
          }
        }
      }
      else {
        *(long *)(pOVar12 + 0x18) = 0;
        *(undefined8 *)(pOVar12 + 0x20) = 0;
        *(undefined4 *)pOVar12 = *(undefined4 *)pOVar13;
        pOVar13[4] = pOVar8[4];
        if (pOVar8 == pOVar12) {
          *(undefined8 *)(pOVar13 + 8) = *(undefined8 *)(pOVar12 + 8);
        }
        *(OutRec **)(pOVar12 + 8) = pOVar13;
        if (this[0xa5] != (Clipper)0x0) {
          lVar10 = *(long *)(this + 8);
          lVar24 = *(long *)(this + 0x10) - lVar10;
          if (lVar24 != 0) {
            uVar9 = 0;
            do {
              lVar18 = *(long *)(lVar10 + uVar9 * 8);
              if (*(OutRec **)(lVar18 + 8) == pOVar12) {
                *(OutRec **)(lVar18 + 8) = pOVar13;
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < (ulong)(lVar24 >> 3));
          }
        }
      }
    }
  }
  goto LAB_01034ed8;
  while (pOVar17 = *(OutPt **)(pOVar17 + 0x18), pOVar17 != pOVar21) {
LAB_010351e0:
    iVar7 = PointInPolygon((IntPoint *)(pOVar17 + 8),pOVar20);
    if (-1 < iVar7) {
      OVar5 = pOVar13[4];
      pOVar14[4] = OVar5;
      if (iVar7 != 0) goto LAB_01035298;
      *(undefined8 *)(pOVar14 + 8) = *(undefined8 *)(pOVar13 + 8);
      if ((CVar4 != (Clipper)0x0) && (puVar15 != puVar22)) {
        uVar9 = 0;
        do {
          lVar10 = puVar22[uVar9];
          lVar24 = *(long *)(lVar10 + 0x18);
          if ((lVar24 != 0) && (lVar18 = lVar24, *(OutRec **)(lVar10 + 8) == pOVar13)) {
            do {
              iVar7 = PointInPolygon((IntPoint *)(lVar18 + 8),pOVar20);
              if (-1 < iVar7) {
                if (iVar7 == 0) goto LAB_01035398;
                break;
              }
              plVar1 = (long *)(lVar18 + 0x18);
              lVar18 = *plVar1;
            } while (*plVar1 != lVar24);
            *(OutRec **)(lVar10 + 8) = pOVar14;
          }
LAB_01035398:
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar16);
      }
      goto LAB_01034ed8;
    }
  }
  OVar5 = pOVar13[4];
  pOVar14[4] = OVar5;
LAB_01035298:
  pOVar13[4] = (OutRec)((byte)OVar5 ^ 1);
  *(undefined8 *)(pOVar14 + 8) = *(undefined8 *)(pOVar13 + 8);
  *(OutRec **)(pOVar13 + 8) = pOVar14;
  if ((CVar4 != (Clipper)0x0) && (puVar15 != puVar22)) {
    uVar9 = 0;
    do {
      if (*(OutRec **)(puVar22[uVar9] + 8) == pOVar13) {
        *(OutRec **)(puVar22[uVar9] + 8) = pOVar14;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar16);
  }
  if (pOVar21 != (OutPt *)0x0) {
    dVar25 = 0.0;
    pOVar17 = pOVar21;
    do {
      pOVar20 = pOVar17 + 0x20;
      pOVar2 = pOVar17 + 8;
      pOVar3 = pOVar17 + 0x10;
      pOVar17 = *(OutPt **)(pOVar17 + 0x18);
      dVar25 = dVar25 + (double)(*(long *)pOVar2 + *(long *)(*(long *)pOVar20 + 8)) *
                        (double)(*(long *)(*(long *)pOVar20 + 0x10) - *(long *)pOVar3);
    } while (pOVar17 != pOVar21);
    if ((pOVar21 != (OutPt *)0x0) &&
       (pOVar17 = pOVar21, (bool)((byte)this[0xa4] ^ (byte)OVar5 ^ 1) == 0.0 < dVar25 * 0.5)) {
      do {
        pOVar20 = *(OutPt **)(pOVar17 + 0x18);
        *(undefined8 *)(pOVar17 + 0x18) = *(undefined8 *)(pOVar17 + 0x20);
        *(OutPt **)(pOVar17 + 0x20) = pOVar20;
        pOVar17 = pOVar20;
      } while (pOVar20 != pOVar21);
    }
  }
LAB_01034ed8:
  lVar10 = *(long *)(this + 0x20);
  uVar23 = uVar23 + 1;
  if ((ulong)(*(long *)(this + 0x28) - lVar10 >> 3) <= uVar23) goto LAB_010353e4;
  goto LAB_01034eec;
}

