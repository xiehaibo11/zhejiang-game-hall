
/* cocos2d::PUCircleEmitter::PUCircleEmitter() */

void __thiscall cocos2d::PUCircleEmitter::PUCircleEmitter(PUCircleEmitter *this)

{
  undefined8 uVar1;
  
  PUEmitter::PUEmitter((PUEmitter *)this);
  *(undefined ***)this = &PTR__PUCircleEmitter_016f06d8;
  *(undefined8 *)(this + 0x204) = 0x3dcccccd00000000;
  *(undefined8 *)(this + 0x1fc) = 0x42c80000;
  *(undefined8 *)(this + 0x20c) = 0;
  this[0x214] = (PUCircleEmitter)0x1;
  Quaternion::Quaternion((Quaternion *)(this + 0x218));
  uVar1 = DEFAULT_NORMAL;
  *(undefined4 *)(this + 0x230) = DAT_01788eec;
  *(undefined8 *)(this + 0x228) = uVar1;
  return;
}

