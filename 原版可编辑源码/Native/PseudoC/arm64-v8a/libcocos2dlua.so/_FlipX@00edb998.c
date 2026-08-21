
/* cocos2d::FlipX::~FlipX() */

void __thiscall cocos2d::FlipX::~FlipX(FlipX *this)

{
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

