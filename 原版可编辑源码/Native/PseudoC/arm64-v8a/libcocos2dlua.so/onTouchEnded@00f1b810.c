
/* cocos2d::Menu::onTouchEnded(cocos2d::Touch*, cocos2d::Event*) */

void cocos2d::Menu::onTouchEnded(Touch *param_1,Event *param_2)

{
  Ref::retain((Ref *)param_1);
  if (*(long **)(param_1 + 0x328) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x328) + 0x540))();
    (**(code **)(**(long **)(param_1 + 0x328) + 0x530))();
  }
  *(undefined4 *)(param_1 + 800) = 0;
  *(undefined8 *)(param_1 + 0x330) = 0;
  Ref::release((Ref *)param_1);
  return;
}

