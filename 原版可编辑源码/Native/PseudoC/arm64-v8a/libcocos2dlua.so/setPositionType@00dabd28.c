
/* cocos2d::ui::Widget::setPositionType(cocos2d::ui::Widget::PositionType) */

void __thiscall cocos2d::ui::Widget::setPositionType(Widget *this,int param_2)

{
  LayoutComponent *this_00;
  
  *(int *)(this + 0x394) = param_2;
  if (this[0x380] != (Widget)0x0) {
    this_00 = (LayoutComponent *)getOrCreateLayoutComponent(this);
    LayoutComponent::setPositionPercentXEnabled(this_00,param_2 != 0);
    LayoutComponent::setPositionPercentYEnabled(this_00,param_2 != 0);
    return;
  }
  return;
}

