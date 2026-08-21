
/* cocos2d::Texture2D::~Texture2D() */

void __thiscall cocos2d::Texture2D::~Texture2D(Texture2D *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR__Texture2D_01724398;
  VolatileTextureMgr::removeTexture(this);
  if (*(Ref **)(this + 0x80) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x80));
    *(undefined8 *)(this + 0x80) = 0;
  }
  if (*(Ref **)(this + 0x48) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x48));
  }
  pvVar2 = *(void **)(this + 0x58);
  if (pvVar2 != (void *)0x0) {
    puVar1 = *(void **)((long)pvVar2 + 0x20);
    while (puVar1 != (void *)0x0) {
      pvVar3 = (void *)*puVar1;
      operator_delete(puVar1);
      puVar1 = pvVar3;
    }
    pvVar3 = *(void **)((long)pvVar2 + 0x10);
    *(undefined8 *)((long)pvVar2 + 0x10) = 0;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    operator_delete(pvVar2);
  }
  *(undefined8 *)(this + 0x58) = 0;
  if (*(uint *)(this + 0x30) != 0) {
    GL::deleteTexture(*(uint *)(this + 0x30));
  }
  if (((byte)this[0x68] & 1) != 0) {
    operator_delete(*(void **)(this + 0x78));
  }
  Ref::~Ref((Ref *)this);
  return;
}

