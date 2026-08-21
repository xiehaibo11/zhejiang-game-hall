
/* cocos2d::Acceleration::~Acceleration() */

void __thiscall cocos2d::Acceleration::~Acceleration(Acceleration *this)

{
  Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

