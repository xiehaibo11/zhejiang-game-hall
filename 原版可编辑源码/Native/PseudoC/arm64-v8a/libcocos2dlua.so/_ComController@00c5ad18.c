
/* cocostudio::ComController::~ComController() */

void __thiscall cocostudio::ComController::~ComController(ComController *this)

{
  InputDelegate::~InputDelegate((InputDelegate *)(this + 0x50));
  cocos2d::Component::~Component((Component *)this);
  return;
}

