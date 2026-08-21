
/* cocos2d::ui::LayoutComponent::setHorizontalEdge(cocos2d::ui::LayoutComponent::HorizontalEdge) */

void __thiscall cocos2d::ui::LayoutComponent::setHorizontalEdge(LayoutComponent *this,int param_2)

{
  *(int *)(this + 0x50) = param_2;
  if (param_2 != 0) {
    this[0x68] = (LayoutComponent)0x0;
  }
  return;
}

