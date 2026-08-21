
/* cocos2d::Touch::~Touch() */

void __thiscall cocos2d::Touch::~Touch(Touch *this)

{
  Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

