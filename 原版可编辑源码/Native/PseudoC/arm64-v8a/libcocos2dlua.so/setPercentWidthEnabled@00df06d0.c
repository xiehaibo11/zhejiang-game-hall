
/* cocos2d::ui::LayoutComponent::setPercentWidthEnabled(bool) */

void __thiscall
cocos2d::ui::LayoutComponent::setPercentWidthEnabled(LayoutComponent *this,bool param_1)

{
  this[0x80] = (LayoutComponent)param_1;
  if (param_1) {
    this[0x78] = (LayoutComponent)0x0;
  }
  return;
}

