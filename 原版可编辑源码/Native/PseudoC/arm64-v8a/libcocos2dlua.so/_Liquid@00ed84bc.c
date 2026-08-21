
/* cocos2d::Liquid::~Liquid() */

void __thiscall cocos2d::Liquid::~Liquid(Liquid *this)

{
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

