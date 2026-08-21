
/* cocos2d::CameraBackgroundBrush::~CameraBackgroundBrush() */

void __thiscall cocos2d::CameraBackgroundBrush::~CameraBackgroundBrush(CameraBackgroundBrush *this)

{
  *(undefined ***)this = &PTR__CameraBackgroundBrush_016fb068;
  if (*(Ref **)(this + 0x28) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x28));
  }
  Ref::~Ref((Ref *)this);
  return;
}

