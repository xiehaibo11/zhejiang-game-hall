
/* cocos2d::Menu::onTouchCancelled(cocos2d::Touch*, cocos2d::Event*) */

void cocos2d::Menu::onTouchCancelled(Touch *param_1,Event *param_2)

{
  Ref::retain((Ref *)param_1);
  if (*(long **)(param_1 + 0x328) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x328) + 0x540))();
  }
  *(undefined4 *)(param_1 + 800) = 0;
  Ref::release((Ref *)param_1);
  return;
}

