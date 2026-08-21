
/* cocos2d::Blink::~Blink() */

void __thiscall cocos2d::Blink::~Blink(Blink *this)

{
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

