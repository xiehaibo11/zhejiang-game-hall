
/* cocos2d::Animation3D::Curve::~Curve() */

void __thiscall cocos2d::Animation3D::Curve::~Curve(Curve *this)

{
  if (*(Ref **)this != (Ref *)0x0) {
    Ref::release(*(Ref **)this);
    *(undefined8 *)this = 0;
  }
  if (*(Ref **)(this + 8) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 8));
    *(undefined8 *)(this + 8) = 0;
  }
  if (*(Ref **)(this + 0x10) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x10));
    *(undefined8 *)(this + 0x10) = 0;
  }
  return;
}

