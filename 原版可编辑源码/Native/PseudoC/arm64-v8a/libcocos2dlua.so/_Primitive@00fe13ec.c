
/* cocos2d::Primitive::~Primitive() */

void __thiscall cocos2d::Primitive::~Primitive(Primitive *this)

{
  *(undefined ***)this = &PTR__Primitive_01724198;
  if (*(Ref **)(this + 0x28) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x28));
    *(undefined8 *)(this + 0x28) = 0;
  }
  if (*(Ref **)(this + 0x30) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x30));
    *(undefined8 *)(this + 0x30) = 0;
  }
  Ref::~Ref((Ref *)this);
  return;
}

