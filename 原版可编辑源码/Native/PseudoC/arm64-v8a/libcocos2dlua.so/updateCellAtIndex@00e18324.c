
/* cocos2d::extension::TableView::updateCellAtIndex(long) */

void __thiscall cocos2d::extension::TableView::updateCellAtIndex(TableView *this,long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  TableViewCell *pTVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  if (((param_1 == -1) ||
      (lVar2 = (**(code **)(**(long **)(this + 0x4d0) + 0x28))(*(long **)(this + 0x4d0),this),
      lVar2 == 0)) || (lVar2 <= param_1)) {
    return;
  }
  plVar4 = (long *)(*(long *)(this + 0x480) + 8);
  plVar5 = (long *)*plVar4;
  plVar6 = plVar4;
  if (plVar5 != (long *)0x0) {
    do {
      if (param_1 <= plVar5[4]) {
        plVar6 = plVar5;
      }
      plVar5 = (long *)plVar5[plVar5[4] < param_1];
    } while (plVar5 != (long *)0x0);
    if ((plVar6 != plVar4) && (plVar6[4] <= param_1)) {
      puVar7 = *(undefined8 **)(this + 0x4a8);
      puVar1 = *(undefined8 **)(this + 0x4a0);
      do {
        if (puVar1 == puVar7) goto LAB_00e183f8;
        lVar2 = TableViewCell::getIdx((TableViewCell *)*puVar1);
        pTVar3 = (TableViewCell *)*puVar1;
        puVar1 = puVar1 + 1;
      } while (lVar2 != param_1);
      if (pTVar3 != (TableViewCell *)0x0) {
        _moveCellOutOfSight(this,pTVar3);
      }
    }
  }
LAB_00e183f8:
  pTVar3 = (TableViewCell *)
           (**(code **)(**(long **)(this + 0x4d0) + 0x20))(*(long **)(this + 0x4d0),this,param_1);
  _setIndexForCell(this,param_1,pTVar3);
  _addCellIfNecessary(this,pTVar3);
  return;
}

