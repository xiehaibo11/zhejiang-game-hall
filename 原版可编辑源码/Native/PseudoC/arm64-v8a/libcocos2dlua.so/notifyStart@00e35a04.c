
/* cocos2d::PULineEmitter::notifyStart() */

void __thiscall cocos2d::PULineEmitter::notifyStart(PULineEmitter *this)

{
  PUEmitter::notifyStart((PUEmitter *)this);
  *(undefined4 *)(this + 0x220) = 0;
  *(undefined2 *)(this + 0x228) = 0x101;
  return;
}

