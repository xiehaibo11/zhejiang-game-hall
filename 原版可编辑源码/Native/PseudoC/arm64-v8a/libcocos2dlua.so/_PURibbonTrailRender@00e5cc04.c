
/* cocos2d::PURibbonTrailRender::~PURibbonTrailRender() */

void __thiscall cocos2d::PURibbonTrailRender::~PURibbonTrailRender(PURibbonTrailRender *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &PTR__PURibbonTrailRender_016f2d18;
  *(undefined ***)(this + 0x68) = &PTR__PURibbonTrailRender_016f2d90;
  if (*(long *)(this + 0x28) != 0) {
    destroyAll(this);
  }
  if (((byte)this[0x110] & 1) != 0) {
    operator_delete(*(void **)(this + 0x120));
  }
  Vec4::~Vec4((Vec4 *)(this + 0xf4));
  Vec4::~Vec4((Vec4 *)(this + 0xe4));
  if (((byte)this[0xb0] & 1) != 0) {
    operator_delete(*(void **)(this + 0xc0));
  }
  pvVar1 = *(void **)(this + 0x88);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x90) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x70);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x78) = pvVar1;
    operator_delete(pvVar1);
  }
  PUListener::~PUListener((PUListener *)(this + 0x68));
  *(undefined ***)this = &PTR__PURender_016f2a08;
  if (((byte)this[0x50] & 1) != 0) {
    operator_delete(*(void **)(this + 0x60));
  }
  Particle3DRender::~Particle3DRender((Particle3DRender *)this);
  return;
}

