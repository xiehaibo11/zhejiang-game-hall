
/* cocos2d::ui::TabControl::setHeaderHeight(float) */

void __thiscall cocos2d::ui::TabControl::setHeaderHeight(TabControl *this,float param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x530);
  *(int *)(this + 0x528) = (int)param_1;
  if ((uVar1 | 2) == 3) {
    initTabHeadersPos(this,0);
    uVar1 = *(uint *)(this + 0x530);
  }
  if ((uVar1 | 2) == 2) {
    initContainers(this);
    return;
  }
  return;
}

