
/* cocos2d::ui::Widget::getPositionPercent() */

Widget * __thiscall cocos2d::ui::Widget::getPositionPercent(Widget *this)

{
  LayoutComponent *this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (this[0x380] != (Widget)0x0) {
    this_00 = (LayoutComponent *)getOrCreateLayoutComponent(this);
    uVar1 = LayoutComponent::getPositionPercentX(this_00);
    uVar2 = LayoutComponent::getPositionPercentY(this_00);
    *(undefined4 *)(this + 0x3ac) = uVar1;
    *(undefined4 *)(this + 0x3b0) = uVar2;
  }
  return this + 0x3ac;
}

