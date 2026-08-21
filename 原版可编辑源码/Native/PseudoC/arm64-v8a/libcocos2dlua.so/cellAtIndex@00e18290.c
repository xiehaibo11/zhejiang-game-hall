
/* cocos2d::extension::TableView::cellAtIndex(long) */

undefined8 __thiscall cocos2d::extension::TableView::cellAtIndex(TableView *this,long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  plVar3 = (long *)(*(long *)(this + 0x480) + 8);
  plVar5 = (long *)*plVar3;
  plVar6 = plVar3;
  if (plVar5 != (long *)0x0) {
    do {
      if (param_1 <= plVar5[4]) {
        plVar6 = plVar5;
      }
      plVar5 = (long *)plVar5[plVar5[4] < param_1];
    } while (plVar5 != (long *)0x0);
    if ((plVar6 != plVar3) && (plVar6[4] <= param_1)) {
      puVar7 = *(undefined8 **)(this + 0x4a8);
      puVar1 = *(undefined8 **)(this + 0x4a0);
      while (puVar1 != puVar7) {
        lVar2 = TableViewCell::getIdx((TableViewCell *)*puVar1);
        uVar4 = *puVar1;
        puVar1 = puVar1 + 1;
        if (lVar2 == param_1) {
          return uVar4;
        }
      }
    }
  }
  return 0;
}

