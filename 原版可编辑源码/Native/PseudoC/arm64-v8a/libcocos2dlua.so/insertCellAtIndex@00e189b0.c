
/* cocos2d::extension::TableView::insertCellAtIndex(long) */

void __thiscall cocos2d::extension::TableView::insertCellAtIndex(TableView *this,long param_1)

{
  long lVar1;
  TableViewCell *pTVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  if (((param_1 == -1) ||
      (lVar1 = (**(code **)(**(long **)(this + 0x4d0) + 0x28))(*(long **)(this + 0x4d0),this),
      lVar1 == 0)) || (lVar1 <= param_1)) {
    return;
  }
  plVar3 = (long *)(*(long *)(this + 0x480) + 8);
  plVar4 = (long *)*plVar3;
  plVar7 = plVar3;
  if (plVar4 != (long *)0x0) {
    do {
      if (param_1 <= plVar4[4]) {
        plVar7 = plVar4;
      }
      plVar4 = (long *)plVar4[plVar4[4] < param_1];
    } while (plVar4 != (long *)0x0);
    if ((plVar7 != plVar3) && (plVar7[4] <= param_1)) {
      plVar3 = *(long **)(this + 0x4a8);
      plVar7 = *(long **)(this + 0x4a0);
      do {
        if (plVar7 == plVar3) goto LAB_00e18b24;
        lVar1 = TableViewCell::getIdx((TableViewCell *)*plVar7);
        lVar6 = *plVar7;
        plVar7 = plVar7 + 1;
      } while (lVar1 != param_1);
      if (lVar6 != 0) {
        plVar4 = *(long **)(this + 0x4a0);
        plVar5 = *(long **)(this + 0x4a8);
        plVar7 = plVar5;
        plVar3 = plVar4;
        if (plVar4 != plVar5) {
          lVar1 = *plVar4;
          plVar7 = plVar4;
          while ((plVar3 = plVar7, lVar1 != lVar6 &&
                 (plVar8 = plVar7 + 1, plVar7 = plVar5, plVar3 = plVar5, plVar5 != plVar8))) {
            lVar1 = *plVar8;
            plVar7 = plVar8;
          }
        }
        lVar1 = (long)plVar3 - (long)plVar4 >> 3;
        if (plVar7 == plVar5) {
          lVar1 = -1;
        }
        for (; lVar1 < (long)plVar5 - (long)plVar4 >> 3; lVar1 = lVar1 + 1) {
          pTVar2 = (TableViewCell *)plVar4[lVar1];
                    /* try { // try from 00e18b00 to 00f18b07 has its CatchHandler @ 00e18b7c */
          lVar6 = TableViewCell::getIdx(pTVar2);
                    /* try { // try from 00e18b0c to 00f18b13 has its CatchHandler @ 00e18b6c */
          _setIndexForCell(this,lVar6 + 1,pTVar2);
          plVar5 = *(long **)(this + 0x4a8);
          plVar4 = *(long **)(this + 0x4a0);
        }
      }
    }
  }
LAB_00e18b24:
                    /* try { // try from 00e18b24 to 00f18b2f has its CatchHandler @ 00e18b58 */
                    /* try { // try from 00e18b30 to 00f18b8f has its CatchHandler @ 00e18abc */
  pTVar2 = (TableViewCell *)
           (**(code **)(**(long **)(this + 0x4d0) + 0x20))(*(long **)(this + 0x4d0),this,param_1);
  _setIndexForCell(this,param_1,pTVar2);
                    /* catch() { ... } // from try @ 00e18b24 with catch @ 00e18b58 */
  _addCellIfNecessary(this,pTVar2);
  _updateCellPositions(this);
                    /* catch() { ... } // from try @ 00e18b0c with catch @ 00e18b6c */
  _updateContentSize(this);
  return;
}

