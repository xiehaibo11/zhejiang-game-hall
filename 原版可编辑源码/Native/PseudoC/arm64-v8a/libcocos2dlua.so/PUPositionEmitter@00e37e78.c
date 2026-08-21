
/* cocos2d::PUPositionEmitter::PUPositionEmitter() */

void __thiscall cocos2d::PUPositionEmitter::PUPositionEmitter(PUPositionEmitter *this)

{
  PUEmitter::PUEmitter((PUEmitter *)this);
  *(undefined8 *)(this + 0x200) = 0;
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined8 *)(this + 0x208) = 0;
  this[0x218] = (PUPositionEmitter)0x1;
  *(undefined ***)this = &PTR__PUPositionEmitter_016f0c18;
  *(undefined8 *)(this + 0x220) = 0;
  return;
}

