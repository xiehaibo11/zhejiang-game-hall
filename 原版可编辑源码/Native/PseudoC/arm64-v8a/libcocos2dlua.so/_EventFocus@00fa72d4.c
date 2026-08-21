
/* cocos2d::EventFocus::~EventFocus() */

void __thiscall cocos2d::EventFocus::~EventFocus(EventFocus *this)

{
  Event::~Event((Event *)this);
  operator_delete(this);
  return;
}

