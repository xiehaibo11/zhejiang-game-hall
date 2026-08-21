
/* fairygui::GLoader::~GLoader() */

void __thiscall fairygui::GLoader::~GLoader(GLoader *this)

{
  *(undefined ***)this = &PTR__GLoader_016a5dc0;
  if (*(Ref **)(this + 0x230) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x230));
  }
  if (*(Ref **)(this + 0x220) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x220));
  }
  if (*(Ref **)(this + 0x228) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x228));
  }
  if (((byte)this[0x1d8] & 1) != 0) {
    operator_delete(*(void **)(this + 0x1e8));
  }
  GObject::~GObject((GObject *)this);
  return;
}

