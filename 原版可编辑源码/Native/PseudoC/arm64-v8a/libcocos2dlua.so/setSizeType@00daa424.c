
/* cocos2d::ui::Widget::setSizeType(cocos2d::ui::Widget::SizeType) */

void __thiscall cocos2d::ui::Widget::setSizeType(Widget *this,undefined4 param_2)

{
  LayoutComponent *this_00;
  
  *(undefined4 *)(this + 0x390) = param_2;
  if (this[0x380] != (Widget)0x0) {
    this_00 = (LayoutComponent *)getOrCreateLayoutComponent(this);
    LayoutComponent::setUsingPercentContentSize(this_00,*(int *)(this + 0x390) == 1);
    return;
  }
  return;
}

