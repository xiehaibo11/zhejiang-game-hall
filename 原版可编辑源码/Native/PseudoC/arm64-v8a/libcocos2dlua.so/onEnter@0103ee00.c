
/* cocos2d::ComponentContainer::onEnter() */

void __thiscall cocos2d::ComponentContainer::onEnter(ComponentContainer *this)

{
  long *plVar1;
  
                    /* catch() { ... } // from try @ 0103ed20 with catch @ 0103ee00 */
  for (plVar1 = *(long **)(this + 0x10); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    (**(code **)(*(long *)plVar1[5] + 0x40))();
  }
  return;
}

