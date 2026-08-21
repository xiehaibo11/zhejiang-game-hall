
/* cocos2d::PURender::~PURender() */

void __thiscall cocos2d::PURender::~PURender(PURender *this)

{
  *(undefined ***)this = &PTR__PURender_016f2a08;
  if (((byte)this[0x50] & 1) != 0) {
    operator_delete(*(void **)(this + 0x60));
  }
  Particle3DRender::~Particle3DRender((Particle3DRender *)this);
  return;
}

