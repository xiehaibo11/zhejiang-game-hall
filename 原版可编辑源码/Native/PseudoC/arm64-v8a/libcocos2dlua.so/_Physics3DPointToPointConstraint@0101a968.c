
/* cocos2d::Physics3DPointToPointConstraint::~Physics3DPointToPointConstraint() */

void __thiscall
cocos2d::Physics3DPointToPointConstraint::~Physics3DPointToPointConstraint
          (Physics3DPointToPointConstraint *this)

{
  *(undefined ***)this = &PTR__Physics3DPointToPointConstraint_01726f08;
  if (*(Ref **)(this + 0x30) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x30));
  }
  if (*(Ref **)(this + 0x38) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x38));
  }
  if (*(long **)(this + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x28) + 8))();
  }
  *(undefined8 *)(this + 0x28) = 0;
  Ref::~Ref((Ref *)this);
  return;
}

