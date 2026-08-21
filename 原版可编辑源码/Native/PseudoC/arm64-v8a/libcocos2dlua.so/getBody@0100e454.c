
/* cocos2d::PhysicsWorld::getBody(int) const */

long __thiscall cocos2d::PhysicsWorld::getBody(PhysicsWorld *this,int param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(this + 0x38);
  do {
    if (plVar1 == *(long **)(this + 0x40)) {
      return 0;
    }
    lVar2 = *plVar1;
    plVar1 = plVar1 + 1;
  } while (*(int *)(lVar2 + 0xbc) != param_1);
  return lVar2;
}

