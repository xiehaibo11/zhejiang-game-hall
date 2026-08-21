
/* cocos2d::ui::LayoutComponent::setVerticalEdge(cocos2d::ui::LayoutComponent::VerticalEdge) */

void __thiscall cocos2d::ui::LayoutComponent::setVerticalEdge(LayoutComponent *this,int param_2)

{
  *(int *)(this + 0x54) = param_2;
  if (param_2 != 0) {
    this[0x70] = (LayoutComponent)0x0;
  }
  return;
}

