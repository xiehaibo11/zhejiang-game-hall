
/* ClipperLib::Clipper::ExecuteInternal() */

undefined4 __thiscall ClipperLib::Clipper::ExecuteInternal(Clipper *this)

{
  long *plVar1;
  Clipper *pCVar2;
  Clipper *pCVar3;
  long *plVar4;
  void *pvVar5;
  TEdge *pTVar6;
  OutRec *pOVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  __tree_node_base *p_Var12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined4 uVar17;
  longlong lVar18;
  __tree_node_base *p_Var19;
  ulong uVar20;
  longlong lVar21;
  double dVar22;
  
  (**(code **)(*(long *)this + 0x10))();
  if (*(long *)(this + *(long *)(*(long *)this + -0x18) + 8) == 0) {
    uVar17 = 0;
  }
  else {
    p_Var19 = *(__tree_node_base **)(this + 0x70);
    lVar18 = *(longlong *)(p_Var19 + 0x20);
    plVar1 = *(long **)(p_Var19 + 8);
    if (*(long **)(p_Var19 + 8) == (long *)0x0) {
      p_Var12 = p_Var19 + 0x10;
      plVar9 = *(long **)p_Var12;
      if ((__tree_node_base *)*plVar9 != p_Var19) {
        do {
          lVar13 = *(long *)p_Var12;
          p_Var12 = (__tree_node_base *)(lVar13 + 0x10);
          plVar9 = *(long **)p_Var12;
        } while (*plVar9 != lVar13);
      }
    }
    else {
      do {
        plVar9 = plVar1;
        plVar1 = (long *)*plVar9;
      } while ((long *)*plVar9 != (long *)0x0);
    }
    *(long **)(this + 0x70) = plVar9;
    *(long *)(this + 0x80) = *(long *)(this + 0x80) + -1;
    std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x78),p_Var19);
    operator_delete(p_Var19);
    pCVar2 = this + 0x90;
    do {
      InsertLocalMinimaIntoAEL(this,lVar18);
      puVar8 = *(undefined8 **)(this + 0x38);
      puVar10 = *(undefined8 **)(this + 0x40);
      if (puVar10 == puVar8) goto LAB_01033e48;
      uVar20 = 0;
      pvVar5 = (void *)*puVar8;
      while( true ) {
        if (pvVar5 != (void *)0x0) {
          operator_delete(pvVar5);
          puVar8 = *(undefined8 **)(this + 0x38);
          puVar10 = *(undefined8 **)(this + 0x40);
        }
        uVar20 = uVar20 + 1;
        if ((ulong)((long)puVar10 - (long)puVar8 >> 3) <= uVar20) break;
        pvVar5 = (void *)puVar8[uVar20];
      }
      if ((long)puVar10 - (long)puVar8 == 0) goto LAB_01033e48;
      *(undefined8 **)(this + 0x40) = puVar8;
      pTVar6 = *(TEdge **)pCVar2;
      while (pTVar6 != (TEdge *)0x0) {
        lVar13 = *(long *)(pTVar6 + 0x88);
        lVar11 = *(long *)(pTVar6 + 0x90);
        pCVar3 = pCVar2;
        if (lVar11 != 0) {
          pCVar3 = (Clipper *)(lVar11 + 0x88);
        }
        *(long *)pCVar3 = lVar13;
        if (lVar13 != 0) {
          *(long *)(lVar13 + 0x90) = lVar11;
        }
        *(undefined8 *)(pTVar6 + 0x88) = 0;
        *(undefined8 *)(pTVar6 + 0x90) = 0;
        ProcessHorizontal(this,pTVar6,false);
LAB_01033e48:
        pTVar6 = *(TEdge **)pCVar2;
      }
      if (*(long *)(this + 0x80) == 0) break;
      p_Var19 = *(__tree_node_base **)(this + 0x70);
      lVar21 = *(longlong *)(p_Var19 + 0x20);
      plVar1 = *(long **)(p_Var19 + 8);
      if (*(long **)(p_Var19 + 8) == (long *)0x0) {
        p_Var12 = p_Var19 + 0x10;
        plVar9 = *(long **)p_Var12;
        if ((__tree_node_base *)*plVar9 != p_Var19) {
          do {
            lVar13 = *(long *)p_Var12;
            p_Var12 = (__tree_node_base *)(lVar13 + 0x10);
            plVar9 = *(long **)p_Var12;
          } while (*plVar9 != lVar13);
        }
      }
      else {
        do {
          plVar9 = plVar1;
          plVar1 = (long *)*plVar9;
        } while ((long *)*plVar9 != (long *)0x0);
      }
      *(long **)(this + 0x70) = plVar9;
      *(long *)(this + 0x80) = *(long *)(this + 0x80) + -1;
      std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x78),p_Var19);
      operator_delete(p_Var19);
      uVar20 = ProcessIntersections(this,lVar18,lVar21);
      if ((uVar20 & 1) == 0) {
        uVar17 = 0;
        goto LAB_01034044;
      }
      ProcessEdgesAtTopOfScanbeam(this,lVar21);
      lVar18 = lVar21;
    } while ((*(long *)(this + 0x80) != 0) ||
            (*(long *)(this + *(long *)(*(long *)this + -0x18) + 8) != 0));
    lVar13 = *(long *)(this + 8);
    lVar11 = *(long *)(this + 0x10);
    if (lVar11 - lVar13 != 0) {
      uVar20 = 0;
      do {
        lVar15 = *(long *)(lVar13 + uVar20 * 8);
        lVar14 = *(long *)(lVar15 + 0x18);
        if ((lVar14 != 0) && (*(char *)(lVar15 + 5) == '\0')) {
          dVar22 = 0.0;
          lVar16 = lVar14;
          do {
            plVar1 = (long *)(lVar16 + 0x20);
            plVar9 = (long *)(lVar16 + 8);
            plVar4 = (long *)(lVar16 + 0x10);
            lVar16 = *(long *)(lVar16 + 0x18);
            dVar22 = dVar22 + (double)(*plVar9 + *(long *)(*plVar1 + 8)) *
                              (double)(*(long *)(*plVar1 + 0x10) - *plVar4);
          } while (lVar16 != lVar14);
          lVar16 = lVar14;
          if (0.0 < dVar22 * 0.5 == (bool)((byte)this[0xa4] ^ *(byte *)(lVar15 + 4))) {
            do {
              lVar15 = *(long *)(lVar16 + 0x18);
              *(undefined8 *)(lVar16 + 0x18) = *(undefined8 *)(lVar16 + 0x20);
              *(long *)(lVar16 + 0x20) = lVar15;
              lVar16 = lVar15;
            } while (lVar15 != lVar14);
          }
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 < (ulong)(lVar11 - lVar13 >> 3));
    }
    if (*(long *)(this + 0x20) != *(long *)(this + 0x28)) {
      JoinCommonEdges(this);
      lVar13 = *(long *)(this + 8);
      lVar11 = *(long *)(this + 0x10);
    }
    if (lVar11 != lVar13) {
      uVar20 = 0;
      do {
        pOVar7 = *(OutRec **)(lVar13 + uVar20 * 8);
        if ((*(long *)(pOVar7 + 0x18) != 0) && (pOVar7[5] == (OutRec)0x0)) {
          FixupOutPolygon(this,pOVar7);
          lVar13 = *(long *)(this + 8);
          lVar11 = *(long *)(this + 0x10);
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 < (ulong)(lVar11 - lVar13 >> 3));
    }
    if (this[0xa6] != (Clipper)0x0) {
      DoSimplePolygons(this);
    }
    uVar17 = 1;
LAB_01034044:
    puVar8 = *(undefined8 **)(this + 0x20);
    puVar10 = *(undefined8 **)(this + 0x28);
    if (puVar10 != puVar8) {
      uVar20 = 0;
      pvVar5 = (void *)*puVar8;
      while( true ) {
        if (pvVar5 != (void *)0x0) {
          operator_delete(pvVar5);
          puVar8 = *(undefined8 **)(this + 0x20);
          puVar10 = *(undefined8 **)(this + 0x28);
        }
        uVar20 = uVar20 + 1;
        if ((ulong)((long)puVar10 - (long)puVar8 >> 3) <= uVar20) break;
        pvVar5 = (void *)puVar8[uVar20];
      }
      if ((long)puVar10 - (long)puVar8 != 0) {
        *(undefined8 **)(this + 0x28) = puVar8;
      }
    }
    puVar8 = *(undefined8 **)(this + 0x38);
    puVar10 = *(undefined8 **)(this + 0x40);
    if (puVar10 != puVar8) {
      uVar20 = 0;
      pvVar5 = (void *)*puVar8;
      while( true ) {
        if (pvVar5 != (void *)0x0) {
          operator_delete(pvVar5);
          puVar8 = *(undefined8 **)(this + 0x38);
          puVar10 = *(undefined8 **)(this + 0x40);
        }
        uVar20 = uVar20 + 1;
        if ((ulong)((long)puVar10 - (long)puVar8 >> 3) <= uVar20) break;
        pvVar5 = (void *)puVar8[uVar20];
      }
      if ((long)puVar10 - (long)puVar8 != 0) {
        *(undefined8 **)(this + 0x40) = puVar8;
      }
    }
  }
  return uVar17;
}

