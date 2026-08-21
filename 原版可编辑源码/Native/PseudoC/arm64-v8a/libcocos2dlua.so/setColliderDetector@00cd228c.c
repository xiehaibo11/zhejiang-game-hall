
/* cocostudio::DecorativeDisplay::setColliderDetector(cocostudio::ColliderDetector*) */

void __thiscall
cocostudio::DecorativeDisplay::setColliderDetector
          (DecorativeDisplay *this,ColliderDetector *param_1)

{
  Ref *this_00;
  
  this_00 = *(Ref **)(this + 0x38);
  if (this_00 != (Ref *)param_1) {
    if (param_1 != (ColliderDetector *)0x0) {
      cocos2d::Ref::retain((Ref *)param_1);
      this_00 = *(Ref **)(this + 0x38);
    }
    if (this_00 != (Ref *)0x0) {
      cocos2d::Ref::release(this_00);
    }
    *(ColliderDetector **)(this + 0x38) = param_1;
  }
  return;
}

