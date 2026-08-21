
/* cocos2d::PUEventHandler::~PUEventHandler() */

void __thiscall cocos2d::PUEventHandler::~PUEventHandler(PUEventHandler *this)

{
  *(undefined ***)this = &PTR__PUEventHandler_016f36a0;
  if (((byte)this[0x48] & 1) != 0) {
    operator_delete(*(void **)(this + 0x58));
  }
  if (((byte)this[0x30] & 1) != 0) {
    operator_delete(*(void **)(this + 0x40));
  }
  Ref::~Ref((Ref *)this);
  return;
}

