
/* cocos2d::ui::LayoutComponent::setPositionPercentYEnabled(bool) */

void __thiscall
cocos2d::ui::LayoutComponent::setPositionPercentYEnabled(LayoutComponent *this,bool param_1)

{
  this[0x70] = (LayoutComponent)param_1;
  if (param_1) {
    *(undefined4 *)(this + 0x54) = 0;
  }
  return;
}

