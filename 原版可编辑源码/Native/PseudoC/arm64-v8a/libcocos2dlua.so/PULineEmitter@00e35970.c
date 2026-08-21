
/* cocos2d::PULineEmitter::PULineEmitter() */

void __thiscall cocos2d::PULineEmitter::PULineEmitter(PULineEmitter *this)

{
  undefined8 uVar1;
  
  PUEmitter::PUEmitter((PUEmitter *)this);
  *(undefined ***)this = &PTR__PUEmitter_016f0828;
  uVar1 = DEFAULT_END;
  *(undefined4 *)(this + 0x204) = DAT_01788f14;
  *(undefined8 *)(this + 0x1fc) = uVar1;
  Vec3::Vec3((Vec3 *)(this + 0x208));
  *(undefined4 *)(this + 0x224) = 0;
  *(undefined8 *)(this + 0x21c) = 0;
  *(undefined8 *)(this + 0x214) = 0;
  *(undefined2 *)(this + 0x228) = 0x101;
  Vec3::Vec3((Vec3 *)(this + 0x22c));
  *(undefined8 *)(this + 0x240) = 0;
  *(undefined8 *)(this + 0x238) = 0;
  return;
}

