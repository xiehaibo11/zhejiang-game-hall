
/* cocos2d::ResizeTo::~ResizeTo() */

void __thiscall cocos2d::ResizeTo::~ResizeTo(ResizeTo *this)

{
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

