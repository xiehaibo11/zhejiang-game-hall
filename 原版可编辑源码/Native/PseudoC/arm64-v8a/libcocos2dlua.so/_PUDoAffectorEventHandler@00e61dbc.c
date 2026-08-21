
/* cocos2d::PUDoAffectorEventHandler::~PUDoAffectorEventHandler() */

void __thiscall
cocos2d::PUDoAffectorEventHandler::~PUDoAffectorEventHandler(PUDoAffectorEventHandler *this)

{
  *(undefined ***)this = &PTR__PUDoAffectorEventHandler_016f31a8;
  if (((byte)this[0x70] & 1) != 0) {
    operator_delete(*(void **)(this + 0x80));
  }
  PUEventHandler::~PUEventHandler((PUEventHandler *)this);
  return;
}

