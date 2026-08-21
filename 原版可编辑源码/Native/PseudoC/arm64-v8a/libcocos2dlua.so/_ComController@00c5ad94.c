
/* non-virtual thunk to cocostudio::ComController::~ComController() */

void __thiscall cocostudio::ComController::~ComController(ComController *this)

{
  InputDelegate::~InputDelegate((InputDelegate *)this);
  cocos2d::Component::~Component((Component *)(this + -0x50));
  operator_delete((Component *)(this + -0x50));
  return;
}

