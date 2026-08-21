
/* cocos2d::ui::TabControl::setHeaderWidth(float) */

void __thiscall cocos2d::ui::TabControl::setHeaderWidth(TabControl *this,float param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x530);
  *(int *)(this + 0x52c) = (int)param_1;
  if ((uVar1 | 2) == 2) {
    initTabHeadersPos(this,0);
    uVar1 = *(uint *)(this + 0x530);
  }
  if ((uVar1 | 2) == 3) {
    initContainers(this);
    return;
  }
  return;
}

