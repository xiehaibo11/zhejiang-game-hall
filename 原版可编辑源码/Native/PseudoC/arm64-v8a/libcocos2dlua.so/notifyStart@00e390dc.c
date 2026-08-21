
/* cocos2d::PUSlaveEmitter::notifyStart() */

void __thiscall cocos2d::PUSlaveEmitter::notifyStart(PUSlaveEmitter *this)

{
  PUEmitter::notifyStart((PUEmitter *)this);
  PUEmitter::setEnabled((PUEmitter *)this,false);
  return;
}

