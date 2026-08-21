
/* cocos2d::ui::LayoutComponent::setPositionPercentXEnabled(bool) */

void __thiscall
cocos2d::ui::LayoutComponent::setPositionPercentXEnabled(LayoutComponent *this,bool param_1)

{
  this[0x68] = (LayoutComponent)param_1;
  if (param_1) {
    *(undefined4 *)(this + 0x50) = 0;
  }
  return;
}

