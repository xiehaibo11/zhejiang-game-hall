
/* cocos2d::Physics3DComponent::setEnabled(bool) */

void __thiscall cocos2d::Physics3DComponent::setEnabled(Physics3DComponent *this,bool param_1)

{
  Physics3DComponent PVar1;
  Physics3DObject *pPVar2;
  
  PVar1 = this[0x48];
  Component::setEnabled((Component *)this,param_1);
  pPVar2 = *(Physics3DObject **)(this + 0xd0);
  if ((pPVar2 != (Physics3DObject *)0x0) && (PVar1 != this[0x48])) {
    if (this[0x48] != (Physics3DComponent)0x0) {
      Physics3DWorld::addPhysics3DObject(*(Physics3DWorld **)(pPVar2 + 0x30),pPVar2);
      return;
    }
    Physics3DWorld::removePhysics3DObject(*(Physics3DWorld **)(pPVar2 + 0x30),pPVar2);
    return;
  }
  return;
}

