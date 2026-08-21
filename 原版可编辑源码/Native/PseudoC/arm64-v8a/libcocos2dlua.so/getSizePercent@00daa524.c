
/* cocos2d::ui::Widget::getSizePercent() */

Widget * cocos2d::ui::Widget::getSizePercent(void)

{
  Widget *in_x0;
  LayoutComponent *this;
  undefined4 uVar1;
  undefined4 in_s1;
  
  if (in_x0[0x380] != (Widget)0x0) {
    this = (LayoutComponent *)getOrCreateLayoutComponent(in_x0);
    uVar1 = LayoutComponent::getPercentContentSize(this);
    *(undefined4 *)(in_x0 + 0x3a4) = uVar1;
    *(undefined4 *)(in_x0 + 0x3a8) = in_s1;
  }
  return in_x0 + 0x3a4;
}

