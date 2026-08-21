
/* cocos2d::PhysicsWorld::removeAllBodies() */

void __thiscall cocos2d::PhysicsWorld::removeAllBodies(PhysicsWorld *this)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0x38);
  plVar1 = *(long **)(this + 0x40);
  if (plVar3 != plVar1) {
    do {
      (**(code **)(*(long *)this + 0x98))(this,*plVar3);
      plVar2 = plVar3 + 1;
      *(undefined8 *)(*plVar3 + 0x80) = 0;
      plVar3 = plVar2;
    } while (plVar1 != plVar2);
    plVar3 = *(long **)(this + 0x38);
    plVar1 = *(long **)(this + 0x40);
    if (plVar3 != plVar1) {
      do {
        plVar2 = plVar3 + 1;
        Ref::release((Ref *)*plVar3);
        plVar3 = plVar2;
      } while (plVar1 != plVar2);
      plVar3 = *(long **)(this + 0x38);
    }
  }
  *(long **)(this + 0x40) = plVar3;
  return;
}

