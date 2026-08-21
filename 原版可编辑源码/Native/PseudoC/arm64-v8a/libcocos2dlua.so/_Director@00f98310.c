
/* cocos2d::Director::~Director() */

void __thiscall cocos2d::Director::~Director(Director *this)

{
  ~Director(this);
  operator_delete(this);
  return;
}

