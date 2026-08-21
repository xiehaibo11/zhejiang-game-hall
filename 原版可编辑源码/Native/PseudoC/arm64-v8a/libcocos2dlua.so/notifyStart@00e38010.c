
/* cocos2d::PUPositionEmitter::notifyStart() */

void __thiscall cocos2d::PUPositionEmitter::notifyStart(PUPositionEmitter *this)

{
  PUEmitter::notifyStart((PUEmitter *)this);
  *(undefined8 *)(this + 0x220) = 0;
  return;
}

