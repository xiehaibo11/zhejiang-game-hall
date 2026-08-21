
/* cocos2d::Animate3D::stop() */

void __thiscall cocos2d::Animate3D::stop(Animate3D *this)

{
  removeFromMap(this);
  Action::stop((Action *)this);
  return;
}

