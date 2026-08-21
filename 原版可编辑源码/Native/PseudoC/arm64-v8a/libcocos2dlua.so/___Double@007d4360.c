
/* cocos2d::__Double::~__Double() */

void __thiscall cocos2d::__Double::~__Double(__Double *this)

{
  Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

