
void FUN_00db9d78(long param_1,undefined8 param_2,int *param_3)

{
  PageView *this;
  
  if ((*param_3 == 0xc) &&
     (this = *(PageView **)(param_1 + 8), *(long *)(this + 0x9c8) != *(long *)(this + 0x960))) {
    cocos2d::ui::PageView::pageTurningEvent(this);
    return;
  }
  return;
}

