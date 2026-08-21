
/* cocos2d::Camera::setBackgroundBrush(cocos2d::CameraBackgroundBrush*) */

void __thiscall cocos2d::Camera::setBackgroundBrush(Camera *this,CameraBackgroundBrush *param_1)

{
  if (param_1 != (CameraBackgroundBrush *)0x0) {
    Ref::retain((Ref *)param_1);
  }
  if (*(Ref **)(this + 0x498) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x498));
  }
  *(CameraBackgroundBrush **)(this + 0x498) = param_1;
  return;
}

