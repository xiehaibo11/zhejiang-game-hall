
/* cocos2d::ui::TextField::onTouchBegan(cocos2d::Touch*, cocos2d::Event*) */

uint cocos2d::ui::TextField::onTouchBegan(Touch *param_1,Event *param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = Widget::onTouchBegan(param_1,param_2);
  if (param_1[0x3b4] == (Touch)0x0) {
                    /* catch() { ... } // from try @ 00dcf618 with catch @ 00dcf5ec */
    (**(code **)(*(long *)param_1 + 0x680))(param_1);
  }
  else {
    uVar2 = Widget::isFocusEnabled((Widget *)param_1);
    if ((uVar2 & 1) != 0) {
      Widget::requestFocus((Widget *)param_1);
    }
    (**(code **)(**(long **)(param_1 + 0x4f0) + 0x610))();
  }
  return uVar1 & 1;
}

