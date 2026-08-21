
/* cocos2d::SkewTo::~SkewTo() */

void __thiscall cocos2d::SkewTo::~SkewTo(SkewTo *this)

{
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

