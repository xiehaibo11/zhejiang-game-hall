
/* cocos2d::ui::LayoutComponent::setStretchWidthEnabled(bool) */

void __thiscall
cocos2d::ui::LayoutComponent::setStretchWidthEnabled(LayoutComponent *this,bool param_1)

{
  this[0x78] = (LayoutComponent)param_1;
  if (param_1) {
    this[0x80] = (LayoutComponent)0x0;
  }
  return;
}

