
/* ClipperLib::Clipper::InsertLocalMinimaIntoAEL(long long) */

void __thiscall ClipperLib::Clipper::InsertLocalMinimaIntoAEL(Clipper *this,longlong param_1)

{
  vector<ClipperLib::Join*,std::__ndk1::allocator<ClipperLib::Join*>> *this_00;
  Clipper *pCVar1;
  TEdge *pTVar2;
  undefined8 *puVar3;
  TEdge *pTVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  __tree_node_base *p_Var8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  TEdge *pTVar16;
  long lVar17;
  Clipper *pCVar18;
  long lVar19;
  TEdge *pTVar20;
  Clipper *pCVar21;
  Clipper *pCVar22;
  Join *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  lVar9 = *(long *)(*(long *)this + -0x18);
  plVar11 = *(long **)(this + lVar9 + 8);
  if (plVar11 == (long *)0x0) {
LAB_01034780:
    if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  this_00 = (vector<ClipperLib::Join*,std::__ndk1::allocator<ClipperLib::Join*>> *)(this + 0x20);
  pCVar1 = this + 0x78;
LAB_010341ec:
  if (*plVar11 == param_1) {
    pTVar2 = (TEdge *)plVar11[1];
    pTVar4 = (TEdge *)plVar11[2];
    if (*(long *)(this + lVar9 + 8) != 0) {
      *(undefined8 *)(this + lVar9 + 8) = *(undefined8 *)(*(long *)(this + lVar9 + 8) + 0x18);
    }
    if (pTVar2 != (TEdge *)0x0) {
      InsertEdgeIntoAEL(this,pTVar2,(TEdge *)0x0);
      pCVar18 = pCVar1;
      pCVar22 = pCVar1;
      if (pTVar4 == (TEdge *)0x0) {
        SetWindingCount(this,pTVar2);
        uVar6 = IsContributing(this,pTVar2);
        if ((uVar6 & 1) == 0) {
          lVar9 = 0;
        }
        else {
          lVar9 = AddOutPt(this,pTVar2,(IntPoint *)pTVar2);
        }
        lVar17 = *(long *)(pTVar2 + 0x28);
        pCVar21 = *(Clipper **)pCVar1;
        while (pCVar21 != (Clipper *)0x0) {
          while (pCVar22 = pCVar21, *(long *)(pCVar22 + 0x20) < lVar17) {
            pCVar18 = pCVar22;
            pCVar21 = *(Clipper **)pCVar22;
            if (*(Clipper **)pCVar22 == (Clipper *)0x0) goto LAB_010345d0;
          }
          if (*(long *)(pCVar22 + 0x20) <= lVar17) break;
          pCVar18 = pCVar22 + 8;
          pCVar21 = *(Clipper **)pCVar18;
        }
      }
      else {
        InsertEdgeIntoAEL(this,pTVar4,pTVar2);
        SetWindingCount(this,pTVar2);
        *(undefined8 *)(pTVar4 + 0x54) = *(undefined8 *)(pTVar2 + 0x54);
        uVar6 = IsContributing(this,pTVar2);
        if ((uVar6 & 1) == 0) {
          lVar9 = 0;
        }
        else {
          lVar9 = AddLocalMinPoly(this,pTVar2,pTVar4,(IntPoint *)pTVar2);
        }
        lVar17 = *(long *)(pTVar2 + 0x28);
        pCVar21 = *(Clipper **)pCVar1;
        while (pCVar21 != (Clipper *)0x0) {
          while (pCVar22 = pCVar21, *(long *)(pCVar22 + 0x20) < lVar17) {
            pCVar18 = pCVar22;
            pCVar21 = *(Clipper **)pCVar22;
            if (*(Clipper **)pCVar22 == (Clipper *)0x0) goto LAB_010345d0;
          }
          if (*(long *)(pCVar22 + 0x20) <= lVar17) break;
          pCVar18 = pCVar22 + 8;
          pCVar21 = *(Clipper **)pCVar18;
        }
      }
      lVar10 = *(long *)pCVar18;
      goto joined_r0x010345c4;
    }
    InsertEdgeIntoAEL(this,pTVar4,(TEdge *)0x0);
    SetWindingCount(this,pTVar4);
    uVar6 = IsContributing(this,pTVar4);
    lVar9 = 0;
    if ((uVar6 & 1) != 0) {
      lVar9 = AddOutPt(this,pTVar4,(IntPoint *)pTVar4);
    }
    goto joined_r0x01034634;
  }
  goto LAB_01034780;
LAB_010345d0:
  lVar10 = *(long *)pCVar22;
  pCVar18 = pCVar22;
joined_r0x010345c4:
  if (lVar10 == 0) {
    p_Var8 = operator_new(0x28);
    *(long *)(p_Var8 + 0x20) = lVar17;
    *(undefined8 *)p_Var8 = 0;
    *(undefined8 *)(p_Var8 + 8) = 0;
    *(Clipper **)(p_Var8 + 0x10) = pCVar22;
    *(__tree_node_base **)pCVar18 = p_Var8;
    if (**(long **)(this + 0x70) != 0) {
      *(long *)(this + 0x70) = **(long **)(this + 0x70);
      p_Var8 = *(__tree_node_base **)pCVar18;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x78),p_Var8);
    *(long *)(this + 0x80) = *(long *)(this + 0x80) + 1;
  }
joined_r0x01034634:
  if (pTVar4 != (TEdge *)0x0) {
    if (*(long *)(pTVar4 + 0x38) == 0) {
      lVar17 = *(long *)(this + 0x90);
      if (lVar17 == 0) {
        *(TEdge **)(this + 0x90) = pTVar4;
        *(undefined8 *)(pTVar4 + 0x88) = 0;
        *(undefined8 *)(pTVar4 + 0x90) = 0;
      }
      else {
        *(long *)(pTVar4 + 0x88) = lVar17;
        *(undefined8 *)(pTVar4 + 0x90) = 0;
        *(TEdge **)(lVar17 + 0x90) = pTVar4;
        *(TEdge **)(this + 0x90) = pTVar4;
      }
    }
    else {
      lVar17 = *(long *)(pTVar4 + 0x28);
      pCVar21 = *(Clipper **)pCVar1;
      pCVar18 = pCVar1;
      pCVar22 = pCVar1;
      while (pCVar21 != (Clipper *)0x0) {
        while (pCVar22 = pCVar21, *(long *)(pCVar22 + 0x20) < lVar17) {
          pCVar18 = pCVar22;
          pCVar21 = *(Clipper **)pCVar22;
          if (*(Clipper **)pCVar22 == (Clipper *)0x0) {
            lVar10 = *(long *)pCVar22;
            goto joined_r0x01034644;
          }
        }
        if (*(long *)(pCVar22 + 0x20) <= lVar17) break;
        pCVar18 = pCVar22 + 8;
        pCVar21 = *(Clipper **)pCVar18;
      }
      lVar10 = *(long *)pCVar18;
joined_r0x01034644:
      if (lVar10 == 0) {
        p_Var8 = operator_new(0x28);
        *(long *)(p_Var8 + 0x20) = lVar17;
        *(undefined8 *)p_Var8 = 0;
        *(undefined8 *)(p_Var8 + 8) = 0;
        *(Clipper **)(p_Var8 + 0x10) = pCVar22;
        *(__tree_node_base **)pCVar18 = p_Var8;
        if (**(long **)(this + 0x70) != 0) {
          *(long *)(this + 0x70) = **(long **)(this + 0x70);
          p_Var8 = *(__tree_node_base **)pCVar18;
        }
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                  (*(__tree_node_base **)(this + 0x78),p_Var8);
        *(long *)(this + 0x80) = *(long *)(this + 0x80) + 1;
      }
    }
    if (pTVar2 != (TEdge *)0x0) {
      if ((lVar9 != 0) && (*(long *)(pTVar4 + 0x38) == 0)) {
        lVar17 = *(long *)(this + 0x38);
        lVar10 = *(long *)(this + 0x40);
        if ((lVar10 != lVar17) && (*(int *)(pTVar4 + 0x50) != 0)) {
          uVar6 = 0;
          do {
            plVar11 = *(long **)(lVar17 + uVar6 * 8);
            lVar12 = *(long *)pTVar4;
            lVar15 = *(long *)(pTVar4 + 0x20);
            lVar19 = *plVar11;
            lVar13 = plVar11[2];
            lVar14 = *(long *)(lVar19 + 8);
            lVar7 = lVar13;
            if (lVar14 <= lVar12 == lVar14 < lVar15) {
              if (((((lVar14 < lVar15 != lVar13 <= lVar15) || (lVar12 < lVar13 != lVar15 <= lVar13))
                   || (lVar12 <= lVar14 != lVar12 < lVar13)) ||
                  ((lVar14 == lVar12 && (lVar7 = lVar15, lVar13 == lVar15)))) ||
                 ((lVar14 == lVar15 && (lVar7 = lVar12, lVar13 == lVar12)))) goto LAB_010343ac;
            }
            else {
LAB_010343ac:
              lVar17 = plVar11[3];
              local_70 = operator_new(0x20);
              *(long *)local_70 = lVar19;
              *(long *)(local_70 + 8) = lVar9;
              *(long *)(local_70 + 0x10) = lVar7;
              *(long *)(local_70 + 0x18) = lVar17;
              puVar3 = *(undefined8 **)(this + 0x28);
              if (puVar3 == *(undefined8 **)(this + 0x30)) {
                std::__ndk1::vector<ClipperLib::Join*,std::__ndk1::allocator<ClipperLib::Join*>>::
                __push_back_slow_path<ClipperLib::Join*const&>(this_00,&local_70);
              }
              else {
                *puVar3 = local_70;
                *(undefined8 **)(this + 0x28) = puVar3 + 1;
              }
              lVar17 = *(long *)(this + 0x38);
              lVar10 = *(long *)(this + 0x40);
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < (ulong)(lVar10 - lVar17 >> 3));
        }
      }
      if ((((-1 < *(int *)(pTVar2 + 0x5c)) &&
           (pTVar16 = *(TEdge **)(pTVar2 + 0x80), pTVar16 != (TEdge *)0x0)) &&
          ((*(long *)(pTVar16 + 0x10) == *(long *)pTVar2 &&
           (((-1 < *(int *)(pTVar16 + 0x5c) &&
             (uVar6 = SlopesEqual(pTVar16,pTVar2,(bool)this[*(long *)(*(long *)this + -0x18) + 0x18]
                                 ), (uVar6 & 1) != 0)) && (*(int *)(pTVar2 + 0x50) != 0)))))) &&
         (*(int *)(pTVar16 + 0x50) != 0)) {
        lVar7 = AddOutPt(this,pTVar16,(IntPoint *)pTVar2);
        lVar17 = *(long *)(pTVar2 + 0x20);
        lVar10 = *(long *)(pTVar2 + 0x28);
        local_70 = operator_new(0x20);
        *(long *)local_70 = lVar9;
        *(long *)(local_70 + 8) = lVar7;
        *(long *)(local_70 + 0x10) = lVar17;
        *(long *)(local_70 + 0x18) = lVar10;
        puVar3 = *(undefined8 **)(this + 0x28);
        if (puVar3 == *(undefined8 **)(this + 0x30)) {
          std::__ndk1::vector<ClipperLib::Join*,std::__ndk1::allocator<ClipperLib::Join*>>::
          __push_back_slow_path<ClipperLib::Join*const&>(this_00,&local_70);
        }
        else {
          *puVar3 = local_70;
          *(undefined8 **)(this + 0x28) = puVar3 + 1;
        }
      }
      pTVar16 = *(TEdge **)(pTVar2 + 0x78);
      if (pTVar16 != pTVar4) {
        if (((-1 < *(int *)(pTVar4 + 0x5c)) &&
            (pTVar20 = *(TEdge **)(pTVar4 + 0x80), -1 < *(int *)(pTVar20 + 0x5c))) &&
           ((uVar6 = SlopesEqual(pTVar20,pTVar4,(bool)this[*(long *)(*(long *)this + -0x18) + 0x18])
            , (uVar6 & 1) != 0 &&
            ((*(int *)(pTVar4 + 0x50) != 0 && (*(int *)(pTVar20 + 0x50) != 0)))))) {
          lVar7 = AddOutPt(this,pTVar20,(IntPoint *)pTVar4);
          lVar17 = *(long *)(pTVar4 + 0x20);
          lVar10 = *(long *)(pTVar4 + 0x28);
          local_70 = operator_new(0x20);
          *(long *)local_70 = lVar9;
          *(long *)(local_70 + 8) = lVar7;
          *(long *)(local_70 + 0x10) = lVar17;
          *(long *)(local_70 + 0x18) = lVar10;
          puVar3 = *(undefined8 **)(this + 0x28);
          if (puVar3 == *(undefined8 **)(this + 0x30)) {
            std::__ndk1::vector<ClipperLib::Join*,std::__ndk1::allocator<ClipperLib::Join*>>::
            __push_back_slow_path<ClipperLib::Join*const&>(this_00,&local_70);
          }
          else {
            *puVar3 = local_70;
            *(undefined8 **)(this + 0x28) = puVar3 + 1;
          }
          pTVar16 = *(TEdge **)(pTVar2 + 0x78);
        }
        if ((pTVar16 != (TEdge *)0x0) && (pTVar16 != pTVar4)) {
          do {
            IntersectEdges(this,pTVar4,pTVar16,(IntPoint *)(pTVar2 + 0x10),false);
            pTVar16 = *(TEdge **)(pTVar16 + 0x78);
          } while (pTVar16 != pTVar4);
        }
      }
    }
  }
  lVar9 = *(long *)(*(long *)this + -0x18);
  plVar11 = *(long **)(this + lVar9 + 8);
  if (plVar11 == (long *)0x0) goto LAB_01034780;
  goto LAB_010341ec;
}

