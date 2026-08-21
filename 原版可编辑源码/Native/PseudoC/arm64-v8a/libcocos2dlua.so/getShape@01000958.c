
/* cocos2d::PhysicsBody::getShape(int) const */

long __thiscall cocos2d::PhysicsBody::getShape(PhysicsBody *this,int param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(this + 0x68);
  do {
    if (plVar1 == *(long **)(this + 0x70)) {
      return 0;
    }
    lVar2 = *plVar1;
    plVar1 = plVar1 + 1;
  } while (*(int *)(lVar2 + 0x78) != param_1);
  return lVar2;
}

