
/* cocos2d::Physics3DComponent::setPhysics3DObject(cocos2d::Physics3DObject*) */

void __thiscall
cocos2d::Physics3DComponent::setPhysics3DObject(Physics3DComponent *this,Physics3DObject *param_1)

{
  if (param_1 != (Physics3DObject *)0x0) {
    Ref::retain((Ref *)param_1);
  }
  if (*(Ref **)(this + 0xd0) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0xd0));
  }
  *(Physics3DObject **)(this + 0xd0) = param_1;
  return;
}

