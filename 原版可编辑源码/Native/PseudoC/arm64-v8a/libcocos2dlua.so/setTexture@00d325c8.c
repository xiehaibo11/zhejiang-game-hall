
/* cocos2d::MotionStreak3D::setTexture(cocos2d::Texture2D*) */

void __thiscall cocos2d::MotionStreak3D::setTexture(MotionStreak3D *this,Texture2D *param_1)

{
  Ref *this_00;
  
  this_00 = *(Ref **)(this + 0x308);
  if (this_00 != (Ref *)param_1) {
    if (param_1 != (Texture2D *)0x0) {
      Ref::retain((Ref *)param_1);
      this_00 = *(Ref **)(this + 0x308);
    }
    if (this_00 != (Ref *)0x0) {
      Ref::release(this_00);
    }
    *(Texture2D **)(this + 0x308) = param_1;
  }
  return;
}

