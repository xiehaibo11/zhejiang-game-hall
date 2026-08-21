
/* cocos2d::PUPositionEmitter::~PUPositionEmitter() */

void __thiscall cocos2d::PUPositionEmitter::~PUPositionEmitter(PUPositionEmitter *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x200);
  *(undefined ***)this = &PTR__PUPositionEmitter_016f0c18;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x208) = pvVar1;
    operator_delete(pvVar1);
  }
  PUEmitter::~PUEmitter((PUEmitter *)this);
  return;
}

