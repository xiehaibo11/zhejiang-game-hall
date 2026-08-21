
/* cocos2d::ui::ScrollViewBar::setPositionFromCorner(cocos2d::Vec2 const&) */

void __thiscall cocos2d::ui::ScrollViewBar::setPositionFromCorner(ScrollViewBar *this,Vec2 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (*(int *)(this + 800) == 1) {
    uVar2 = *(undefined4 *)(param_1 + 4);
    puVar1 = (undefined4 *)param_1;
  }
  else {
    puVar1 = (undefined4 *)(param_1 + 4);
    uVar2 = *(undefined4 *)param_1;
  }
  *(undefined4 *)(this + 0x348) = uVar2;
  *(undefined4 *)(this + 0x344) = *puVar1;
  return;
}

