
/* cocos2d::Director::setNextScene() */

void __thiscall cocos2d::Director::setNextScene(Director *this)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  
  EventDispatcher::dispatchEvent(*(EventDispatcher **)(this + 0xb0),*(Event **)(this + 0xf0));
  plVar3 = *(long **)(this + 0x158);
  if (plVar3 == (long *)0x0) {
    bVar1 = false;
    lVar2 = *(long *)(this + 0x160);
    if (lVar2 != 0) goto LAB_00f98a94;
LAB_00f98ab0:
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x338))(plVar3);
      (**(code **)(**(long **)(this + 0x158) + 0x330))();
    }
    if (this[0x168] != (Director)0x0) {
      if (*(long **)(this + 0x158) == (long *)0x0) goto LAB_00f98afc;
      (**(code **)(**(long **)(this + 0x158) + 0x340))();
    }
  }
  else {
    lVar2 = __dynamic_cast(plVar3,&Scene::typeinfo,&TransitionScene::typeinfo,0);
    bVar1 = lVar2 != 0;
    lVar2 = *(long *)(this + 0x160);
    if (lVar2 == 0) goto LAB_00f98ab0;
LAB_00f98a94:
    lVar2 = __dynamic_cast(lVar2,&Scene::typeinfo,&TransitionScene::typeinfo,0);
    if (lVar2 == 0) goto LAB_00f98ab0;
  }
  if (*(Ref **)(this + 0x158) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x158));
  }
LAB_00f98afc:
  *(Ref **)(this + 0x158) = *(Ref **)(this + 0x160);
  Ref::retain(*(Ref **)(this + 0x160));
  *(undefined8 *)(this + 0x160) = 0;
  if ((!bVar1) && (*(long **)(this + 0x158) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 0x158) + 800))();
    (**(code **)(**(long **)(this + 0x158) + 0x328))();
  }
  EventDispatcher::dispatchEvent(*(EventDispatcher **)(this + 0xb0),*(Event **)(this + 0xf8));
  return;
}

