
/* cocos2d::CallFunc::~CallFunc() */

void __thiscall cocos2d::CallFunc::~CallFunc(CallFunc *this)

{
  ~CallFunc(this);
  operator_delete(this);
  return;
}

