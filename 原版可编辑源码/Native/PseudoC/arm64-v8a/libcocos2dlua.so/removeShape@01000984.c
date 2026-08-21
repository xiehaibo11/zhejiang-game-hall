
/* cocos2d::PhysicsBody::removeShape(int, bool) */

void __thiscall cocos2d::PhysicsBody::removeShape(PhysicsBody *this,int param_1,bool param_2)

{
  undefined8 *puVar1;
  PhysicsShape *pPVar2;
  
  puVar1 = *(undefined8 **)(this + 0x68);
  do {
    if (puVar1 == *(undefined8 **)(this + 0x70)) {
      return;
    }
    pPVar2 = (PhysicsShape *)*puVar1;
    puVar1 = puVar1 + 1;
  } while (*(int *)(pPVar2 + 0x78) != param_1);
  removeShape(this,pPVar2,param_2);
  return;
}

