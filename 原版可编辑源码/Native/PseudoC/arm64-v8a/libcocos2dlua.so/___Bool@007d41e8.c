
/* cocos2d::__Bool::~__Bool() */

void __thiscall cocos2d::__Bool::~__Bool(__Bool *this)

{
  Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

