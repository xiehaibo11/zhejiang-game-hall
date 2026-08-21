
/* cocos2d::extension::TableView::setVerticalFillOrder(cocos2d::extension::TableView::VerticalFillOrder)
    */

void __thiscall cocos2d::extension::TableView::setVerticalFillOrder(TableView *this,int param_2)

{
  if ((*(int *)(this + 0x478) != param_2) &&
     (*(int *)(this + 0x478) = param_2, *(long *)(this + 0x4a0) != *(long *)(this + 0x4a8))) {
    reloadData(this);
    return;
  }
  return;
}

