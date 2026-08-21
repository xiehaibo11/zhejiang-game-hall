
/* cocos2d::TiledGrid3D::~TiledGrid3D() */

void __thiscall cocos2d::TiledGrid3D::~TiledGrid3D(TiledGrid3D *this)

{
  *(undefined ***)this = &PTR__TiledGrid3D_016fd2a0;
  if (*(void **)(this + 0x70) != (void *)0x0) {
    free(*(void **)(this + 0x70));
    *(undefined8 *)(this + 0x70) = 0;
  }
  if (*(void **)(this + 0x78) != (void *)0x0) {
    free(*(void **)(this + 0x78));
    *(undefined8 *)(this + 0x78) = 0;
  }
  if (*(void **)(this + 0x80) != (void *)0x0) {
    free(*(void **)(this + 0x80));
    *(undefined8 *)(this + 0x80) = 0;
  }
  if (*(void **)(this + 0x88) != (void *)0x0) {
    free(*(void **)(this + 0x88));
    *(undefined8 *)(this + 0x88) = 0;
  }
  *(undefined ***)this = &PTR__GridBase_016fd210;
  if (*(Ref **)(this + 0x30) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x30));
  }
  if (*(Ref **)(this + 0x40) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x40));
  }
  Ref::~Ref((Ref *)this);
  return;
}

