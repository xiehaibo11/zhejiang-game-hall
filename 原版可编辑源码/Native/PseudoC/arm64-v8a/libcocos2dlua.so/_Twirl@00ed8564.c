
/* cocos2d::Twirl::~Twirl() */

void __thiscall cocos2d::Twirl::~Twirl(Twirl *this)

{
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

