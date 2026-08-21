
/* cocos2d::ui::Widget::isAncestorsVisible(cocos2d::Node*) */

undefined8 __thiscall cocos2d::ui::Widget::isAncestorsVisible(Widget *this,Node *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (param_1 == (Node *)0x0) {
LAB_00daab10:
    uVar2 = 1;
  }
  else {
    do {
      param_1 = (Node *)(**(code **)(*(long *)param_1 + 0x260))(param_1);
      if (param_1 == (Node *)0x0) goto LAB_00daab10;
      uVar1 = (**(code **)(*(long *)param_1 + 0x178))();
                    /* try { // try from 00daab04 to 00eaab07 has its CatchHandler @ 00daacc8 */
    } while ((uVar1 & 1) != 0);
    uVar2 = 0;
  }
  return uVar2;
}

