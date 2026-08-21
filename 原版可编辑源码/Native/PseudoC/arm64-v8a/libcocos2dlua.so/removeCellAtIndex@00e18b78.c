
/* cocos2d::extension::TableView::removeCellAtIndex(long) */

void __thiscall cocos2d::extension::TableView::removeCellAtIndex(TableView *this,long param_1)

{
  __tree_node_base *p_Var1;
  long lVar2;
  __tree_node_base *p_Var3;
  TableViewCell *pTVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  __tree_node_base *p_Var9;
  long lVar10;
  TableViewCell *pTVar11;
  long *plVar12;
  long *plVar13;
  __tree_node_base *p_Var14;
  __tree_node_base *p_Var15;
  long lVar16;
  undefined8 *puVar17;
  
                    /* catch() { ... } // from try @ 00e18b00 with catch @ 00e18b7c */
  if (((param_1 != -1) &&
      (lVar2 = (**(code **)(**(long **)(this + 0x4d0) + 0x28))(*(long **)(this + 0x4d0),this),
      lVar2 != 0)) && (param_1 < lVar2)) {
    plVar5 = (long *)(*(long *)(this + 0x480) + 8);
    plVar7 = (long *)*plVar5;
    plVar13 = plVar5;
    if (plVar7 != (long *)0x0) {
      do {
        if (param_1 <= plVar7[4]) {
          plVar13 = plVar7;
        }
        plVar7 = (long *)plVar7[plVar7[4] < param_1];
      } while (plVar7 != (long *)0x0);
      if ((plVar13 != plVar5) && (plVar13[4] <= param_1)) {
        puVar17 = *(undefined8 **)(this + 0x4a8);
        puVar6 = *(undefined8 **)(this + 0x4a0);
        do {
          if (puVar6 == puVar17) {
            return;
          }
          lVar2 = TableViewCell::getIdx((TableViewCell *)*puVar6);
          pTVar4 = (TableViewCell *)*puVar6;
          puVar6 = puVar6 + 1;
        } while (lVar2 != param_1);
        if (pTVar4 != (TableViewCell *)0x0) {
          plVar7 = *(long **)(this + 0x4a0);
          plVar8 = *(long **)(this + 0x4a8);
          plVar13 = plVar8;
          plVar5 = plVar7;
          if (plVar7 != plVar8) {
            pTVar11 = (TableViewCell *)*plVar7;
            plVar12 = plVar7;
            while ((plVar13 = plVar12, plVar5 = plVar12, pTVar11 != pTVar4 &&
                   (plVar12 = plVar12 + 1, plVar13 = plVar8, plVar5 = plVar8, plVar8 != plVar12))) {
              pTVar11 = (TableViewCell *)*plVar12;
            }
          }
          lVar2 = (long)plVar5 - (long)plVar7 >> 3;
          if (plVar13 == plVar8) {
            lVar2 = -1;
          }
          _moveCellOutOfSight(this,pTVar4);
          puVar6 = *(undefined8 **)(this + 0x480);
          p_Var9 = (__tree_node_base *)(puVar6 + 1);
          p_Var3 = *(__tree_node_base **)p_Var9;
          p_Var14 = p_Var3;
          p_Var15 = p_Var9;
          if (p_Var3 != (__tree_node_base *)0x0) {
            do {
                    /* catch() { ... } // from try @ 00e18d00 with catch @ 00e18cc8 */
              if (param_1 <= *(long *)(p_Var14 + 0x20)) {
                p_Var15 = p_Var14;
              }
              p_Var1 = p_Var14 + (ulong)(*(long *)(p_Var14 + 0x20) < param_1) * 8;
              p_Var14 = *(__tree_node_base **)p_Var1;
            } while (*(__tree_node_base **)p_Var1 != (__tree_node_base *)0x0);
            if ((p_Var15 != p_Var9) && (*(long *)(p_Var15 + 0x20) <= param_1)) {
              plVar13 = *(long **)(p_Var15 + 8);
              if (*(long **)(p_Var15 + 8) == (long *)0x0) {
                p_Var14 = p_Var15 + 0x10;
                plVar5 = *(long **)p_Var14;
                if ((__tree_node_base *)*plVar5 != p_Var15) {
                  do {
                    lVar16 = *(long *)p_Var14;
                    p_Var14 = (__tree_node_base *)(lVar16 + 0x10);
                    plVar5 = *(long **)p_Var14;
                  } while (*plVar5 != lVar16);
                }
              }
              else {
                do {
                    /* try { // try from 00e18cf8 to 00f18cff has its CatchHandler @ 00e18d50 */
                  plVar5 = plVar13;
                    /* try { // try from 00e18d00 to 00f18d6b has its CatchHandler @ 00e18cc8 */
                  plVar13 = (long *)*plVar5;
                } while ((long *)*plVar5 != (long *)0x0);
              }
              if ((__tree_node_base *)*puVar6 == p_Var15) {
                *puVar6 = plVar5;
              }
                    /* catch() { ... } // from try @ 00e18cf8 with catch @ 00e18d50 */
              puVar6[2] = puVar6[2] + -1;
              std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>(p_Var3,p_Var15);
              operator_delete(p_Var15);
            }
          }
          _updateCellPositions(this);
                    /* catch() { ... } // from try @ 00e18da4 with catch @ 00e18d6c */
          lVar16 = *(long *)(this + 0x4a8) - *(long *)(this + 0x4a0) >> 3;
          lVar10 = lVar16 + -1;
          if (lVar2 < lVar10) {
            pTVar4 = *(TableViewCell **)(*(long *)(this + 0x4a0) + lVar10 * 8);
            lVar10 = TableViewCell::getIdx(pTVar4);
                    /* try { // try from 00e18d9c to 00f18da3 has its CatchHandler @ 00e18df4 */
            _setIndexForCell(this,lVar10 + -1,pTVar4);
                    /* try { // try from 00e18da4 to 00f18e0f has its CatchHandler @ 00e18d6c */
            for (lVar16 = lVar16 + -2; lVar2 < lVar16; lVar16 = lVar16 + -1) {
              pTVar4 = *(TableViewCell **)(*(long *)(this + 0x4a0) + lVar16 * 8);
              lVar10 = TableViewCell::getIdx(pTVar4);
              _setIndexForCell(this,lVar10 + -1,pTVar4);
            }
          }
        }
      }
    }
  }
  return;
}

