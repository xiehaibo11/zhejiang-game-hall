
/* cocos2d::SkewBy::~SkewBy() */

void __thiscall cocos2d::SkewBy::~SkewBy(SkewBy *this)

{
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

