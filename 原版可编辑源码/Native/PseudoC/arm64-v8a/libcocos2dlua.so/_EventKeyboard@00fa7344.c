
/* cocos2d::EventKeyboard::~EventKeyboard() */

void __thiscall cocos2d::EventKeyboard::~EventKeyboard(EventKeyboard *this)

{
  Event::~Event((Event *)this);
  operator_delete(this);
  return;
}

