
/* cocos2d::ComponentContainer::onExit() */

void __thiscall cocos2d::ComponentContainer::onExit(ComponentContainer *this)

{
  long *plVar1;
  
  for (plVar1 = *(long **)(this + 0x10); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    (**(code **)(*(long *)plVar1[5] + 0x48))();
  }
  return;
}

