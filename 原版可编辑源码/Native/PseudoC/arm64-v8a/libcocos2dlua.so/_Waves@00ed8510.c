
/* cocos2d::Waves::~Waves() */

void __thiscall cocos2d::Waves::~Waves(Waves *this)

{
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

