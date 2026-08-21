
/* cocos2d::Scene::init() */

undefined8 __thiscall cocos2d::Scene::init(Scene *this)

{
  long lVar1;
  Director *this_00;
  Size *pSVar2;
  Size aSStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  this_00 = (Director *)Director::getInstance();
  pSVar2 = (Size *)Director::getWinSize(this_00);
  Size::Size(aSStack_30,pSVar2);
  (**(code **)(*(long *)this + 0x160))(this,aSStack_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

